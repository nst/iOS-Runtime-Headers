/* Generated by RuntimeBrowser.
 */

@protocol NFLoyaltyAndPaymentSessionDelegate <NSObject>

@optional

- (void)loyaltyAndPaymentSession:(NFLoyaltyAndPaymentSession *)arg1 didDetectField:(bool)arg2;
- (void)loyaltyAndPaymentSession:(NFLoyaltyAndPaymentSession *)arg1 didDetectTechnology:(NFTechnologyEvent *)arg2;
- (void)loyaltyAndPaymentSession:(NFLoyaltyAndPaymentSession *)arg1 didEndTransaction:(NFContactlessPaymentEndEvent *)arg2;
- (void)loyaltyAndPaymentSession:(NFLoyaltyAndPaymentSession *)arg1 didEnterFieldWithNotification:(NFFieldNotification *)arg2;
- (void)loyaltyAndPaymentSession:(NFLoyaltyAndPaymentSession *)arg1 didExpireTransactionForApplet:(NFApplet *)arg2;
- (void)loyaltyAndPaymentSession:(NFLoyaltyAndPaymentSession *)arg1 didExpressModeStateChange:(unsigned int)arg2;
- (void)loyaltyAndPaymentSession:(NFLoyaltyAndPaymentSession *)arg1 didExpressModeStateChange:(unsigned int)arg2 withObject:(NSString *)arg3;
- (void)loyaltyAndPaymentSession:(NFLoyaltyAndPaymentSession *)arg1 didFailDeferredAuthorization:(bool)arg2;
- (void)loyaltyAndPaymentSession:(NFLoyaltyAndPaymentSession *)arg1 didFelicaStateChange:(NSDictionary *)arg2;
- (void)loyaltyAndPaymentSession:(NFLoyaltyAndPaymentSession *)arg1 didPerformValueAddedServiceTransactions:(NSArray *)arg2;
- (void)loyaltyAndPaymentSession:(NFLoyaltyAndPaymentSession *)arg1 didReceiveButtonPressForApplet:(NFApplet *)arg2;
- (void)loyaltyAndPaymentSession:(NFLoyaltyAndPaymentSession *)arg1 didSelectApplet:(NFApplet *)arg2;
- (void)loyaltyAndPaymentSession:(NFLoyaltyAndPaymentSession *)arg1 didSelectValueAddedService:(bool)arg2;
- (void)loyaltyAndPaymentSession:(NFLoyaltyAndPaymentSession *)arg1 didStartTransaction:(NFContactlessPaymentStartEvent *)arg2;
- (void)loyaltyAndPaymentSessionDidEndUnexpectedly:(NFLoyaltyAndPaymentSession *)arg1;
- (void)loyaltyAndPaymentSessionDidExitField:(NFLoyaltyAndPaymentSession *)arg1;
- (void)loyaltyAndPaymentSessionDidReceiveActivityTimeout:(NFLoyaltyAndPaymentSession *)arg1;
- (void)loyaltyAndPaymentSessionDidReceiveActivityTimeout:(NFLoyaltyAndPaymentSession *)arg1 result:(NSString *)arg2;
- (void)loyaltyAndPaymentSessionHasPendingServerRequest:(NFLoyaltyAndPaymentSession *)arg1;

@end
