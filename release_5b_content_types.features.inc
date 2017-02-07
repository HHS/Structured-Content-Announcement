<?php
/**
 * @file
 * release_5b_content_types.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function release_5b_content_types_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function release_5b_content_types_node_info() {
  $items = array(
    'announcement' => array(
      'name' => t('Announcement'),
      'base' => 'node_content',
      'description' => t('Used for all announcements on HHS.gov.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_rdf_default_mappings().
 */
function release_5b_content_types_rdf_default_mappings() {
  $schemaorg = array();

  // Exported RDF mapping: announcement
  $schemaorg['node']['announcement'] = array(
    'rdftype' => array(
      0 => 'schema:NewsArticle',
      1 => 'sioc:Item',
      2 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'schema:name',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'schema:articleBody',
        1 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'schema:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'field_full_title' => array(
      'predicates' => array(
        0 => 'schema:headline',
      ),
    ),
    'field_news_subheadline' => array(
      'predicates' => array(),
    ),
    'field_news_ontact_office' => array(
      'predicates' => array(),
    ),
    'field_phone_number' => array(
      'predicates' => array(),
    ),
    'url' => array(
      'predicates' => array(
        0 => 'schema:url',
      ),
      'type' => 'rel',
    ),
    'field_contact_office_email' => array(
      'predicates' => array(),
    ),
    'field_news_date_published' => array(
      'predicates' => array(
        0 => 'schema:datePublished',
      ),
    ),
    'field_announcement_type' => array(
      'predicates' => array(),
    ),
    'field_link_to_pdf_or_external_ne' => array(
      'predicates' => array(),
    ),
    'field_news_description' => array(
      'predicates' => array(
        0 => 'schema:summary',
        1 => 'schema:description',
      ),
    ),
    'field_categorized' => array(
      'predicates' => array(
        0 => 'schema:about',
      ),
      'type' => 'rel',
    ),
    'field_audience' => array(
      'predicates' => array(),
      'type' => 'rel',
    ),
    'field_date_created' => array(
      'predicates' => array(
        0 => 'schema:dateCreated',
      ),
    ),
    'field_date_last_modfied' => array(
      'predicates' => array(
        0 => 'schema:dateModified',
      ),
    ),
    'field_created_by' => array(
      'predicates' => array(
        0 => 'schema:sourceOrganization',
      ),
      'type' => 'rel',
    ),
    'field_detailed_description' => array(
      'predicates' => array(
        0 => 'schema:summary',
        1 => 'schema:description',
      ),
    ),
    'field_ann_type' => array(
      'predicates' => array(),
    ),
    'field_ann_link_to_pdf' => array(
      'predicates' => array(),
    ),
    'field_test_desc' => array(
      'predicates' => array(),
    ),
  );

  // Exported RDF mapping: meeting
  $schemaorg['node']['meeting'] = array(
    'rdftype' => array(
      0 => 'schema:Article',
      1 => 'sioc:Item',
      2 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'schema:name',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'schema:articleBody',
        1 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'schema:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'field_long_title' => array(
      'predicates' => array(
        0 => 'schema:title',
      ),
    ),
    'field_news_description' => array(
      'predicates' => array(
        0 => 'schema:summary',
        1 => 'schema:description',
      ),
    ),
    'url' => array(
      'predicates' => array(
        0 => 'schema:url',
      ),
      'type' => 'rel',
    ),
    'field_meeting_location' => array(
      'predicates' => array(),
    ),
    'field_meeting_start_date' => array(
      'predicates' => array(),
    ),
    'field_meeting_end_date' => array(
      'predicates' => array(),
    ),
    'field_meeting_call_in_number' => array(
      'predicates' => array(),
    ),
    'field_international_number' => array(
      'predicates' => array(),
    ),
    'field_participant_passcode' => array(
      'predicates' => array(),
    ),
    'field_meeting_webcast_link' => array(
      'predicates' => array(),
    ),
    'field_meeting_agenda' => array(
      'predicates' => array(
        0 => 'schema:articleBody',
      ),
    ),
    'field_meeting_minutes' => array(
      'predicates' => array(),
    ),
    'field_categorized' => array(
      'predicates' => array(),
      'type' => 'rel',
    ),
    'field_audience' => array(
      'predicates' => array(),
      'type' => 'rel',
    ),
    'field_date_created' => array(
      'predicates' => array(
        0 => 'schema:dateCreated',
      ),
    ),
    'field_date_last_modfied' => array(
      'predicates' => array(
        0 => 'schema:dateModified',
      ),
    ),
    'field_created_by' => array(
      'predicates' => array(
        0 => 'schema:sourceOrganization',
      ),
      'type' => 'rel',
    ),
    'field_meeting_materials' => array(
      'predicates' => array(),
    ),
    'field_full_title' => array(
      'predicates' => array(
        0 => 'schema:title',
      ),
    ),
    'field_detailed_description' => array(
      'predicates' => array(
        0 => 'schema:summary',
        1 => 'schema:description',
      ),
    ),
    'field_meeting_intl_number' => array(
      'predicates' => array(),
    ),
    'field_meeting_participant_code' => array(
      'predicates' => array(),
    ),
    'field_desc' => array(
      'predicates' => array(),
    ),
  );

  // Exported RDF mapping: office
  $schemaorg['node']['office'] = array(
    'rdftype' => array(
      0 => 'schema:GovernmentOrganization',
      1 => 'sioc:Item',
      2 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'schema:name',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'schema:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'field_office_name' => array(
      'predicates' => array(
        0 => 'schema:name',
      ),
    ),
    'url' => array(
      'predicates' => array(
        0 => 'schema:url',
      ),
      'type' => 'rel',
    ),
    'field_acronym' => array(
      'predicates' => array(),
    ),
    'field_website_url' => array(
      'predicates' => array(),
    ),
    'field_logo' => array(
      'predicates' => array(
        0 => 'schema:logo',
      ),
      'type' => 'rel',
    ),
    'field_news_description' => array(
      'predicates' => array(
        0 => 'schema:summary',
        1 => 'schema:description',
      ),
    ),
    'field_staffdiv_contact_us_page' => array(
      'predicates' => array(),
    ),
    'field_leadership' => array(
      'predicates' => array(
        0 => 'schema:employee',
      ),
    ),
    'field_staffdiv_org_chart' => array(
      'predicates' => array(),
    ),
    'field_date_created' => array(
      'predicates' => array(
        0 => 'schema:dateCreated',
      ),
    ),
    'field_date_last_modfied' => array(
      'predicates' => array(
        0 => 'schema:dateModified',
      ),
    ),
    'field_created_by' => array(
      'predicates' => array(
        0 => 'schema:sourceOrganization',
      ),
      'type' => 'rel',
    ),
    'field_topic_created_by' => array(
      'predicates' => array(),
      'type' => 'rel',
    ),
    'field_detailed_description' => array(
      'predicates' => array(
        0 => 'schema:summary',
        1 => 'schema:description',
      ),
    ),
    'field_organization_chart' => array(
      'predicates' => array(),
    ),
    'field_office_external_leadership' => array(
      'predicates' => array(),
    ),
  );

  return $schemaorg;
}
