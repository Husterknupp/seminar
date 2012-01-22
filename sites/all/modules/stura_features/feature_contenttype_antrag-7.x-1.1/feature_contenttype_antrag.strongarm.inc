<?php
/**
 * @file
 * feature_contenttype_antrag.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function feature_contenttype_antrag_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_antrag';
  $strongarm->value = '0';
  $export['language_content_type_antrag'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_antrag';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_antrag'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_antrag';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_antrag'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_antrag';
  $strongarm->value = array();
  $export['node_options_antrag'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_antrag';
  $strongarm->value = '1';
  $export['node_preview_antrag'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_antrag';
  $strongarm->value = 1;
  $export['node_submitted_antrag'] = $strongarm;

  return $export;
}
