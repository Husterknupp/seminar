<?php
/**
 * @file
 * feature_contenttype_protokoll.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_contenttype_protokoll_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function feature_contenttype_protokoll_node_info() {
  $items = array(
    'feature_contenttype_protokoll' => array(
      'name' => t('Protokoll'),
      'base' => 'node_content',
      'description' => t('Protokoll enthält Informationen zur Sitzung.'),
      'has_title' => '1',
      'title_label' => t('Protkolltitel'),
      'help' => '',
    ),
  );
  return $items;
}
