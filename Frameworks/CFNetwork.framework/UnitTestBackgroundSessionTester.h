/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface UnitTestBackgroundSessionTester : NSObject <NSURLSessionDataDelegate, NSURLSessionDelegate> {
    struct BackgroundTaskServerTrustTestResult { bool x1; bool x2; bool x3; } * result;
    NSObject<OS_dispatch_semaphore> * sema;
    NSURLSession * session;
    NSURLSessionDataTask * task;
    int  timeout;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(id)arg4;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)dealloc;
- (id)initWithConfiguration:(id)arg1 result:(struct BackgroundTaskServerTrustTestResult { bool x1; bool x2; bool x3; }*)arg2;
- (void)startTaskWithURL:(const char *)arg1;

@end
