<?php
/**
 * @file
 * openlocal_location.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function openlocal_location_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-ol-location-actions.
  $menus['menu-ol-location-actions'] = array(
    'menu_name' => 'menu-ol-location-actions',
    'title' => 'OL Location actions',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('OL Location actions');


  return $menus;
}
