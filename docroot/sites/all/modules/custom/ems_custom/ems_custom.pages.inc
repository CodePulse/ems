<?php

function ems_custom_resend_review_email($form, &$form_state) {
  $form['sid'] = array(
    '#type' => 'textfield',
    '#title' => t('Review - order number'),
  );

  $form['#submit'][] = 'ems_custom_review_email_submit';

  return system_settings_form($form);
}


function ems_custom_review_email_submit($form, &$form_state){
  module_load_include('inc','webform','includes/webform.submissions');
  $sid = $form_state['values']['sid'];
  $webform = webform_get_submissions(array('sid' => $sid ));

  $nid = $webform[$sid]->nid;
  $web_submission = webform_get_submission($nid, $sid);

  $node = node_load($nid);
  $output = webform_submission_render($node, $web_submission, NULL, 'html');

  $query = db_select('field_data_commerce_webform_sid', 'wsid')
    ->fields('wsid', array('entity_id'))
    ->condition('wsid.commerce_webform_sid_value', $sid)
    ->range(0,1);
  $result = $query->execute()->fetchAssoc();

  $line_item_linked_to_webform = commerce_line_item_load($result['entity_id']);

  $name = $output['attendee_set']['full_name']['#value'];

  $params = array('webform' => drupal_render($output), 'order_id' => $line_item_linked_to_webform->order_id, 'name' => $name);

  drupal_mail('ems_custom', 'order_confirmation', 'b-lamp@live.co.uk', language_default(), $params);
  drupal_mail('ems_custom', 'order_notification', 'b-lamp@live.co.uk', language_default(), $params);
}