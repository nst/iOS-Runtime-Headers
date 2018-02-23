/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
 */

@interface CLKDateTextProvider : CLKTextProvider {
    bool  _allowsNarrowUnits;
    NSString * _alternateCalendarLocaleID;
    unsigned long long  _calendarUnits;
    NSDate * _date;
    NSDateFormatter * _dateFormatter;
    long long  _formattingContext;
    bool  _shortUnits;
    NSArray * _templateSeries;
    NSTimeZone * _timeZone;
}

@property (nonatomic) bool allowsNarrowUnits;
@property (nonatomic, copy) NSString *alternateCalendarLocaleID;
@property (nonatomic) unsigned long long calendarUnits;
@property (nonatomic, retain) NSDate *date;
@property (nonatomic) long long formattingContext;
@property (nonatomic) bool shortUnits;
@property (nonatomic, retain) NSTimeZone *timeZone;

+ (bool)supportsSecureCoding;
+ (id)textProviderWithDate:(id)arg1 units:(unsigned long long)arg2;
+ (id)textProviderWithDate:(id)arg1 units:(unsigned long long)arg2 timeZone:(id)arg3;

- (void).cxx_destruct;
- (id)JSONObjectRepresentation;
- (id)_completeDateTemplateSeries;
- (id)_initWithJSONObjectRepresentation:(id)arg1;
- (id)_partialDateTemplateSeriesForUnits:(unsigned long long)arg1;
- (id)_sessionAttributedTextForIndex:(unsigned long long)arg1 withStyle:(id)arg2;
- (void)_validate;
- (bool)allowsNarrowUnits;
- (id)alternateCalendarLocaleID;
- (unsigned long long)calendarUnits;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)formattingContext;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setAllowsNarrowUnits:(bool)arg1;
- (void)setAlternateCalendarLocaleID:(id)arg1;
- (void)setCalendarUnits:(unsigned long long)arg1;
- (void)setDate:(id)arg1;
- (void)setFormattingContext:(long long)arg1;
- (void)setShortUnits:(bool)arg1;
- (void)setTimeZone:(id)arg1;
- (bool)shortUnits;
- (id)timeZone;

@end
