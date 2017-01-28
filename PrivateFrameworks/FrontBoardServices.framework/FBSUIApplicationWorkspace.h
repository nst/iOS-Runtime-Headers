/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSUIApplicationWorkspace : FBSWorkspace <FBSUIApplicationWorkspaceClientDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <FBSUIApplicationWorkspaceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (Class)_clientClass;
- (void)client:(id)arg1 handleExit:(id)arg2;
- (void)client:(id)arg1 handleLaunch:(id)arg2 withCompletion:(id)arg3;
- (void)clientHandleAssertionExpirationImminent:(id)arg1;
- (bool)isUIApplicationWorkspace;

@end
