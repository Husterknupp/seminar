<?php
/**
 * @file
 * feature_profile.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function feature_profile_user_default_roles() {
  $roles = array();

  // Exported role: Angestellter
  $roles['Angestellter'] = array(
    'name' => 'Angestellter',
    'weight' => '6',
  );

  // Exported role: Finanzer
  $roles['Finanzer'] = array(
    'name' => 'Finanzer',
    'weight' => '5',
  );

  // Exported role: Sitzungsleiter
  $roles['Sitzungsleiter'] = array(
    'name' => 'Sitzungsleiter',
    'weight' => '4',
  );

  // Exported role: Sprecher
  $roles['Sprecher'] = array(
    'name' => 'Sprecher',
    'weight' => '7',
  );

  return $roles;
}
