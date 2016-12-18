<?php
/**
 * @file
 * ems_commerce_rules.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function ems_commerce_rules_default_rules_configuration() {
  $items = array();
  $items['rules_change_order_status_to_complete_ems_custom_'] = entity_import('rules_config', '{ "rules_change_order_status_to_complete_ems_custom_" : {
      "LABEL" : "Change order status to \\u0027Complete\\u0027 (EMS Custom)",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "commerce_order", "commerce_payment" ],
      "ON" : { "commerce_payment_order_paid_in_full" : [] },
      "IF" : [
        { "data_is" : {
            "data" : [ "commerce-payment-transaction:payment-method" ],
            "value" : "payment_commerce_2"
          }
        }
      ],
      "DO" : [
        { "commerce_order_update_status" : { "commerce_order" : [ "commerce_order" ], "order_status" : "pending" } }
      ]
    }
  }');
  $items['rules_mark_commerce_webform_as_paid'] = entity_import('rules_config', '{ "rules_mark_commerce_webform_as_paid" : {
      "LABEL" : "Mark commerce webform as paid",
      "PLUGIN" : "reaction rule",
      "WEIGHT" : "5",
      "OWNER" : "rules",
      "TAGS" : [ "commerce_webform" ],
      "REQUIRES" : [ "rules", "commerce_webform", "commerce_payment" ],
      "ON" : { "commerce_payment_order_paid_in_full" : [] },
      "IF" : [
        { "data_is" : {
            "data" : [ "commerce-payment-transaction:payment-method" ],
            "value" : "paypal_wps"
          }
        }
      ],
      "DO" : [ { "commerce_webform_mark_paid" : { "node" : [ "commerce-order" ] } } ]
    }
  }');
  $items['rules_mark_webform_submission_as_paid_ems_custom_'] = entity_import('rules_config', '{ "rules_mark_webform_submission_as_paid_ems_custom_" : {
      "LABEL" : "Mark webform submission as paid (EMS Custom)",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "commerce_webform", "entity" ],
      "ON" : { "commerce_order_update" : [] },
      "IF" : [
        { "data_is" : { "data" : [ "commerce-order:status" ], "value" : "completed" } }
      ],
      "DO" : [ { "commerce_webform_mark_paid" : { "node" : [ "commerce-order" ] } } ]
    }
  }');
  return $items;
}
