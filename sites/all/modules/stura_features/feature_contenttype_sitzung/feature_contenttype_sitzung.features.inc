<?php
/**
 * @file
 * feature_contenttype_sitzung.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_contenttype_sitzung_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function feature_contenttype_sitzung_node_info() {
  $items = array(
    'sitzung' => array(
      'name' => t('Sitzung'),
      'base' => 'node_content',
      'description' => t('Eine Sitzung beinhaltet Ort, geplante Start- und Endzeit und die Referenz auf die Tagesordnung'),
      'has_title' => '1',
      'title_label' => t('Sitzungstitel'),
      'help' => '',
    ),
  );
  return $items;
}
