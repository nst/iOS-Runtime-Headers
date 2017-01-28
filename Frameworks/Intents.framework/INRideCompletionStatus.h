/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INRideCompletionStatus : NSObject <INRideCompletionStatusExport, NSCopying, NSSecureCoding> {
    bool  _canceledByService;
    bool  _completed;
    NSUserActivity * _completionUserActivity;
    bool  _missedPickup;
    bool  _outstanding;
    INCurrencyAmount * _paymentAmount;
}

@property (getter=isCanceled, nonatomic, readonly) bool canceled;
@property (getter=isCanceledByService, nonatomic, readonly) bool canceledByService;
@property (getter=isCompleted, nonatomic, readonly) bool completed;
@property (nonatomic, retain) NSUserActivity *completionUserActivity;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isMissedPickup, nonatomic, readonly) bool missedPickup;
@property (getter=isOutstanding, nonatomic, readonly) bool outstanding;
@property (nonatomic, readonly) INCurrencyAmount *paymentAmount;
@property (readonly) Class superclass;

+ (id)canceledByService;
+ (id)canceledByUser;
+ (id)canceledMissedPickup;
+ (id)completed;
+ (id)completedWithOutstandingPaymentAmount:(id)arg1;
+ (id)completedWithSettledPaymentAmount:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)_initCompleted:(bool)arg1 canceledByService:(bool)arg2 missedPickup:(bool)arg3 amount:(id)arg4 outstanding:(bool)arg5;
- (id)_initWithValue:(id)arg1;
- (id)_newValue;
- (id)completionUserActivity;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isCanceled;
- (bool)isCanceledByService;
- (bool)isCompleted;
- (bool)isMissedPickup;
- (bool)isOutstanding;
- (id)paymentAmount;
- (void)setCompletionUserActivity:(id)arg1;

@end
