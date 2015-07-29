<?php
/**
 * @file
 * Shows CB Sidebar menu.
 */
/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
  'title' => t('CB Sidebar Menu'),
  'description' => t('CB Sidebar menu plugin'),
  'render callback' => 'cb_sidebar_menu_render',
  'defaults' => array(),
  'category' => t('CB Custom Pane'),
  'all contexts' => TRUE,
  'edit form' => 'cb_sidebar_menu_edit_form',
);

/**
 * Render function for cb_sidebar_menu.
 */
function cb_sidebar_menu_render($subtype, $conf, $panel_args, $context = NULL) {
  $block = new stdClass();
  $block_delta = variable_get('cb_sidebar_menu_block_delta');
  $block_title = variable_get('cb_sidebar_menu_block_title');
  $block_menu = module_invoke('menu_block', 'block_view', $block_delta);
  $block->content = $block_menu['content'];
  $block->title = $block_title;
  return $block;
}

/**
 * Form builder for cb_sidebar_menu.
 */
function cb_sidebar_menu_edit_form($form, $form_state) {
  module_load_include('inc', 'cb_sidebar_menu', 'forms/cb_sidebar_menu.cb_sidebar_menu_settings_edit_form');
  $form = cb_sidebar_menu_settings_edit_form($form, $form_state);
  return $form;
}

