/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKSummary : NSObject <NSSecureCoding> {
    NSDate * _latestSampleDate;
    NSDate * _summaryEndDate;
    NSDate * _summaryStartDate;
    long long  _typeCode;
    id  _value;
}

@property (nonatomic, retain) NSDate *latestSampleDate;
@property (nonatomic, retain) NSDate *summaryEndDate;
@property (nonatomic, retain) NSDate *summaryStartDate;
@property (nonatomic) long long typeCode;
@property (nonatomic, retain) id value;

+ (bool)supportsSecureCoding;
+ (id)valuesByTypeFromSummaries:(id)arg1;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTypeCode:(long long)arg1;
- (id)initWithTypeCode:(long long)arg1 value:(id)arg2 sampleDate:(id)arg3 usingCalendar:(id)arg4;
- (id)latestSampleDate;
- (void)setLatestSampleDate:(id)arg1;
- (void)setSummaryDatesUsingCalendar:(id)arg1;
- (void)setSummaryEndDate:(id)arg1;
- (void)setSummaryStartDate:(id)arg1;
- (void)setTypeCode:(long long)arg1;
- (void)setValue:(id)arg1;
- (id)summaryEndDate;
- (id)summaryStartDate;
- (long long)typeCode;
- (id)value;

@end
