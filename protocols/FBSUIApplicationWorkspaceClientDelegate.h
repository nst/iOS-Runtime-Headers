/* Generated by RuntimeBrowser.
 */

@protocol FBSUIApplicationWorkspaceClientDelegate <FBSWorkspaceClientDelegate>

@required

- (void)client:(FBSWorkspaceClient *)arg1 handleExit:(FBSUIApplicationExitEvent *)arg2;
- (void)client:(void *)arg1 handleLaunch:(void *)arg2 withCompletion:(void *)arg3; // needs 3 arg types, found 8: FBSWorkspaceClient *, FBSUIApplicationLaunchEvent *, id, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id, FBSUIApplicationLaunchResponseEvent *, void*
- (void)clientHandleAssertionExpirationImminent:(FBSWorkspaceClient *)arg1;

@end
