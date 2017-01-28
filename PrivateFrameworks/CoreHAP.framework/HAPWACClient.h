/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPWACClient : NSObject {
    NSObject<OS_dispatch_queue> * _clientQueue;
    id  _completion;
    bool  _didRestoreNetwork;
    EasyConfigDevice * _ezConfigDevice;
    NSString * _identifier;
    HAPAccessoryServerIP * _ipServer;
    NSString * _name;
    int (* _promptForSetupCode_f;
    <HAPWACScanControlDelegate> * _scanDelegate;
    NSString * _ssid;
    bool  _supports2pt4GHz;
    bool  _supports5GHz;
    bool  _supportsSpruce2;
    id  _wacCompatibilityCheckCompletionHandler;
    struct __CFDictionary { } * _wifiInfo;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (nonatomic, copy) id completion;
@property (nonatomic) bool didRestoreNetwork;
@property (nonatomic, retain) EasyConfigDevice *ezConfigDevice;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) HAPAccessoryServerIP *ipServer;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic) int (*promptForSetupCode_f;
@property (nonatomic, readonly) <HAPWACScanControlDelegate> *scanDelegate;
@property (nonatomic, readonly, copy) NSString *ssid;
@property (nonatomic, readonly) bool supports2pt4GHz;
@property (nonatomic, readonly) bool supports5GHz;
@property (nonatomic, readonly) bool supportsSpruce2;
@property (nonatomic, copy) id wacCompatibilityCheckCompletionHandler;
@property (nonatomic) struct __CFDictionary { }*wifiInfo;

- (void).cxx_destruct;
- (bool)_checkCompatibleNetwork:(id)arg1;
- (void)_configProgress:(id)arg1;
- (int)_configPrompt:(unsigned int)arg1 inDelaySeconds:(int)arg2;
- (void)_configStopped:(id)arg1;
- (void)_joinComplete;
- (void)_waitForLinkUp:(int)arg1 inContext:(void*)arg2;
- (void)checkCompatibleNetwork:(id)arg1 completion:(id)arg2;
- (id)clientQueue;
- (id)completion;
- (void)dealloc;
- (bool)didRestoreNetwork;
- (id)ezConfigDevice;
- (id)identifier;
- (id)initWithWACDevice:(id)arg1 server:(id)arg2 andScanDelegate:(id)arg3;
- (id)ipServer;
- (id)name;
- (void)pairInvalidate;
- (void)pairSetupContinueWithSetupCode:(id)arg1;
- (void)pairSetupStart:(int (*)arg1 completionHandler:(id)arg2;
- (void)pairSetupStop;
- (int (*)promptForSetupCode_f;
- (id)scanDelegate;
- (void)setCompletion:(id)arg1;
- (void)setDidRestoreNetwork:(bool)arg1;
- (void)setEzConfigDevice:(id)arg1;
- (void)setPromptForSetupCode_f:(int (*)arg1;
- (void)setWacCompatibilityCheckCompletionHandler:(id)arg1;
- (void)setWifiInfo:(struct __CFDictionary { }*)arg1;
- (id)ssid;
- (bool)supports2pt4GHz;
- (bool)supports5GHz;
- (bool)supportsSpruce2;
- (id)wacCompatibilityCheckCompletionHandler;
- (struct __CFDictionary { }*)wifiInfo;

@end
