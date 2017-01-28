/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMHAPMetadata : NSObject <NSSecureCoding> {
    NSArray * _accessoryCategories;
    NSArray * _assistantCharacteristics;
    NSDictionary * _assistantServices;
    NSDictionary * _assistantUnits;
    NSArray * _hapCharacteristics;
    NSArray * _hapServices;
    NSArray * _hapValueUnits;
    NSNumber * _version;
}

@property (nonatomic, retain) NSArray *accessoryCategories;
@property (nonatomic, retain) NSArray *assistantCharacteristics;
@property (nonatomic, retain) NSDictionary *assistantServices;
@property (nonatomic, retain) NSDictionary *assistantUnits;
@property (nonatomic, retain) NSArray *hapCharacteristics;
@property (nonatomic, retain) NSArray *hapServices;
@property (nonatomic, retain) NSArray *hapValueUnits;
@property (nonatomic, retain) NSNumber *version;

+ (id)getSharedInstance;
+ (void)setSharedInstance:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accessoryCategories;
- (id)assistantCharacteristics;
- (id)assistantServices;
- (id)assistantUnits;
- (id)characteristicTypeDescription:(id)arg1;
- (id)characteristicTypeLocalizedDescription:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)hapCharacteristics;
- (id)hapServices;
- (id)hapValueUnits;
- (id)initWithCoder:(id)arg1;
- (id)serviceTypeDescription:(id)arg1;
- (id)serviceTypeLocalizedDescription:(id)arg1;
- (void)setAccessoryCategories:(id)arg1;
- (void)setAssistantCharacteristics:(id)arg1;
- (void)setAssistantServices:(id)arg1;
- (void)setAssistantUnits:(id)arg1;
- (void)setHapCharacteristics:(id)arg1;
- (void)setHapServices:(id)arg1;
- (void)setHapValueUnits:(id)arg1;
- (void)setVersion:(id)arg1;
- (id)version;

@end
