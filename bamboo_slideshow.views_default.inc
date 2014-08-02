<?php
/**
 * @file
 * bamboo_slideshow.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function bamboo_slideshow_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'featured_slideshow';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Featured Slideshow';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Views Preview Block';
  $handler->display->display_options['css_class'] = 'bamboo-slideshow';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['flexslider_views_slideshow']['optionset'] = 'bamboo_settings';
  $handler->display->display_options['style_options']['slideshow_type'] = 'flexslider_views_slideshow';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'title' => 0,
    'field_slide_image' => 0,
    'field_slide_text' => 0,
    'field_content_link_reference' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'title' => 0,
    'field_slide_image' => 0,
    'field_slide_text' => 0,
    'field_content_link_reference' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['hide_on_single_slide'] = 1;
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Slide Image */
  $handler->display->display_options['fields']['field_slide_image']['id'] = 'field_slide_image';
  $handler->display->display_options['fields']['field_slide_image']['table'] = 'field_data_field_slide_image';
  $handler->display->display_options['fields']['field_slide_image']['field'] = 'field_slide_image';
  $handler->display->display_options['fields']['field_slide_image']['label'] = '';
  $handler->display->display_options['fields']['field_slide_image']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_slide_image']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_slide_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slide_image']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_slide_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_slide_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_slide_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Slide Text */
  $handler->display->display_options['fields']['field_slide_text']['id'] = 'field_slide_text';
  $handler->display->display_options['fields']['field_slide_text']['table'] = 'field_data_field_slide_text';
  $handler->display->display_options['fields']['field_slide_text']['field'] = 'field_slide_text';
  $handler->display->display_options['fields']['field_slide_text']['label'] = '';
  $handler->display->display_options['fields']['field_slide_text']['alter']['max_length'] = '120';
  $handler->display->display_options['fields']['field_slide_text']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_slide_text']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_slide_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slide_text']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_slide_text']['type'] = 'text_plain';
  /* Field: Content: Content Link Reference */
  $handler->display->display_options['fields']['field_content_link_reference']['id'] = 'field_content_link_reference';
  $handler->display->display_options['fields']['field_content_link_reference']['table'] = 'field_data_field_content_link_reference';
  $handler->display->display_options['fields']['field_content_link_reference']['field'] = 'field_content_link_reference';
  $handler->display->display_options['fields']['field_content_link_reference']['label'] = '';
  $handler->display->display_options['fields']['field_content_link_reference']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_content_link_reference']['alter']['text'] = '<a href="/node/[field_content_link_reference]">Read more...</a>';
  $handler->display->display_options['fields']['field_content_link_reference']['element_type'] = '0';
  $handler->display->display_options['fields']['field_content_link_reference']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_content_link_reference']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_content_link_reference']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_content_link_reference']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_content_link_reference']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_content_link_reference']['settings'] = array(
    'view_mode' => 'full',
    'links' => 1,
  );
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_type'] = '0';
  $handler->display->display_options['fields']['view_node']['element_label_type'] = '0';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['view_node']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['view_node']['text'] = 'read more...';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'bamboo_featured' => 'bamboo_featured',
  );

  /* Display: Views Preview Block */
  $handler = $view->new_display('block', 'Views Preview Block', 'block');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Slide Image */
  $handler->display->display_options['fields']['field_slide_image']['id'] = 'field_slide_image';
  $handler->display->display_options['fields']['field_slide_image']['table'] = 'field_data_field_slide_image';
  $handler->display->display_options['fields']['field_slide_image']['field'] = 'field_slide_image';
  $handler->display->display_options['fields']['field_slide_image']['label'] = '';
  $handler->display->display_options['fields']['field_slide_image']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_slide_image']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_slide_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slide_image']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_slide_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_slide_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_slide_image']['settings'] = array(
    'image_style' => 'flexslider_image',
    'image_link' => '',
  );
  /* Field: Content: Slide Text */
  $handler->display->display_options['fields']['field_slide_text']['id'] = 'field_slide_text';
  $handler->display->display_options['fields']['field_slide_text']['table'] = 'field_data_field_slide_text';
  $handler->display->display_options['fields']['field_slide_text']['field'] = 'field_slide_text';
  $handler->display->display_options['fields']['field_slide_text']['label'] = '';
  $handler->display->display_options['fields']['field_slide_text']['alter']['max_length'] = '120';
  $handler->display->display_options['fields']['field_slide_text']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_slide_text']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_slide_text']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_slide_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slide_text']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_slide_text']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_slide_text']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_slide_text']['type'] = 'text_plain';
  /* Field: Content: Content Link Reference */
  $handler->display->display_options['fields']['field_content_link_reference']['id'] = 'field_content_link_reference';
  $handler->display->display_options['fields']['field_content_link_reference']['table'] = 'field_data_field_content_link_reference';
  $handler->display->display_options['fields']['field_content_link_reference']['field'] = 'field_content_link_reference';
  $handler->display->display_options['fields']['field_content_link_reference']['label'] = '';
  $handler->display->display_options['fields']['field_content_link_reference']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_content_link_reference']['alter']['text'] = '<a href="/node/[field_content_link_reference]">Read more...</a>';
  $handler->display->display_options['fields']['field_content_link_reference']['element_type'] = '0';
  $handler->display->display_options['fields']['field_content_link_reference']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_content_link_reference']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_content_link_reference']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_content_link_reference']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_content_link_reference']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_content_link_reference']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_content_link_reference']['settings'] = array(
    'view_mode' => 'full',
    'links' => 1,
  );
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_type'] = '0';
  $handler->display->display_options['fields']['view_node']['element_label_type'] = '0';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['view_node']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['view_node']['text'] = 'read more...';

  /* Display: Content Reference Slideshow Block */
  $handler = $view->new_display('block', 'Content Reference Slideshow Block', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Slideshow';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['class'] = 'slides';
  $handler->display->display_options['style_options']['wrapper_class'] = 'flexslider';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'bamboo-slideshow-title';
  $handler->display->display_options['fields']['title']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Slide Image */
  $handler->display->display_options['fields']['field_slide_image']['id'] = 'field_slide_image';
  $handler->display->display_options['fields']['field_slide_image']['table'] = 'field_data_field_slide_image';
  $handler->display->display_options['fields']['field_slide_image']['field'] = 'field_slide_image';
  $handler->display->display_options['fields']['field_slide_image']['label'] = '';
  $handler->display->display_options['fields']['field_slide_image']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_slide_image']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_slide_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slide_image']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_slide_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_slide_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Slide Text */
  $handler->display->display_options['fields']['field_slide_text']['id'] = 'field_slide_text';
  $handler->display->display_options['fields']['field_slide_text']['table'] = 'field_data_field_slide_text';
  $handler->display->display_options['fields']['field_slide_text']['field'] = 'field_slide_text';
  $handler->display->display_options['fields']['field_slide_text']['label'] = '';
  $handler->display->display_options['fields']['field_slide_text']['alter']['max_length'] = '110';
  $handler->display->display_options['fields']['field_slide_text']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_slide_text']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_slide_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slide_text']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['field_slide_text']['element_wrapper_class'] = 'bamboo-slideshow-slide-text';
  $handler->display->display_options['fields']['field_slide_text']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_slide_text']['type'] = 'text_plain';
  /* Field: Content: Content Link Reference */
  $handler->display->display_options['fields']['field_content_link_reference']['id'] = 'field_content_link_reference';
  $handler->display->display_options['fields']['field_content_link_reference']['table'] = 'field_data_field_content_link_reference';
  $handler->display->display_options['fields']['field_content_link_reference']['field'] = 'field_content_link_reference';
  $handler->display->display_options['fields']['field_content_link_reference']['label'] = '';
  $handler->display->display_options['fields']['field_content_link_reference']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_content_link_reference']['alter']['text'] = '<a href="/node/[field_content_link_reference]">Read more...</a>';
  $handler->display->display_options['fields']['field_content_link_reference']['element_type'] = '0';
  $handler->display->display_options['fields']['field_content_link_reference']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_content_link_reference']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_content_link_reference']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['field_content_link_reference']['element_wrapper_class'] = 'bamboo-slideshow-read-more';
  $handler->display->display_options['fields']['field_content_link_reference']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_content_link_reference']['settings'] = array(
    'view_mode' => 'full',
    'links' => 1,
  );

  /* Display: Link-to-self Slideshow Block */
  $handler = $view->new_display('block', 'Link-to-self Slideshow Block', 'block_2');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'bamboo-slideshow-title';
  $handler->display->display_options['fields']['title']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Slide Image */
  $handler->display->display_options['fields']['field_slide_image']['id'] = 'field_slide_image';
  $handler->display->display_options['fields']['field_slide_image']['table'] = 'field_data_field_slide_image';
  $handler->display->display_options['fields']['field_slide_image']['field'] = 'field_slide_image';
  $handler->display->display_options['fields']['field_slide_image']['label'] = '';
  $handler->display->display_options['fields']['field_slide_image']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_slide_image']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_slide_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slide_image']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_slide_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_slide_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Slide Text */
  $handler->display->display_options['fields']['field_slide_text']['id'] = 'field_slide_text';
  $handler->display->display_options['fields']['field_slide_text']['table'] = 'field_data_field_slide_text';
  $handler->display->display_options['fields']['field_slide_text']['field'] = 'field_slide_text';
  $handler->display->display_options['fields']['field_slide_text']['label'] = '';
  $handler->display->display_options['fields']['field_slide_text']['alter']['max_length'] = '120';
  $handler->display->display_options['fields']['field_slide_text']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_slide_text']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_slide_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slide_text']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['field_slide_text']['element_wrapper_class'] = 'bamboo-slideshow-slide-text';
  $handler->display->display_options['fields']['field_slide_text']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_slide_text']['type'] = 'text_plain';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_type'] = '0';
  $handler->display->display_options['fields']['view_node']['element_label_type'] = '0';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['view_node']['element_wrapper_class'] = 'bamboo-slideshow-read-more';
  $handler->display->display_options['fields']['view_node']['text'] = 'read more...';
  $export['featured_slideshow'] = $view;

  return $export;
}
