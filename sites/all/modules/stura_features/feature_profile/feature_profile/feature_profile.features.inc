<?php
/**
 * @file
 * feature_profile.features.inc
 */

/**
 * Implements hook_default_profile2_type().
 */
function feature_profile_default_profile2_type() {
  $items = array();
  $items['main'] = entity_import('profile2_type', '{
    "userCategory" : false,
    "userView" : false,
    "type" : "main",
    "label" : "Personen",
    "weight" : "0",
    "data" : { "registration" : 1, "use_page" : 1 },
    "rdf_mapping" : []
  }');
  return $items;
}
