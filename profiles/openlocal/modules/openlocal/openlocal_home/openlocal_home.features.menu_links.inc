<?php
/**
 * @file
 * openlocal_home.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function openlocal_home_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-ol-home-actions_add-news-article:node/add/ol-news-article
  $menu_links['menu-ol-home-actions_add-news-article:node/add/ol-news-article'] = array(
    'menu_name' => 'menu-ol-home-actions',
    'link_path' => 'node/add/ol-news-article',
    'router_path' => 'node/add/ol-news-article',
    'link_title' => 'add news article',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-ol-home-actions_add-news-article:node/add/ol-news-article',
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
  t('add news article');


  return $menu_links;
}
