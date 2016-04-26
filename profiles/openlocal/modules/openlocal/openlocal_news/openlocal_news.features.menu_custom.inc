<?php
/**
 * @file
 * openlocal_news.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function openlocal_news_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-ol-news-actions.
  $menus['menu-ol-news-actions'] = array(
    'menu_name' => 'menu-ol-news-actions',
    'title' => 'OL News actions',
    'description' => 'News action buttons.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('News action buttons.');
  t('OL News actions');


  return $menus;
}
