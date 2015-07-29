<?php

/**
 * Fetch menu block from a database and get them into array. If block has no title,
 * get menu title instead.
 */
function cb_sidebar_menu_get_options() {
  $result = db_select('block', 'b')
      ->fields('b', array('delta', 'title'))
      ->condition('b.module', 'menu_block')
      ->distinct()
      ->execute()
      ->fetchAll();

  foreach ($result as $key => $value) {
    $block_config = menu_block_get_config($value->delta);
    $options[$value->delta] = $value->title;
    if (empty($value->title)) {
      $menu_array = menu_load($block_config['menu_name']);
      $options[$value->delta] = $menu_array['title'];
    }
  }
  return $options;
}
