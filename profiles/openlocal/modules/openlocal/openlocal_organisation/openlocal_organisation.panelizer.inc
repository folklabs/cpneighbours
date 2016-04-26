<?php
/**
 * @file
 * openlocal_organisation.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function openlocal_organisation_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:ol_organisation:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'ol_organisation';
  $panelizer->no_blocks = TRUE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'ipe';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array(
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Directory',
    'panels_breadcrumbs_paths' => 'directory',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'radix_taylor';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'header' => NULL,
      'half' => NULL,
      'quarter1' => NULL,
      'quarter2' => NULL,
      'footer' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '9897d244-02bf-46f7-817e-a973729a4ed2';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-85d7fed9-9096-4126-97b1-8675843e2331';
  $pane->panel = 'half';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_featured_image';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'image',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'image_style' => 'openlocal_node_main',
      'image_link' => '',
    ),
    'context' => 'panelizer',
    'override_title' => 0,
    'override_title_text' => '',
    'view_mode' => NULL,
    'widget_title' => NULL,
    'items_per_page' => NULL,
    'exposed' => array(
      'sort_by' => NULL,
      'sort_order' => NULL,
    ),
    'use_pager' => NULL,
    'pager_id' => NULL,
    'offset' => NULL,
    'link_to_view' => NULL,
    'more_link' => NULL,
    'path' => NULL,
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '85d7fed9-9096-4126-97b1-8675843e2331';
  $display->content['new-85d7fed9-9096-4126-97b1-8675843e2331'] = $pane;
  $display->panels['half'][0] = 'new-85d7fed9-9096-4126-97b1-8675843e2331';
  $pane = new stdClass();
  $pane->pid = 'new-eb8dd25b-a7d3-4012-b4ac-dccfdb31bb23';
  $pane->panel = 'half';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_ol_details';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'panelizer',
    'override_title' => 0,
    'override_title_text' => '',
    'view_mode' => NULL,
    'widget_title' => NULL,
    'items_per_page' => NULL,
    'exposed' => array(
      'sort_by' => NULL,
      'sort_order' => NULL,
    ),
    'use_pager' => NULL,
    'pager_id' => NULL,
    'offset' => NULL,
    'link_to_view' => NULL,
    'more_link' => NULL,
    'path' => NULL,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'eb8dd25b-a7d3-4012-b4ac-dccfdb31bb23';
  $display->content['new-eb8dd25b-a7d3-4012-b4ac-dccfdb31bb23'] = $pane;
  $display->panels['half'][1] = 'new-eb8dd25b-a7d3-4012-b4ac-dccfdb31bb23';
  $pane = new stdClass();
  $pane->pid = 'new-44f02cce-5b47-45d9-aea4-a9a9edd250f2';
  $pane->panel = 'half';
  $pane->type = 'node_links';
  $pane->subtype = 'node_links';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => FALSE,
    'override_title_text' => '',
    'build_mode' => 'page_manager',
    'identifier' => '',
    'link' => TRUE,
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => 'link-wrapper',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '44f02cce-5b47-45d9-aea4-a9a9edd250f2';
  $display->content['new-44f02cce-5b47-45d9-aea4-a9a9edd250f2'] = $pane;
  $display->panels['half'][2] = 'new-44f02cce-5b47-45d9-aea4-a9a9edd250f2';
  $pane = new stdClass();
  $pane->pid = 'new-f4fc2d1e-00ce-43af-829f-76a4a618fb77';
  $pane->panel = 'quarter1';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_ol_locations_ref';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'entityreference_entity_view',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'view_mode' => 'teaser',
      'links' => 0,
    ),
    'context' => array(),
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'f4fc2d1e-00ce-43af-829f-76a4a618fb77';
  $display->content['new-f4fc2d1e-00ce-43af-829f-76a4a618fb77'] = $pane;
  $display->panels['quarter1'][0] = 'new-f4fc2d1e-00ce-43af-829f-76a4a618fb77';
  $pane = new stdClass();
  $pane->pid = 'new-51a7f1ca-1582-48a0-8a30-f6ec47ccdd84';
  $pane->panel = 'quarter1';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_featured_categories';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'taxonomy_term_reference_link',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(),
    'context' => array(),
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '51a7f1ca-1582-48a0-8a30-f6ec47ccdd84';
  $display->content['new-51a7f1ca-1582-48a0-8a30-f6ec47ccdd84'] = $pane;
  $display->panels['quarter1'][1] = 'new-51a7f1ca-1582-48a0-8a30-f6ec47ccdd84';
  $pane = new stdClass();
  $pane->pid = 'new-1ee1a4e9-3e34-435b-8b6f-17821e93ab43';
  $pane->panel = 'quarter1';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_ol_tags';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'taxonomy_term_reference_link',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(),
    'context' => array(),
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '1ee1a4e9-3e34-435b-8b6f-17821e93ab43';
  $display->content['new-1ee1a4e9-3e34-435b-8b6f-17821e93ab43'] = $pane;
  $display->panels['quarter1'][2] = 'new-1ee1a4e9-3e34-435b-8b6f-17821e93ab43';
  $pane = new stdClass();
  $pane->pid = 'new-b4e467e0-f2dc-4b42-9d9c-2d326d1fd9f5';
  $pane->panel = 'quarter1';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_ol_telephone';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'panelizer',
    'override_title' => 0,
    'override_title_text' => '',
    'view_mode' => NULL,
    'widget_title' => NULL,
    'items_per_page' => NULL,
    'exposed' => array(
      'sort_by' => NULL,
      'sort_order' => NULL,
    ),
    'use_pager' => NULL,
    'pager_id' => NULL,
    'offset' => NULL,
    'link_to_view' => NULL,
    'more_link' => NULL,
    'path' => NULL,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'b4e467e0-f2dc-4b42-9d9c-2d326d1fd9f5';
  $display->content['new-b4e467e0-f2dc-4b42-9d9c-2d326d1fd9f5'] = $pane;
  $display->panels['quarter1'][3] = 'new-b4e467e0-f2dc-4b42-9d9c-2d326d1fd9f5';
  $pane = new stdClass();
  $pane->pid = 'new-2736c315-4eba-4685-b560-6a9b2dbfa5b5';
  $pane->panel = 'quarter1';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_ol_email';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'email_contact',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'panelizer',
    'override_title' => 0,
    'override_title_text' => '',
    'view_mode' => NULL,
    'widget_title' => NULL,
    'items_per_page' => NULL,
    'exposed' => array(
      'sort_by' => NULL,
      'sort_order' => NULL,
    ),
    'use_pager' => NULL,
    'pager_id' => NULL,
    'offset' => NULL,
    'link_to_view' => NULL,
    'more_link' => NULL,
    'path' => NULL,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '2736c315-4eba-4685-b560-6a9b2dbfa5b5';
  $display->content['new-2736c315-4eba-4685-b560-6a9b2dbfa5b5'] = $pane;
  $display->panels['quarter1'][4] = 'new-2736c315-4eba-4685-b560-6a9b2dbfa5b5';
  $pane = new stdClass();
  $pane->pid = 'new-61619e12-85ee-48bb-9a77-246670ee494f';
  $pane->panel = 'quarter1';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_ol_link';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'link_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '61619e12-85ee-48bb-9a77-246670ee494f';
  $display->content['new-61619e12-85ee-48bb-9a77-246670ee494f'] = $pane;
  $display->panels['quarter1'][5] = 'new-61619e12-85ee-48bb-9a77-246670ee494f';
  $pane = new stdClass();
  $pane->pid = 'new-2cd59e12-abc7-4249-a295-eb79fe373ce1';
  $pane->panel = 'quarter1';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_ol_twitter';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'twitterfield_twitter_link',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => array(),
    'override_title' => 0,
    'override_title_text' => '',
    'view_mode' => NULL,
    'widget_title' => NULL,
    'items_per_page' => NULL,
    'exposed' => array(
      'sort_by' => NULL,
      'sort_order' => NULL,
    ),
    'use_pager' => NULL,
    'pager_id' => NULL,
    'offset' => NULL,
    'link_to_view' => NULL,
    'more_link' => NULL,
    'path' => NULL,
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = '2cd59e12-abc7-4249-a295-eb79fe373ce1';
  $display->content['new-2cd59e12-abc7-4249-a295-eb79fe373ce1'] = $pane;
  $display->panels['quarter1'][6] = 'new-2cd59e12-abc7-4249-a295-eb79fe373ce1';
  $pane = new stdClass();
  $pane->pid = 'new-6cf20e51-be2a-4e4e-b91b-93f3a6b0e3ef';
  $pane->panel = 'quarter1';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_ol_facebook_page';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'link_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => array(),
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = '6cf20e51-be2a-4e4e-b91b-93f3a6b0e3ef';
  $display->content['new-6cf20e51-be2a-4e4e-b91b-93f3a6b0e3ef'] = $pane;
  $display->panels['quarter1'][7] = 'new-6cf20e51-be2a-4e4e-b91b-93f3a6b0e3ef';
  $pane = new stdClass();
  $pane->pid = 'new-4a516fbd-4a5b-4b6b-b5f9-85023a54f62d';
  $pane->panel = 'quarter2';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-ol-services-actions';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'ol-action-box',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '4a516fbd-4a5b-4b6b-b5f9-85023a54f62d';
  $display->content['new-4a516fbd-4a5b-4b6b-b5f9-85023a54f62d'] = $pane;
  $display->panels['quarter2'][0] = 'new-4a516fbd-4a5b-4b6b-b5f9-85023a54f62d';
  $pane = new stdClass();
  $pane->pid = 'new-293e6719-4f29-441c-a100-f59cc656853c';
  $pane->panel = 'quarter2';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_ol_organisation_promotions';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'field_collection_view',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'edit' => '',
      'delete' => '',
      'add' => '',
      'description' => 0,
      'view_mode' => 'full',
    ),
    'context' => array(),
    'override_title' => 0,
    'override_title_text' => '',
    'view_mode' => NULL,
    'widget_title' => NULL,
    'items_per_page' => NULL,
    'exposed' => array(
      'sort_by' => NULL,
      'sort_order' => NULL,
    ),
    'use_pager' => NULL,
    'pager_id' => NULL,
    'offset' => NULL,
    'link_to_view' => NULL,
    'more_link' => NULL,
    'path' => NULL,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '293e6719-4f29-441c-a100-f59cc656853c';
  $display->content['new-293e6719-4f29-441c-a100-f59cc656853c'] = $pane;
  $display->panels['quarter2'][1] = 'new-293e6719-4f29-441c-a100-f59cc656853c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-44f02cce-5b47-45d9-aea4-a9a9edd250f2';
  $panelizer->display = $display;
  $export['node:ol_organisation:default'] = $panelizer;

  return $export;
}
