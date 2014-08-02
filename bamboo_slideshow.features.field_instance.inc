<?php
/**
 * @file
 * bamboo_slideshow.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function bamboo_slideshow_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-bamboo_featured-body'
  $field_instances['node-bamboo_featured-body'] = array(
    'bundle' => 'bamboo_featured',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '<p><b>Use this field only if you will be using the "Link to Self Slideshow Block". Do not use this field if you are using the "Content Link Reference" option below.</b></p>',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'semantic_field_format' => '',
        ),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Page Content',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'code' => 'code',
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'php_code' => 'php_code',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'code' => array(
              'weight' => 0,
            ),
            'filtered_html' => array(
              'weight' => 0,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'php_code' => array(
              'weight' => 11,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
          ),
        ),
      ),
      'display_summary' => 1,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 6,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-bamboo_featured-field_content_link_reference'
  $field_instances['node-bamboo_featured-field_content_link_reference'] = array(
    'bundle' => 'bamboo_featured',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '<p><b>This is an internal link to another piece of content in your site. Start to type the title of a node and autocomplete will present suggestions. Use this option for the <em>"Content Reference"</em> block style.  As a default, the "Page" and "Article" content types are available for reference but you can also add your own content types by editing the field.</b></p>

<p>Do not use this field if you are using the "Page Content" field above.</p>',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_content_link_reference',
    'label' => 'Content Link Reference',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-bamboo_featured-field_slide_image'
  $field_instances['node-bamboo_featured-field_slide_image'] = array(
    'bundle' => 'bamboo_featured',
    'deleted' => 0,
    'description' => '<p><b>Upload an image for the slideshow. Minimum size should be 960px wide by 400px high.</b></p>',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_slide_image',
    'label' => 'Slide Image',
    'required' => 1,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'filefield_paths' => array(
        'active_updating' => 0,
        'file_name' => array(
          'options' => array(
            'pathauto' => 0,
            'transliterate' => 0,
          ),
          'value' => '[file:ffp-name-only-original].[file:ffp-extension-original]',
        ),
        'file_path' => array(
          'options' => array(
            'pathauto' => 0,
            'transliterate' => 0,
          ),
          'value' => '',
        ),
        'retroactive_update' => 0,
      ),
      'max_filesize' => '1 MB',
      'max_resolution' => '',
      'min_resolution' => '960x400',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'insert' => 0,
        'insert_absolute' => FALSE,
        'insert_class' => '',
        'insert_default' => array(
          0 => 'auto',
        ),
        'insert_styles' => array(
          0 => 'auto',
        ),
        'insert_width' => '',
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-bamboo_featured-field_slide_text'
  $field_instances['node-bamboo_featured-field_slide_text'] = array(
    'bundle' => 'bamboo_featured',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '<p><b>Enter some slide text. This shows up in the slideshow only. Ideally keep this to about 100 characters in length. The slideshow truncates anything longer.</b></p>',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_slide_text',
    'label' => 'Slide Text',
    'required' => 1,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'code' => 'code',
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'php_code' => 'php_code',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'code' => array(
              'weight' => 0,
            ),
            'filtered_html' => array(
              'weight' => 0,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'php_code' => array(
              'weight' => 11,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
          ),
        ),
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('<p><b>Enter some slide text. This shows up in the slideshow only. Ideally keep this to about 100 characters in length. The slideshow truncates anything longer.</b></p>');
  t('<p><b>This is an internal link to another piece of content in your site. Start to type the title of a node and autocomplete will present suggestions. Use this option for the <em>"Content Reference"</em> block style.  As a default, the "Page" and "Article" content types are available for reference but you can also add your own content types by editing the field.</b></p>

<p>Do not use this field if you are using the "Page Content" field above.</p>');
  t('<p><b>Upload an image for the slideshow. Minimum size should be 960px wide by 400px high.</b></p>');
  t('<p><b>Use this field only if you will be using the "Link to Self Slideshow Block". Do not use this field if you are using the "Content Link Reference" option below.</b></p>');
  t('Content Link Reference');
  t('Page Content');
  t('Slide Image');
  t('Slide Text');

  return $field_instances;
}
