<?php
/**
 * @file
 * openlocal_admin.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function openlocal_admin_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'ol_admin_dashboard';
  $page->task = 'page';
  $page->admin_title = 'Dashboard';
  $page->admin_description = 'A dashboard for regular site maintenance.';
  $page->path = 'admin/dashboard';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 5,
            1 => 3,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Dashboard',
    'name' => 'management',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ol_admin_dashboard_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'ol_admin_dashboard';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 1,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'radix_mccoppin';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'column1' => NULL,
      'column2' => NULL,
      'column3' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Dashboard';
  $display->uuid = '8dbf57d5-b531-4a46-a431-3151adc3927a';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-60341c23-aefc-46f5-b278-68fe503d9b61';
  $pane->panel = 'column2';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Quick links',
    'title' => 'Quick links',
    'body' => '<p><a href="/exports/my-businesses">Google My Business export</a></p>',
    'format' => 'panopoly_wysiwyg_text',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '60341c23-aefc-46f5-b278-68fe503d9b61';
  $display->content['new-60341c23-aefc-46f5-b278-68fe503d9b61'] = $pane;
  $display->panels['column2'][0] = 'new-60341c23-aefc-46f5-b278-68fe503d9b61';
  $pane = new stdClass();
  $pane->pid = 'new-9af195c2-304f-4e19-a796-f7ff8c31343a';
  $pane->panel = 'column3';
  $pane->type = 'views_panes';
  $pane->subtype = 'openlocal_admin_user_totals-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_mode' => 'teaser',
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
    'view_settings' => 'fields',
    'header_type' => 'none',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '9af195c2-304f-4e19-a796-f7ff8c31343a';
  $display->content['new-9af195c2-304f-4e19-a796-f7ff8c31343a'] = $pane;
  $display->panels['column3'][0] = 'new-9af195c2-304f-4e19-a796-f7ff8c31343a';
  $pane = new stdClass();
  $pane->pid = 'new-596f1b06-a76d-4e30-8b8e-5ccbbf965e3c';
  $pane->panel = 'column3';
  $pane->type = 'views_panes';
  $pane->subtype = 'openlocal_admin-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_mode' => 'teaser',
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
    'view_settings' => 'fields',
    'header_type' => 'none',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '596f1b06-a76d-4e30-8b8e-5ccbbf965e3c';
  $display->content['new-596f1b06-a76d-4e30-8b8e-5ccbbf965e3c'] = $pane;
  $display->panels['column3'][1] = 'new-596f1b06-a76d-4e30-8b8e-5ccbbf965e3c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['ol_admin_dashboard'] = $page;

  return $pages;

}
