<?php
/**
 * @file
 * feature_field_permissions.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function feature_field_permissions_user_default_roles() {
  $roles = array();

  // Exported role: StuRa-Mitglied
  $roles['StuRa-Mitglied'] = array(
    'name' => 'StuRa-Mitglied',
    'weight' => '8',
  );

  return $roles;
}
