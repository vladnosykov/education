<?php

/**
 * Form builder for cb_sidebar_menu.
 */
function cb_sidebar_menu_settings_edit_form($form, $form_state) {
  module_load_include('inc', 'cb_sidebar_menu', 'includes/cb_sidebar_menu.get_options');
  $options = cb_sidebar_menu_get_options();

  $form['menu_choice'] = array(
    '#type' => 'select',
    '#options' => $options,
    '#title' => t('Select menu'),
  );
  $form['#submit'][] = 'cb_sidebar_menu_settings_edit_form_submit';
  return $form;
}

/**
 * Submit handler for cb_sidebar_menu_settings_edit_form.
 */
function cb_sidebar_menu_settings_edit_form_submit(&$form, &$form_state) {
  $options = cb_sidebar_menu_get_options();
  variable_set('cb_sidebar_menu_block_delta', $form_state['values']['menu_choice']);
  variable_set('cb_sidebar_menu_block_title', $options[$form_state['values']['menu_choice']]);
}
