<?php

/**
 * @file
 * outsell_auth.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function outsell_auth_user_default_roles() {
  $roles = array();

  // Exported role: Analyst.
  $roles['Analyst'] = array(
    'name' => 'Analyst',
    'weight' => 11,
  );

  // Exported role: CDO Data Community.
  $roles['CDO Data Community'] = array(
    'name' => 'CDO Data Community',
    'weight' => 19,
  );

  // Exported role: Community Admin.
  $roles['Community Admin'] = array(
    'name' => 'Community Admin',
    'weight' => 9,
  );

  // Exported role: Community maintainer.
  $roles['Community maintainer'] = array(
    'name' => 'Community maintainer',
    'weight' => 8,
  );

  // Exported role: IM Council.
  $roles['IM Council'] = array(
    'name' => 'IM Council',
    'weight' => 6,
  );

  // Exported role: IM member.
  $roles['IM member'] = array(
    'name' => 'IM member',
    'weight' => 5,
  );

  // Exported role: MIS member.
  $roles['MIS member'] = array(
    'name' => 'MIS member',
    'weight' => 4,
  );

  // Exported role: Master.
  $roles['Master'] = array(
    'name' => 'Master',
    'weight' => 10,
  );

  // Exported role: OLC Chairman.
  $roles['OLC Chairman'] = array(
    'name' => 'OLC Chairman',
    'weight' => 12,
  );

  // Exported role: OLC addon.
  $roles['OLC addon'] = array(
    'name' => 'OLC addon',
    'weight' => 18,
  );

  // Exported role: OLC member.
  $roles['OLC member'] = array(
    'name' => 'OLC member',
    'weight' => 7,
  );

  // Exported role: OLS member.
  $roles['OLS member'] = array(
    'name' => 'OLS member',
    'weight' => 13,
  );

  // Exported role: Outsell Employee.
  $roles['Outsell Employee'] = array(
    'name' => 'Outsell Employee',
    'weight' => 17,
  );

  // Exported role: Startup member.
  $roles['Startup member'] = array(
    'name' => 'Startup member',
    'weight' => 3,
  );

  // Exported role: Subadmin.
  $roles['Subadmin'] = array(
    'name' => 'Subadmin',
    'weight' => 15,
  );

  // Exported role: Test user.
  $roles['Test user'] = array(
    'name' => 'Test user',
    'weight' => 14,
  );

  return $roles;
}
