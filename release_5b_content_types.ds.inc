<?php
/**
 * @file
 * release_5b_content_types.ds.inc
 */

/**
 * Implements hook_ds_custom_fields_info().
 */
function release_5b_content_types_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'full_title_as_h1';
  $ds_field->label = 'Full title as H1';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<?php
if (!empty($entity->field_full_title))
print "<h1>".$entity->field_full_title[und][0][\'value\']."</h1>";
?>',
      'format' => 'ds_code',
    ),
    'use_token' => 0,
  );
  $export['full_title_as_h1'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function release_5b_content_types_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|announcement|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'announcement';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'header' => array(
        0 => 'field_full_title',
      ),
      'left' => array(
        1 => 'field_news_ontact_office',
      ),
      'right' => array(
        2 => 'field_news_date_published',
      ),
      'footer' => array(
        3 => 'body',
        4 => 'field_news_subheadline',
      ),
    ),
    'fields' => array(
      'field_full_title' => 'header',
      'field_news_ontact_office' => 'left',
      'field_news_date_published' => 'right',
      'body' => 'footer',
      'field_news_subheadline' => 'footer',
    ),
    'classes' => array(),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'right' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
    'hide_page_title' => '0',
    'page_option_title' => '',
  );
  $export['node|announcement|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|announcement|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'announcement';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'bootstrap_6_6_stacked';
  $ds_layout->settings = array(
    'hide_page_title' => '2',
    'page_option_title' => '%node:field_full_title',
    'regions' => array(
      'top' => array(
        0 => 'body',
        1 => 'field_full_title',
        2 => 'field_news_subheadline',
        3 => 'field_news_ontact_office',
        4 => 'field_phone_number',
        5 => 'field_contact_office_email',
        6 => 'field_news_date_published',
        7 => 'field_categorized',
        8 => 'field_audience',
        9 => 'field_date_created',
        10 => 'field_date_last_modfied',
        11 => 'field_created_by',
        12 => 'field_detailed_description',
        13 => 'field_ann_type',
        14 => 'field_ann_link_to_pdf',
      ),
    ),
    'fields' => array(
      'body' => 'top',
      'field_full_title' => 'top',
      'field_news_subheadline' => 'top',
      'field_news_ontact_office' => 'top',
      'field_phone_number' => 'top',
      'field_contact_office_email' => 'top',
      'field_news_date_published' => 'top',
      'field_categorized' => 'top',
      'field_audience' => 'top',
      'field_date_created' => 'top',
      'field_date_last_modfied' => 'top',
      'field_created_by' => 'top',
      'field_detailed_description' => 'top',
      'field_ann_type' => 'top',
      'field_ann_link_to_pdf' => 'top',
    ),
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['node|announcement|full'] = $ds_layout;

  return $export;
}
