Outsell Auth
============

This is a Drupal 7 module that takes the metadata from [Outsell Inc's Auth0 implementation](https://github.com/teamoutsell/auth0) (and Salesforce by extension) and maps them to relevant Drupal user profile fields, roles and entitlements. What that means is that a developer should be able to enable this module on a Drupal 7 site and automatically get:

  1. Replacement of core Drupal or legacy login with Auth0
  2. Population of user profile data from Salesforce
  3. Assignment of any relevant roles and entitlements from Salesforce
  4. Consistent user state between other Auth0 powered Outsell properties
  5. SSO with other Auth0 powered Outsell properties

Options
-------

There are some Auth options available at `admin/config/outsell/auth` to help configure a few things:

### Widget Settings

You can add some `filtered_html` to above and below the auth0 login widget

### SSO Mode

You can activate SSO mode to automatically log you in if you've already authenticated with another Auth0 powered Outsell client. This will also do Single Log Out.

**NOTE:** User 1 will be immune to Single Log Out so that `drush uli` login links continue to work as expected.

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
reports|field_sf_access_reports
salesforce_id|field_sf_id
start_date|field_sf_entitlement_start_date
tools|field_sf_access_tools
web_ui|field_sf_website_user_interface
```

### Roles

```bash
analyst|Analyst
cdo_member|CDO Data Community
im_member|IM Member
is_employee|Outsell Employee
mis_member|MIS member
olc_member|OLC member
ols_member|OLS member
registered|Registered
```
