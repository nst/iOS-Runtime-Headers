/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

@interface VSApplication : NSObject <IKAppContextDelegate, IKApplication> {
    IKAppContext * _appContext;
    VSAppDeviceConfig * _appDeviceConfig;
    NSURL * _bootURL;
    NSHTTPCookieStorage * _cookieStorage;
    <VSApplicationDelegate> * _delegate;
    bool  _shouldAllowRemoteInspection;
}

@property (nonatomic, retain) IKAppContext *appContext;
@property (nonatomic, retain) VSAppDeviceConfig *appDeviceConfig;
@property (nonatomic, readonly, copy) NSURL *bootURL;
@property (nonatomic, retain) NSHTTPCookieStorage *cookieStorage;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <VSApplicationDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool shouldAllowRemoteInspection;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cleanUpStoppedApp;
- (void)_notifyDidStart;
- (void)_notifyDidStop;
- (void)_notifyStartDidFailWithError:(id)arg1;
- (void)_startApp;
- (void)_stopApp;
- (id)activeDocument;
- (id)appContext;
- (void)appContext:(id)arg1 didFailWithError:(id)arg2;
- (void)appContext:(id)arg1 didStartWithOptions:(id)arg2;
- (void)appContext:(id)arg1 didStopWithOptions:(id)arg2;
- (void)appContext:(id)arg1 evaluateAppJavaScriptInContext:(id)arg2;
- (bool)appContext:(id)arg1 validateDOMDocument:(id)arg2 inContext:(id)arg3 error:(id*)arg4;
- (id)appDeviceConfig;
- (void)appDocumentForDocument:(id)arg1 completionHandler:(id)arg2;
- (id)appIdentifier;
- (id)appJSURL;
- (id)appLaunchParams;
- (id)bootURL;
- (id)cookieStorage;
- (void)dealloc;
- (id)delegate;
- (id)deviceConfigForContext:(id)arg1;
- (void)evaluate:(id)arg1 completionHandler:(id)arg2;
- (id)init;
- (id)initWithBootURL:(id)arg1;
- (id)localStorage;
- (id)objectForMediaItem:(id)arg1;
- (id)objectForPlayer:(id)arg1;
- (id)objectForPlaylist:(id)arg1;
- (void)sendErrorWithMessage:(id)arg1;
- (void)setAppContext:(id)arg1;
- (void)setAppDeviceConfig:(id)arg1;
- (void)setCookieStorage:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setShouldAllowRemoteInspection:(bool)arg1;
- (bool)shouldAllowRemoteInspection;
- (bool)shouldIgnoreJSValidation;
- (void)start;
- (void)stop;
- (id)userDefaultsStorage;
- (id)vendorIdentifier;
- (id)vendorStorage;
- (id)xhrSessionConfigurationForContext:(id)arg1;

@end
