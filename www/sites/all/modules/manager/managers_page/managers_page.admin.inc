<?php

/**
 * @file
 * Administrative functions
 */

/**
 * Function to render the /admin page. Modified version of the one in system.admin.inc
 */
function managers_page_main_admin_page($arg = NULL) {
  // If we received an argument, they probably meant some other page.
  // Let's 404 them since the menu system cannot be told we do not
  // accept arguments.
  if (isset($arg) && drupal_substr($arg, 0, 3) != 'by-') {
    return drupal_not_found();
  }

  module_load_include('inc', 'system', 'system.admin');
  // Check for status report errors.
  // TODO: Check permissions for reports
  if (system_status(TRUE) && user_access('administer site configuration')) {
    drupal_set_message(t('One or more problems were detected with your Drupal installation. Check the <a href="@status">status report</a> for more information.', array('@status' => url('admin/reports/status'))), 'error');
  }
  $blocks = array();
  if ($admin = db_fetch_array(db_query("SELECT menu_name, mlid FROM {menu_links} WHERE link_path = :link_path AND module = :module", array(':link_path' => 'admin', ':module' => 'system')))) {
    $result = db_query("
      SELECT m.*, ml.*
      FROM {menu_links} ml
      INNER JOIN {menu_router} m ON ml.router_path = m.path
      WHERE ml.link_path != 'admin/help' AND menu_name = '%s' AND ml.plid = %d AND hidden = 0", $admin);
    while ($item = db_fetch_array($result)) {
      _menu_link_translate($item);
      if (!$item['access']) {
        continue;
      }
      // The link 'description' either derived from the hook_menu 'description'
      // or entered by the user via menu module is saved as the title attribute.
      if (!empty($item['localized_options']['attributes']['title'])) {
        $item['description'] = $item['localized_options']['attributes']['title'];
      }
      $block = $item;
      $block['content'] = '';
      if ($item['block_callback'] && function_exists($item['block_callback'])) {
        $function = $item['block_callback'];
        $block['content'] .= $function();
      }
      if ($item['path'] == 'admin/content') {
        $block['content'] .= theme('managers_page_block_content', array('content' => managers_page_menu_block($item)));
        $block['content'] .= theme('admin_block_content', array('content' => managers_page_menu_block($item, TRUE)));
      }
      else {
        $block['content'] .= theme('admin_block_content', array('content' => managers_page_menu_block($item)));
      }
      // Prepare for sorting as in function _menu_tree_check_access().
      // The weight is offset so it is always positive, with a uniform 5-digits.
      $blocks[(50000 + $item['weight']) . ' ' . $item['title'] . ' ' . $item['mlid']] = $block;
    }
  }
  if ($blocks) {
    ksort($blocks);
    return theme('admin_page', array('blocks' => $blocks));
  }
  else {
    return t('You do not have any administrative items.');
  }
}

/**
 * Wrapper to modify admin system blocks before theming
 * @params
 *   item - Block to be themed
 *   old - Retrieve the original block content.
 */
function managers_page_menu_block($item, $old = FALSE) {
  switch ($item['path']) {
    case 'admin/content':
      if (!$old) {
        return managers_page_get_items('content');
      }
      $block = system_admin_menu_block($item);
      foreach ($block as $key => $link) {
        if ($link['link_path'] == 'admin/content/add' || $link['link_path'] == 'admin/content/comment') {
          unset($block[$key]);
        }
      }
      return $block;
    default:
      return system_admin_menu_block($item);
  }
}

/**
 * Based on slate_admin_block_content (from Admin module)
 */
function theme_managers_page_block_content($variables) {
  $content = $variables['content'];
  $get_runstate = $variables['get_runstate'];
  static $has_run = FALSE;
  if ($get_runstate) {
    return $has_run;
  }
  $has_run = TRUE;
  $output = '';
  if (!empty($content)) {
    foreach ($content as $k => $item) {
      if ($item['add']) {
        $item['href'] = $item['add'];
      }
      elseif ($item['manage']) {
        $item['href'] = $item['manage'];
      }
      $id = str_replace('/', '-', $item['href']);
      $type = str_replace(array('node-add-', 'admin-content-node-'), '', $id);

      if ($id == 'admin-content-comment') {
        $class = 'manager-comment';
      }
      else {
        $class = 'manager-node-' . $type;
      }
      $content[$k]['class'] = $class;

      $content[$k]['title'] = "<span class='icon'></span>{$item['title']}";
      $content[$k]['localized_options']['html'] = TRUE;
      if (!empty($content[$k]['localized_options']['attributes']['class'])) {
        $content[$k]['localized_options']['attributes']['class'] .= $class;
      }
      else {
        $content[$k]['localized_options']['attributes']['class'] = $class;
      }
    }
    $outputl = '';
    foreach ($content as $item) {
      if (!system_admin_compact_mode()) {
        $title = isset($item['href']) ? l($item['title'], $item['href'], $item['localized_options']) : $item['title'];
      }
      else {
        $title = isset($item['manage']) ? l($item['title'], $item['manage'], $item['localized_options']) : $item['title'];
      }
      $manage = isset($item['manage']) ? '<li class="manage">' . l(t('Manage'), $item['manage']) . '</li>' : '';
      $add = isset($item['add']) ? '<li class="add">' . l(t('Add'), $item['add']) . '</li>' : '';
      $desc = !system_admin_compact_mode() ? "<div class='description'>{$item['description']}</div>" : '';
      if (!empty($manage) || !empty($add)) {
        $outputl .= '<li class="leaf ' . $item['class'] . '">' . $title . $desc;
        if (!system_admin_compact_mode()) {
          $outputl .= '<div class="extra-links"><ul>' . $add . $manage . '</ul></div>';
        }
        $outputl .= '</li>';
      }
    }
    if (!empty($outputl)) {
      $output = system_admin_compact_mode() ? '<ul class="menu">' : '<ul class="admin-list">';
      $output .= $outputl . '</ul>';
      $output = '<div id="managers-page" class="manager">' . $output . '</div>';
    }
  }
  return $output;
}
