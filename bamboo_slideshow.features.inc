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
 * Implements hook_image_default_styles().
 */
function bamboo_slideshow_image_default_styles() {
  $styles = array();

  // Exported image style: flexslider_image.
  $styles['flexslider_image'] = array(
    'name' => 'flexslider_image',
    'label' => 'Flexslider Image',
    'effects' => array(
      1 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 960,
          'height' => 400,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
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
