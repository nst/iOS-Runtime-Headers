/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVKeybagSyncRequest : SSRequest <SSXPCCoding> {
    NSNumber * _accountID;
}

@property (nonatomic, readonly) NSNumber *accountIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)accountIdentifier;
- (id)copyXPCEncoding;
- (id)initWithAccountIdentifier:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (void)startWithCompletionBlock:(id)arg1;

@end
