/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIStarRatingQueue : NSObject {
    SKUIClientContext * _clientContext;
    NSOperationQueue * _queue;
    SKUIReviewConfiguration * _reviewConfiguration;
    UIWindow * _window;
}

@property (nonatomic) UIWindow *window;

- (void).cxx_destruct;
- (void)_setRating:(long long)arg1 forItem:(id)arg2 account:(id)arg3 completionBlock:(id)arg4;
- (id)init;
- (id)initWithClientContext:(id)arg1 reviewConfiguration:(id)arg2;
- (void)setRating:(long long)arg1 forItem:(id)arg2 completionBlock:(id)arg3;
- (void)setWindow:(id)arg1;
- (id)window;

@end
