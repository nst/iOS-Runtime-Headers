/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface _GEOSimpleTileRequesterSession : NSObject <NSURLSessionDelegate> {
    NSObject<OS_dispatch_queue> * _isolation;
    NSPointerArray * _requesters;
    NSCache * _sessionCache;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedSession;

- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(id)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (id)_runningOperationForTask:(id)arg1;
- (void)addTileRequester:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)removeTileRequester:(id)arg1;
- (id)sessionForAuditToken:(id)arg1;

@end
