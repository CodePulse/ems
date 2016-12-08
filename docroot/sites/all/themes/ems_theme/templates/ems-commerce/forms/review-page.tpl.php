<?php print drupal_render($form['form_build_id']) ?>
<?php print drupal_render($form['form_id']) ?>
<?php print drupal_render($form['form_token']) ?>

<div class="checkout-help">
  Review your order
</div>

<div class="cart_contents form-wrapper">
  <h6>
    <?php print $form['checkout_review']['review']['#data']['cart_contents']['title']; ?>
  </h6>
  <?php print $form['checkout_review']['review']['#data']['cart_contents']['data']; ?>
</div>

<div class="cart_contents form-wrapper">
  <h6><?php print $form['checkout_review']['review']['#data']['account']['title']; ?></h6>
  <?php print $form['checkout_review']['review']['#data']['account']['data']; ?>
</div>
<div class="cart_contents form-wrapper">
 <h6> <?php print $form['checkout_review']['review']['#data']['customer_profile_billing']['title']; ?></h6>
  <?php print $form['checkout_review']['review']['#data']['customer_profile_billing']['data']; ?>
</div>
<?php print drupal_render($form['commerce_payment']) ?>
<?php print drupal_render($form['buttons']) ?>
