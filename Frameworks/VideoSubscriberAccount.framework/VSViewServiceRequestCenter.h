/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

@interface VSViewServiceRequestCenter : NSObject {
    NSOperationQueue * _completionQueue;
    NSOperationQueue * _requestQueue;
}

@property (nonatomic, retain) NSOperationQueue *completionQueue;
@property (nonatomic, retain) NSOperationQueue *requestQueue;

+ (id)sharedViewServiceRequestCenter;

- (void).cxx_destruct;
- (id)completionQueue;
- (id)enqueueCompletionHandlerBlock:(id)arg1;
- (id)enqueueRequest:(id)arg1 withAccountManagerDelegate:(id)arg2 operationDelegate:(id)arg3 completionHandler:(id)arg4;
- (id)init;
- (id)requestQueue;
- (void)setCompletionQueue:(id)arg1;
- (void)setRequestQueue:(id)arg1;

@end
