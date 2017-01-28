/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentBackgroundDownloadRecord : NSObject <NSSecureCoding> {
    long long  _retryCount;
    long long  _taskType;
}

@property (nonatomic) long long retryCount;
@property (nonatomic) long long taskType;

+ (bool)supportsSecureCoding;
+ (id)taskWithType:(long long)arg1;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)retryCount;
- (void)setRetryCount:(long long)arg1;
- (void)setTaskType:(long long)arg1;
- (long long)taskType;

@end
