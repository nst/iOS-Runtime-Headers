/* Generated by RuntimeBrowser.
 */

@protocol XCUIApplicationMonitor <NSObject, XCUIApplicationProcessTracker, XCUIApplicationPlatformServicesProviderDelegate>

@required

- (void)acquireBackgroundAssertionForPID:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (XCUIApplicationImpl *)applicationImplementationForApplicationAtPath:(NSString *)arg1 bundleID:(NSString *)arg2;
- (XCUIApplicationRegistry *)applicationRegistry;
- (void)crashInProcessWithBundleID:(NSString *)arg1 path:(NSString *)arg2 pid:(int)arg3 symbol:(NSString *)arg4;
- (void)launchRequestedForApplicationProcess:(XCUIApplicationProcess *)arg1;
- (void)processWithToken:(NSNumber *)arg1 exitedWithStatus:(int)arg2;
- (void)setApplicationRegistry:(XCUIApplicationRegistry *)arg1;
- (void)stopTrackingProcessWithToken:(NSNumber *)arg1;
- (void)terminateApplicationProcess:(XCUIApplicationProcess *)arg1 withToken:(id)arg2;
- (void)terminationTrackedForApplicationProcess:(XCUIApplicationProcess *)arg1;
- (void)waitForUnrequestedTerminationOfLaunchedApplicationsWithTimeout:(double)arg1;

@end
