<?php
/**
 * @file
 * release_5b_content_types.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function release_5b_content_types_user_default_roles() {
  $roles = array();

  // Exported role: Content Manager.
  $roles['Content Manager'] = array(
    'name' => 'Content Manager',
    'weight' => 37,
  );

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 38,
  );

  return $roles;
}
