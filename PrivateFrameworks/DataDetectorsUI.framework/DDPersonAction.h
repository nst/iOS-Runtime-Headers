/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
 */

@interface DDPersonAction : DDPreviewAction <CNAvatarCardControllerDelegate> {
    CNAvatarCardController * _avatar;
    CNContact * _contact;
    UIViewController * _presentingViewController;
    CNContactStore * _store;
}

@property (retain) CNAvatarCardController *avatar;
@property (retain) CNContact *contact;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property UIViewController *presentingViewController;
@property (retain) CNContactStore *store;
@property (readonly) Class superclass;

+ (bool)handlesUrl:(id)arg1 result:(struct __DDResult { }*)arg2;

- (void).cxx_destruct;
- (id)avatar;
- (id)contact;
- (id)createViewController;
- (id)initWithURL:(id)arg1 result:(struct __DDResult { }*)arg2 context:(id)arg3;
- (id)mainValueFromURLString:(id)arg1 schemes:(id)arg2;
- (id)presentingViewController;
- (id)presentingViewControllerForAvatarCardController:(id)arg1;
- (bool)requiresEmbeddingNavigationController;
- (void)setAvatar:(id)arg1;
- (void)setContact:(id)arg1;
- (void)setPresentingViewController:(id)arg1;
- (void)setStore:(id)arg1;
- (id)store;

@end
