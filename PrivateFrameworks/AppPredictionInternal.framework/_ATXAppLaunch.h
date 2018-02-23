/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface _ATXAppLaunch : NSObject {
    NSString * _bundleId;
    NSDate * _endDate;
    NSString * _reason;
    NSDate * _startDate;
    NSTimeZone * _timeZone;
}

@property (nonatomic, readonly) NSString *bundleId;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) NSString *reason;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) NSTimeZone *timeZone;

- (void).cxx_destruct;
- (id)bundleId;
- (id)description;
- (id)endDate;
- (unsigned long long)hash;
- (id)init;
- (id)initWithBundleId:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 timeZone:(id)arg4 reason:(id)arg5;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToLaunch:(id)arg1;
- (id)reason;
- (id)startDate;
- (id)timeZone;

@end
