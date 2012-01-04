<?php
/**
 * @file
 * feature_contenttype_tagesordnungspunkt.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function feature_contenttype_tagesordnungspunkt_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_tagesordnungspunkt';
  $strongarm->value = '0';
  $export['language_content_type_tagesordnungspunkt'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_tagesordnungspunkt';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_tagesordnungspunkt'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_tagesordnungspunkt';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_tagesordnungspunkt'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_tagesordnungspunkt';
  $strongarm->value = array();
  $export['node_options_tagesordnungspunkt'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_tagesordnungspunkt';
  $strongarm->value = '1';
  $export['node_preview_tagesordnungspunkt'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_tagesordnungspunkt';
  $strongarm->value = 1;
  $export['node_submitted_tagesordnungspunkt'] = $strongarm;

  return $export;
}
