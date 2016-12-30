<?php

/**
 * @file
 * outsell_auth.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function outsell_auth_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_sf_access_as_analyst'.
  $field_bases['field_sf_access_as_analyst'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_sf_access_as_analyst',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => '',
        1 => '',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_boolean',
  );

  // Exported field_base: 'field_sf_access_as_olc_member'.
  $field_bases['field_sf_access_as_olc_member'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_sf_access_as_olc_member',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => '',
        1 => '',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_boolean',
  );

  // Exported field_base: 'field_sf_access_community'.
  $field_bases['field_sf_access_community'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_sf_access_community',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => '',
        1 => '',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_boolean',
  );

  // Exported field_base: 'field_sf_access_companies_market'.
  $field_bases['field_sf_access_companies_market'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_sf_access_companies_market',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => '',
        1 => '',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_boolean',
  );

  // Exported field_base: 'field_sf_access_headlines'.
  $field_bases['field_sf_access_headlines'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_sf_access_headlines',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => '',
        1 => '',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_boolean',
  );

  // Exported field_base: 'field_sf_access_insight'.
  $field_bases['field_sf_access_insight'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_sf_access_insight',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => '',
        1 => '',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_boolean',
  );

  // Exported field_base: 'field_sf_access_tools'.
  $field_bases['field_sf_access_tools'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_sf_access_tools',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => '',
        1 => '',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_boolean',
  );

  // Exported field_base: 'field_sf_entitlement_end_date'.
  $field_bases['field_sf_entitlement_end_date'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_sf_entitlement_end_date',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'date',
    'settings' => array(
      'cache_count' => 4,
      'cache_enabled' => 0,
      'granularity' => array(
        'day' => 'day',
        'hour' => 0,
        'minute' => 0,
        'month' => 'month',
        'second' => 0,
        'year' => 'year',
      ),
      'timezone_db' => '',
      'todate' => '',
      'tz_handling' => 'none',
    ),
    'translatable' => 0,
    'type' => 'datestamp',
  );

  // Exported field_base: 'field_sf_entitlement_service'.
  $field_bases['field_sf_entitlement_service'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_sf_entitlement_service',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'olc' => 'OLC',
        'ols' => 'OLS',
        'mis' => 'MIS',
        'im' => 'IM',
        'insight_only' => 'Insights only',
        'im_service' => 'IM Service',
        'mis_single_or_multiple_segments' => 'MIS Single or Multiple Segments',
        'olc_start_up' => 'OLC Start-up',
        'outsell_employee' => 'Outsell Employee',
        'olc_startup' => 'OLC Startup',
        'im_service_w__mis_segment_reports' => 'IM Service w/ MIS Segment Reports',
        'signature_event_2015' => 'Signature Event 2015',
        'mis_all_w_o_im___mm_reports' => 'MIS All w/o IM & MM Reports',
        'mis_single_or_multiple_segments_w__im_reports' => 'MIS Single or Multiple Segments w/ IM Reports',
        'mis_all_w__im___mm_reports' => 'MIS All w/ IM & MM Reports',
        'olc_add_on' => 'OLC Add-on',
        'mis_complimentary_reports' => 'MIS Complimentary Reports',
        'mis_all_w__im_reports' => 'MIS All w/ IM Reports',
        'outsell_leadership_community' => 'Outsell Leadership Community',
        'mis_all_w__m_m_reports' => 'mis_all_w__m_m_reports',
        'headlines_only' => 'Headlines Only',
        'buyers_meet_sellers_2015' => 'Buyers meet Sellers 2015',
        'custom_research___consulting' => 'custom_research___consulting',
        'insights_only' => 'Insights Only',
        'outsell_leadership_council' => 'Outsell Leadership Council',
        'outsell_leadership_council_add_on' => 'Outsell Leadership Council Add-on',
        'republication_rights' => 'Republication Rights',
        'outsell_leadership_community_add_on' => 'Outsell Leadership Community Add-on',
        'mis_affiliate_access' => 'MIS Affiliate Access',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_sf_entitlement_start_date'.
  $field_bases['field_sf_entitlement_start_date'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_sf_entitlement_start_date',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'date',
    'settings' => array(
      'cache_count' => 4,
      'cache_enabled' => 0,
      'granularity' => array(
        'day' => 'day',
        'hour' => 0,
        'minute' => 0,
        'month' => 'month',
        'second' => 0,
        'year' => 'year',
      ),
      'timezone_db' => '',
      'todate' => '',
      'tz_handling' => 'none',
    ),
    'translatable' => 0,
    'type' => 'datestamp',
  );

  // Exported field_base: 'field_sf_id'.
  $field_bases['field_sf_id'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_sf_id',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_sf_online_segment_access'.
  $field_bases['field_sf_online_segment_access'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_sf_online_segment_access',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'b2b' => 'b2b',
        'marketing___media' => 'marketing___media',
        'c_f_grc' => 'c_f_grc',
        'e_t' => 'e_t',
        'library' => 'Library',
        'ltr_grc' => 'ltr_grc',
        'stm' => 'stm',
        'all_segments' => 'all_segments',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_sf_segment_preferences'.
  $field_bases['field_sf_segment_preferences'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_sf_segment_preferences',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'olc' => 'OLC',
        'b2b' => 'b2b',
        'c_f_grc' => 'c_f_grc',
        'ltr_grc' => 'ltr_grc',
        'stm' => 'STM',
        'e_t' => 'e_t',
        'library' => 'Library',
        'marketing___media__mm_' => 'Marketing & Media (MM)',
        'all_segments' => 'All Segments',
        'media___marketing__mm_' => 'media___marketing__mm_',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_sf_website_user_interface'.
  $field_bases['field_sf_website_user_interface'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_sf_website_user_interface',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'olc' => 'OLC',
        'ols' => 'OLS',
        'mis' => 'MIS',
        'cdo' => 'CDO',
        'im' => 'IM',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  return $field_bases;
}
