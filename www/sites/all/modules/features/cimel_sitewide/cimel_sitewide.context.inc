<?php
/**
 * @file
 * cimel_sitewide.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function cimel_sitewide_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'cimel_sitewide';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-livre-d-or' => array(
          'module' => 'menu',
          'delta' => 'menu-livre-d-or',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'views-activit_s_en_cours-block' => array(
          'module' => 'views',
          'delta' => 'activit_s_en_cours-block',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'comment-recent' => array(
          'module' => 'comment',
          'delta' => 'recent',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'menu-menu-activit-s-en-cours' => array(
          'module' => 'menu',
          'delta' => 'menu-activit-s-en-cours',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'menu-menu-multim-dias' => array(
          'module' => 'menu',
          'delta' => 'menu-multim-dias',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'menu-menu-cimel-de-mbao' => array(
          'module' => 'menu',
          'delta' => 'menu-cimel-de-mbao',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'menu-menu-cimel-de-makhana' => array(
          'module' => 'menu',
          'delta' => 'menu-cimel-de-makhana',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'menu-menu-cimel-de-dahra' => array(
          'module' => 'menu',
          'delta' => 'menu-cimel-de-dahra',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['cimel_sitewide'] = $context;

  return $export;
}
