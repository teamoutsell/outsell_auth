<?php

/**
 * @file
 * outsell_auth.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function outsell_auth_defaultconfig_features() {
  return array(
    'outsell_auth' => array(
      'strongarm' => 'strongarm',
    ),
  );
}

/**
 * Implements hook_defaultconfig_strongarm().
 */
function outsell_auth_defaultconfig_strongarm() {
  $export = array();

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

  return $export;
}
