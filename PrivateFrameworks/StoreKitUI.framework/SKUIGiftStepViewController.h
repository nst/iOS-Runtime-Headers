/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIGiftStepViewController : UIViewController {
    SKUIGift * _gift;
    SKUIGiftConfiguration * _giftConfiguration;
    SSVLoadURLOperation * _loadOperation;
    NSOperationQueue * _operationQueue;
}

@property (nonatomic, readonly) SKUIGift *gift;
@property (nonatomic, readonly) SKUIGiftConfiguration *giftConfiguration;
@property (nonatomic, retain) NSOperationQueue *operationQueue;

- (void).cxx_destruct;
- (void)_finishImageLoadWithImage:(id)arg1 error:(id)arg2 block:(id)arg3;
- (void)finishGiftingWithResult:(bool)arg1;
- (id)gift;
- (id)giftConfiguration;
- (id)initWithGift:(id)arg1 configuration:(id)arg2;
- (void)loadItemArtworkWithArtworkContext:(id)arg1 completionBlock:(id)arg2;
- (id)operationQueue;
- (void)setOperationQueue:(id)arg1;

@end
