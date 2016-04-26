<?php
/**
 * @file
 * openlocal_home.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function openlocal_home_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => 'The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.',
  );
  // Exported menu: menu-ol-home-actions.
  $menus['menu-ol-home-actions'] = array(
    'menu_name' => 'menu-ol-home-actions',
    'title' => 'OL Home actions',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Main menu');
  t('OL Home actions');
  t('The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.');


  return $menus;
}
