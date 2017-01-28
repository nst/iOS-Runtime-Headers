/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

@interface CUPairedPeer : NSObject <NSSecureCoding> {
    NSDictionary * _entitlements;
    NSUUID * _identifier;
    NSString * _label;
    NSString * _model;
    NSData * _publicKey;
}

@property (nonatomic, copy) NSDictionary *entitlements;
@property (nonatomic, copy) NSUUID *identifier;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, copy) NSString *model;
@property (nonatomic, copy) NSData *publicKey;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)entitlements;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)label;
- (id)model;
- (id)publicKey;
- (void)setEntitlements:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setPublicKey:(id)arg1;

@end
