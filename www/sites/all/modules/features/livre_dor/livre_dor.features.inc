<?php
/**
 * @file
 * livre_dor.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function livre_dor_ctools_plugin_api() {
  return array("version" => "1");
}

/**
 * Implements hook_node_info().
 */
function livre_dor_node_info() {
  $items = array(
    'livre' => array(
      'name' => t('livre d\'or'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
