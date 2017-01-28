/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

@interface HMFMutableMessage : HMFMessage

@property (nonatomic, retain) HMFMessageDestination *destination;
@property (nonatomic, copy) NSUUID *identifier;
@property (nonatomic, copy) NSDictionary *messagePayload;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) id responseHandler;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setName:(id)arg1;

@end