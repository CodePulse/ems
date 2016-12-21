(function ($) {

    /**
     * The recommended way for producing HTML markup through JavaScript is to write
     * theming functions. These are similiar to the theming functions that you might
     * know from 'phptemplate' (the default PHP templating engine used by most
     * Drupal themes including Omega). JavaScript theme functions accept arguments
     * and can be overriden by sub-themes.
     *
     * In most cases, there is no good reason to NOT wrap your markup producing
     * JavaScript in a theme function.
     */
    Drupal.theme.prototype.emsThemeExampleButton = function (path, title) {
        // Create an anchor element with jQuery.
        return $('<a href="' + path + '" title="' + title + '">' + title + '</a>');
    };

    /**
     * Behaviors are Drupal's way of applying JavaScript to a page. In short, the
     * advantage of Behaviors over a simple 'document.ready()' lies in how it
     * interacts with content loaded through Ajax. Opposed to the
     * 'document.ready()' event which is only fired once when the page is
     * initially loaded, behaviors get re-executed whenever something is added to
     * the page through Ajax.
     *
     * You can attach as many behaviors as you wish. In fact, instead of overloading
     * a single behavior with multiple, completely unrelated tasks you should create
     * a separate behavior for every separate task.
     *
     * In most cases, there is no good reason to NOT wrap your JavaScript code in a
     * behavior.
     *
     * @param context
     *   The context for which the behavior is being executed. This is either the
     *   full page or a piece of HTML that was just added through Ajax.
     * @param settings
     *   An array of settings (added through drupal_add_js()). Instead of accessing
     *   Drupal.settings directly you should use this because of potential
     *   modifications made by the Ajax callback that also produced 'context'.
     */
    Drupal.behaviors.emsThemeExampleBehavior = {
        attach: function (context, settings) {
            // By using the 'context' variable we make sure that our code only runs on
            // the relevant HTML. Furthermore, by using jQuery.once() we make sure that
            // we don't run the same piece of code for an HTML snippet that we already
            // processed previously. By using .once('foo') all processed elements will
            // get tagged with a 'foo-processed' class, causing all future invocations
            // of this behavior to ignore them.
            $('.some-selector', context).once('foo', function () {
                // Now, we are invoking the previously declared theme function using two
                // settings as arguments.
                var $anchor = Drupal.theme('emsThemeExampleButton', settings.myExampleLinkPath, settings.myExampleLinkTitle);

                // The anchor is then appended to the current element.
                $anchor.appendTo(this);
            });
        }
    };


    Drupal.behaviors.conditions = {
        attach: function (context, settings) {
            $('#edit-submitted-attendee-set-organisation-type', context).change(function () {
                $('.webform-component--conference-set--wednesday-track-choices', context).hide();
                $('.webform-component--conference-set--thursday-track-choices', context).hide();
            });

            $('#edit-submitted-conference-set-will-you-be-attending-the-main-conference-1').click(function () {
                if ($(this).is(':checked')) {
                    $('#edit-submitted-conference-set-academic-pricing-0-22').attr('checked', false);
                    $('#edit-submitted-conference-set-academic-pricing-0-23').attr('checked', false);
                    $('#edit-submitted-conference-set-academic-pricing-0-5').attr('checked', false);

                    $('#edit-submitted-conference-set-full-conference-0-2').attr('checked', false);
                    $('#edit-submitted-conference-set-full-conference-0-3').attr('checked', false);
                    $('#edit-submitted-conference-set-full-conference-0-4').attr('checked', false);
                }
            });

            $('#edit-submitted-conference-set-will-you-be-attending-the-main-conference-2').click(function () {
                if ($(this).is(':checked')) {
                    $('.webform-component--conference-set--wednesday-track-choices', context).hide();
                    $('.webform-component--conference-set--thursday-track-choices', context).hide();

                    $('#edit-submitted-conference-set-academic-pricing-0-22').attr('checked', false);
                    $('#edit-submitted-conference-set-academic-pricing-0-23').attr('checked', false);
                    $('#edit-submitted-conference-set-academic-pricing-0-5').attr('checked', false);

                    $('#edit-submitted-conference-set-full-conference-0-2').attr('checked', false);
                    $('#edit-submitted-conference-set-full-conference-0-3').attr('checked', false);
                    $('#edit-submitted-conference-set-full-conference-0-4').attr('checked', false);
                }
            });

            $('.webform-component--conference-set--networking-sessions .description').prependTo('#edit-submitted-conference-set-networking-sessions');
            $('.webform-component--conference-set--academic-pricing .description').prependTo('#edit-submitted-conference-set-academic-pricing-0');
            $('.webform-component--conference-set--academic-workshops .description').prependTo('#edit-submitted-conference-set-academic-workshops-0');
            $('.webform-component--conference-set--industrial-workshops .description').prependTo('#edit-submitted-conference-set-industrial-workshops-0');
            $('.webform-component--conference-set--academic-workshops-am .description').prependTo('#edit-submitted-conference-set-academic-workshops-am-0');
            $('.webform-component--conference-set--academic-workshops-pm .description').prependTo('#edit-submitted-conference-set-academic-workshops-pm-0');
            $('.webform-component--conference-set--industrial-workshops-am .description').prependTo('#edit-submitted-conference-set-industrial-workshops-am-0');
            $('.webform-component--conference-set--industrial-workshops-pm .description').prependTo('#edit-submitted-conference-set-industrial-workshops-pm-0');

            $(document).ready(function(){
                $('button.back-to-form').click(function(){
                    parent.history.back();
                    return false;
                });
            });
        }
    }

})(jQuery);
