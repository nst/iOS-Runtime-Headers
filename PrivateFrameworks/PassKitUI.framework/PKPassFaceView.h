/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPassFaceView : WLEasyToHitCustomView {
    bool  _allowBackgroundPlaceHolders;
    long long  _backgroundMode;
    UIImageView * _backgroundView;
    NSMutableArray * _bodyBucketViews;
    NSMutableSet * _bodyContentViews;
    NSMutableSet * _bodyInvariantViews;
    NSArray * _buckets;
    double  _clippedContentHeight;
    bool  _clipsContent;
    PKPassColorProfile * _colorProfile;
    UIView * _contentView;
    unsigned long long  _contentViewCreatedRegions;
    <PKPassFaceDelegate> * _delegate;
    double  _dimmer;
    CAFilter * _dimmingFilter;
    UIImage * _faceImage;
    PKPassFaceTemplate * _faceTemplate;
    NSMutableArray * _headerBucketViews;
    NSMutableSet * _headerContentViews;
    NSMutableSet * _headerInvariantViews;
    unsigned long long  _invariantViewCreatedRegions;
    UIImage * _partialFaceImage;
    PKPass * _pass;
    bool  _resizablePartialImage;
    bool  _showingBody;
    bool  _showingHeader;
    long long  _style;
    unsigned long long  _visibleRegions;
}

@property (nonatomic) bool allowBackgroundPlaceHolders;
@property (nonatomic) long long backgroundMode;
@property (nonatomic, readonly) bool bodyContentCreated;
@property (nonatomic, readonly, retain) NSArray *buckets;
@property (nonatomic) double clippedContentHeight;
@property (nonatomic) bool clipsContent;
@property (nonatomic, readonly) PKPassColorProfile *colorProfile;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } contentBounds;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } contentSize;
@property (nonatomic, readonly) UIView *contentView;
@property (nonatomic) <PKPassFaceDelegate> *delegate;
@property (nonatomic, readonly) PKPassFaceTemplate *faceTemplate;
@property (nonatomic, retain) NSMutableArray *headerBucketViews;
@property (nonatomic, readonly) bool isFrontFace;
@property (nonatomic, readonly) PKPass *pass;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } shadowInsets;
@property (nonatomic) long long style;
@property (nonatomic) unsigned long long visibleRegions;

+ (Class)_faceClassForStyle:(long long)arg1 front:(bool)arg2;
+ (id)newBackFaceViewForStyle:(long long)arg1 tall:(bool)arg2;
+ (id)newFrontFaceViewForStyle:(long long)arg1;

- (void).cxx_destruct;
- (void)_createContentViewsForRegions:(unsigned long long)arg1;
- (void)_createDimmingFilterIfNecessary;
- (void)_createInvariantViewsForRegions:(unsigned long long)arg1;
- (void)_flushContentViewsForRegions:(unsigned long long)arg1;
- (void)_handleTimeOrLocaleChange:(id)arg1;
- (void)_presentDiffRecursivelyDiff:(id)arg1 forBucketAtIndex:(unsigned long long)arg2 withBuckets:(id)arg3 completion:(id)arg4;
- (id)_relevantBuckets;
- (void)_setContentViewsAlpha:(double)arg1;
- (void)_setShowsBackgroundView:(bool)arg1;
- (void)_setShowsBodyViews:(bool)arg1;
- (void)_setShowsHeaderViews:(bool)arg1;
- (long long)_validityStateForPass:(id)arg1;
- (id)_viewSetForContentViewType:(long long)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (bool)allowBackgroundPlaceHolders;
- (long long)backgroundMode;
- (bool)bodyContentCreated;
- (id)buckets;
- (double)clippedContentHeight;
- (bool)clipsContent;
- (id)colorProfile;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentBounds;
- (struct CGSize { double x1; double x2; })contentSize;
- (id)contentView;
- (void)createBodyContentViews;
- (void)createBodyInvariantViews;
- (void)createContentViewsWithFade:(bool)arg1;
- (void)createHeaderContentViews;
- (void)createHeaderInvariantViews;
- (void)dealloc;
- (id)delegate;
- (id)faceTemplate;
- (id)headerBucketViews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)insertContentView:(id)arg1 ofType:(long long)arg2;
- (bool)isFrontFace;
- (void)layoutSubviews;
- (id)pass;
- (id)passFaceTemplate;
- (void)prepareForFlip;
- (void)presentDiff:(id)arg1 completion:(id)arg2;
- (void)removeContentView:(id)arg1 ofType:(long long)arg2;
- (void)setAllowBackgroundPlaceHolders:(bool)arg1;
- (void)setBackgroundMode:(long long)arg1;
- (void)setClippedContentHeight:(double)arg1;
- (void)setClipsContent:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDimmer:(double)arg1 animated:(bool)arg2;
- (void)setHeaderBucketViews:(id)arg1;
- (void)setPass:(id)arg1 colorProfile:(id)arg2;
- (void)setStyle:(long long)arg1;
- (void)setVisibleRegions:(unsigned long long)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })shadowInsets;
- (long long)style;
- (unsigned long long)visibleRegions;

@end
