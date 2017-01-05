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
  $strongarm->value = 'analyst_access|field_sf_access_as_analyst
community|field_sf_access_community
companies_markets|field_sf_access_companies_market
end_date|field_sf_entitlement_end_date
entitlement_service|field_sf_entitlement_service
first|field_name_first
headlines|field_sf_access_headlines
insights|field_sf_access_insight
is_employee|field_outsell_employee
job_title|field_job_title
last|field_name_last
location|field_work_location
segment_prefs|field_sf_segment_preferences
olc_member|field_sf_access_as_olc_member
online_content_access_segments|field_sf_online_segment_access
salesforce_id|field_sf_id
start_date|field_sf_entitlement_start_date
reports|field_sf_access_reports
tools|field_sf_access_tools
web_ui|field_sf_website_user_interface';
  $export['auth0_claim_mapping'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auth0_claim_to_use_for_role';
  $strongarm->value = 'roles';
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
  $strongarm->value = '{
  "autoclose": true,
  "autofocus": true,
  "avatar": null,
  "theme": {
    "logo": "https://www.outsellinc.com/sites/default/themes/outsell/outsell2016/logo.png",
    "primaryColor": "#77b800"
  },
  "languageDictionary": {
    "title": "Log in"
  }
}
';
  $export['auth0_lock_extra_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auth0_login_css';
  $strongarm->value = '.outsell-auth-user-login-form-wrapper {
  text-align: center;
  padding: 10px;
}

.outsell-auth-user-login-form-wrapper .auth0-lock.auth0-lock .auth0-lock-header-logo {
  width: inherit;
  height: 55px;
  vertical-align: middle;
}

.outsell-auth-user-login-form-wrapper .auth0-lock.auth0-lock .auth0-lock-header-bg {
  background: #393939;
}

.outsell-auth-user-login-form-wrapper .auth0-lock.auth0-lock .auth0-lock-header {
  color: #CCCCCC;
}

.outsell-auth-user-login-form-wrapper .auth0-lock-content {
  background: #f2f2f2;
}

.outsell-auth-user-login-form-wrapper .auth0-lock.auth0-lock.auth0-lock-opened-in-frame .auth0-lock-widget {
  width: 500px;
}
';
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
  $strongarm->value = 1;
  $export['auth0_returnTo_app'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auth0_role_mapping';
  $strongarm->value = 'analyst|Analyst
cdo_member|CDO Data Community
im_member|IM Member
is_employee|Outsell Employee
mis_member|MIS member
olc_member|OLC member
ols_member|OLS member
registered|Registered';
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
  $strongarm->value = 'https://cdn.auth0.com/js/lock/10.8.1/lock.min.js';
  $export['auth0_widget_cdn'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'outsell_auth_widget_posttext';
  $strongarm->value = array(
    'value' => '<p>For additional support, please contact us at:&nbsp;<a href="mailto:clientservices@outsellinc.com">clientservices@outsellinc.com</a></p>
',
    'format' => 'filtered_html',
  );
  $export['outsell_auth_widget_posttext'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'outsell_auth_widget_pretext';
  $strongarm->value = array(
    'value' => '',
    'format' => 'filtered_html',
  );
  $export['outsell_auth_widget_pretext'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'r4032login_access_denied_message';
  $strongarm->value = 'Access denied. You must log in to view this page.';
  $export['r4032login_access_denied_message'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'r4032login_access_denied_message_type';
  $strongarm->value = 'error';
  $export['r4032login_access_denied_message_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'r4032login_default_redirect_code';
  $strongarm->value = '302';
  $export['r4032login_default_redirect_code'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'r4032login_display_denied_message';
  $strongarm->value = 0;
  $export['r4032login_display_denied_message'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'r4032login_match_noredirect_pages';
  $strongarm->value = '';
  $export['r4032login_match_noredirect_pages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'r4032login_redirect_authenticated_users_to';
  $strongarm->value = '';
  $export['r4032login_redirect_authenticated_users_to'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'r4032login_user_login_path';
  $strongarm->value = 'user/login';
  $export['r4032login_user_login_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_403';
  $strongarm->value = 'r4032login';
  $export['site_403'] = $strongarm;

  return $export;
}
