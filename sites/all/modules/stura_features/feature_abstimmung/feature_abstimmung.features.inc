<?php
/**
 * @file
 * feature_abstimmung.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_abstimmung_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function feature_abstimmung_node_info() {
  $items = array(
    'abstimmung' => array(
      'name' => t('Abstimmung'),
      'base' => 'node_content',
      'description' => t('Die Abstimmung zu einem Antrag'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
