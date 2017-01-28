/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSFormAutoFillParsecFeedbackProcessor : NSObject <WBSFormAutoFillFeedbackProcessor> {
    unsigned long long  _autoFillVersion;
    <WBSFormAutoFillFeedbackDomainPolicyProvider> * _domainPolicyProvider;
    <WBSParsecGlobalFeedbackDispatcher> * _globalFeedbackDispatcher;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <WBSFormAutoFillFeedbackDomainPolicyProvider> *domainPolicyProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_feedbackWithCorrections:(id)arg1 forFingerprint:(id)arg2 onDomain:(id)arg3 includeOrigin:(bool)arg4;
- (void)_getFeedbackWithCorrections:(id)arg1 forFingerprint:(id)arg2 onDomain:(id)arg3 completionHandler:(id)arg4;
- (id)domainPolicyProvider;
- (id)init;
- (id)initWithGlobalFeedbackDispatcher:(id)arg1 domainPolicyProvider:(id)arg2 autoFillVersion:(unsigned long long)arg3;
- (void)sendFeedbackWithCorrections:(id)arg1 forFingerprint:(id)arg2 onDomain:(id)arg3;
- (void)setDomainPolicyProvider:(id)arg1;

@end
