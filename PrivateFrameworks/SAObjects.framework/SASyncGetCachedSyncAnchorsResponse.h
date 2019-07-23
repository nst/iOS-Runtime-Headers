/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASyncGetCachedSyncAnchorsResponse : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (nonatomic, copy) NSArray *anchors;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *interactionId;
@property (nonatomic, copy) NSString *refId;
@property (readonly) Class superclass;

+ (id)getCachedSyncAnchorsResponse;
+ (id)getCachedSyncAnchorsResponseWithDictionary:(id)arg1 context:(id)arg2;

- (id)anchors;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)interactionId;
- (bool)requiresResponse;
- (void)setAnchors:(id)arg1;
- (void)setInteractionId:(id)arg1;

@end
