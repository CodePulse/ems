<?php
/**
 * @file
 * ems_commerce_permissions.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ems_commerce_permissions_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access checkout'.
  $permissions['access checkout'] = array(
    'name' => 'access checkout',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'content administrator' => 'content administrator',
    ),
    'module' => 'commerce_checkout',
  );

  // Exported permission: 'administer checkout'.
  $permissions['administer checkout'] = array(
    'name' => 'administer checkout',
    'roles' => array(
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
    ),
    'module' => 'commerce_checkout',
  );

  // Exported permission: 'administer commerce discounts'.
  $permissions['administer commerce discounts'] = array(
    'name' => 'administer commerce discounts',
    'roles' => array(
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
    ),
    'module' => 'commerce_discount',
  );

  // Exported permission: 'administer commerce_coupon entities'.
  $permissions['administer commerce_coupon entities'] = array(
    'name' => 'administer commerce_coupon entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_coupon',
  );

  // Exported permission: 'administer commerce_customer_profile entities'.
  $permissions['administer commerce_customer_profile entities'] = array(
    'name' => 'administer commerce_customer_profile entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'administer commerce_order entities'.
  $permissions['administer commerce_order entities'] = array(
    'name' => 'administer commerce_order entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: 'administer commerce_product entities'.
  $permissions['administer commerce_product entities'] = array(
    'name' => 'administer commerce_product entities',
    'roles' => array(
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'administer commerce_stock settings'.
  $permissions['administer commerce_stock settings'] = array(
    'name' => 'administer commerce_stock settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_stock',
  );

  // Exported permission: 'administer coupon types'.
  $permissions['administer coupon types'] = array(
    'name' => 'administer coupon types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_coupon',
  );

  // Exported permission: 'administer customer profile types'.
  $permissions['administer customer profile types'] = array(
    'name' => 'administer customer profile types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'administer line item types'.
  $permissions['administer line item types'] = array(
    'name' => 'administer line item types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_line_item',
  );

  // Exported permission: 'administer line items'.
  $permissions['administer line items'] = array(
    'name' => 'administer line items',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_line_item',
  );

  // Exported permission: 'administer payment methods'.
  $permissions['administer payment methods'] = array(
    'name' => 'administer payment methods',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_payment',
  );

  // Exported permission: 'administer payments'.
  $permissions['administer payments'] = array(
    'name' => 'administer payments',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_payment',
  );

  // Exported permission: 'administer product types'.
  $permissions['administer product types'] = array(
    'name' => 'administer product types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'administer taxes'.
  $permissions['administer taxes'] = array(
    'name' => 'administer taxes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_tax_ui',
  );

  // Exported permission: 'alter productfield on paid webform'.
  $permissions['alter productfield on paid webform'] = array(
    'name' => 'alter productfield on paid webform',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_webform',
  );

  // Exported permission: 'configure order settings'.
  $permissions['configure order settings'] = array(
    'name' => 'configure order settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: 'configure store'.
  $permissions['configure store'] = array(
    'name' => 'configure store',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce',
  );

  // Exported permission: 'create commerce_coupon entities'.
  $permissions['create commerce_coupon entities'] = array(
    'name' => 'create commerce_coupon entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_coupon',
  );

  // Exported permission: 'create commerce_coupon entities of bundle discount_coupon'.
  $permissions['create commerce_coupon entities of bundle discount_coupon'] = array(
    'name' => 'create commerce_coupon entities of bundle discount_coupon',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_coupon',
  );

  // Exported permission: 'create commerce_customer_profile entities'.
  $permissions['create commerce_customer_profile entities'] = array(
    'name' => 'create commerce_customer_profile entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'create commerce_customer_profile entities of bundle billing'.
  $permissions['create commerce_customer_profile entities of bundle billing'] = array(
    'name' => 'create commerce_customer_profile entities of bundle billing',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'create commerce_order entities'.
  $permissions['create commerce_order entities'] = array(
    'name' => 'create commerce_order entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: 'create commerce_order entities of bundle commerce_order'.
  $permissions['create commerce_order entities of bundle commerce_order'] = array(
    'name' => 'create commerce_order entities of bundle commerce_order',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: 'create commerce_product entities'.
  $permissions['create commerce_product entities'] = array(
    'name' => 'create commerce_product entities',
    'roles' => array(
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'create commerce_product entities of bundle product'.
  $permissions['create commerce_product entities of bundle product'] = array(
    'name' => 'create commerce_product entities of bundle product',
    'roles' => array(),
    'module' => 'commerce_product',
  );

  // Exported permission: 'create payments'.
  $permissions['create payments'] = array(
    'name' => 'create payments',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_payment',
  );

  // Exported permission: 'delete payments'.
  $permissions['delete payments'] = array(
    'name' => 'delete payments',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_payment',
  );

  // Exported permission: 'edit any commerce_coupon entity'.
  $permissions['edit any commerce_coupon entity'] = array(
    'name' => 'edit any commerce_coupon entity',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_coupon',
  );

  // Exported permission: 'edit any commerce_coupon entity of bundle discount_coupon'.
  $permissions['edit any commerce_coupon entity of bundle discount_coupon'] = array(
    'name' => 'edit any commerce_coupon entity of bundle discount_coupon',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_coupon',
  );

  // Exported permission: 'edit any commerce_customer_profile entity'.
  $permissions['edit any commerce_customer_profile entity'] = array(
    'name' => 'edit any commerce_customer_profile entity',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'edit any commerce_customer_profile entity of bundle billing'.
  $permissions['edit any commerce_customer_profile entity of bundle billing'] = array(
    'name' => 'edit any commerce_customer_profile entity of bundle billing',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'edit any commerce_order entity'.
  $permissions['edit any commerce_order entity'] = array(
    'name' => 'edit any commerce_order entity',
    'roles' => array(
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: 'edit any commerce_order entity of bundle commerce_order'.
  $permissions['edit any commerce_order entity of bundle commerce_order'] = array(
    'name' => 'edit any commerce_order entity of bundle commerce_order',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: 'edit any commerce_product entity'.
  $permissions['edit any commerce_product entity'] = array(
    'name' => 'edit any commerce_product entity',
    'roles' => array(
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'edit any commerce_product entity of bundle product'.
  $permissions['edit any commerce_product entity of bundle product'] = array(
    'name' => 'edit any commerce_product entity of bundle product',
    'roles' => array(),
    'module' => 'commerce_product',
  );

  // Exported permission: 'edit own commerce_coupon entities'.
  $permissions['edit own commerce_coupon entities'] = array(
    'name' => 'edit own commerce_coupon entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_coupon',
  );

  // Exported permission: 'edit own commerce_coupon entities of bundle discount_coupon'.
  $permissions['edit own commerce_coupon entities of bundle discount_coupon'] = array(
    'name' => 'edit own commerce_coupon entities of bundle discount_coupon',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_coupon',
  );

  // Exported permission: 'edit own commerce_customer_profile entities'.
  $permissions['edit own commerce_customer_profile entities'] = array(
    'name' => 'edit own commerce_customer_profile entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'edit own commerce_customer_profile entities of bundle billing'.
  $permissions['edit own commerce_customer_profile entities of bundle billing'] = array(
    'name' => 'edit own commerce_customer_profile entities of bundle billing',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'edit own commerce_order entities'.
  $permissions['edit own commerce_order entities'] = array(
    'name' => 'edit own commerce_order entities',
    'roles' => array(
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: 'edit own commerce_order entities of bundle commerce_order'.
  $permissions['edit own commerce_order entities of bundle commerce_order'] = array(
    'name' => 'edit own commerce_order entities of bundle commerce_order',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: 'edit own commerce_product entities'.
  $permissions['edit own commerce_product entities'] = array(
    'name' => 'edit own commerce_product entities',
    'roles' => array(
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'edit own commerce_product entities of bundle product'.
  $permissions['edit own commerce_product entities of bundle product'] = array(
    'name' => 'edit own commerce_product entities of bundle product',
    'roles' => array(),
    'module' => 'commerce_product',
  );

  // Exported permission: 'make rule based changes to commerce_stock'.
  $permissions['make rule based changes to commerce_stock'] = array(
    'name' => 'make rule based changes to commerce_stock',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_stock',
  );

  // Exported permission: 'payment.global.administer'.
  $permissions['payment.global.administer'] = array(
    'name' => 'payment.global.administer',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'payment',
  );

  // Exported permission: 'payment.payment.administer'.
  $permissions['payment.payment.administer'] = array(
    'name' => 'payment.payment.administer',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'payment',
  );

  // Exported permission: 'payment.payment.delete.any'.
  $permissions['payment.payment.delete.any'] = array(
    'name' => 'payment.payment.delete.any',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'payment',
  );

  // Exported permission: 'payment.payment.delete.own'.
  $permissions['payment.payment.delete.own'] = array(
    'name' => 'payment.payment.delete.own',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'payment',
  );

  // Exported permission: 'payment.payment.update.any'.
  $permissions['payment.payment.update.any'] = array(
    'name' => 'payment.payment.update.any',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'payment',
  );

  // Exported permission: 'payment.payment.update.own'.
  $permissions['payment.payment.update.own'] = array(
    'name' => 'payment.payment.update.own',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'payment',
  );

  // Exported permission: 'payment.payment.view.any'.
  $permissions['payment.payment.view.any'] = array(
    'name' => 'payment.payment.view.any',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'payment',
  );

  // Exported permission: 'payment.payment.view.own'.
  $permissions['payment.payment.view.own'] = array(
    'name' => 'payment.payment.view.own',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'payment',
  );

  // Exported permission: 'payment.payment_method.create.PaymentMethodBasicController'.
  $permissions['payment.payment_method.create.PaymentMethodBasicController'] = array(
    'name' => 'payment.payment_method.create.PaymentMethodBasicController',
    'roles' => array(),
    'module' => 'payment',
  );

  // Exported permission: 'payment.payment_method.delete.any'.
  $permissions['payment.payment_method.delete.any'] = array(
    'name' => 'payment.payment_method.delete.any',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'payment',
  );

  // Exported permission: 'payment.payment_method.delete.own'.
  $permissions['payment.payment_method.delete.own'] = array(
    'name' => 'payment.payment_method.delete.own',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'payment',
  );

  // Exported permission: 'payment.payment_method.update.any'.
  $permissions['payment.payment_method.update.any'] = array(
    'name' => 'payment.payment_method.update.any',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'payment',
  );

  // Exported permission: 'payment.payment_method.update.own'.
  $permissions['payment.payment_method.update.own'] = array(
    'name' => 'payment.payment_method.update.own',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'payment',
  );

  // Exported permission: 'payment.payment_method.view.any'.
  $permissions['payment.payment_method.view.any'] = array(
    'name' => 'payment.payment_method.view.any',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'payment',
  );

  // Exported permission: 'payment.payment_method.view.own'.
  $permissions['payment.payment_method.view.own'] = array(
    'name' => 'payment.payment_method.view.own',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'payment',
  );

  // Exported permission: 'payment.payment_status.view'.
  $permissions['payment.payment_status.view'] = array(
    'name' => 'payment.payment_status.view',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'payment',
  );

  // Exported permission: 'payment.rules.administer'.
  $permissions['payment.rules.administer'] = array(
    'name' => 'payment.rules.administer',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'payment',
  );

  // Exported permission: 'payment_commerce.administer'.
  $permissions['payment_commerce.administer'] = array(
    'name' => 'payment_commerce.administer',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'payment_commerce',
  );

  // Exported permission: 'redeem any coupon'.
  $permissions['redeem any coupon'] = array(
    'name' => 'redeem any coupon',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'commerce_coupon',
  );

  // Exported permission: 'redeem coupons of type discount_coupon'.
  $permissions['redeem coupons of type discount_coupon'] = array(
    'name' => 'redeem coupons of type discount_coupon',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'commerce_coupon',
  );

  // Exported permission: 'update payments'.
  $permissions['update payments'] = array(
    'name' => 'update payments',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_payment',
  );

  // Exported permission: 'view any commerce_coupon entity'.
  $permissions['view any commerce_coupon entity'] = array(
    'name' => 'view any commerce_coupon entity',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'commerce_coupon',
  );

  // Exported permission: 'view any commerce_coupon entity of bundle discount_coupon'.
  $permissions['view any commerce_coupon entity of bundle discount_coupon'] = array(
    'name' => 'view any commerce_coupon entity of bundle discount_coupon',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'commerce_coupon',
  );

  // Exported permission: 'view any commerce_customer_profile entity'.
  $permissions['view any commerce_customer_profile entity'] = array(
    'name' => 'view any commerce_customer_profile entity',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'view any commerce_customer_profile entity of bundle billing'.
  $permissions['view any commerce_customer_profile entity of bundle billing'] = array(
    'name' => 'view any commerce_customer_profile entity of bundle billing',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'view any commerce_order entity'.
  $permissions['view any commerce_order entity'] = array(
    'name' => 'view any commerce_order entity',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: 'view any commerce_order entity of bundle commerce_order'.
  $permissions['view any commerce_order entity of bundle commerce_order'] = array(
    'name' => 'view any commerce_order entity of bundle commerce_order',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: 'view any commerce_product entity'.
  $permissions['view any commerce_product entity'] = array(
    'name' => 'view any commerce_product entity',
    'roles' => array(
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'view any commerce_product entity of bundle product'.
  $permissions['view any commerce_product entity of bundle product'] = array(
    'name' => 'view any commerce_product entity of bundle product',
    'roles' => array(),
    'module' => 'commerce_product',
  );

  // Exported permission: 'view own commerce_coupon entities'.
  $permissions['view own commerce_coupon entities'] = array(
    'name' => 'view own commerce_coupon entities',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'commerce_coupon',
  );

  // Exported permission: 'view own commerce_coupon entities of bundle discount_coupon'.
  $permissions['view own commerce_coupon entities of bundle discount_coupon'] = array(
    'name' => 'view own commerce_coupon entities of bundle discount_coupon',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'commerce_coupon',
  );

  // Exported permission: 'view own commerce_customer_profile entities'.
  $permissions['view own commerce_customer_profile entities'] = array(
    'name' => 'view own commerce_customer_profile entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'view own commerce_customer_profile entities of bundle billing'.
  $permissions['view own commerce_customer_profile entities of bundle billing'] = array(
    'name' => 'view own commerce_customer_profile entities of bundle billing',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'view own commerce_order entities'.
  $permissions['view own commerce_order entities'] = array(
    'name' => 'view own commerce_order entities',
    'roles' => array(
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: 'view own commerce_order entities of bundle commerce_order'.
  $permissions['view own commerce_order entities of bundle commerce_order'] = array(
    'name' => 'view own commerce_order entities of bundle commerce_order',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: 'view own commerce_product entities'.
  $permissions['view own commerce_product entities'] = array(
    'name' => 'view own commerce_product entities',
    'roles' => array(
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'view own commerce_product entities of bundle product'.
  $permissions['view own commerce_product entities of bundle product'] = array(
    'name' => 'view own commerce_product entities of bundle product',
    'roles' => array(),
    'module' => 'commerce_product',
  );

  // Exported permission: 'view payments'.
  $permissions['view payments'] = array(
    'name' => 'view payments',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_payment',
  );

  return $permissions;
}
