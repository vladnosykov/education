<?php
/**
 * @file
 * educational_fieldable_pane.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function educational_fieldable_pane_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'panel_test_page';
  $page->task = 'page';
  $page->admin_title = 'Panel Test Page';
  $page->admin_description = '';
  $page->path = 'paneltesting';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_panel_test_page__panel_context_8d66723f-6f5a-439c-915d-67824f9a5e0c';
  $handler->task = 'page';
  $handler->subtask = 'panel_test_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '562a239c-ca88-4e35-9fca-0612875660f5';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-b6d9053e-5659-4862-8fa7-2c67bfb1e2e0';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'system-main-menu';
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
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b6d9053e-5659-4862-8fa7-2c67bfb1e2e0';
    $display->content['new-b6d9053e-5659-4862-8fa7-2c67bfb1e2e0'] = $pane;
    $display->panels['middle'][0] = 'new-b6d9053e-5659-4862-8fa7-2c67bfb1e2e0';
    $pane = new stdClass();
    $pane->pid = 'new-785da49a-3de6-4770-a332-f0a1505db780';
    $pane->panel = 'middle';
    $pane->type = 'panels_mini';
    $pane->subtype = 'mini_panel_testing';
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
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '785da49a-3de6-4770-a332-f0a1505db780';
    $display->content['new-785da49a-3de6-4770-a332-f0a1505db780'] = $pane;
    $display->panels['middle'][1] = 'new-785da49a-3de6-4770-a332-f0a1505db780';
    $pane = new stdClass();
    $pane->pid = 'new-25f24117-b39a-42e9-829f-a4f231700742';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'system-management';
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
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '25f24117-b39a-42e9-829f-a4f231700742';
    $display->content['new-25f24117-b39a-42e9-829f-a4f231700742'] = $pane;
    $display->panels['middle'][2] = 'new-25f24117-b39a-42e9-829f-a4f231700742';
    $pane = new stdClass();
    $pane->pid = 'new-d4479546-807a-49ea-a5d6-b3d769fa4007';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'webform_webforms';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '25',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'default',
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'd4479546-807a-49ea-a5d6-b3d769fa4007';
    $display->content['new-d4479546-807a-49ea-a5d6-b3d769fa4007'] = $pane;
    $display->panels['middle'][3] = 'new-d4479546-807a-49ea-a5d6-b3d769fa4007';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['panel_test_page'] = $page;

  return $pages;

}
