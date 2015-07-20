<?php
/**
 * @file
 * educational_fieldable_pane.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function educational_fieldable_pane_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'mini_panel_testing';
  $mini->category = '';
  $mini->admin_title = 'Mini Panel Testing';
  $mini->admin_description = 'Test of a Mini panel.';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'twocol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '42ab2910-832d-46ca-a41b-bf713d422afd';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-b05214a9-4407-4ef5-a0dc-de46a96d0846';
    $pane->panel = 'left';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b05214a9-4407-4ef5-a0dc-de46a96d0846';
    $display->content['new-b05214a9-4407-4ef5-a0dc-de46a96d0846'] = $pane;
    $display->panels['left'][0] = 'new-b05214a9-4407-4ef5-a0dc-de46a96d0846';
    $pane = new stdClass();
    $pane->pid = 'new-02593ed4-1dc3-467c-b80b-4b7a65fd1ab7';
    $pane->panel = 'right';
    $pane->type = 'views';
    $pane->subtype = 'educational_view';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '3',
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '02593ed4-1dc3-467c-b80b-4b7a65fd1ab7';
    $display->content['new-02593ed4-1dc3-467c-b80b-4b7a65fd1ab7'] = $pane;
    $display->panels['right'][0] = 'new-02593ed4-1dc3-467c-b80b-4b7a65fd1ab7';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-b05214a9-4407-4ef5-a0dc-de46a96d0846';
  $mini->display = $display;
  $export['mini_panel_testing'] = $mini;

  return $export;
}
