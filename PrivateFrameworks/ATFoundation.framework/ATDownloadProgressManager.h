/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
 */

@interface ATDownloadProgressManager : NSObject <ATAssetLinkControllerObserver, ATDownloadProgressListener, NSXPCListenerDelegate> {
    NSMutableSet * _downloadObservers;
    NSXPCListener * _listener;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)assetLinkController:(id)arg1 didEnqueueAsset:(id)arg2;
- (void)assetLinkController:(id)arg1 didFinishAsset:(id)arg2;
- (void)assetLinkController:(id)arg1 didUpdateAsset:(id)arg2;
- (void)assetLinkController:(id)arg1 didUpdateAssetState:(id)arg2;
- (void)getAllDownloadsWithReplyBlock:(id)arg1;
- (void)getDownloadProgressForItemIdentifier:(id)arg1 withReplyBlock:(id)arg2;
- (id)init;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)start;
- (void)stop;

@end
