/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INSendMessageIntent : INIntent <INSendMessageIntentExport>

@property (nonatomic, readonly, copy) NSString *content;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *groupName;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *recipients;
@property (nonatomic, readonly, copy) INPerson *sender;
@property (nonatomic, readonly, copy) NSString *serviceName;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/Intents.framework/Intents

- (id)_dictionaryRepresentation;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1;
- (id)_typedBackingStore;
- (id)content;
- (id)description;
- (id)groupName;
- (id)initWithRecipients:(id)arg1 content:(id)arg2 groupName:(id)arg3 serviceName:(id)arg4 sender:(id)arg5;
- (id)initWithRecipients:(id)arg1 content:(id)arg2 serviceName:(id)arg3 sender:(id)arg4;
- (id)recipients;
- (id)sender;
- (id)serviceName;
- (void)setContent:(id)arg1;
- (void)setGroupName:(id)arg1;
- (void)setRecipients:(id)arg1;
- (void)setSender:(id)arg1;
- (void)setServiceName:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet

- (long long)_cdInteractionMechanism;
- (id)_cdRecipients;

@end
