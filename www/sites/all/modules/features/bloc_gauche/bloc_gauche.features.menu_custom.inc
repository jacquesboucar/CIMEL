<?php
/**
 * @file
 * bloc_gauche.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function bloc_gauche_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-cimel-de-dahra
  $menus['menu-cimel-de-dahra'] = array(
    'menu_name' => 'menu-cimel-de-dahra',
    'title' => 'CIMEL de Dahra',
    'description' => '',
  );
  // Exported menu: menu-cimel-de-makhana
  $menus['menu-cimel-de-makhana'] = array(
    'menu_name' => 'menu-cimel-de-makhana',
    'title' => 'CIMEL de Makhana',
    'description' => '',
  );
  // Exported menu: menu-cimel-de-mbao
  $menus['menu-cimel-de-mbao'] = array(
    'menu_name' => 'menu-cimel-de-mbao',
    'title' => 'CIMEL de Mbao',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('CIMEL de Dahra');
  t('CIMEL de Makhana');
  t('CIMEL de Mbao');


  return $menus;
}
