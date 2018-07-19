(function ($) {

  /**
   * Attach the Auth0 Lock widget to the login form.
   
  Drupal.behaviors.outsellAuthSingleLogOff = {
    attach: function (context, settings) {

      // Get our auth0 settings
      var AUTH0_DOMAIN = settings.outsell_auth.domain;
      var AUTH0_CLIENT_ID = settings.outsell_auth.client_id;
      var AUTH0_RETURN_TO = settings.outsell_auth.return_to;

      // Instantiate an auth0 client
      var auth0 = new Auth0({
        domain: AUTH0_DOMAIN,
        clientID: AUTH0_CLIENT_ID,
        responseType: 'code'
      });
    */
      // Logout of Auth0 is SSO is set to false and then
      // @todo: Auth0 logout might be redundant? Might be ok to just redirect directly to user/logout
      auth0.getSSOData(true, function (err, ssoData) {
        if (!ssoData.sso) {
          auth0.logout({returnTo: AUTH0_RETURN_TO, client_id: AUTH0_CLIENT_ID}, {version: 'v2'});
        }
      });

    }
  }
})(jQuery);
