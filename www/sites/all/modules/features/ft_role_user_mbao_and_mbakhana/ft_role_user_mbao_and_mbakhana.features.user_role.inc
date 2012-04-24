<?php
/**
 * @file
 * ft_role_user_mbao_and_mbakhana.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function ft_role_user_mbao_and_mbakhana_user_default_roles() {
  $roles = array();

  // Exported role: gestion contenu makhana
  $roles['gestion contenu makhana'] = array(
    'name' => 'gestion contenu makhana',
    'weight' => '3',
  );

  // Exported role: gestion contenu mbao
  $roles['gestion contenu mbao'] = array(
    'name' => 'gestion contenu mbao',
    'weight' => '2',
  );

  return $roles;
}
