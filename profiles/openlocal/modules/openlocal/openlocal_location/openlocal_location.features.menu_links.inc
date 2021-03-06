<?php
/**
 * @file
 * openlocal_location.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function openlocal_location_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-ol-location-actions_add-location:node/add/ol-location
  $menu_links['menu-ol-location-actions_add-location:node/add/ol-location'] = array(
    'menu_name' => 'menu-ol-location-actions',
    'link_path' => 'node/add/ol-location',
    'router_path' => 'node/add/ol-location',
    'link_title' => 'add location',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-ol-location-actions_add-location:node/add/ol-location',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('add location');


  return $menu_links;
}
