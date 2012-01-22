<?php
/**
 * @file
 * feature_contenttype_tagesordnungspunkt.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_contenttype_tagesordnungspunkt_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function feature_contenttype_tagesordnungspunkt_node_info() {
  $items = array(
    'tagesordnungspunkt' => array(
      'name' => t('Tagesordnungspunkt'),
      'base' => 'node_content',
      'description' => t('Punkt welcher während einer Sitzung bearbeitet wird.'),
      'has_title' => '1',
      'title_label' => t('Tagesordnungspunkt'),
      'help' => '',
    ),
  );
  return $items;
}
