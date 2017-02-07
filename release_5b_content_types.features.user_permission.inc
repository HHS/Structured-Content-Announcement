<?php
/**
 * @file
 * release_5b_content_types.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function release_5b_content_types_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create announcement content'.
  $permissions['create announcement content'] = array(
    'name' => 'create announcement content',
    'roles' => array(
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create meeting content'.
  $permissions['create meeting content'] = array(
    'name' => 'create meeting content',
    'roles' => array(
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create office content'.
  $permissions['create office content'] = array(
    'name' => 'create office content',
    'roles' => array(
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any announcement content'.
  $permissions['delete any announcement content'] = array(
    'name' => 'delete any announcement content',
    'roles' => array(
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any meeting content'.
  $permissions['delete any meeting content'] = array(
    'name' => 'delete any meeting content',
    'roles' => array(
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any office content'.
  $permissions['delete any office content'] = array(
    'name' => 'delete any office content',
    'roles' => array(
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own announcement content'.
  $permissions['delete own announcement content'] = array(
    'name' => 'delete own announcement content',
    'roles' => array(
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own meeting content'.
  $permissions['delete own meeting content'] = array(
    'name' => 'delete own meeting content',
    'roles' => array(
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own office content'.
  $permissions['delete own office content'] = array(
    'name' => 'delete own office content',
    'roles' => array(
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any announcement content'.
  $permissions['edit any announcement content'] = array(
    'name' => 'edit any announcement content',
    'roles' => array(
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any meeting content'.
  $permissions['edit any meeting content'] = array(
    'name' => 'edit any meeting content',
    'roles' => array(
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any office content'.
  $permissions['edit any office content'] = array(
    'name' => 'edit any office content',
    'roles' => array(
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own announcement content'.
  $permissions['edit own announcement content'] = array(
    'name' => 'edit own announcement content',
    'roles' => array(
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own meeting content'.
  $permissions['edit own meeting content'] = array(
    'name' => 'edit own meeting content',
    'roles' => array(
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own office content'.
  $permissions['edit own office content'] = array(
    'name' => 'edit own office content',
    'roles' => array(
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'node',
  );

  return $permissions;
}
