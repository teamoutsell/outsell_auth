Outsell Auth
============

This is a Drupal 7 module that takes the metadata from [Outsell Inc's Auth0 implementation](https://github.com/teamoutsell/auth0) (and Salesforce by extension) and maps them to relevant Drupal user profile fields, roles and entitlements. What that means is that a developer should be able to enable this module on a Drupal 7 site and automatically get:

  1. Replacement of core Drupal or legacy login with Auth0
  2. Population of user profile data from Salesforce
  3. Assignment of any relevant roles and entitlements from Salesforce
  4. Consistent user state between other Auth0 powered Outsell properties
  5. SSO with other Auth0 powered Outsell properties

Data Mapping
------------

Here are the current maps/flows for user entitlement data between `Auth0` and `Drupal` respectively. For more information on the maps from `Salesforce` to `Auth0` check [over here](https://github.com/teamoutsell/auth0/blob/master/rules/get-salesforce-data.js#L403).

### User Profile

```bash
NO MAPPING YET|field_current_company
first|field_name_first
job_title|field_job_title
last|field_name_last
location|field_work_location
```

### User Entitlements

```bash
analyst_access|field_sf_access_as_analyst
community|field_sf_access_community
companies_markets|field_sf_access_companies_market
end_date|field_sf_entitlement_end_date
entitlement_service|field_sf_entitlement_service
headlines|field_sf_access_headlines
insights|field_sf_access_insight
is_employee|field_outsell_employee
segment_prefs|field_sf_segment_preferences
olc_member|field_sf_access_as_olc_member
online_content_access_segments|field_sf_online_segment_access
salesforce_id|field_sf_id
start_date|field_sf_entitlement_start_date
tools|field_sf_access_tools
web_ui|field_sf_website_user_interface
```

### Roles

```bash
dependent on UI selection|Analyst
cdo|CDO Data Community
dependent on UI selection|Community maintainer
im_member|IM Council
mis_member|MIS member
olc_member|OLC Chairman
olc_member|OLC member
is_employee|Outsell Employee
dependent on UI selection|Subadmin
```

### Additional Considerations

  1. Do we want to cut down on the amount of roles?
  2. Do we want to map to some normal drupal roles? eg authenticated/admin/etc?
  3. Do we want to add/remove user profile fields?

