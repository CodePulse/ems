<?php

/**
 * @file
 * Template overrides as well as (pre-)process and alter hooks for the
 * EMS Theme theme.
 */
function ems_theme_webform_element($variables) {
  $element = $variables['element'];

  // Generate description for above or below the field.
  $above = !empty($element['#webform_component']['extra']['description_above']);
  $description = array(
    FALSE => '',
    TRUE => !empty($element['#description']) ? ' <span class="description">' . $element['#description'] . "</span>\n" : '',
  );

  $output = '<div ' . drupal_attributes($element['#wrapper_attributes']) . '>' . "\n";
  $output .= theme('form_element_label', $variables);
  $output .= '<span class="description-input">';
  $output .= $element['#children'];
  $output .= $description[!$above];
  $output .= '</span>';
  $output .= "</div>\n";

  return $output;
}
