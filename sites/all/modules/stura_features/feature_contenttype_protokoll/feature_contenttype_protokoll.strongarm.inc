<?php
/**
 * @file
 * feature_contenttype_protokoll.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function feature_contenttype_protokoll_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_feature_contenttype_protokoll';
  $strongarm->value = '0';
  $export['language_content_type_feature_contenttype_protokoll'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_feature_contenttype_protokoll';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_feature_contenttype_protokoll'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_feature_contenttype_protokoll';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_feature_contenttype_protokoll'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_feature_contenttype_protokoll';
  $strongarm->value = array();
  $export['node_options_feature_contenttype_protokoll'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_feature_contenttype_protokoll';
  $strongarm->value = '1';
  $export['node_preview_feature_contenttype_protokoll'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_feature_contenttype_protokoll';
  $strongarm->value = 1;
  $export['node_submitted_feature_contenttype_protokoll'] = $strongarm;

  return $export;
}
