<?php
/**
 * @file
 * openlocal_organisation.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function openlocal_organisation_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create ol_organisation content'.
  $permissions['create ol_organisation content'] = array(
    'name' => 'create ol_organisation content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
      'group manager' => 'group manager',
      'site manager' => 'site manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any ol_organisation content'.
  $permissions['delete any ol_organisation content'] = array(
    'name' => 'delete any ol_organisation content',
    'roles' => array(
      'site manager' => 'site manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own ol_organisation content'.
  $permissions['delete own ol_organisation content'] = array(
    'name' => 'delete own ol_organisation content',
    'roles' => array(
      'site manager' => 'site manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in ol_organisation_type'.
  $permissions['delete terms in ol_organisation_type'] = array(
    'name' => 'delete terms in ol_organisation_type',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any ol_organisation content'.
  $permissions['edit any ol_organisation content'] = array(
    'name' => 'edit any ol_organisation content',
    'roles' => array(
      'site manager' => 'site manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own ol_organisation content'.
  $permissions['edit own ol_organisation content'] = array(
    'name' => 'edit own ol_organisation content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
      'group manager' => 'group manager',
      'site manager' => 'site manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in ol_organisation_type'.
  $permissions['edit terms in ol_organisation_type'] = array(
    'name' => 'edit terms in ol_organisation_type',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  return $permissions;
}
