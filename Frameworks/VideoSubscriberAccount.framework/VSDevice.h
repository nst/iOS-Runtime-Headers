/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

@interface VSDevice : NSObject {
    int (* _copyAnswer;
    NSOperationQueue * _privateQueue;
}

@property (nonatomic) int (*copyAnswer;
@property (nonatomic, readonly) unsigned long long deviceType;
@property (nonatomic, retain) NSOperationQueue *privateQueue;
@property (getter=isRunningACustomerBuild, nonatomic, readonly) bool runningACustomerBuild;
@property (getter=isRunningAnInternalBuild, nonatomic, readonly) bool runningAnInternalBuild;

+ (unsigned long long)_deviceTypeWithCopyAnswer:(int (*)arg1;
+ (bool)_getMobileGestaltBoolean:(struct __CFString { }*)arg1 withCopyAnswer:(int (*)arg2;
+ (bool)_runningACustomerBuildWithCopyAnswer:(int (*)arg1;
+ (bool)_runningAnInternalBuildWithCopyAnswer:(int (*)arg1;
+ (id)currentDevice;

- (void).cxx_destruct;
- (id)accountDeletionConfirmationMessageForIdentityProviderDisplayName:(id)arg1;
- (int (*)copyAnswer;
- (id)developerIdentityProviderDeletionConfirmationMessage;
- (unsigned long long)deviceType;
- (void)fetchSetTopBoxProfileWithCompletion:(id /* block */)arg1;
- (id)init;
- (bool)isRunningACustomerBuild;
- (bool)isRunningAnInternalBuild;
- (id)privateQueue;
- (void)setCopyAnswer:(int (*)arg1;
- (void)setPrivateQueue:(id)arg1;

@end
