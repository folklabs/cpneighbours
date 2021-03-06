<?php
/**
 * @file
 * openlocal_location.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function openlocal_location_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:ol_location:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'ol_location';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array(
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Locations',
    'panels_breadcrumbs_paths' => 'locations',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'radix_taylor';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'middle_left' => NULL,
      'middle_right' => NULL,
      'right' => NULL,
      'header' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
      'half' => NULL,
      'quarter1' => NULL,
      'quarter2' => NULL,
      'footer' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '7aa38035-d95d-49d9-8516-79dc8dc5711d';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-26209d9f-60c4-418c-824d-423291a11b84';
  $pane->panel = 'half';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_ol_geolocation';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'geofield_leaflet',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'height' => '300',
      'icon' => array(
        'iconType' => 'marker',
        'iconUrl' => '',
        'shadowUrl' => '',
        'html' => '',
        'iconImageStyle' => '',
        'htmlClass' => '',
        'iconSize' => array(
          'x' => '',
          'y' => '',
        ),
        'iconAnchor' => array(
          'x' => '',
          'y' => '',
        ),
        'shadowAnchor' => array(
          'x' => '',
          'y' => '',
        ),
        'popupAnchor' => array(
          'x' => '',
          'y' => '',
        ),
      ),
      'leaflet_map' => 'OSM Mapnik',
      'popup' => array(
        'show' => 0,
        'text' => '',
      ),
      'vector_display' => array(
        'stroke_override' => 0,
        'stroke' => 0,
        'color' => '',
        'weight' => '',
        'opacity' => '',
        'dashArray' => '',
        'fill' => 0,
        'fillColor' => '',
        'fillOpacity' => '',
        'clickable' => 0,
      ),
      'zoom' => array(
        'initialZoom' => '-1',
        'minZoom' => '1',
        'maxZoom' => '-1',
      ),
    ),
    'context' => 'panelizer',
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
  $pane->uuid = '26209d9f-60c4-418c-824d-423291a11b84';
  $display->content['new-26209d9f-60c4-418c-824d-423291a11b84'] = $pane;
  $display->panels['half'][0] = 'new-26209d9f-60c4-418c-824d-423291a11b84';
  $pane = new stdClass();
  $pane->pid = 'new-7cff4f67-1bc5-473d-9234-e5bab50c087f';
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
  $pane->uuid = '7cff4f67-1bc5-473d-9234-e5bab50c087f';
  $display->content['new-7cff4f67-1bc5-473d-9234-e5bab50c087f'] = $pane;
  $display->panels['half'][1] = 'new-7cff4f67-1bc5-473d-9234-e5bab50c087f';
  $pane = new stdClass();
  $pane->pid = 'new-f983658c-deac-4044-99ab-db857b201160';
  $pane->panel = 'half';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_ol_tags';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'taxonomy_term_reference_link',
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'f983658c-deac-4044-99ab-db857b201160';
  $display->content['new-f983658c-deac-4044-99ab-db857b201160'] = $pane;
  $display->panels['half'][2] = 'new-f983658c-deac-4044-99ab-db857b201160';
  $pane = new stdClass();
  $pane->pid = 'new-590b01ff-d308-4ed4-8dab-4e0a902c4b06';
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '590b01ff-d308-4ed4-8dab-4e0a902c4b06';
  $display->content['new-590b01ff-d308-4ed4-8dab-4e0a902c4b06'] = $pane;
  $display->panels['half'][3] = 'new-590b01ff-d308-4ed4-8dab-4e0a902c4b06';
  $pane = new stdClass();
  $pane->pid = 'new-85edd29c-6a8b-48ff-a73c-5a8f940e065b';
  $pane->panel = 'quarter1';
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
      'image_style' => 'openlocal_panel_deep',
      'image_link' => '',
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
  $pane->uuid = '85edd29c-6a8b-48ff-a73c-5a8f940e065b';
  $display->content['new-85edd29c-6a8b-48ff-a73c-5a8f940e065b'] = $pane;
  $display->panels['quarter1'][0] = 'new-85edd29c-6a8b-48ff-a73c-5a8f940e065b';
  $pane = new stdClass();
  $pane->pid = 'new-d10736a8-adce-44de-bbbe-4cbd7609a8b3';
  $pane->panel = 'quarter1';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_ol_address';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'addressfield_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'format_handlers' => array(
        'address' => 'address',
      ),
      'use_widget_handlers' => 1,
    ),
    'context' => 'panelizer',
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
  $pane->uuid = 'd10736a8-adce-44de-bbbe-4cbd7609a8b3';
  $display->content['new-d10736a8-adce-44de-bbbe-4cbd7609a8b3'] = $pane;
  $display->panels['quarter1'][1] = 'new-d10736a8-adce-44de-bbbe-4cbd7609a8b3';
  $pane = new stdClass();
  $pane->pid = 'new-801e6540-3d42-48f5-affe-61d8732dcb15';
  $pane->panel = 'quarter1';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_ol_opening_hours';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'office_hours',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'closedformat' => 'Closed',
      'compress' => FALSE,
      'current_status' => array(
        'closed_text' => 'Currently closed',
        'open_text' => 'Currently open!',
        'position' => 'hide',
      ),
      'date_first_day' => 0,
      'daysformat' => 'long',
      'grouped' => FALSE,
      'hoursformat' => 0,
      'separator_day_hours' => ': ',
      'separator_days' => '<br />',
      'separator_grouped_days' => ' - ',
      'separator_hours_hours' => '-',
      'separator_more_hours' => ', ',
      'showclosed' => 'all',
      'timezone_field' => '',
    ),
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '801e6540-3d42-48f5-affe-61d8732dcb15';
  $display->content['new-801e6540-3d42-48f5-affe-61d8732dcb15'] = $pane;
  $display->panels['quarter1'][2] = 'new-801e6540-3d42-48f5-affe-61d8732dcb15';
  $pane = new stdClass();
  $pane->pid = 'new-662b0120-88cd-47a4-8198-54d79825bab3';
  $pane->panel = 'quarter1';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_ol_location_properties';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'taxonomy_term_reference_link',
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '662b0120-88cd-47a4-8198-54d79825bab3';
  $display->content['new-662b0120-88cd-47a4-8198-54d79825bab3'] = $pane;
  $display->panels['quarter1'][3] = 'new-662b0120-88cd-47a4-8198-54d79825bab3';
  $pane = new stdClass();
  $pane->pid = 'new-c3c7c0f7-f16d-4d3b-9f78-03c371cd7039';
  $pane->panel = 'quarter2';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-ol-location-actions';
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
  $pane->uuid = 'c3c7c0f7-f16d-4d3b-9f78-03c371cd7039';
  $display->content['new-c3c7c0f7-f16d-4d3b-9f78-03c371cd7039'] = $pane;
  $display->panels['quarter2'][0] = 'new-c3c7c0f7-f16d-4d3b-9f78-03c371cd7039';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:ol_location:default'] = $panelizer;

  return $export;
}
