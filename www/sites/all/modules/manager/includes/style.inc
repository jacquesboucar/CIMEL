<?php

/**
 * @file
 */

/**
 * Generates the style using the hook_manager_styles()
 */
function manager_style() {
  // Get the information from sub-modules
  $styles = module_invoke_all('manager_style');

  // Get the rules
  if (isset($styles['rules'])) {
    $rules = implode(",\n", $styles['rules']);
  }

  // Get the properties
  if (isset($styles['properties'])) {
    $extra_props = implode(";\n  ", $styles['properties']);
  }

  // Generate CSS
  $content = $rules . " {\n" . "  background: url(%URL) 0 0 no-repeat;\n";
  $content .= empty($extra_props) ? "}\n" : "  " . $extra_props . "\n}\n";
  return $content;
}
