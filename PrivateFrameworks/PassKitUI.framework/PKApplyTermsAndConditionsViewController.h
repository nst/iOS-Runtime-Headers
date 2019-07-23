/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKApplyTermsAndConditionsViewController : PKFeatureTermsAndConditionsViewController <PKViewControllerPreflightable> {
    PKApplyController * _applyController;
    CLInUseAssertion * _inUseAssertion;
    NSString * _termsIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_terminateSetupFlow;
- (id)displayTitle;
- (void)htmlTermsDataWithCompletion:(id /* block */)arg1;
- (id)initWithController:(id)arg1 setupDelegate:(id)arg2 context:(long long)arg3 termsIdentifier:(id)arg4;
- (void)initalTermsDataWithCompletion:(id /* block */)arg1;
- (void)pdfTermsDataWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)presentErrorAlert;
- (void)termsAccepted:(bool)arg1 completion:(id /* block */)arg2;
- (void)termsShown;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
