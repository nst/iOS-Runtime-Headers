/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SIMSetupSupport.framework/SIMSetupSupport
 */

@interface TSCellularPlanScanViewController : UIViewController <TSCellularPlanQRCodeScannerCaptureDelegate, TSSetupFlowItem, UINavigationControllerDelegate> {
    bool  _confirmationCodeRequired;
    UIView * _cutoutView;
    <TSSIMSetupFlowDelegate> * _delegate;
    UIButton * _enterDetailsManuallyButton;
    NSString * _fauxCardData;
    CAShapeLayer * _fillWithHoleLayer;
    CAShapeLayer * _holeOutlineLayer;
    bool  _manualCardInfoEntry;
    NSDate * _nextTimeToAcceptScan;
    UILabel * _positionQRCodeLabel;
    bool  _preinstallCompleted;
    UILabel * _scanQRCodeLabel;
    UIView * _scanView;
    TSCellularPlanQRCodeScannerView * _scannerView;
}

@property (readonly) bool confirmationCodeRequired;
@property (nonatomic) UIView *cutoutView;
@property (readonly, copy) NSString *debugDescription;
@property <TSSIMSetupFlowDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) UIButton *enterDetailsManuallyButton;
@property (readonly) NSString *fauxCardData;
@property (readonly) unsigned long long hash;
@property (readonly) bool manualCardInfoEntry;
@property (nonatomic) UILabel *positionQRCodeLabel;
@property (nonatomic) UILabel *scanQRCodeLabel;
@property (nonatomic) UIView *scanView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addNewPlanWithCardData:(id)arg1 confirmationCode:(id)arg2;
- (void)captureOutput:(id)arg1 didOutputMetadataObjects:(id)arg2 fromConnection:(id)arg3;
- (void)captureSession:(id)arg1 isRunning:(bool)arg2;
- (bool)confirmationCodeRequired;
- (id)cutoutView;
- (id)delegate;
- (void)didChangeValueForKey:(id)arg1;
- (id)enterDetailsManuallyButton;
- (void)enterFauxCardDataManually:(id)arg1;
- (id)fauxCardData;
- (id)init;
- (bool)manualCardInfoEntry;
- (void)planInfoDidUpdate:(id)arg1 planListError:(id)arg2;
- (id)positionQRCodeLabel;
- (void)presentViewController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (id)scanQRCodeLabel;
- (id)scanView;
- (void)setCutoutView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEnterDetailsManuallyButton:(id)arg1;
- (void)setPositionQRCodeLabel:(id)arg1;
- (void)setScanQRCodeLabel:(id)arg1;
- (void)setScanView:(id)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
