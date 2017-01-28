/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@interface RemoteUIController : NSObject <RUILoaderDelegate, RUIObjectModelDelegate, RUIParserDelegate, UINavigationControllerDelegate> {
    NSString * _SMSAutoFillToken;
    NSUUID * _UUID;
    <RemoteUIControllerDelegate> * _delegate;
    NSMutableDictionary * _elementChangeHandlers;
    UIViewController * _hostViewController;
    NSString * _listeningForSMSIdentifier;
    id  _loadCompletion;
    RUILoader * _loader;
    RUINavigationController * _modalNavigationController;
    NSMutableArray * _modalObjectModels;
    NSMutableArray * _objectModels;
    RUIPage * _pageOriginatingLoad;
    NSURLSessionConfiguration * _sessionConfiguration;
    RUIStyle * _style;
    bool  _testMode;
    NSString * _userAgentString;
}

@property (nonatomic, copy) NSUUID *UUID;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <RemoteUIControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *displayedPages;
@property (readonly) unsigned long long hash;
@property (nonatomic) UIViewController *hostViewController;
@property (nonatomic, copy) id loadCompletion;
@property (nonatomic, retain) RUILoader *loader;
@property (nonatomic) UINavigationController *navigationController;
@property (nonatomic, copy) NSURLSessionConfiguration *sessionConfiguration;
@property (nonatomic, retain) RUIStyle *style;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *userAgentString;

- (void).cxx_destruct;
- (id)UUID;
- (void)_beginListeningForSMSAutoFill;
- (void)_didPresentObjectModel:(id)arg1 modally:(bool)arg2;
- (void)_didRemoveObjectModel:(id)arg1;
- (void)_enableTestMode;
- (void)_loadURL:(id)arg1 fromObjectModel:(id)arg2 postBody:(id)arg3;
- (void)_loadURL:(id)arg1 postBody:(id)arg2 fromObjectModel:(id)arg3 completion:(id)arg4;
- (void)_modalNavigationWasDismissed;
- (id)_modalObjectModels;
- (void)_modalViewControllerWasPopped:(id)arg1;
- (id)_objectModelStack;
- (id)_objectModels;
- (void)_removePreviousObjectModelsBackToIdentifier:(id)arg1;
- (void)_setHandlerWithKey:(id)arg1 forElementsMatching:(id)arg2 handler:(id)arg3;
- (bool)_shouldAnimate;
- (void)_stopListeningForSMSAutoFill;
- (void)_willPresentObjectModel:(id)arg1 modally:(bool)arg2;
- (void)dealloc;
- (id)delegate;
- (id)dismissObjectModelsAnimated:(bool)arg1 completion:(id)arg2;
- (id)displayedPages;
- (id)hostViewController;
- (id)init;
- (id)loadCompletion;
- (void)loadData:(id)arg1 baseURL:(id)arg2;
- (void)loadRequest:(id)arg1;
- (void)loadRequest:(id)arg1 completion:(id)arg2;
- (void)loadURL:(id)arg1 postBody:(id)arg2;
- (void)loadURL:(id)arg1 postBody:(id)arg2 completion:(id)arg3;
- (id)loader;
- (void)loader:(id)arg1 didFinishLoadWithError:(id)arg2;
- (void)loader:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id)arg3;
- (void)loader:(id)arg1 didReceiveHTTPResponse:(id)arg2;
- (void)loader:(id)arg1 receivedObjectModel:(id)arg2 topActionSignal:(id)arg3;
- (id)loader:(id)arg1 willLoadRequest:(id)arg2 redirectResponse:(id)arg3;
- (id)navigationController;
- (void)objectModel:(id)arg1 didNavigateBackFromController:(id)arg2 withGesture:(bool)arg3;
- (void)objectModel:(id)arg1 elementDidChange:(id)arg2;
- (void)objectModel:(id)arg1 pressedLink:(id)arg2 httpMethod:(id)arg3 completion:(id)arg4;
- (bool)objectModel:(id)arg1 shouldDisplayNamedElement:(id)arg2 page:(id)arg3;
- (void)objectModel:(id)arg1 willLoadLinkURL:(id)arg2 attributes:(id)arg3;
- (id)parentViewControllerForObjectModel:(id)arg1;
- (id)parser:(id)arg1 createPageWithName:(id)arg2 attributes:(id)arg3;
- (id)popObjectModelAnimated:(bool)arg1;
- (void)pushObjectModel:(id)arg1 animated:(bool)arg2;
- (void)refreshTopModelWithModel:(id)arg1;
- (void)removeHandlerForKey:(id)arg1;
- (id)sessionConfiguration;
- (id)sessionConfigurationForLoader:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHandlerForButtonName:(id)arg1 handler:(id)arg2;
- (void)setHandlerForButtonsMatching:(id)arg1 handler:(id)arg2;
- (void)setHandlerForElementName:(id)arg1 handler:(id)arg2;
- (id)setHandlerForElementsMatching:(id)arg1 handler:(id)arg2;
- (void)setHostViewController:(id)arg1;
- (void)setLoadCompletion:(id)arg1;
- (void)setLoader:(id)arg1;
- (void)setNavigationController:(id)arg1;
- (void)setSessionConfiguration:(id)arg1;
- (void)setStyle:(id)arg1;
- (void)setUUID:(id)arg1;
- (void)setUserAgentString:(id)arg1;
- (id)style;
- (unsigned long long)supportedInterfaceOrientationsForObjectModel:(id)arg1 page:(id)arg2;
- (id)userAgentString;
- (id)viewControllerForAlertPresentation;

@end
