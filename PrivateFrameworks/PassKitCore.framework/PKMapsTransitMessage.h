/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKMapsTransitMessage : NSObject <NSCopying, NSSecureCoding> {
    NSURL * _actionURL;
    long long  _iconType;
    NSString * _identifier;
    NSString * _localizedActionTitle;
    NSString * _localizedMessage;
    long long  _maxNotificationCount;
    NSDictionary * _userInfo;
}

@property (nonatomic, readonly) NSURL *actionURL;
@property (nonatomic, readonly) long long iconType;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *localizedActionTitle;
@property (nonatomic, readonly) NSString *localizedMessage;
@property (nonatomic) long long maxNotificationCount;
@property (nonatomic, readonly) NSDictionary *userInfo;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)actionURL;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)iconType;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 message:(id)arg2 actionTitle:(id)arg3 actionURL:(id)arg4 iconType:(long long)arg5 userInfo:(id)arg6;
- (id)localizedActionTitle;
- (id)localizedMessage;
- (long long)maxNotificationCount;
- (void)setMaxNotificationCount:(long long)arg1;
- (id)userInfo;

@end
