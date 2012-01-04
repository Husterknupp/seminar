<?php
/**
 * @file
 * feature_contenttype_bescheid.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function feature_contenttype_bescheid_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_bescheid';
  $strongarm->value = '0';
  $export['language_content_type_bescheid'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_bescheid';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_bescheid'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_bescheid';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_bescheid'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_bescheid';
  $strongarm->value = array();
  $export['node_options_bescheid'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_bescheid';
  $strongarm->value = '1';
  $export['node_preview_bescheid'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_bescheid';
  $strongarm->value = 1;
  $export['node_submitted_bescheid'] = $strongarm;

  return $export;
}
