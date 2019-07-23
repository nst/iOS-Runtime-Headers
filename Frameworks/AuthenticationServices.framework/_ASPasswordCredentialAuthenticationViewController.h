/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AuthenticationServices.framework/AuthenticationServices
 */

@interface _ASPasswordCredentialAuthenticationViewController : _ASExtensionViewController {
    ASPasswordCredentialIdentity * _credentialIdentity;
    <_ASPasswordCredentialAuthenticationViewControllerDelegate> * _delegate;
}

@property (nonatomic) <_ASPasswordCredentialAuthenticationViewControllerDelegate> *delegate;

- (void).cxx_destruct;
- (void)_finishWithCredential:(id)arg1 completion:(id /* block */)arg2;
- (void)_nonUIRequestDidRequireUserInteraction;
- (void)_requestDidFailWithError:(id)arg1 completion:(id /* block */)arg2;
- (id)delegate;
- (id)initWithExtension:(id)arg1 credentialIdentity:(id)arg2;
- (void)prepareToCompleteRequestWithHostContext:(id)arg1 credential:(id)arg2 completion:(id /* block */)arg3;
- (void)setDelegate:(id)arg1;

@end
