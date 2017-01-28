/* Generated by RuntimeBrowser.
 */

@protocol PKPaymentAuthorizationServiceProtocol <NSObject>

@required

- (void)authorizationDidAuthorizePaymentCompleteWithStatus:(long long)arg1;
- (void)authorizationDidAuthorizePurchaseCompleteWithStatus:(long long)arg1;
- (void)authorizationDidRequestMerchantSessionCompleteWithSession:(PKPaymentMerchantSession *)arg1 error:(NSError *)arg2;
- (void)authorizationDidSelectPaymentMethodCompleteWithPaymentSummaryItems:(NSArray *)arg1;
- (void)authorizationDidSelectShippingAddressCompleteWithStatus:(long long)arg1 shippingMethods:(NSArray *)arg2 paymentSummaryItems:(NSArray *)arg3;
- (void)authorizationDidSelectShippingMethodCompleteWithStatus:(long long)arg1 paymentSummaryItems:(NSArray *)arg2;
- (void)handleHostApplicationDidBecomeActive;
- (void)handleHostApplicationWillResignActive:(bool)arg1;

@optional

- (void)handleDismissWithCompletion:(void *)arg1; // needs 1 arg types, found 5: id, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id, void*
- (void)handleHostApplicationDidCancel;
- (void)prepareWithPaymentRequest:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: PKPaymentRequest *, id, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id, NSError *, void*

@end
