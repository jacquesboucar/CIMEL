<?php
/**
 * @file
 * name.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function name_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-livre-d-or:node/26
  $menu_links['menu-livre-d-or:<front>'] = array(
    'menu_name' => 'menu-livre-d-or',
    'link_path' => '<front>',
    'router_path' => 'node/%',
    'link_title' => 'signer le livre d\'or',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('signer le livre d\'or');


  return $menu_links;
}
