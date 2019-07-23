/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/IdentityLookup.framework/IdentityLookup
 */

@interface ILClassificationResponse : NSObject <NSSecureCoding> {
    long long  _action;
    NSDictionary * _userInfo;
    NSString * _userString;
}

@property (nonatomic, readonly) long long action;
@property (nonatomic, copy) NSDictionary *userInfo;
@property (nonatomic, copy) NSString *userString;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)action;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithClassificationAction:(long long)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToResponse:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (void)setUserString:(id)arg1;
- (id)userInfo;
- (id)userString;

@end
