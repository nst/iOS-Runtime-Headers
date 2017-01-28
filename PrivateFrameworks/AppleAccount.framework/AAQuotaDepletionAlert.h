/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@interface AAQuotaDepletionAlert : NSObject {
    ACAccountStore * _accountStore;
    NSString * _dataclass;
    ACAccount * _primaryAccount;
}

+ (bool)_isDisabledDataclass:(id)arg1;

- (void).cxx_destruct;
- (id)_deviceSpecificLocalizedString:(id)arg1;
- (id)_primaryAccount;
- (id)init;
- (id)initForDataclass:(id)arg1;
- (bool)showIfNecessaryWithHandler:(id)arg1;
- (void)showWithHandler:(id)arg1;

@end
