<?php
/**
 * @file
 * openlocal_contact.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function openlocal_contact_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function openlocal_contact_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function openlocal_contact_node_info() {
  $items = array(
    'ol_newsletter' => array(
      'name' => t('Newsletter'),
      'base' => 'node_content',
      'description' => t('A simple newsletter to send to a limited group. This is not intended as a replacement for Mailchimp.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
