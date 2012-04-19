<?php
/**
 * @file
 * bloc_gauche.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function bloc_gauche_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-cimel-de-dahra:dahra/annonces
  $menu_links['menu-cimel-de-dahra:dahra/annonces'] = array(
    'menu_name' => 'menu-cimel-de-dahra',
    'link_path' => 'dahra/annonces',
    'router_path' => 'dahra/annonces',
    'link_title' => 'Annonces',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '2',
  );
  // Exported menu link: menu-cimel-de-dahra:dahra/formations
  $menu_links['menu-cimel-de-dahra:dahra/formations'] = array(
    'menu_name' => 'menu-cimel-de-dahra',
    'link_path' => 'dahra/formations',
    'router_path' => 'dahra/formations',
    'link_title' => 'Formations',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '3',
  );
  // Exported menu link: menu-cimel-de-dahra:dahra/galerie
  $menu_links['menu-cimel-de-dahra:dahra/galerie'] = array(
    'menu_name' => 'menu-cimel-de-dahra',
    'link_path' => 'dahra/galerie',
    'router_path' => 'dahra/galerie',
    'link_title' => 'Galerie photos',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '4',
  );
  // Exported menu link: menu-cimel-de-dahra:node/15
  $menu_links['menu-cimel-de-dahra:node/15'] = array(
    'menu_name' => 'menu-cimel-de-dahra',
    'link_path' => 'node/15',
    'router_path' => 'node/%',
    'link_title' => 'Présentation',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '1',
  );
  // Exported menu link: menu-cimel-de-dahra:node/4
  $menu_links['menu-cimel-de-dahra:node/4'] = array(
    'menu_name' => 'menu-cimel-de-dahra',
    'link_path' => 'node/4',
    'router_path' => 'node/%',
    'link_title' => 'Historique',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: menu-cimel-de-dahra:node/48
  $menu_links['menu-cimel-de-dahra:node/48'] = array(
    'menu_name' => 'menu-cimel-de-dahra',
    'link_path' => 'node/48',
    'router_path' => 'node/%',
    'link_title' => 'Personnel',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '5',
  );
  // Exported menu link: menu-cimel-de-dahra:node/50
  $menu_links['menu-cimel-de-dahra:node/50'] = array(
    'menu_name' => 'menu-cimel-de-dahra',
    'link_path' => 'node/50',
    'router_path' => 'node/%',
    'link_title' => 'Contact',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '6',
  );
  // Exported menu link: menu-cimel-de-makhana:makhana/annonces
  $menu_links['menu-cimel-de-makhana:makhana/annonces'] = array(
    'menu_name' => 'menu-cimel-de-makhana',
    'link_path' => 'makhana/annonces',
    'router_path' => 'makhana/annonces',
    'link_title' => 'Annonces',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '2',
  );
  // Exported menu link: menu-cimel-de-makhana:makhana/formations
  $menu_links['menu-cimel-de-makhana:makhana/formations'] = array(
    'menu_name' => 'menu-cimel-de-makhana',
    'link_path' => 'makhana/formations',
    'router_path' => 'makhana/formations',
    'link_title' => 'Formations',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '3',
  );
  // Exported menu link: menu-cimel-de-makhana:makhana/galerie
  $menu_links['menu-cimel-de-makhana:makhana/galerie'] = array(
    'menu_name' => 'menu-cimel-de-makhana',
    'link_path' => 'makhana/galerie',
    'router_path' => 'makhana/galerie',
    'link_title' => 'Galerie photos',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '4',
  );
  // Exported menu link: menu-cimel-de-makhana:node/11
  $menu_links['menu-cimel-de-makhana:node/11'] = array(
    'menu_name' => 'menu-cimel-de-makhana',
    'link_path' => 'node/11',
    'router_path' => 'node/%',
    'link_title' => 'Présentation',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '1',
  );
  // Exported menu link: menu-cimel-de-makhana:node/44
  $menu_links['menu-cimel-de-makhana:node/44'] = array(
    'menu_name' => 'menu-cimel-de-makhana',
    'link_path' => 'node/44',
    'router_path' => 'node/%',
    'link_title' => 'Contact',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '6',
  );
  // Exported menu link: menu-cimel-de-makhana:node/45
  $menu_links['menu-cimel-de-makhana:node/45'] = array(
    'menu_name' => 'menu-cimel-de-makhana',
    'link_path' => 'node/45',
    'router_path' => 'node/%',
    'link_title' => 'Historique',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: menu-cimel-de-makhana:node/47
  $menu_links['menu-cimel-de-makhana:node/47'] = array(
    'menu_name' => 'menu-cimel-de-makhana',
    'link_path' => 'node/47',
    'router_path' => 'node/%',
    'link_title' => 'Personnel',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '5',
  );
  // Exported menu link: menu-cimel-de-mbao:mbao/annonces
  $menu_links['menu-cimel-de-mbao:mbao/annonces'] = array(
    'menu_name' => 'menu-cimel-de-mbao',
    'link_path' => 'mbao/annonces',
    'router_path' => 'mbao/annonces',
    'link_title' => 'Annonces',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '2',
  );
  // Exported menu link: menu-cimel-de-mbao:mbao/formations
  $menu_links['menu-cimel-de-mbao:mbao/formations'] = array(
    'menu_name' => 'menu-cimel-de-mbao',
    'link_path' => 'mbao/formations',
    'router_path' => 'mbao/formations',
    'link_title' => 'Formations',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '3',
  );
  // Exported menu link: menu-cimel-de-mbao:mbao/galerie
  $menu_links['menu-cimel-de-mbao:mbao/galerie'] = array(
    'menu_name' => 'menu-cimel-de-mbao',
    'link_path' => 'mbao/galerie',
    'router_path' => 'mbao/galerie',
    'link_title' => 'Galerie photos',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '4',
  );
  // Exported menu link: menu-cimel-de-mbao:node/13
  $menu_links['menu-cimel-de-mbao:node/13'] = array(
    'menu_name' => 'menu-cimel-de-mbao',
    'link_path' => 'node/13',
    'router_path' => 'node/%',
    'link_title' => 'Historique',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: menu-cimel-de-mbao:node/14
  $menu_links['menu-cimel-de-mbao:node/14'] = array(
    'menu_name' => 'menu-cimel-de-mbao',
    'link_path' => 'node/14',
    'router_path' => 'node/%',
    'link_title' => 'Présentation',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '1',
  );
  // Exported menu link: menu-cimel-de-mbao:node/49
  $menu_links['menu-cimel-de-mbao:node/49'] = array(
    'menu_name' => 'menu-cimel-de-mbao',
    'link_path' => 'node/49',
    'router_path' => 'node/%',
    'link_title' => 'Personnel',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '5',
  );
  // Exported menu link: menu-cimel-de-mbao:node/51
  $menu_links['menu-cimel-de-mbao:node/51'] = array(
    'menu_name' => 'menu-cimel-de-mbao',
    'link_path' => 'node/51',
    'router_path' => 'node/%',
    'link_title' => 'Contact',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '6',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Annonces');
  t('Contact');
  t('Formations');
  t('Galerie photos');
  t('Historique');
  t('Personnel');
  t('Présentation');


  return $menu_links;
}
