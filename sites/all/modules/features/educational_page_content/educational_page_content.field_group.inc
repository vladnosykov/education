<?php
/**
 * @file
 * educational_page_content.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function educational_page_content_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_educational_image|node|educational_page|teaser';
  $field_group->group_name = 'group_educational_image';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'educational_page';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Image Group',
    'weight' => '0',
    'children' => array(
      0 => 'field_educational_image',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Image Group',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-educational-image field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_educational_image|node|educational_page|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_educational_teaser|node|educational_page|teaser';
  $field_group->group_name = 'group_educational_teaser';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'educational_page';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Teaser Group',
    'weight' => '2',
    'children' => array(
      0 => 'field_educational_description',
      1 => 'field_educational_video',
      2 => 'title',
      3 => 'node_link',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Teaser Group',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-educational-teaser field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_educational_teaser|node|educational_page|teaser'] = $field_group;

  return $export;
}
