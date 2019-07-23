/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AuthenticationServices.framework/AuthenticationServices
 */

@interface _ASCredentialProviderExtensionConfigurationViewController : _ASExtensionViewController {
    <_ASCredentialProviderExtensionConfigurationViewControllerDelegate> * _delegate;
}

@property (nonatomic) <_ASCredentialProviderExtensionConfigurationViewControllerDelegate> *delegate;

- (void).cxx_destruct;
- (void)_finishWithSuccess:(bool)arg1 completion:(id /* block */)arg2;
- (void)_requestDidFailWithError:(id)arg1 completion:(id /* block */)arg2;
- (void)beginConfiguringExtension;
- (id)delegate;
- (void)prepareToCompleteExtensionConfigurationRequestWithHost:(id)arg1 completion:(id /* block */)arg2;
- (void)setDelegate:(id)arg1;

@end
