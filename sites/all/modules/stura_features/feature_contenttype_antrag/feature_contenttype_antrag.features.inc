<?php
/**
 * @file
 * feature_contenttype_antrag.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_contenttype_antrag_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function feature_contenttype_antrag_node_info() {
  $items = array(
    'antrag' => array(
      'name' => t('Antrag'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Antragsname'),
      'help' => '',
    ),
  );
  return $items;
}
