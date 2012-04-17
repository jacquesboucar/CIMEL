<?php
/**
 * @file
 * features_menu.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function features_menu_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-livre-d-or
  $menus['menu-livre-d-or'] = array(
    'menu_name' => 'menu-livre-d-or',
    'title' => 'Livre dor',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Livre dor');


  return $menus;
}
