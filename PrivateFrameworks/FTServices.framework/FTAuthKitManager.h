/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@interface FTAuthKitManager : NSObject {
    AKAppleIDSession * _akAppleIDSession;
    NSObject<OS_dispatch_queue> * _queue;
}

+ (id)sharedInstance;

- (void)anisetteHeadersForRequest:(id)arg1 completionBlockQueue:(id)arg2 completionBlock:(id)arg3;
- (void)dealloc;
- (void)handleResponse:(id)arg1 forRequest:(id)arg2 completionBlock:(id)arg3;
- (id)init;

@end
