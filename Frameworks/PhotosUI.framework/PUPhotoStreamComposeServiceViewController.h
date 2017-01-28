/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPhotoStreamComposeServiceViewController : SLComposeServiceViewController <PUCloudSharedCreateAlbumViewControllerDelegate, PUPhotoStreamCreateTitleDelegate, PUPhotoStreamsAlbumsTableViewControllerDelegate, SLSheetViewHostProtocol> {
    NSArray * _actions;
    bool  _addToExistingWorkflow;
    struct NSObject { Class x1; } * _albumList;
    NSString * _albumTitle;
    id  _completion;
    <PUPhotoStreamComposeServiceDelegate> * _delegate;
    struct { 
        unsigned int hasDidPost : 1; 
        unsigned int hasDidCancel : 1; 
    }  _delegateFlags;
    bool  _hasPushedTitleController;
    bool  _inCreateNewAlbum;
    NSString * _itemCountString;
    NSArray * _recipients;
    struct NSObject { Class x1; } * _selectedAlbum;
    bool  _shouldAllowAlbumPicking;
    bool  _shouldShowPost;
}

@property (nonatomic) bool addToExistingWorkflow;
@property (nonatomic, retain) NSString *albumTitle;
@property (nonatomic, copy) id completion;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PUPhotoStreamComposeServiceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool shouldAllowAlbumPicking;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_pushTitleController;
- (bool)addToExistingWorkflow;
- (id)albumListAction;
- (void)albumStreamingCreateViewController:(id)arg1 didSucceed:(bool)arg2;
- (id)albumTitle;
- (void)cancel;
- (id)completion;
- (void)controller:(id)arg1 didSelectAlbum:(struct NSObject { Class x1; }*)arg2;
- (void)controllerWillCreateNewAlbum:(id)arg1;
- (id)delegate;
- (void)failWithError:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)send;
- (id)serviceIconImage;
- (void)setAddToExistingWorkflow:(bool)arg1;
- (void)setAlbumTitle:(id)arg1;
- (void)setAssetsToShare:(id)arg1;
- (void)setCompletion:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setShouldAllowAlbumPicking:(bool)arg1;
- (id)sheetActions;
- (void)sheetDidSendWithSucess:(id)arg1 error:(id)arg2;
- (void)sheetFailedWithError:(id)arg1;
- (bool)shouldAllowAlbumPicking;
- (void)shouldShowNetworkActivityIndicator:(id)arg1;
- (id)title;
- (void)titleController:(id)arg1 didSetTitle:(id)arg2;
- (void)titleControllerDidCancel:(id)arg1;
- (void)userDidCancel;
- (void)userDidCancelWithoutAnimation;
- (void)userDidPost;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;

@end
