/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CallKit.framework/CallKit
 */

@interface CXLabeledHandle : NSObject <NSCopying, NSSecureCoding> {
    CXHandle * _handle;
    NSString * _localizedLabel;
}

@property (nonatomic, retain) CXHandle *handle;
@property (nonatomic, copy) NSString *localizedLabel;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)handle;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithHandle:(id)arg1 localizedLabel:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToLabeledHandle:(id)arg1;
- (id)localizedLabel;
- (void)setHandle:(id)arg1;
- (void)setLocalizedLabel:(id)arg1;

@end