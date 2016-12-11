<?php
/**
 * @file
 * commerce_vat_proportional_order_discount.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function commerce_vat_proportional_order_discount_default_rules_configuration() {
  $items = array();
  $items['rules_commerce_vat_proportional_order_discount'] = entity_import('rules_config', '{ "rules_commerce_vat_proportional_order_discount" : {
      "LABEL" : "Add proportional VAT\\u00a0to fixed amount discount",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "commerce_vat_proportional", "commerce_discount" ],
      "ON" : { "commerce_discount_line_item" : [] },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "commerce-line-item" ],
            "type" : "commerce_line_item",
            "bundle" : { "value" : { "commerce_discount" : "commerce_discount" } }
          }
        }
      ],
      "DO" : [
        { "commerce_vat_proportional_apply" : { "commerce_line_item" : [ "commerce_line_item" ] } }
      ]
    }
  }');
  return $items;
}
