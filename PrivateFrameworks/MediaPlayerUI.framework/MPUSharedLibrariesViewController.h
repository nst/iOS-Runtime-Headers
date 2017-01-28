/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
 */

@interface MPUSharedLibrariesViewController : UIViewController {
    UINavigationController * _navigationController;
    _MPUSharedLibrariesViewController * _sharedLibariesViewController;
    bool  _showsCancelButton;
}

@property (nonatomic) bool showsCancelButton;
@property (nonatomic) bool showsLocalLibrary;

- (void).cxx_destruct;
- (void)dismissSharedLibrariesViewController:(bool)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)presentSharedLibrariesViewController:(bool)arg1;
- (void)setShowsCancelButton:(bool)arg1;
- (void)setShowsLocalLibrary:(bool)arg1;
- (bool)showsCancelButton;
- (bool)showsLocalLibrary;

@end
