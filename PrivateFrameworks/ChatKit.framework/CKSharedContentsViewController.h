/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKSharedContentsViewController : UIViewController <CKQLPreviewControllerDelegate, CKSharedAssetsControllerProtocol, CKSharedContentsCollectionViewCellDelegate, CNAvatarViewDelegate, UICollectionViewDataSource, UICollectionViewDelegate, UIGestureRecognizerDelegate, UIViewControllerPreviewingDelegate> {
    NSArray * _attachmentItems;
    UICollectionView * _collectionView;
    UICollectionViewFlowLayout * _collectionviewLayout;
    <CKSharedAssetsControllerDelegate> * _delegate;
    UIBarButtonItem * _deleteButton;
    NSArray * _parentRightBarButtonItemsToRestore;
    CKQLDetailsPreviewController * _qlPreviewController;
    UIBarButtonItem * _saveButton;
    bool  _selectingAttachments;
    UIView * _topmostMarkerView;
}

@property (nonatomic, retain) NSArray *attachmentItems;
@property (nonatomic, retain) UICollectionView *collectionView;
@property (nonatomic, retain) UICollectionViewFlowLayout *collectionviewLayout;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CKSharedAssetsControllerDelegate> *delegate;
@property (nonatomic, retain) UIBarButtonItem *deleteButton;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *parentRightBarButtonItemsToRestore;
@property (nonatomic, retain) CKQLDetailsPreviewController *qlPreviewController;
@property (nonatomic, retain) UIBarButtonItem *saveButton;
@property (getter=isSelectingAttachments, nonatomic) bool selectingAttachments;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIView *topmostMarkerView;

- (void).cxx_destruct;
- (unsigned long long)assetType;
- (id)attachmentItems;
- (id)avatarView:(id)arg1 orderedPropertiesForProperties:(id)arg2 category:(id)arg3;
- (void)cancelSelectingContents:(id)arg1;
- (double)cellAspectRatio;
- (id)collectionView;
- (bool)collectionView:(id)arg1 canPerformAction:(SEL)arg2 forItemAtIndexPath:(id)arg3 withSender:(id)arg4;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionView:(id)arg1 performAction:(SEL)arg2 forItemAtIndexPath:(id)arg3 withSender:(id)arg4;
- (bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (bool)collectionView:(id)arg1 shouldShowMenuForItemAtIndexPath:(id)arg2;
- (id)collectionviewLayout;
- (id)committedViewControllerForPreviewViewController:(id)arg1;
- (struct CGSize { double x1; double x2; })contentSize;
- (void)dealloc;
- (id)delegate;
- (id)deleteButton;
- (void)deleteContents:(id)arg1;
- (void)deleteSelectedContents:(id)arg1;
- (void)didDismissPreviewViewController:(id)arg1 committing:(bool)arg2;
- (void)didMoveToParentViewController:(id)arg1;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)initWithAttachmentItems:(id)arg1;
- (id)invisibleInkEffectControllerForPreviewController:(id)arg1;
- (bool)isJ99LandscapeModeFullScreen;
- (bool)isSelectingAttachments;
- (void)loadView;
- (long long)numberOfItemsInRow;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (double)paddingLeftRightForCell;
- (double)paddingTopBottomForCell;
- (id)parentRightBarButtonItemsToRestore;
- (void)parentScrollViewDidScroll:(struct CGPoint { double x1; double x2; })arg1;
- (void)performAction:(SEL)arg1 forSharedContentsCollectionViewCell:(id)arg2;
- (id)presentingViewControllerForAvatarView:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })previewController:(id)arg1 frameForPreviewItem:(id)arg2 inSourceView:(id*)arg3;
- (bool)previewController:(id)arg1 shouldOpenURL:(id)arg2 forPreviewItem:(id)arg3;
- (id)previewController:(id)arg1 transitionViewForPreviewItem:(id)arg2 uncroppedSourceFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg3 realSize:(struct CGSize { double x1; double x2; }*)arg4;
- (void)previewControllerDidCancelDismiss:(id)arg1;
- (void)previewControllerDidDismiss:(id)arg1;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint { double x1; double x2; })arg2;
- (id)qlPreviewController;
- (id)saveButton;
- (void)saveSelectedContents:(id)arg1;
- (id)selectedAttachmentIndexes;
- (void)setAttachmentItems:(id)arg1;
- (void)setCollectionView:(id)arg1;
- (void)setCollectionviewLayout:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDeleteButton:(id)arg1;
- (void)setParentRightBarButtonItemsToRestore:(id)arg1;
- (void)setQlPreviewController:(id)arg1;
- (void)setSaveButton:(id)arg1;
- (void)setSelectingAttachments:(bool)arg1;
- (void)setTopmostMarkerView:(id)arg1;
- (void)setupToolbar;
- (void)sharedContentsCollectionViewCellDidTap:(id)arg1;
- (void)teardownToolbar;
- (id)topmostMarkerView;
- (void)updateAttachmentItems:(id)arg1;
- (void)updateToolbar;
- (void)viewDidDisappear:(bool)arg1;
- (void)willPresentPreviewViewController:(id)arg1 forLocation:(struct CGPoint { double x1; double x2; })arg2 inSourceView:(id)arg3;

@end