<?php
/**
 * @file
 * imagecontent.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function imagecontent_ctools_plugin_api() {
  return array("version" => "1");
}

/**
 * Implements hook_node_info().
 */
function imagecontent_node_info() {
  $items = array(
    'image' => array(
      'name' => t('image'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('ImageTitle'),
      'help' => '',
    ),
  );
  return $items;
}
