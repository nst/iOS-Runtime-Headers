/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVLogging : NSObject {
    NSObject<OS_dispatch_queue> * _delegateMuckingQueue;
    struct __CFDictionary { } * _logDelegates;
}

+ (id)sharedLogging;

- (id)_delegatesToLogForProvider:(id)arg1;
- (bool)_shouldOutputAtLevel:(long long)arg1 forAccountInfoProvider:(id)arg2;
- (void)addLogDelegate:(id)arg1 forAccountInfoProvider:(id)arg2;
- (void)dealloc;
- (id)delegatesToLogTransmittedDataForAccountInfoProvider:(id)arg1;
- (id)init;
- (void)logDiagnosticForProvider:(id)arg1 withLevel:(long long)arg2 format:(id)arg3 args:(char *)arg4;
- (void)removeLogDelegate:(id)arg1 forAccountInfoProvider:(id)arg2;
- (bool)shouldLogAtLevel:(long long)arg1 forAccountInfoProvider:(id)arg2;

@end
