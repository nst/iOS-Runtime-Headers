/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSExtension : NSObject <CXCallDirectoryStoreMigratorExtension, _NSExtensionContextHosting> {
    NSSet * __allowedErrorClasses;
    long long  __assertionRefCount;
    NSBundle * __extensionBundle;
    NSMutableDictionary * __extensionContexts;
    NSMutableDictionary * __extensionExpirationIdentifiers;
    BKSProcessAssertion * __extensionProcessAssertion;
    NSMutableDictionary * __extensionServiceConnections;
    <PKPlugIn> * __plugIn;
    id /* block */  __requestPostCompletionBlock;
    id /* block */  __requestPostCompletionBlockWithItems;
    NSObject<OS_dispatch_queue> * __safePluginQueue;
    id  __stashedPlugInConnection;
    NSDictionary * _attributes;
    NSUUID * _connectionUUID;
    NSString * _extensionPointIdentifier;
    NSString * _identifier;
    NSDictionary * _infoDictionary;
    bool  _observingHostAppStateChanges;
    id /* block */  _requestCancellationBlock;
    id /* block */  _requestCompletionBlock;
    id /* block */  _requestInterruptionBlock;
    NSString * _version;
}

@property (setter=_setAllowedErrorClasses:, nonatomic, copy) NSSet *_allowedErrorClasses;
@property (setter=_setAssertionRefCount:, nonatomic) long long _assertionRefCount;
@property (setter=_setExtensionBundle:, nonatomic, retain) NSBundle *_extensionBundle;
@property (setter=_setExtensionContexts:, nonatomic, retain) NSMutableDictionary *_extensionContexts;
@property (setter=_setExtensionExpirationsIdentifiers:, nonatomic, retain) NSMutableDictionary *_extensionExpirationIdentifiers;
@property (setter=_setExtensionProcessAssertion:, retain) BKSProcessAssertion *_extensionProcessAssertion;
@property (setter=_setExtensionServiceConnections:, nonatomic, retain) NSMutableDictionary *_extensionServiceConnections;
@property (getter=_extensionState, setter=_setExtensionState:, nonatomic, copy) NSDictionary *_extensionState;
@property (getter=_isMarkedNew, nonatomic, readonly) bool _markedNew;
@property (setter=_setPlugIn:, nonatomic, retain) <PKPlugIn> *_plugIn;
@property (nonatomic, copy) id /* block */ _requestPostCompletionBlock;
@property (nonatomic, copy) id /* block */ _requestPostCompletionBlockWithItems;
@property (nonatomic) NSObject<OS_dispatch_queue> *_safePluginQueue;
@property (retain) id _stashedPlugInConnection;
@property (nonatomic, copy) NSDictionary *attributes;
@property (nonatomic, copy) NSUUID *connectionUUID;
@property (nonatomic, readonly) NSURL *containingAppURL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEnabledViaPlugInKit, nonatomic, readonly) bool enabledViaPlugInKit;
@property (nonatomic, copy) NSString *extensionPointIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *icons;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSDictionary *infoDictionary;
@property (nonatomic, readonly) NSString *localizedContainingAppName;
@property (nonatomic, readonly) NSString *localizedName;
@property (getter=_isObservingHostAppStateChanges, setter=_setObservingHostAppStateChanges:, nonatomic) bool observingHostAppStateChanges;
@property (nonatomic, readonly) bool optedIn;
@property (nonatomic, readonly) LSPlugInKitProxy *plugInKitProxy;
@property (nonatomic, readonly) NSIndexSet *pu_supportedMediaTypes;
@property (nonatomic, copy) id /* block */ requestCancellationBlock;
@property (nonatomic, copy) id /* block */ requestCompletionBlock;
@property (nonatomic, copy) id /* block */ requestInterruptionBlock;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *version;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (bool)_shouldLogExtensionDiscovery;
+ (id)beginMatchingExtensionsWithAttributes:(id)arg1 completion:(id /* block */)arg2;
+ (void)endMatchingExtensions:(id)arg1;
+ (bool)evaluateActivationRule:(id)arg1 withExtensionItemsRepresentation:(id)arg2;
+ (id)extensionWithIdentifier:(id)arg1 error:(id*)arg2;
+ (id)extensionWithIdentifier:(id)arg1 excludingDisabledExtensions:(bool)arg2 error:(id*)arg3;
+ (void)extensionWithURL:(id)arg1 completion:(id /* block */)arg2;
+ (void)extensionWithUUID:(id)arg1 completion:(id /* block */)arg2;
+ (void)extensionsWithMatchingAttributes:(id)arg1 completion:(id /* block */)arg2;
+ (id)extensionsWithMatchingAttributes:(id)arg1 error:(id*)arg2;
+ (void)initialize;
+ (void)initializeFiltering;
+ (id)predicateForActivationRule:(id)arg1;

- (id)_allowedErrorClasses;
- (long long)_assertionRefCount;
- (id)_bareExtensionServiceConnection;
- (void)_cancelRequestWithError:(id)arg1 forExtensionContextWithUUID:(id)arg2 completion:(id /* block */)arg3;
- (void)_completeRequestReturningItems:(id)arg1 forExtensionContextWithUUID:(id)arg2 completion:(id /* block */)arg3;
- (void)_didCreateExtensionContext:(id)arg1;
- (void)_didShowExtensionManagementInterface;
- (void)_didShowNewExtensionIndicator;
- (void)_dropAssertion;
- (id)_extensionBundle;
- (id)_extensionContextForUUID:(id)arg1;
- (id)_extensionContexts;
- (id)_extensionExpirationIdentifiers;
- (id)_extensionProcessAssertion;
- (id)_extensionServiceConnections;
- (id)_extensionState;
- (void)_hostDidBecomeActiveNote:(id)arg1;
- (void)_hostDidEnterBackgroundNote:(id)arg1;
- (void)_hostWillEnterForegroundNote:(id)arg1;
- (void)_hostWillResignActiveNote:(id)arg1;
- (id)_initWithPKPlugin:(id)arg1;
- (bool)_isMarkedNew;
- (bool)_isObservingHostAppStateChanges;
- (bool)_isPhotoServiceAccessGranted;
- (bool)_isSystemExtension;
- (id)_itemProviderForPayload:(id)arg1 extensionContext:(id)arg2;
- (void)_kill:(int)arg1;
- (void)_loadItemForPayload:(id)arg1 contextIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_loadPreviewImageForPayload:(id)arg1 contextIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_openURL:(id)arg1 completion:(id /* block */)arg2;
- (id)_plugIn;
- (int)_plugInProcessIdentifier;
- (void)_reallyBeginExtensionRequestWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 completion:(id /* block */)arg3;
- (id /* block */)_requestPostCompletionBlock;
- (id /* block */)_requestPostCompletionBlockWithItems;
- (void)_resetExtensionState;
- (id)_safePluginQueue;
- (void)_safelyBeginUsing:(id /* block */)arg1;
- (void)_safelyEndUsing:(id /* block */)arg1;
- (void)_safelyEndUsingWithProcessAssertion:(id)arg1 continuation:(id /* block */)arg2;
- (void)_setAllowedErrorClasses:(id)arg1;
- (void)_setAssertionRefCount:(long long)arg1;
- (void)_setExtensionBundle:(id)arg1;
- (void)_setExtensionContexts:(id)arg1;
- (void)_setExtensionExpirationsIdentifiers:(id)arg1;
- (void)_setExtensionProcessAssertion:(id)arg1;
- (void)_setExtensionServiceConnections:(id)arg1;
- (void)_setExtensionState:(id)arg1;
- (void)_setObservingHostAppStateChanges:(bool)arg1;
- (void)_setPlugIn:(id)arg1;
- (id)_stashedPlugInConnection;
- (bool)_wantsProcessPerRequest;
- (bool)attemptOptIn:(id*)arg1;
- (bool)attemptOptOut:(id*)arg1;
- (id)attributes;
- (void)beginExtensionRequestWithInputItems:(id)arg1 completion:(id /* block */)arg2;
- (void)beginExtensionRequestWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 completion:(id /* block */)arg3;
- (void)cancelExtensionRequestWithIdentifier:(id)arg1;
- (id)connectionUUID;
- (void)dealloc;
- (id)description;
- (id)extensionPointIdentifier;
- (unsigned long long)hash;
- (id)icons;
- (id)identifier;
- (id)infoDictionary;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)objectForInfoDictionaryKey:(id)arg1;
- (bool)optedIn;
- (int)pidForRequestIdentifier:(id)arg1;
- (id /* block */)requestCancellationBlock;
- (id /* block */)requestCompletionBlock;
- (id /* block */)requestInterruptionBlock;
- (void)setAttributes:(id)arg1;
- (void)setConnectionUUID:(id)arg1;
- (void)setExtensionPointIdentifier:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setInfoDictionary:(id)arg1;
- (void)setRequestCancellationBlock:(id /* block */)arg1;
- (void)setRequestCompletionBlock:(id /* block */)arg1;
- (void)setRequestInterruptionBlock:(id /* block */)arg1;
- (void)setVersion:(id)arg1;
- (void)set_requestPostCompletionBlock:(id /* block */)arg1;
- (void)set_requestPostCompletionBlockWithItems:(id /* block */)arg1;
- (void)set_safePluginQueue:(id)arg1;
- (void)set_stashedPlugInConnection:(id)arg1;
- (id)version;

// Image: /System/Library/Frameworks/CallKit.framework/CallKit

- (id)containingAppURL;
- (bool)isEnabledViaPlugInKit;
- (id)localizedContainingAppName;
- (id)localizedName;
- (id)plugInKitProxy;

// Image: /System/Library/Frameworks/Intents.framework/Intents

+ (id)_extensionMatchingDictionaryForIntentClassNames:(id)arg1 extensionPointName:(id)arg2 launchId:(id)arg3;
+ (void)_findAppsWithAnyIntentsExtensionCheckingSiriEnabledUseFilter:(long long)arg1 completion:(id /* block */)arg2;
+ (id)_intents_extensionMatchingAttributesForIntents:(id)arg1;
+ (void)_intents_findAppsWithAnIntentsServiceExtension:(id /* block */)arg1;
+ (void)_intents_findPossibleSiriEnabledAppsWithAnIntentsServiceExtension:(id /* block */)arg1;
+ (void)_intents_findSiriEntitledAppsContainingAnIntentsExtensionWithCompletion:(id /* block */)arg1;
+ (void)_intents_matchExtensionsForIntent:(id)arg1 completion:(id /* block */)arg2;
+ (void)_intents_matchExtensionsForIntent:(id)arg1 shouldIgnoreLaunchId:(bool)arg2 completion:(id /* block */)arg3;
+ (void)_intents_matchSiriExtensionsForIntent:(id)arg1 completion:(id /* block */)arg2;
+ (void)_intents_matchSiriUIExtensionsForIntent:(id)arg1 completion:(id /* block */)arg2;
+ (void)_intents_matchSiriUISnippetExtensionsWithCompletion:(id /* block */)arg1;
+ (void)_intents_matchUIExtensionsForIntent:(id)arg1 completion:(id /* block */)arg2;
+ (id)_intents_uiExtensionMatchingAttributesForIntents:(id)arg1;
+ (void)_matchExtensionsForIntent:(id)arg1 extensionPointName:(id)arg2 shouldCheckForSiriEnabled:(bool)arg3 completion:(id /* block */)arg4;
+ (void)_matchExtensionsForIntent:(id)arg1 extensionPointName:(id)arg2 shouldCheckForSiriEnabled:(bool)arg3 shouldIgnoreLaunchId:(bool)arg4 completion:(id /* block */)arg5;
+ (void)_matchExtensionsWithAttributes:(id)arg1 extensionPointName:(id)arg2 completion:(id /* block */)arg3;
+ (void)_matchSnippetExtensionsWithExtensionPointName:(id)arg1 completion:(id /* block */)arg2;
+ (bool)appAllowedToTalkToSiri:(id)arg1;

- (bool)_intents_extensionSupportsAtLeastOneSiriIntent;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

- (bool)_canSupportIntent:(id)arg1;
- (bool)_canSupportIntentClass:(Class)arg1;
- (id)_containingAppDisplayName;
- (id)_containingAppIdentifer;
- (id)_displayName;
- (id)_extensionVendorContextForUUID:(id)arg1 withErrorHandler:(id /* block */)arg2;
- (id)_iconWithFormat:(int)arg1;
- (unsigned long long)_mapExtensionType;

// Image: /System/Library/Frameworks/ReplayKit.framework/ReplayKit

+ (void)extensionsWithMatchingPointName:(id)arg1 activationRule:(id)arg2 completion:(id /* block */)arg3;
+ (void)extensionsWithMatchingPointName:(id)arg1 baseIdentifier:(id)arg2 activationRule:(id)arg3 unwantedActivationRule:(id)arg4 completion:(id /* block */)arg5;
+ (void)extensionsWithMatchingPointName:(id)arg1 baseIdentifier:(id)arg2 completion:(id /* block */)arg3;
+ (void)extensionsWithMatchingPointName:(id)arg1 baseIdentifier:(id)arg2 unwantedActivationRule:(id)arg3 completion:(id /* block */)arg4;
+ (void)extensionsWithMatchingPointName:(id)arg1 completion:(id /* block */)arg2;
+ (void)extensionsWithMatchingPointName:(id)arg1 unwantedActivationRule:(id)arg2 completion:(id /* block */)arg3;

- (long long)processMode;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

- (id)__UIKit_upcall_icons;
- (void)instantiateViewControllerWithInputItems:(id)arg1 connectionHandler:(id /* block */)arg2;
- (void)instantiateViewControllerWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 connectionHandler:(id /* block */)arg3;

// Image: /System/Library/PrivateFrameworks/ContactsDonation.framework/ContactsDonation

- (id)_cnd_requestWithInputItems:(id)arg1;

// Image: /System/Library/PrivateFrameworks/IntentsCore.framework/IntentsCore

- (void)_intents_startExtensionConnectionWithExtensionInputItems:(id)arg1 intent:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;

// Image: /System/Library/PrivateFrameworks/PhotosEditUI.framework/PhotosEditUI

- (id)pu_supportedMediaTypes;
- (bool)pu_supportsMediaType:(unsigned long long)arg1;

// Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI

- (id)_siriui_extensionIconImage;
- (id)_siriui_iconImageWithFormat:(int)arg1;
- (id)siriui_displayName;
- (id)siriui_iconImage;

// Image: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer

- (id)uns_extensionContainerBundleIdentifier;
- (id)uns_extensionContainerBundleProxy;
- (bool)uns_isExtensionSessionBeingDebugged:(id)arg1;

// Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit

- (id)nc_extensionContainerBundleIdentifier;
- (id)nc_extensionContainerBundleProxy;

// Image: /System/Library/PrivateFrameworks/Widgets.framework/Widgets

- (id)wg_description;
- (bool)wg_hasExplicitUserElectionState;

@end
