/* Generated by RuntimeBrowser.
 */

@protocol CoreDAVLogDelegate <NSObject>

@required

- (void)coreDAVLogDiagnosticMessage:(NSString *)arg1 atLevel:(long long)arg2;
- (long long)coreDAVLogLevel;
- (void)coreDAVLogTransmittedDataPartial:(NSData *)arg1;
- (long long)coreDAVOutputLevel;
- (void)coreDAVTransmittedDataFinished;
- (bool)shouldLogTransmittedData;

@optional

- (void)coreDAVLogRequestBody:(NSData *)arg1;
- (void)coreDAVLogResponseBody:(NSData *)arg1;
- (void)triggerOSLogFault;

@end
