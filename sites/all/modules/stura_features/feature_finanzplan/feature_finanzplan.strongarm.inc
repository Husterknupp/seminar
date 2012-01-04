<?php
/**
 * @file
 * feature_finanzplan.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function feature_finanzplan_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_finanzplan';
  $strongarm->value = '0';
  $export['language_content_type_finanzplan'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_finanzplan';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_finanzplan'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_finanzplan';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_finanzplan'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_finanzplan';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_finanzplan'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_finanzplan';
  $strongarm->value = '1';
  $export['node_preview_finanzplan'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_finanzplan';
  $strongarm->value = 1;
  $export['node_submitted_finanzplan'] = $strongarm;

  return $export;
}
