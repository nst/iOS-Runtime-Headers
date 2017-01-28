/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicApplicationController : SKUIApplicationController <SKUIModalDocumentDataSource, SKUIModalDocumentDelegate, SSVDirectUploadObserver> {
    SSVDirectUploadQueue * _uploadQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (Class)_JSITunesStoreClass;
- (bool)_sendNativeBackButtonMetricEvents;
- (id)activeDocument;
- (void)dealloc;
- (void)loadApplicationWithOptions:(id)arg1;
- (id)modalDocumentController:(id)arg1 alertControllerForDocument:(id)arg2 withDismissObserverBlock:(id)arg3 options:(id)arg4;
- (bool)modalDocumentController:(id)arg1 willPushDocument:(id)arg2 options:(id)arg3;
- (void)uploadQueue:(id)arg1 uploadsDidChange:(id)arg2;

@end
