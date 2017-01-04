<?php

/**
 * Implements hook_views_query_alter()
 *
 * @param $view
 * @param $query
 */
function ems_custom_views_query_alter(&$view, &$query) {
  $view_name = $view->name;
  if ($view_name == 'webform_submissions'){
    $join = new views_join();
    $join->table = 'commerce_order';
    $join->field = 'sid';
    $join->left_table = 'webform_submissions';
    $join->left_field = 'sid';
    $join->type = 'LEFT';

    $query->add_relationship('orders', $join);

    $where['conditions'][] = array(
      'field' => 'orders.sid',
      'value' => 0,
      'operator' => '!=',
    );
    $query->where[] = $where;

  }
}