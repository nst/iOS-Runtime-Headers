/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBSectionFilter : NSObject <NSCopying, NSSecureCoding> {
    NSString * _displayName;
    bool  _enabled;
    NSString * _filterID;
}

@property (nonatomic, copy) NSString *displayName;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic, copy) NSString *filterID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (id)filterID;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithID:(id)arg1;
- (bool)isEnabled;
- (bool)isEqual:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setFilterID:(id)arg1;

@end
