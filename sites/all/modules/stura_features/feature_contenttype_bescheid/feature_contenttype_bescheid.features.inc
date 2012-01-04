<?php
/**
 * @file
 * feature_contenttype_bescheid.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_contenttype_bescheid_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function feature_contenttype_bescheid_node_info() {
  $items = array(
    'bescheid' => array(
      'name' => t('Bescheid'),
      'base' => 'node_content',
      'description' => t('Abstimmungsresultat geht an Antragsteller, Finanzer und Sitzungsleiter.'),
      'has_title' => '1',
      'title_label' => t('Bescheid'),
      'help' => '',
    ),
  );
  return $items;
}
