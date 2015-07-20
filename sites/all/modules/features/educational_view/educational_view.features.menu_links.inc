<?php
/**
 * @file
 * educational_view.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function educational_view_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_educational-pages:educational-view
  $menu_links['main-menu_educational-pages:educational-view'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'educational-view',
    'router_path' => 'educational-view',
    'link_title' => 'educational pages',
    'options' => array(
      'identifier' => 'main-menu_educational-pages:educational-view',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('educational pages');

  return $menu_links;
}
