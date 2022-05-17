/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUSenderIdentity : NSObject <NSCopying, NSSecureCoding> {
    NSUUID * _UUID;
    NSUUID * _accountUUID;
    TUHandle * _handle;
    NSString * _localizedName;
    NSString * _localizedShortName;
}

@property (nonatomic, readonly) NSUUID *UUID;
@property (nonatomic, readonly) NSUUID *accountUUID;
@property (nonatomic, readonly) TUHandle *handle;
@property (nonatomic, readonly, copy) NSString *localizedName;
@property (nonatomic, readonly, copy) NSString *localizedShortName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)UUID;
- (id)accountUUID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)handle;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithUUID:(id)arg1 accountUUID:(id)arg2 localizedName:(id)arg3 localizedShortName:(id)arg4 handle:(id)arg5;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToSenderIdentity:(id)arg1;
- (id)localizedName;
- (id)localizedShortName;

@end