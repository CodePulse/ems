<?php

/**
 * Implements hook_rules_action_info().
 */
function commerce_vat_proportional_rules_action_info() {
  $items['commerce_vat_proportional_apply'] = array(
    'label' => t('Add proportional VAT to a line item'),
    'group' => t('Commerce VAT'),
    'parameter' => array(
      'commerce_line_item' => array(
        'label' => t('Line item'),
        'type' => 'commerce_line_item',
        'wrapped' => TRUE,
      ),
    ),
  );

  return $items;
}
