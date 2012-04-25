<?php
/**
 * @file
 * user_features.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function user_features_user_default_roles() {
  $roles = array();

  // Exported role: gerer le contenu de makhana
  $roles['gerer le contenu de makhana'] = array(
    'name' => 'gerer le contenu de makhana',
    'weight' => '4',
  );

  // Exported role: gestion du contenu de dahra
  $roles['gestion du contenu de dahra'] = array(
    'name' => 'gestion du contenu de dahra',
    'weight' => '2',
  );

  // Exported role: manage content mbao
  $roles['manage content mbao'] = array(
    'name' => 'manage content mbao',
    'weight' => '3',
  );

  return $roles;
}
