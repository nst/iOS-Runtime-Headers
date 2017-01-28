/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpotlightUI.framework/SpotlightUI
 */

@interface SPUISearchResultHandler : NSObject <SKStoreProductViewControllerDelegate, UIDocumentInteractionControllerDelegate> {
    <SPUISearchResultHandlerDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property <SPUISearchResultHandlerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)requestDeviceUnlockWithSuccessHandler:(id)arg1;
+ (id)sharedResultHandler;

- (void).cxx_destruct;
- (bool)asyncViewControllerForResult:(id)arg1 preview:(bool)arg2 completion:(id)arg3;
- (bool)defaultApplicationExistsAndSupportsOpenInPlaceForResult:(id)arg1 open:(bool)arg2;
- (id)delegate;
- (void)handleResultSelected:(id)arg1 withFeedback:(id)arg2 wasPop:(bool)arg3;
- (void)modalViewControllerClosed;
- (void)openUserActivityForResult:(id)arg1;
- (void)presentViewController:(id)arg1 animated:(bool)arg2;
- (void)productViewControllerDidFinish:(id)arg1;
- (void)requestAuthAndPresentViewController:(id)arg1 animated:(bool)arg2;
- (void)requestAuthIfNecessaryAndPresentViewController:(id)arg1 animated:(bool)arg2;
- (void)setDelegate:(id)arg1;
- (bool)shouldDisplayContactCardForResult:(id)arg1;
- (void)showViewController:(id)arg1;
- (id)viewControllerForResult:(id)arg1 preview:(bool)arg2;

@end
