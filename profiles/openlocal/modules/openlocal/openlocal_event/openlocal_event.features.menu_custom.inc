<?php
/**
 * @file
 * openlocal_event.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function openlocal_event_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-ol-event-actions.
  $menus['menu-ol-event-actions'] = array(
    'menu_name' => 'menu-ol-event-actions',
    'title' => 'OL Event actions',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('OL Event actions');


  return $menus;
}
