<?php
/**
 * @file
 * openlocal_export.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function openlocal_export_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'openlocal_google_business_export';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'OpenLocal Google Business export';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    5 => '5',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_ol_locations_ref_target_id']['id'] = 'field_ol_locations_ref_target_id';
  $handler->display->display_options['relationships']['field_ol_locations_ref_target_id']['table'] = 'field_data_field_ol_locations_ref';
  $handler->display->display_options['relationships']['field_ol_locations_ref_target_id']['field'] = 'field_ol_locations_ref_target_id';
  $handler->display->display_options['relationships']['field_ol_locations_ref_target_id']['label'] = 'field_ol_locations_ref';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Field: Address - Thoroughfare (i.e. Street address) */
  $handler->display->display_options['fields']['field_ol_address_thoroughfare']['id'] = 'field_ol_address_thoroughfare';
  $handler->display->display_options['fields']['field_ol_address_thoroughfare']['table'] = 'field_data_field_ol_address';
  $handler->display->display_options['fields']['field_ol_address_thoroughfare']['field'] = 'field_ol_address_thoroughfare';
  $handler->display->display_options['fields']['field_ol_address_thoroughfare']['relationship'] = 'field_ol_locations_ref_target_id';
  $handler->display->display_options['fields']['field_ol_address_thoroughfare']['label'] = 'Address Line 1';
  $handler->display->display_options['fields']['field_ol_address_thoroughfare']['element_label_colon'] = FALSE;
  /* Field: Field: Address - Postal code */
  $handler->display->display_options['fields']['field_ol_address_postal_code']['id'] = 'field_ol_address_postal_code';
  $handler->display->display_options['fields']['field_ol_address_postal_code']['table'] = 'field_data_field_ol_address';
  $handler->display->display_options['fields']['field_ol_address_postal_code']['field'] = 'field_ol_address_postal_code';
  $handler->display->display_options['fields']['field_ol_address_postal_code']['relationship'] = 'field_ol_locations_ref_target_id';
  $handler->display->display_options['fields']['field_ol_address_postal_code']['label'] = 'Postcode';
  $handler->display->display_options['fields']['field_ol_address_postal_code']['element_label_colon'] = FALSE;
  /* Field: Field: Address - Locality (i.e. City) */
  $handler->display->display_options['fields']['field_ol_address_locality']['id'] = 'field_ol_address_locality';
  $handler->display->display_options['fields']['field_ol_address_locality']['table'] = 'field_data_field_ol_address';
  $handler->display->display_options['fields']['field_ol_address_locality']['field'] = 'field_ol_address_locality';
  $handler->display->display_options['fields']['field_ol_address_locality']['relationship'] = 'field_ol_locations_ref_target_id';
  $handler->display->display_options['fields']['field_ol_address_locality']['label'] = 'City';
  $handler->display->display_options['fields']['field_ol_address_locality']['element_label_colon'] = FALSE;
  /* Field: Field: Address - Administrative area (i.e. State / Province) */
  $handler->display->display_options['fields']['field_ol_address_administrative_area']['id'] = 'field_ol_address_administrative_area';
  $handler->display->display_options['fields']['field_ol_address_administrative_area']['table'] = 'field_data_field_ol_address';
  $handler->display->display_options['fields']['field_ol_address_administrative_area']['field'] = 'field_ol_address_administrative_area';
  $handler->display->display_options['fields']['field_ol_address_administrative_area']['relationship'] = 'field_ol_locations_ref_target_id';
  $handler->display->display_options['fields']['field_ol_address_administrative_area']['label'] = 'County';
  $handler->display->display_options['fields']['field_ol_address_administrative_area']['element_label_colon'] = FALSE;
  /* Field: Field: Address - Country */
  $handler->display->display_options['fields']['field_ol_address_country']['id'] = 'field_ol_address_country';
  $handler->display->display_options['fields']['field_ol_address_country']['table'] = 'field_data_field_ol_address';
  $handler->display->display_options['fields']['field_ol_address_country']['field'] = 'field_ol_address_country';
  $handler->display->display_options['fields']['field_ol_address_country']['relationship'] = 'field_ol_locations_ref_target_id';
  $handler->display->display_options['fields']['field_ol_address_country']['label'] = 'Country';
  $handler->display->display_options['fields']['field_ol_address_country']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ol_address_country']['display_name'] = 1;
  /* Field: Content: Telephone */
  $handler->display->display_options['fields']['field_ol_telephone']['id'] = 'field_ol_telephone';
  $handler->display->display_options['fields']['field_ol_telephone']['table'] = 'field_data_field_ol_telephone';
  $handler->display->display_options['fields']['field_ol_telephone']['field'] = 'field_ol_telephone';
  $handler->display->display_options['fields']['field_ol_telephone']['relationship'] = 'field_ol_locations_ref_target_id';
  $handler->display->display_options['fields']['field_ol_telephone']['label'] = 'Main Phone';
  $handler->display->display_options['fields']['field_ol_telephone']['element_label_colon'] = FALSE;
  /* Field: Content: Content UUID */
  $handler->display->display_options['fields']['uuid']['id'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['table'] = 'node';
  $handler->display->display_options['fields']['uuid']['field'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['label'] = 'Shop Code';
  $handler->display->display_options['fields']['uuid']['element_label_colon'] = FALSE;
  /* Field: Content: Categories */
  $handler->display->display_options['fields']['field_featured_categories']['id'] = 'field_featured_categories';
  $handler->display->display_options['fields']['field_featured_categories']['table'] = 'field_data_field_featured_categories';
  $handler->display->display_options['fields']['field_featured_categories']['field'] = 'field_featured_categories';
  $handler->display->display_options['fields']['field_featured_categories']['label'] = 'Primary Category';
  $handler->display->display_options['fields']['field_featured_categories']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_categories']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_featured_categories']['delta_offset'] = '0';
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_ol_email']['id'] = 'field_ol_email';
  $handler->display->display_options['fields']['field_ol_email']['table'] = 'field_data_field_ol_email';
  $handler->display->display_options['fields']['field_ol_email']['field'] = 'field_ol_email';
  $handler->display->display_options['fields']['field_ol_email']['element_label_colon'] = FALSE;
  /* Field: Content: Website */
  $handler->display->display_options['fields']['field_ol_link']['id'] = 'field_ol_link';
  $handler->display->display_options['fields']['field_ol_link']['table'] = 'field_data_field_ol_link';
  $handler->display->display_options['fields']['field_ol_link']['field'] = 'field_ol_link';
  $handler->display->display_options['fields']['field_ol_link']['label'] = 'Home Page';
  $handler->display->display_options['fields']['field_ol_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ol_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_ol_link']['type'] = 'link_plain';
  /* Field: Content: Details */
  $handler->display->display_options['fields']['field_ol_details']['id'] = 'field_ol_details';
  $handler->display->display_options['fields']['field_ol_details']['table'] = 'field_data_field_ol_details';
  $handler->display->display_options['fields']['field_ol_details']['field'] = 'field_ol_details';
  $handler->display->display_options['fields']['field_ol_details']['label'] = 'Description';
  $handler->display->display_options['fields']['field_ol_details']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ol_organisation' => 'ol_organisation',
  );

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'google_my_business_.csv_%timestamp-full.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 1;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['path'] = 'exports/my-businesses';
  $export['openlocal_google_business_export'] = $view;

  return $export;
}
