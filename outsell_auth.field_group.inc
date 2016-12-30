<?php

/**
 * @file
 * outsell_auth.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function outsell_auth_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sf_entitlements|user|user|form';
  $field_group->group_name = 'group_sf_entitlements';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Salesforce Entitlements',
    'weight' => '29',
    'children' => array(
      0 => 'field_sf_access_as_analyst',
      1 => 'field_sf_access_as_olc_member',
      2 => 'field_sf_access_community',
      3 => 'field_sf_access_companies_market',
      4 => 'field_sf_access_headlines',
      5 => 'field_sf_access_insight',
      6 => 'field_sf_access_tools',
      7 => 'field_sf_entitlement_start_date',
      8 => 'field_sf_entitlement_end_date',
      9 => 'field_sf_entitlement_service',
      10 => 'field_sf_segment_preferences',
      11 => 'field_sf_online_segment_access',
      12 => 'field_sf_id',
      13 => 'field_sf_website_user_interface',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Salesforce Entitlements',
      'instance_settings' => array(
        'required_fields' => 0,
        'id' => '',
        'classes' => 'group-sf-entitlements field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_sf_entitlements|user|user|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Salesforce Entitlements');

  return $field_groups;
}
