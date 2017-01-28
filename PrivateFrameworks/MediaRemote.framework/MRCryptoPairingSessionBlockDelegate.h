/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRCryptoPairingSessionBlockDelegate : NSObject <MRCryptoPairingSessionDelegate> {
    id  _dataExchangeBlock;
    id  _exchangeCompleteBlock;
    id  _hideSetupCodeBlock;
    id  _promptForSetupCodeBlock;
    id  _showSetupCodeBlock;
}

@property (nonatomic, copy) id dataExchangeBlock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id exchangeCompleteBlock;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id hideSetupCodeBlock;
@property (nonatomic, copy) id promptForSetupCodeBlock;
@property (nonatomic, copy) id showSetupCodeBlock;
@property (readonly) Class superclass;

- (id)dataExchangeBlock;
- (void)dealloc;
- (id)exchangeCompleteBlock;
- (id)hideSetupCodeBlock;
- (void)pairingSession:(id)arg1 didCompleteExchangeWithError:(id)arg2;
- (void)pairingSession:(id)arg1 didPrepareExchangeData:(id)arg2;
- (void)pairingSession:(id)arg1 promptForSetupCodeWithCompletion:(id)arg2;
- (void)pairingSession:(id)arg1 promptForSetupCodeWithDelay:(double)arg2 completion:(id)arg3;
- (void)pairingSession:(id)arg1 showSetupCode:(id)arg2;
- (void)pairingSessionHideSetupCode:(id)arg1;
- (id)promptForSetupCodeBlock;
- (void)setDataExchangeBlock:(id)arg1;
- (void)setExchangeCompleteBlock:(id)arg1;
- (void)setHideSetupCodeBlock:(id)arg1;
- (void)setPromptForSetupCodeBlock:(id)arg1;
- (void)setShowSetupCodeBlock:(id)arg1;
- (id)showSetupCodeBlock;

@end
