<?php

/**
 * Implements hook_views_query_alter()
 *
 * @param $view
 * @param $query
 */
function ems_custom_views_query_alter(&$view, &$query) {
  $view_name = $view->name;
  if ($view_name == 'webform_submissions' || $view_name == 'webform_results' || $view_name == 'webform_analysis'){
    $join = new views_join();
    $join->table = 'commerce_order';
    $join->field = 'sid';
    $join->left_table = 'webform_submissions';
    $join->left_field = 'sid';
    $join->type = 'LEFT';

    $query->add_relationship('orders', $join, 'tag-custom-ems');

    $where['conditions'][] = array(
      'field' => 'orders.sid',
      'value' => 0,
      'operator' => '!=',
    );
    $query->where[] = $where;

  }
}

/**
 * Implementation of hook_views_handlers() to register all of the basic handlers
 * views uses.
 */
function ems_custom_views_handlers() {
  return array(
    'handlers' => array(
      // The name of my handler
      'order_id_handler_field' => array(
        // The name of the handler we are extending.
        'parent' => 'views_handler_field',
      ),
    ),
  );
}

/**
 * Implements hook_views_data().
 */
function ems_custom_views_data() {
  $data = array();
  // Add Example group
  $data['ems_custom']['table']['group'] = t('EMS Custom');
  $data['ems_custom']['table']['join'] = array(
    // #global is a special flag which let's a table appear all the time.
    '#global' => array(),
  );
  // Add custom field
  $data['ems_custom']['order_id'] = array(
    'title' => t('Order ID linked to webform submission'),
    'help' => t('Show the order ID linked to the webform submission.'),
    'field' => array(
      'handler' => 'order_id_handler_field',
    ),
  );
  return $data;
}