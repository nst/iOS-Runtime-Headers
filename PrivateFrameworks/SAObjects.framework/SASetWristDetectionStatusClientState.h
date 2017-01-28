/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASetWristDetectionStatusClientState : SABaseCommand <SAServerBoundCommand, SASetSingleClientState>

@property (nonatomic, copy) NSString *aceId;
@property (nonatomic, retain) SAWristDetectionStatusClientState *clientState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *refId;
@property (readonly) Class superclass;

+ (id)setWristDetectionStatusClientState;
+ (id)setWristDetectionStatusClientStateWithDictionary:(id)arg1 context:(id)arg2;

- (id)clientState;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setClientState:(id)arg1;

@end
