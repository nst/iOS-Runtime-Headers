/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKSeriesBuilder : NSObject <NSSecureCoding> {
    long long  _count;
    int  _state;
    HKHealthStore * _store;
}

@property (setter=_setCount:) long long count;
@property (setter=_setState:) unsigned long long state;
@property (readonly) HKHealthStore *store;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_discardWithHandler:(id)arg1;
- (id)_initWithHealthStore:(id)arg1;
- (void)_setCount:(long long)arg1;
- (void)_setState:(unsigned long long)arg1;
- (long long)count;
- (void)discard;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)state;
- (id)store;

@end
