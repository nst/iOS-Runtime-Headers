/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKElectrocardiogramSession : NSObject <HKElectrocardiogramSessionClientInterface, _HKXPCExportable> {
    <HKElectrocardiogramSessionDelegate> * _delegate;
    HKHealthStore * _healthStore;
    HKTaskServerProxyProvider * _proxyProvider;
    HKElectrocardiogramSessionConfiguration * _sessionConfiguration;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HKElectrocardiogramSessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) HKElectrocardiogramSessionConfiguration *sessionConfiguration;
@property (readonly) Class superclass;

+ (id)clientInterface;
+ (bool)isElectrocardiogramSessionAvailable;
+ (id)serverInterface;

- (void).cxx_destruct;
- (id /* block */)_successCompletionBlockOnClientQueue:(id /* block */)arg1;
- (void)abortWithCompletion:(id /* block */)arg1;
- (void)clientRemote_didDetectContactAtDate:(id)arg1;
- (void)clientRemote_didDetectEmergencyCallbackModeWithEndDate:(id)arg1;
- (void)clientRemote_didEndWithReason:(long long)arg1 error:(id)arg2;
- (void)connectionInterrupted;
- (void)connectionInvalidated;
- (id)delegate;
- (id)exportedInterface;
- (id)init;
- (id)initWithHealthStore:(id)arg1 configuration:(id)arg2;
- (id)remoteInterface;
- (id)sessionConfiguration;
- (void)setDelegate:(id)arg1;
- (void)startWithCompletion:(id /* block */)arg1;

@end
