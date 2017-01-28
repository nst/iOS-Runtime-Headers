/* Generated by RuntimeBrowser.
 */

@protocol IKApplication <NSObject>

@required

- (NSString *)appIdentifier;
- (NSURL *)appJSURL;
- (<IKAppDataStoring> *)localStorage;
- (bool)shouldIgnoreJSValidation;
- (<IKAppUserDefaultsStoring> *)userDefaultsStorage;
- (NSString *)vendorIdentifier;
- (<IKAppDataStoring> *)vendorStorage;

@optional

- (IKAppDocument *)activeDocument;
- (bool)appIsTrusted;
- (NSURL *)appJSCachePath;
- (NSDictionary *)appLaunchParams;
- (NSURL *)appLocalJSURL;
- (NSDictionary *)appTraitCollection;
- (bool)shouldAllowRemoteInspection;
- (IKViewElementRegistry *)viewElementRegistry;

@end
