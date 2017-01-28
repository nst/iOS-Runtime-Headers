/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

@interface VSApplicationController : NSObject <VSAppDocumentControllerDelegate, VSApplicationDelegate> {
    bool  _allowUI;
    VSAppDocumentController * _appDocumentController;
    VSApplication * _application;
    JSValue * _applicationReadyCallback;
    <VSApplicationControllerDelegate> * _delegate;
    VSIdentityProvider * _identityProvider;
    VSJSRequest * _javascriptRequest;
    VSPreferences * _preferences;
    NSOperationQueue * _privateQueue;
    VSApplicationControllerRequest * _request;
    VSApplicationControllerResponseHandler * _responseHandler;
}

@property (nonatomic) bool allowUI;
@property (nonatomic, retain) VSAppDocumentController *appDocumentController;
@property (nonatomic, retain) VSApplication *application;
@property (nonatomic, retain) JSValue *applicationReadyCallback;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <VSApplicationControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) VSIdentityProvider *identityProvider;
@property (nonatomic, retain) VSJSRequest *javascriptRequest;
@property (nonatomic, retain) VSPreferences *preferences;
@property (nonatomic, retain) NSOperationQueue *privateQueue;
@property (nonatomic, retain) VSApplicationControllerRequest *request;
@property (nonatomic, retain) VSApplicationControllerResponseHandler *responseHandler;
@property (readonly) Class superclass;

+ (void)initialize;

- (void).cxx_destruct;
- (id)_applicationLaunchParams;
- (void)_applicationReadyWithSuccess:(bool)arg1 javascriptErrorValue:(id)arg2;
- (void)_beginAuthentication;
- (id)_bootURL;
- (void)_cleanUpStoppedApp;
- (void)_completeRequestWithJavascriptResponse:(id)arg1 javascriptErrorValue:(id)arg2;
- (void)_completeRequestWithResult:(id)arg1;
- (id)_errorForJavascriptErrorValueValue:(id)arg1;
- (id)_javascriptRequestForRequest:(id)arg1 withVerificationData:(id)arg2;
- (id)_javascriptShowUserInterfacePurposeForAuthenticationUserInterfacePurpose:(long long)arg1;
- (id)_makeJavaScriptRequest;
- (void)_makeJavascriptRequestForRequest:(id)arg1 withCompletionHandler:(id)arg2;
- (void)_notifyDelegateWithBlock:(id)arg1;
- (void)_notifyDidReceiveViewModel:(id)arg1;
- (void)_notifyDidReceiveViewModelError:(id)arg1;
- (void)_notifyDidStart;
- (void)_notifyDidStop;
- (void)_notifyRequest:(id)arg1 didCompleteWithResponse:(id)arg2;
- (void)_notifyRequest:(id)arg1 didFailWithError:(id)arg2;
- (void)_notifyStartDidFailWithError:(id)arg1;
- (void)_presentDocument:(id)arg1;
- (void)_startApp;
- (void)_stopApp;
- (void)_submitJavascriptRequest:(id)arg1;
- (id)activeAppDocumentForApplication:(id)arg1;
- (bool)allowUI;
- (id)appDocumentController;
- (void)appDocumentController:(id)arg1 didFailToUpdateViewModelWithError:(id)arg2;
- (void)appDocumentController:(id)arg1 didUpdateViewModel:(id)arg2;
- (id)application;
- (void)application:(id)arg1 evaluateAppJavascriptInContext:(id)arg2;
- (void)application:(id)arg1 startDidFailWithError:(id)arg2;
- (void)applicationDidStart:(id)arg1;
- (void)applicationDidStop:(id)arg1;
- (id)applicationReadyCallback;
- (void)dealloc;
- (id)delegate;
- (id)identityProvider;
- (id)init;
- (id)initWithIdentityProvider:(id)arg1;
- (id)javascriptRequest;
- (id)launchParamsForApplication:(id)arg1;
- (id)preferences;
- (id)privateQueue;
- (id)request;
- (id)responseHandler;
- (void)setAllowUI:(bool)arg1;
- (void)setAppDocumentController:(id)arg1;
- (void)setApplication:(id)arg1;
- (void)setApplicationReadyCallback:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIdentityProvider:(id)arg1;
- (void)setJavascriptRequest:(id)arg1;
- (void)setPreferences:(id)arg1;
- (void)setPrivateQueue:(id)arg1;
- (void)setRequest:(id)arg1;
- (void)setResponseHandler:(id)arg1;
- (void)showAuthenticationUserInterfaceWithAuthenticationToken:(id)arg1 purpose:(long long)arg2;
- (void)start;
- (void)stop;
- (void)submitRequest:(id)arg1;

@end
