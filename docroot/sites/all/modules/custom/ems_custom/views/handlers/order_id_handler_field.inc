<?php

/**
 * @file
 * Definition of example_handler_custom_field
 */

/**
 * Provides a custom views field.
 */
class order_id_handler_field extends views_handler_field {
  function option_definition() {
    $options = parent::option_definition();
    return $options;
  }

  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);
  }

  function query() {
// do nothing -- to override the parent query.
  }

  function render($data) {
    $sid = $data->sid;
    $query = db_select('commerce_order', 'co')
      ->fields('co', array('order_id', 'sid'))
      ->condition('co.sid', $sid);

    $result = $query->execute()->fetchAssoc();
    $order_id = $result['order_id'];

    $link = l($order_id, "/admin/commerce/orders/$order_id");

    return $link;

// If the devel module is enabled, you may view all of the
// data provided by fields previously added in your view.
// dpm($data);
// Insert PHP code here, or display greeting.
//    $output = t("Hello World!");
//    return $output;
  }
}