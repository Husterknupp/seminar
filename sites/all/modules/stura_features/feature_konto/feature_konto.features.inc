<?php
/**
 * @file
 * feature_konto.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_konto_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function feature_konto_node_info() {
  $items = array(
    'konto' => array(
      'name' => t('Konto'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Inhaber'),
      'help' => '',
    ),
  );
  return $items;
}
