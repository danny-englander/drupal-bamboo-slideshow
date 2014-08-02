<?php
/**
 * @file
 * bamboo_slideshow.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function bamboo_slideshow_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "flexslider" && $api == "flexslider_default_preset") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function bamboo_slideshow_node_info() {
  $items = array(
    'bamboo_featured' => array(
      'name' => t('Bamboo Featured'),
      'base' => 'node_content',
      'description' => t('A custom content for displaying content in a slideshow. '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
