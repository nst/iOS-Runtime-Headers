/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFAutoUnlockDevice : SFPeerDevice <NSSecureCoding> {
    bool  _bluetoothCloudPaired;
    NSUUID * _bluetoothID;
    bool  _keyExists;
    NSString * _modelDescription;
    NSString * _modelName;
    bool  _placeholder;
    NSUUID * _proxyBluetoothID;
    NSDictionary * _results;
    bool  _unlockEnabled;
}

@property (nonatomic) bool bluetoothCloudPaired;
@property (nonatomic, retain) NSUUID *bluetoothID;
@property (nonatomic) bool keyExists;
@property (nonatomic, copy) NSString *modelDescription;
@property (nonatomic, retain) NSString *modelName;
@property (nonatomic) bool placeholder;
@property (nonatomic, copy) NSUUID *proxyBluetoothID;
@property (nonatomic, retain) NSDictionary *results;
@property (nonatomic, readonly) long long type;
@property (nonatomic) bool unlockEnabled;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)bluetoothCloudPaired;
- (id)bluetoothID;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)keyExists;
- (id)modelDescription;
- (id)modelName;
- (bool)placeholder;
- (id)proxyBluetoothID;
- (id)results;
- (void)setBluetoothCloudPaired:(bool)arg1;
- (void)setBluetoothID:(id)arg1;
- (void)setKeyExists:(bool)arg1;
- (void)setModelDescription:(id)arg1;
- (void)setModelName:(id)arg1;
- (void)setPlaceholder:(bool)arg1;
- (void)setProxyBluetoothID:(id)arg1;
- (void)setResults:(id)arg1;
- (void)setUnlockEnabled:(bool)arg1;
- (long long)type;
- (bool)unlockEnabled;

@end
