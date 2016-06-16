<?php
/**
 * @file
 * my_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function my_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}
