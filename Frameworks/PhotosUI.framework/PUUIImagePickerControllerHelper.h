/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUUIImagePickerControllerHelper : NSObject {
    PUUIAlbumListViewController * _albumListViewController;
    bool  _didHandleSelectionOfAssets;
    PUPhotosGridDownloadHelper * _downloadHelper;
    PUPhotosGridViewController * _gridViewController;
    NSObject<OS_dispatch_group> * _multiSelectionGroup;
    <PUPhotoPicker> * _photoPicker;
}

@property (nonatomic, readonly) PUUIAlbumListViewController *albumListViewController;
@property (nonatomic, readonly) bool allowsMultipleSelection;
@property (nonatomic) bool didHandleSelectionOfAssets;
@property (nonatomic, readonly) PUPhotosGridViewController *gridViewController;
@property (nonatomic, retain) NSObject<OS_dispatch_group> *multiSelectionGroup;
@property (nonatomic, readonly) <PUPhotoPicker> *photoPicker;

+ (int)albumFilterForMediaTypes:(id)arg1;
+ (id)albumListViewControllerSpec;
+ (id)assetsFilterPredicateForMediaTypes:(id)arg1;
+ (id)collectionsFilterPredicateForMediaTypes:(id)arg1;
+ (id)gridViewControllerSpec;
+ (id)imagePickerControllerForViewController:(id)arg1;
+ (unsigned long long)imagePickerTypesForMediaTypes:(id)arg1;

- (void).cxx_destruct;
- (void)_handleSelectionOfDownloadedAssets:(id)arg1;
- (id)_imagePickerController;
- (bool)_isPhotosPickerExtensionAvailable;
- (id)_mediaTypes;
- (void)_notifyImagePickerOfAssetAvailability:(id)arg1;
- (id)_pickerProperties;
- (void)_pushImageViewControllerForAsset:(id)arg1 allowEditing:(bool)arg2 expectsLivePhoto:(bool)arg3;
- (void)_selectAsset:(id)arg1 withHintCollection:(id)arg2 hintIndexPath:(id)arg3;
- (void)_showImageViewController:(id)arg1;
- (id)albumListViewController;
- (bool)allowsMultipleSelection;
- (void)cancelPhotoPicker;
- (bool)clientSuppressesForchTouch;
- (bool)didHandleSelectionOfAssets;
- (id)gridViewController;
- (void)handleKeyboardAvoidanceIfNeeded:(id)arg1;
- (void)handleSelectionOfAsset:(id)arg1 inCollection:(id)arg2;
- (void)handleSelectionOfAssets:(id)arg1;
- (void)handleToggleSelectionOfItemAtIndexPath:(id)arg1;
- (id)initWithAlbumListViewController:(id)arg1 photoPickerServices:(id)arg2;
- (id)initWithGridViewController:(id)arg1 photoPickerServices:(id)arg2;
- (id)multiSelectionGroup;
- (unsigned long long)multipleSelectionLimit;
- (id)photoPicker;
- (void)setDidHandleSelectionOfAssets:(bool)arg1;
- (void)setMultiSelectionGroup:(id)arg1;
- (bool)showsPrompt;
- (void)updatePhotoPickerAppearance;
- (void)updateSessionInfo;

@end
