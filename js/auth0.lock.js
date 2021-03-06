(function ($) {

  /**
   * Attach the Auth0 Lock widget to the login form.
   */
  Drupal.behaviors.outsellAuthLockWidget = {
    attach: function (context, settings) {
      $('#auth0-login-form', context).once(function() {

        // Get our auth0 settings
        var AUTH0_DOMAIN = settings.auth0.domain;
        var AUTH0_CLIENT_ID = settings.auth0.client_id;
        var AUTH0_CALLBACK_URL = settings.auth0.options.auth.redirectUrl;
        var AUTH0_SHOW = settings.auth0.show;
        var AUTH0_OPTIONS = settings.auth0.options;

        // Instantiate the auth0 client to check
        // var auth0 = new Auth0({
        //   domain: AUTH0_DOMAIN,
        //   clientID: AUTH0_CLIENT_ID,
        //   callbackURL: AUTH0_CALLBACK_URL,
        //   responseType: 'code'
        // });

        if ( window.location.pathname == "/user/login" ) {
             window.location.href = 'https://outsell.auth0.com/authorize?redirect_uri='+AUTH0_CALLBACK_URL+'&client_id='+AUTH0_CLIENT_ID+'&response_type=code'; 
          }

        // router.get('/user/login', passport.authenticate('auth0', {
        //     clientID: AUTH0_CLIENT_ID,
        //     domain:  AUTH0_DOMAIN,
        //     redirectUri: AUTH0_CALLBACK_URL,
        //     responseType: 'code',
        //     scope: 'openid profile email'}),
        //     function(req, res) {
        //       res.redirect("/");
        //    });
        // var lock = new Auth0Lock(AUTH0_CLIENT_ID, AUTH0_DOMAIN, AUTH0_OPTIONS);
        // lock.show(AUTH0_SHOW);

        // // Check to see if we have SSO data
        // auth0.getSSOData(true, function (err, ssoData) {

        //   // If we have SSO data lets autologin
        //   if (ssoData.sso) {

        //     // Hide log page things
        //     lock.hide();
        //     $('.outsell-auth-user-login-pre-text').hide();
        //     $('.outsell-auth-user-login-post-text').hide();

        //     // Do the login
        //     auth0.login({connection: 'outsell-users'});

        //   }

        // });

      })
    }
  }
})(jQuery);
