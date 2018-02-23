/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/InputContext.framework/InputContext
 */

@interface _ICPredictedItem : NSObject <NSCopying, NSSecureCoding> {
    NSDate * _date;
    unsigned char  _flags;
    NSString * _identifier;
    unsigned char  _itemType;
    NSString * _label;
    unsigned char  _layoutHint;
    NSString * _name;
    NSDictionary * _operationData;
    NSString * _originatingBundleID;
    NSURL * _originatingWebsiteURL;
    unsigned long long  _predictionAge;
    double  _score;
    bool  _shouldAggregate;
    NSString * _targetBundleID;
    _ICProactiveTrigger * _trigger;
    NSString * _value;
}

@property (nonatomic, readonly) NSDate *date;
@property (nonatomic) unsigned char flags;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic) unsigned char itemType;
@property (nonatomic, readonly) NSString *label;
@property (nonatomic) unsigned char layoutHint;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSDictionary *operationData;
@property (nonatomic, readonly) NSString *originatingBundleID;
@property (nonatomic, readonly) NSURL *originatingWebsiteURL;
@property (nonatomic) unsigned long long predictionAge;
@property (nonatomic, readonly) double score;
@property (nonatomic, readonly) bool shouldAggregate;
@property (nonatomic, readonly) NSString *targetBundleID;
@property (nonatomic, readonly) _ICProactiveTrigger *trigger;
@property (nonatomic, readonly) NSString *value;

+ (id)predictedItemFromQuickTypeItem:(id)arg1 trigger:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned char)flags;
- (bool)hasScoreSimilarToItem:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 itemType:(unsigned char)arg2 score:(double)arg3 value:(id)arg4 label:(id)arg5 name:(id)arg6 date:(id)arg7 originatingBundleID:(id)arg8 originatingWebsiteURL:(id)arg9 predictionAge:(unsigned long long)arg10 shouldAggregate:(bool)arg11 flags:(unsigned char)arg12 targetBundleID:(id)arg13 operationData:(id)arg14 proactiveTrigger:(id)arg15;
- (id)initWithIdentifier:(id)arg1 score:(double)arg2 value:(id)arg3 label:(id)arg4 name:(id)arg5 date:(id)arg6 originatingBundleID:(id)arg7 originatingWebsiteURL:(id)arg8 predictionAge:(unsigned long long)arg9 shouldAggregate:(bool)arg10 flags:(unsigned char)arg11 proactiveTrigger:(id)arg12;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPredictedItem:(id)arg1;
- (unsigned char)itemType;
- (id)label;
- (unsigned char)layoutHint;
- (id)name;
- (id)operationData;
- (id)originatingBundleID;
- (id)originatingWebsiteURL;
- (unsigned long long)predictionAge;
- (double)score;
- (void)setFlags:(unsigned char)arg1;
- (void)setItemType:(unsigned char)arg1;
- (void)setLayoutHint:(unsigned char)arg1;
- (void)setPredictionAge:(unsigned long long)arg1;
- (bool)shouldAggregate;
- (id)targetBundleID;
- (id)trigger;
- (id)value;

@end
