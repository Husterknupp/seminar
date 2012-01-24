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
      'name' => t('Protokollpunkt'),
      'base' => 'node_content',
      'description' => t('Ein Protokollpunkt enthält die Informationen eines Tagesordnungspunkts und ist diesem zugeordnet.'),
      'has_title' => '1',
      'title_label' => t('Protokollpunkt'),
      'help' => '',
    ),
  );
  return $items;
}
