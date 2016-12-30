<?php

/**
 * @file
 * outsell_auth.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function outsell_auth_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auth0_allow_signup';
  $strongarm->value = 0;
  $export['auth0_allow_signup'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auth0_auto_register';
  $strongarm->value = 1;
  $export['auth0_auto_register'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auth0_claim_mapping';
  $strongarm->value = 'entitlement_service|field_sf_entitlement_service
    segment_prefs|field_sf_segment_preferences
    online_content_access_segments|field_sf_online_segment_access
    analyst_access|field_sf_access_as_analyst
    community|field_sf_access_community
    companies_markets|field_sf_access_companies_market
    headlines|field_sf_access_headlines
    insights|field_sf_access_insight
    tools|field_sf_access_tools
    start_date|field_sf_entitlement_start_date
    end_date|field_sf_entitlement_end_date
    salesforce_id|field_sf_id
    web_ui|field_sf_website_user_interface';
  $export['auth0_claim_mapping'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auth0_claim_to_use_for_role';
  $strongarm->value = '';
  $export['auth0_claim_to_use_for_role'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auth0_domain';
  $strongarm->value = 'outsell.auth0.com';
  $export['auth0_domain'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auth0_form_title';
  $strongarm->value = 'Sign In';
  $export['auth0_form_title'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auth0_join_user_by_mail_enabled';
  $strongarm->value = 1;
  $export['auth0_join_user_by_mail_enabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auth0_lock_extra_settings';
  $strongarm->value = '';
  $export['auth0_lock_extra_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auth0_login_css';
  $strongarm->value = '#a0-widget .a0-panel {
    min-width: 90%;
    padding: 5%;
    box-shadow: none;
    -webkit-box-shadow: none;
}
#a0-widget .a0-panel {
    background-color: #f6f6f2;
    border-color: #f9f9f9;
}';
  $export['auth0_login_css'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auth0_replace_forms';
  $strongarm->value = 1;
  $export['auth0_replace_forms'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auth0_requires_email';
  $strongarm->value = 1;
  $export['auth0_requires_email'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auth0_returnTo_app';
  $strongarm->value = 0;
  $export['auth0_returnTo_app'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auth0_role_mapping';
  $strongarm->value = '';
  $export['auth0_role_mapping'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auth0_sso';
  $strongarm->value = 1;
  $export['auth0_sso'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auth0_widget_cdn';
  $strongarm->value = 'https://cdn.auth0.com/js/lock/10.3/lock.min.js';
  $export['auth0_widget_cdn'] = $strongarm;

  return $export;
}
