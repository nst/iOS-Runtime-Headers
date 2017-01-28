/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MarkupUI.framework/MarkupUI
 */

@interface MarkupViewController : UIViewController <AKControllerDelegateProtocol, MUPDFContentViewControllerDelegate, UINavigationBarDelegate, UIToolbarDelegate> {
    NSUndoManager * _akUndoManager;
    bool  _allowShakeToUndo;
    bool  _alreadyLoggedSavingForThisDocument;
    AKController * _annotationController;
    UIColor * _backgroundColor;
    UIBarButtonItem * _cancelButton;
    bool  _centersIgnoringContentInsets;
    UIView * _contentContainerView;
    UIViewController<MUContentViewControllerProtocol><MUContentViewControllerAKControllerSubdelegate> * _contentViewController;
    <MarkupViewControllerDelegate> * _delegate;
    id  _digestedSourceContent;
    UIBarButtonItem * _doneButton;
    bool  _encryptPrivateMetadata;
    bool  _forcesPDFViewTopAlignment;
    NSString * _hostProcessBundleIdentifier;
    double  _initialContentScale;
    bool  _isAnimatingMarkupExtensionTransition;
    UINavigationBar * _navBar;
    UIColor * _navBarTitleColor;
    UINavigationItem * _navItem;
    bool  _navigationModeHorizontal;
    bool  _needToPerformDocumentClosedTeardown;
    bool  _needToPerformFullTeardown;
    MUCGPDFReader * _pdfReader;
    bool  _pencilAlwaysDraws;
    NSString * _preferredFileDisplayName;
    bool  _shapeDetectionEnabled;
    bool  _showAsFormSheet;
    bool  _showThumbnailViewForMultipage;
    id  _sourceContent;
    NSString * _sourceContentType;
    bool  _thumbnailViewHidden;
    UIToolbar * _toolbar;
    NSLayoutConstraint * _toolbarBottomConstraint;
    bool  _toolbarHidden;
    UIColor * _toolbarItemTintColor;
    long long  _toolbarPosition;
    UIColor * _toolbarTintColor;
    NSLayoutConstraint * _toolbarTopAttachedConstraint;
    NSLayoutConstraint * _toolbarTopConstraint;
    UIView * _transitionDimmingView;
    bool  _useFancyTransition;
    bool  _userDidCancel;
    UIView * _whiteView;
}

@property (nonatomic, retain) NSUndoManager *akUndoManager;
@property (nonatomic) bool allowShakeToUndo;
@property (nonatomic) bool alreadyLoggedSavingForThisDocument;
@property (retain) AKController *annotationController;
@property (nonatomic) bool annotationEditingEnabled;
@property (copy) UIColor *backgroundColor;
@property (retain) UIBarButtonItem *cancelButton;
@property (nonatomic) bool centersIgnoringContentInsets;
@property (retain) UIView *contentContainerView;
@property (retain) UIViewController<MUContentViewControllerProtocol><MUContentViewControllerAKControllerSubdelegate> *contentViewController;
@property (nonatomic) unsigned long long currentPDFPageIndex;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MarkupViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (retain) id digestedSourceContent;
@property (retain) UIBarButtonItem *doneButton;
@property bool encryptPrivateMetadata;
@property (nonatomic) bool forcesPDFViewTopAlignment;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *hostProcessBundleIdentifier;
@property double initialContentScale;
@property bool isAnimatingMarkupExtensionTransition;
@property (nonatomic, retain) UINavigationBar *navBar;
@property (copy) UIColor *navBarTitleColor;
@property (nonatomic, retain) UINavigationItem *navItem;
@property (getter=isNavigationModeHorizontal, nonatomic) bool navigationModeHorizontal;
@property bool needToPerformDocumentClosedTeardown;
@property bool needToPerformFullTeardown;
@property (nonatomic, readonly) NSString *outputType;
@property (readonly) PDFDocument *pdfDocument;
@property (retain) MUCGPDFReader *pdfReader;
@property (readonly) PDFView *pdfView;
@property (nonatomic) bool pencilAlwaysDraws;
@property (nonatomic, copy) NSString *preferredFileDisplayName;
@property (getter=isShapeDetectionEnabled, nonatomic) bool shapeDetectionEnabled;
@property bool showAsFormSheet;
@property (nonatomic) bool showThumbnailViewForMultipage;
@property (nonatomic, retain) id sourceContent;
@property (retain) NSString *sourceContentType;
@property (readonly) Class superclass;
@property (getter=isThumbnailViewHidden, nonatomic) bool thumbnailViewHidden;
@property (retain) UIToolbar *toolbar;
@property (retain) NSLayoutConstraint *toolbarBottomConstraint;
@property (getter=isToolbarHidden, nonatomic) bool toolbarHidden;
@property (copy) UIColor *toolbarItemTintColor;
@property (nonatomic) long long toolbarPosition;
@property (copy) UIColor *toolbarTintColor;
@property (retain) NSLayoutConstraint *toolbarTopAttachedConstraint;
@property (retain) NSLayoutConstraint *toolbarTopConstraint;
@property (retain) UIView *transitionDimmingView;
@property bool useFancyTransition;
@property bool userDidCancel;
@property (retain) UIView *whiteView;

+ (bool)_isInLowMemoryEnvironment;
+ (double)_maxImageDimensionInView;
+ (id)cleanImageMetadataFromData:(id)arg1;
+ (bool)hasPrivateImageMetadata:(id)arg1;

- (void).cxx_destruct;
- (void)_bailFailedAnimateEnterMarkup;
- (void)_cancel;
- (void)_commonInit;
- (void)_createCancelDoneNavBar;
- (id)_effectiveBackgroundColor;
- (id)_effectiveNavBarTitleColor;
- (id)_effectiveToolbarItemTintColor;
- (id)_effectiveToolbarTintColor;
- (void)_installContentViewControllerForUTI:(id)arg1;
- (void)_loadSourceContentWithCompletion:(id)arg1;
- (id)_markupBlackColor;
- (void)_saveEditing:(id)arg1;
- (void)_setData:(id)arg1 withArchivedModelData:(id)arg2 withCompletion:(id)arg3;
- (void)_setFileURL:(id)arg1 withArchivedModelData:(id)arg2 withCompletion:(id)arg3;
- (void)_setupInitialBaseModelScaleFactorWithScreenSize:(struct CGSize { double x1; double x2; })arg1 windowDecorationSize:(struct CGSize { double x1; double x2; })arg2;
- (void)_showTextStyleOptions:(id)arg1;
- (bool)_sourceImageMayContainBaseImageAndModel;
- (void)_startObservingAnnotationController;
- (void)_stopObservingAnnotationController;
- (void)_updateAndLoadSourceContent:(id)arg1 withArchivedModelData:(id)arg2 withCompletion:(id)arg3;
- (void)_updateAppearanceForTraitCollection:(id)arg1;
- (void)_updateConstraintsForBarPosition:(long long)arg1;
- (void)_updateUndoButtonWithController:(id)arg1;
- (bool)_writeToDataConsumer:(struct CGDataConsumer { }*)arg1 embedSourceImageAndEditModel:(bool)arg2 error:(id*)arg3;
- (void)adjustContentInsetsForBars;
- (id)akUndoManager;
- (bool)allowShakeToUndo;
- (bool)alreadyLoggedSavingForThisDocument;
- (id)annotationController;
- (bool)annotationEditingEnabled;
- (id)backgroundColor;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)cancel:(id)arg1;
- (id)cancelButton;
- (bool)centersIgnoringContentInsets;
- (id)characterIndexesForQuadPoints:(id)arg1 onPageAtIndex:(unsigned long long)arg2 forAnnotationController:(id)arg3;
- (void)clearHighlightableSelectionForAnnotationController:(id)arg1;
- (id)contentContainerView;
- (id)contentViewController;
- (bool)controller:(id)arg1 shouldHandleURL:(id)arg2;
- (void)controller:(id)arg1 willPlaceSingleShotAnnotation:(id)arg2 onProposedPageModelController:(id*)arg3;
- (id)controller:(id)arg1 willSetToolbarItems:(id)arg2;
- (void)controllerDidEnterToolMode:(id)arg1;
- (void)controllerDidExitToolMode:(id)arg1;
- (bool)controllerShouldDetectFormElements:(id)arg1;
- (struct CGPoint { double x1; double x2; })convertPoint:(struct CGPoint { double x1; double x2; })arg1 fromModelToOverlayWithPageIndex:(unsigned long long)arg2 forAnnotationController:(id)arg3;
- (struct CGPoint { double x1; double x2; })convertPoint:(struct CGPoint { double x1; double x2; })arg1 fromOverlayToModelWithPageIndex:(unsigned long long)arg2 forAnnotationController:(id)arg3;
- (id)createArchivedModelData;
- (unsigned long long)currentPDFPageIndex;
- (id)dataRepresentationEmbeddingSourceImageAndEditModel:(bool)arg1 error:(id*)arg2;
- (id)dataRepresentationWithError:(id*)arg1;
- (void)dealloc;
- (id)delegate;
- (void)delete:(id)arg1;
- (id)digestedSourceContent;
- (void)documentDidCloseTeardown;
- (void)done:(id)arg1;
- (id)doneButton;
- (void)duplicate:(id)arg1;
- (void)editTextAnnotation:(id)arg1;
- (bool)encryptPrivateMetadata;
- (id)filteredToolbarItemsForItems:(id)arg1 fromController:(id)arg2;
- (bool)forcesPDFViewTopAlignment;
- (void)fullTeardown;
- (bool)hasHighlightableSelectionForAnnotationController:(id)arg1;
- (id)highlightableSelectionCharacterIndexesOnPageAtIndex:(unsigned long long)arg1 forAnnotationController:(id)arg2;
- (id)hostProcessBundleIdentifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (double)initialContentScale;
- (bool)isAnimatingMarkupExtensionTransition;
- (bool)isNavigationModeHorizontal;
- (bool)isShapeDetectionEnabled;
- (bool)isThumbnailViewHidden;
- (bool)isToolbarHidden;
- (id)layerContainingQuickBackgroundForLoupeOnOverlayAtPageIndex:(unsigned long long)arg1 forAnnotationController:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })maxPageRectWithPageIndex:(unsigned long long)arg1 forAnnotationController:(id)arg2;
- (double)modelBaseScaleFactorOfPageAtIndex:(unsigned long long)arg1 forAnnotationController:(id)arg2;
- (void)motionEnded:(long long)arg1 withEvent:(id)arg2;
- (id)navBar;
- (id)navBarTitleColor;
- (id)navItem;
- (bool)needToPerformDocumentClosedTeardown;
- (bool)needToPerformFullTeardown;
- (id)newContentSnapshotPDFDataIncludingAdornments:(bool)arg1 atScale:(double)arg2 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 onOverlayAtPageIndex:(unsigned long long)arg4 forAnnotationController:(id)arg5;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)outputType;
- (id)pdfDocument;
- (id)pdfReader;
- (id)pdfView;
- (bool)pencilAlwaysDraws;
- (id)popoverPresentingViewControllerForAnnotationController:(id)arg1;
- (long long)positionForBar:(id)arg1;
- (void)positionSketchOverlay:(id)arg1 forAnnotationController:(id)arg2;
- (id)preferredFileDisplayName;
- (long long)preferredStatusBarStyle;
- (id)quadPointsForCharacterIndexes:(id)arg1 onPageAtIndex:(unsigned long long)arg2 forAnnotationController:(id)arg3;
- (void)revert;
- (void)setAkUndoManager:(id)arg1;
- (void)setAllowShakeToUndo:(bool)arg1;
- (void)setAlreadyLoggedSavingForThisDocument:(bool)arg1;
- (void)setAnnotationController:(id)arg1;
- (void)setAnnotationEditingEnabled:(bool)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setCancelButton:(id)arg1;
- (void)setCentersIgnoringContentInsets:(bool)arg1;
- (void)setContentContainerView:(id)arg1;
- (void)setContentViewController:(id)arg1;
- (void)setCurrentPDFPageIndex:(unsigned long long)arg1;
- (void)setData:(id)arg1;
- (void)setData:(id)arg1 withArchivedModelData:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setDigestedSourceContent:(id)arg1;
- (void)setDoneButton:(id)arg1;
- (void)setEncryptPrivateMetadata:(bool)arg1;
- (void)setFileURL:(id)arg1;
- (void)setFileURL:(id)arg1 withArchivedModelData:(id)arg2;
- (void)setFileURL:(id)arg1 withArchivedModelData:(id)arg2 placeholderImage:(id)arg3;
- (void)setForcesPDFViewTopAlignment:(bool)arg1;
- (void)setHostProcessBundleIdentifier:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setImage:(id)arg1 withArchivedModelData:(id)arg2;
- (void)setInitialContentScale:(double)arg1;
- (void)setIsAnimatingMarkupExtensionTransition:(bool)arg1;
- (void)setNavBar:(id)arg1;
- (void)setNavBarTitleColor:(id)arg1;
- (void)setNavItem:(id)arg1;
- (void)setNavigationModeHorizontal:(bool)arg1;
- (void)setNeedToPerformDocumentClosedTeardown:(bool)arg1;
- (void)setNeedToPerformFullTeardown:(bool)arg1;
- (void)setPdfReader:(id)arg1;
- (void)setPencilAlwaysDraws:(bool)arg1;
- (void)setPreferredFileDisplayName:(id)arg1;
- (void)setShapeDetectionEnabled:(bool)arg1;
- (void)setShowAsFormSheet:(bool)arg1;
- (void)setShowThumbnailViewForMultipage:(bool)arg1;
- (void)setSourceContent:(id)arg1;
- (void)setSourceContent:(id)arg1 withArchivedModelData:(id)arg2;
- (void)setSourceContentType:(id)arg1;
- (void)setThumbnailViewHidden:(bool)arg1;
- (void)setToolbar:(id)arg1;
- (void)setToolbarBottomConstraint:(id)arg1;
- (void)setToolbarHidden:(bool)arg1;
- (void)setToolbarHidden:(bool)arg1 animated:(bool)arg2;
- (void)setToolbarItemTintColor:(id)arg1;
- (void)setToolbarPosition:(long long)arg1;
- (void)setToolbarTintColor:(id)arg1;
- (void)setToolbarTopAttachedConstraint:(id)arg1;
- (void)setToolbarTopConstraint:(id)arg1;
- (void)setTransitionDimmingView:(id)arg1;
- (void)setUseFancyTransition:(bool)arg1;
- (void)setUserDidCancel:(bool)arg1;
- (void)setWhiteView:(id)arg1;
- (bool)shouldPlaceFormElementAtPoint:(struct CGPoint { double x1; double x2; })arg1 onOverlayAtPageIndex:(unsigned long long)arg2 forAnnotationController:(id)arg3;
- (bool)shouldPlaceProposedFormElementAtRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 onOverlayAtPageIndex:(unsigned long long)arg2 forAnnotationController:(id)arg3;
- (bool)showAsFormSheet;
- (bool)showThumbnailViewForMultipage;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })sketchOverlayInsets;
- (id)sourceContent;
- (id)sourceContentType;
- (id)toolbar;
- (id)toolbarBottomConstraint;
- (id)toolbarItemTintColor;
- (long long)toolbarPosition;
- (id)toolbarTintColor;
- (id)toolbarTopAttachedConstraint;
- (id)toolbarTopConstraint;
- (void)traitCollectionDidChange:(id)arg1;
- (id)transitionDimmingView;
- (id)undoManagerForAnnotationController:(id)arg1;
- (bool)useFancyTransition;
- (bool)userDidCancel;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (id)whiteView;
- (void)willBeginLoadingNewDocument;
- (bool)writeToURL:(id)arg1 embeddingSourceImageAndEditModel:(bool)arg2 error:(id*)arg3;
- (bool)writeToURL:(id)arg1 error:(id*)arg2;

@end
