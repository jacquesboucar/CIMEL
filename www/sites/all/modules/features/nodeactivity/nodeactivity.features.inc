<?php
/**
 * @file
 * nodeactivity.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function nodeactivity_ctools_plugin_api() {
  return array("version" => "1");
}

/**
 * Implements hook_node_info().
 */
function nodeactivity_node_info() {
  $items = array(
    'activit_s_en_cours' => array(
      'name' => t('Activités en cours'),
      'base' => 'node_content',
      'description' => t('activités, projets en cours'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
