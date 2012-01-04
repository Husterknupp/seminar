<?php
/**
 * @file
 * feature_finanzplan.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_finanzplan_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function feature_finanzplan_node_info() {
  $items = array(
    'finanzplan' => array(
      'name' => t('Finanzplan'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Projektname'),
      'help' => '',
    ),
  );
  return $items;
}
