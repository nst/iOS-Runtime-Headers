/* Generated by RuntimeBrowser.
 */

@protocol FBSUIApplicationWorkspaceDelegate <FBSWorkspaceDelegate>

@required

- (void)workspace:(void *)arg1 didLaunchWithCompletion:(void *)arg2; // needs 2 arg types, found 7: FBSUIApplicationWorkspace *, id, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id, FBSUIApplicationLaunchResponse *, void*
- (void)workspaceNoteAssertionExpirationImminent:(FBSUIApplicationWorkspace *)arg1;
- (void)workspaceShouldExit:(FBSUIApplicationWorkspace *)arg1;

@optional

- (void)workspaceShouldExit:(FBSUIApplicationWorkspace *)arg1 withTransitionContext:(FBSSceneTransitionContext *)arg2;

@end
