<?php
/**
 * @file
 * ems_commerce_views.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ems_commerce_views_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'unlink_defaults';
  $strongarm->value = array(
    'views_view' => array(
      0 => 'comments_recent',
      1 => 'commerce_cart_block',
      2 => 'commerce_cart_form',
      3 => 'commerce_cart_summary',
      4 => 'commerce_customer_profiles',
      5 => 'commerce_discount_overview',
      6 => 'commerce_line_item_table',
      8 => 'commerce_orders',
      7 => 'commerce_order_revisions',
      9 => 'commerce_payment_order',
      11 => 'commerce_products',
      10 => 'commerce_product_revisions',
      12 => 'commerce_user_orders',
      13 => 'coupons',
      14 => 'order_coupon_list',
      16 => 'payments',
      15 => 'payment_methods',
    ),
  );
  $export['unlink_defaults'] = $strongarm;

  return $export;
}
