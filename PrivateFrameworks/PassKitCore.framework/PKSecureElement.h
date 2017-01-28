/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKSecureElement : NSObject <NFHardwareEventListener, NFRemoteAdminEventListener> {
    bool  _deletingAllApplets;
    NSObject<OS_dispatch_queue> * _deletingAllAppletsPropertyConcurrentQueue;
    NSObject<OS_dispatch_source> * _deletingAllAppletsTimer;
    NSObject<OS_dispatch_queue> * _deletingAllAppletsTimerConcurrentQueue;
    NSObject<OS_dispatch_queue> * _objectDisposalQueue;
    NSObject<OS_dispatch_queue> * _observerConcurrentQueue;
    NSHashTable * _observers;
    id  _pairingChangeHandler;
    NFSecureElement * _secureElement;
    NSArray * _secureElementArray;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isDeletingAllApplets;
@property (nonatomic, readonly) bool isInRestrictedMode;
@property (nonatomic, readonly) bool isProductionSigned;
@property (nonatomic, readonly) NSNumber *primaryJSBLSequenceCounter;
@property (nonatomic, readonly) NSString *primaryRegionTopic;
@property (nonatomic, readonly) NSString *primarySecureElementIdentifier;
@property (nonatomic, readonly) NSArray *secureElementIdentifiers;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long supportedTechnologies;

+ (id)primarySecureElementIdentifier;
+ (id)secureElementIdentifiers;

- (void).cxx_destruct;
- (void)SEPPairingInfoWithCompletion:(id)arg1;
- (void)_registerPairingChangeHandler;
- (void)allAppletsWithCompletion:(id)arg1;
- (void)appletWithIdentifier:(id)arg1 completion:(id)arg2;
- (void)connectToServerWithPushTopic:(id)arg1 completion:(id)arg2;
- (id)init;
- (void)initializeSecureElementQueuingServerConnection:(bool)arg1 withCompletion:(id)arg2;
- (bool)isDeletingAllApplets;
- (bool)isInRestrictedMode;
- (bool)isProductionSigned;
- (void)legacyStateInformationWithCompletion:(id)arg1;
- (void)markAllAppletsForDeletionWithExternalAuthorization:(id)arg1 completion:(id)arg2;
- (void)markAppletWithIdentifierForDeletion:(id)arg1 completion:(id)arg2;
- (void)markAppletsWithIdentifiersForDeletion:(id)arg1 completion:(id)arg2;
- (void)pairingStateWithCompletion:(id)arg1;
- (id)primaryJSBLSequenceCounter;
- (id)primaryRegionTopic;
- (id)primarySecureElementIdentifier;
- (bool)queueConnectionToSeverForAppletIdentifiers:(id)arg1;
- (bool)queueConnectionToSeverWithPushTopic:(id)arg1;
- (void)registerObserver:(id)arg1;
- (void)remoteAdminCleanupProgress:(double)arg1;
- (void)secureElement:(id)arg1 didChangeRestrictedMode:(bool)arg2;
- (id)secureElementIdentifiers;
- (bool)setRegistrationInformation:(id)arg1 primaryRegionTopic:(id)arg2;
- (void)signChallenge:(id)arg1 forPaymentApplication:(id)arg2 withCompletion:(id)arg3;
- (void)signChallenge:(id)arg1 signatureEntanglementMode:(unsigned long long)arg2 completion:(id)arg3;
- (void)signatureForAuthToken:(id)arg1 completion:(id)arg2;
- (void)stateInformationWithCompletion:(id)arg1;
- (unsigned long long)supportedTechnologies;
- (void)unregisterObserver:(id)arg1;

@end
