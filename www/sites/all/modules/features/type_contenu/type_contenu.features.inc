<?php
/**
 * @file
 * type_contenu.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function type_contenu_ctools_plugin_api() {
  return array("version" => "1");
}

/**
 * Implements hook_node_info().
 */
function type_contenu_node_info() {
  $items = array(
    'activit_s_en_cours' => array(
      'name' => t('Activités en cours'),
      'base' => 'node_content',
      'description' => t('activités, projets en cours'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'article' => array(
      'name' => t('Article'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'formations' => array(
      'name' => t('Formations'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
