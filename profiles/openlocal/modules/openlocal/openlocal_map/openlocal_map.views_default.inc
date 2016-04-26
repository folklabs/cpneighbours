<?php
/**
 * @file
 * openlocal_map.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function openlocal_map_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'ol_map';
  $view->description = 'Community map.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'OL Map';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Map';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'leaflet';
  $handler->display->display_options['style_options']['data_source'] = 'field_ol_geolocation';
  $handler->display->display_options['style_options']['name_field'] = 'title';
  $handler->display->display_options['style_options']['description_field'] = 'title';
  $handler->display->display_options['style_options']['map'] = 'OSM Mapnik';
  $handler->display->display_options['style_options']['height'] = '600';
  $handler->display->display_options['style_options']['zoom']['initialZoom'] = '-1';
  $handler->display->display_options['style_options']['zoom']['minZoom'] = '0';
  $handler->display->display_options['style_options']['zoom']['maxZoom'] = '18';
  $handler->display->display_options['style_options']['vector_display']['stroke'] = 0;
  $handler->display->display_options['style_options']['vector_display']['fill'] = 0;
  $handler->display->display_options['style_options']['vector_display']['clickable'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Geolocation */
  $handler->display->display_options['fields']['field_ol_geolocation']['id'] = 'field_ol_geolocation';
  $handler->display->display_options['fields']['field_ol_geolocation']['table'] = 'field_data_field_ol_geolocation';
  $handler->display->display_options['fields']['field_ol_geolocation']['field'] = 'field_ol_geolocation';
  $handler->display->display_options['fields']['field_ol_geolocation']['label'] = '';
  $handler->display->display_options['fields']['field_ol_geolocation']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ol_geolocation']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_ol_geolocation']['settings'] = array(
    'data' => 'full',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Categories (field_featured_categories) */
  $handler->display->display_options['filters']['field_featured_categories_tid']['id'] = 'field_featured_categories_tid';
  $handler->display->display_options['filters']['field_featured_categories_tid']['table'] = 'field_data_field_featured_categories';
  $handler->display->display_options['filters']['field_featured_categories_tid']['field'] = 'field_featured_categories_tid';
  $handler->display->display_options['filters']['field_featured_categories_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_featured_categories_tid']['expose']['operator_id'] = 'field_featured_categories_tid_op';
  $handler->display->display_options['filters']['field_featured_categories_tid']['expose']['label'] = 'Categories';
  $handler->display->display_options['filters']['field_featured_categories_tid']['expose']['operator'] = 'field_featured_categories_tid_op';
  $handler->display->display_options['filters']['field_featured_categories_tid']['expose']['identifier'] = 'field_featured_categories_tid';
  $handler->display->display_options['filters']['field_featured_categories_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    6 => 0,
    5 => 0,
    8 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['field_featured_categories_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_featured_categories_tid']['vocabulary'] = 'panopoly_categories';
  /* Filter criterion: Content: Available facilities (field_ol_location_properties) */
  $handler->display->display_options['filters']['field_ol_location_properties_tid']['id'] = 'field_ol_location_properties_tid';
  $handler->display->display_options['filters']['field_ol_location_properties_tid']['table'] = 'field_data_field_ol_location_properties';
  $handler->display->display_options['filters']['field_ol_location_properties_tid']['field'] = 'field_ol_location_properties_tid';
  $handler->display->display_options['filters']['field_ol_location_properties_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_ol_location_properties_tid']['expose']['operator_id'] = 'field_ol_location_properties_tid_op';
  $handler->display->display_options['filters']['field_ol_location_properties_tid']['expose']['label'] = 'Location facilities';
  $handler->display->display_options['filters']['field_ol_location_properties_tid']['expose']['operator'] = 'field_ol_location_properties_tid_op';
  $handler->display->display_options['filters']['field_ol_location_properties_tid']['expose']['identifier'] = 'field_ol_location_properties_tid';
  $handler->display->display_options['filters']['field_ol_location_properties_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    8 => 0,
    7 => 0,
    5 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_ol_location_properties_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_ol_location_properties_tid']['vocabulary'] = 'ol_location_properties';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'map';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Map';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $export['ol_map'] = $view;

  return $export;
}
