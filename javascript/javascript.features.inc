<?php
/**
 * @file
 * javascript.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function javascript_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "js_injector" && $api == "js_injector_rules") {
    return array("version" => "1");
  }
}
