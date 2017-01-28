/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNPlaybackSession : NSObject <TSDAnimationSession> {
    bool  _isExitingShow;
    bool  _shouldNotBakeActionTextures;
    TSULRUCache * mASVCache;
    <TSKAccessControllerReadTicket> * mAccessControllerReadTicket;
    KNSlideNode * mAlternateNextSlideNode;
    KNAnimationContext * mAnimationContext;
    TSDBitmapRenderingQualityInfo * mBitmapRenderingQualityInfo;
    NSMutableArray * mBreadCrumbTrail;
    <TSDCanvasDelegate> * mCanvasDelegate;
    KNSlideNode * mCurrentSlideNode;
    bool  mDisableAutoAnimationRemoval;
    bool  mDisableTransitionTextureCaching;
    id  mEndShowHandler;
    bool  mHasEndShowHandlerBeenCancelled;
    <TSKAccessControllerReadTicket> * mIncomingRenderingTicket;
    KNSlideNode * mLastVisitedSlideNode;
    <TSKAccessControllerReadTicket> * mOutgoingRenderingTicket;
    int  mPlayMode;
    bool  mShouldAlwaysSetCurrentGLContextWhenDrawing;
    bool  mShouldAnimateNullTransitions;
    bool  mShouldAnimateTransitionOnLastSlide;
    bool  mShouldAutomaticallyPlayMovies;
    bool  mShouldDrawTexturesAsynchronously;
    bool  mShouldForceTextureGeneration;
    bool  mShouldPreferCARenderer;
    bool  mShouldRenderSlidesSynchronously;
    bool  mShouldShowVideoReflectionsAndMasks;
    bool  mShouldUseContentlessLayers;
    bool  mShouldUseSourceImage;
    KNShow * mShow;
    bool  mSkipBuilds;
    bool  mSkipSlides;
}

@property (nonatomic) <TSKAccessControllerReadTicket> *accessControllerReadTicket;
@property (nonatomic) KNSlideNode *alternateNextSlideNode;
@property (nonatomic, readonly) KNAnimationContext *animationContext;
@property (nonatomic, retain) TSDBitmapRenderingQualityInfo *bitmapRenderingQualityInfo;
@property (nonatomic, retain) NSMutableArray *breadCrumbTrail;
@property (nonatomic) <TSDCanvasDelegate> *canvasDelegate;
@property (nonatomic, readonly) KNAnimatedSlideView *currentCachedAnimatedSlideView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool disableAutoAnimationRemoval;
@property (nonatomic) bool disableTransitionTextureCaching;
@property (nonatomic, copy) id endShowHandler;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isExitingShow;
@property (nonatomic, readonly) bool isPreview;
@property (nonatomic, readonly) KNAnimatedSlideView *nextAnimatedSlideViewAfterCurrent;
@property (nonatomic) int playMode;
@property (nonatomic) bool shouldAlwaysSetCurrentGLContextWhenDrawing;
@property (nonatomic) bool shouldAnimateNullTransitions;
@property (nonatomic) bool shouldAnimateTransitionOnLastSlide;
@property (nonatomic) bool shouldAutomaticallyPlayMovies;
@property (nonatomic) bool shouldDrawTexturesAsynchronously;
@property (nonatomic) bool shouldForceTextureGeneration;
@property (nonatomic) bool shouldNotBakeActionTextures;
@property (nonatomic) bool shouldPreferCARenderer;
@property (nonatomic) bool shouldRenderSlidesSynchronously;
@property (nonatomic, readonly) bool shouldShowInstructionalText;
@property (nonatomic) bool shouldShowVideoReflectionsAndMasks;
@property (nonatomic) bool shouldUseContentlessLayers;
@property (nonatomic) bool shouldUseSourceImage;
@property (nonatomic, readonly) KNShow *show;
@property (nonatomic) bool skipBuilds;
@property (nonatomic) bool skipSlides;
@property (readonly) Class superclass;

- (id)accessControllerReadTicket;
- (id)alternateNextSlideNode;
- (id)animatedSlideViewFor:(id)arg1 setupTransition:(bool)arg2;
- (id)animationContext;
- (bool)atBegginingOfDeck;
- (id)bitmapRenderingQualityInfo;
- (id)breadCrumb;
- (id)breadCrumbTrail;
- (void)cancelEndShowHandler;
- (id)canvasDelegate;
- (id)currentCachedAnimatedSlideView;
- (id)currentSlide;
- (id)currentSlideNode;
- (void)dealloc;
- (bool)disableAutoAnimationRemoval;
- (bool)disableTransitionTextureCaching;
- (void)dropABreadCrumb;
- (id)endShowHandler;
- (void)executeEndShowHandlerAfterDelay:(double)arg1;
- (id)firstSlideNode;
- (id)gotoFirstSlide;
- (id)gotoLastSlide;
- (id)gotoNextSlide;
- (id)gotoPreviousSlide;
- (void)gotoSlideNode:(id)arg1;
- (id)initWithShow:(id)arg1 viewScale:(double)arg2 baseLayer:(id)arg3 isBaseLayerVisible:(bool)arg4 canvasDelegate:(id)arg5 endShowHandler:(id)arg6;
- (void)invalidateAnimatedSlideViewCache;
- (void)invalidateSlideNumberLayoutsOnCanvas:(id)arg1;
- (bool)isExitingShow;
- (bool)isOffscreenPlayback;
- (bool)isPreview;
- (id)lastSlideNode;
- (id)newCanvas;
- (id)newFinalTextureForOutgoingSlide;
- (id)newInitialTextureForIncomingSlide;
- (id)newTransitionTo:(id)arg1;
- (id)nextAnimatedSlideViewAfterCurrent;
- (id)nextSlideAfterCurrent;
- (id)nextSlideNodeAfterCurrent;
- (id)nextSlideNodeAfterSlideNode:(id)arg1;
- (void)p_executeEndShowHandler;
- (void)p_setCurrentSlideNode:(id)arg1;
- (int)playMode;
- (id)previousSlideNodeBeforeCurrent;
- (id)renderConcurrentlyOutgoingSlideTexture:(id)arg1 andIncomingSlideTexture:(id)arg2;
- (void)renderTextureContentsIfNeeded:(id)arg1;
- (void)renderTextureSetContentsIfNeeded:(id)arg1;
- (id)repForInfo:(id)arg1 onCanvas:(id)arg2;
- (void)setAccessControllerReadTicket:(id)arg1;
- (void)setAlternateNextSlideNode:(id)arg1;
- (void)setBitmapRenderingQualityInfo:(id)arg1;
- (void)setBreadCrumbTrail:(id)arg1;
- (void)setCanvasDelegate:(id)arg1;
- (void)setDisableAutoAnimationRemoval:(bool)arg1;
- (void)setDisableTransitionTextureCaching:(bool)arg1;
- (void)setEndShowHandler:(id)arg1;
- (void)setIsExitingShow:(bool)arg1;
- (void)setPlayMode:(int)arg1;
- (void)setShouldAlwaysSetCurrentGLContextWhenDrawing:(bool)arg1;
- (void)setShouldAnimateNullTransitions:(bool)arg1;
- (void)setShouldAnimateTransitionOnLastSlide:(bool)arg1;
- (void)setShouldAutomaticallyPlayMovies:(bool)arg1;
- (void)setShouldDrawTexturesAsynchronously:(bool)arg1;
- (void)setShouldForceTextureGeneration:(bool)arg1;
- (void)setShouldNotBakeActionTextures:(bool)arg1;
- (void)setShouldPreferCARenderer:(bool)arg1;
- (void)setShouldRenderSlidesSynchronously:(bool)arg1;
- (void)setShouldShowVideoReflectionsAndMasks:(bool)arg1;
- (void)setShouldUseContentlessLayers:(bool)arg1;
- (void)setShouldUseSourceImage:(bool)arg1;
- (void)setSkipBuilds:(bool)arg1;
- (void)setSkipSlides:(bool)arg1;
- (bool)shouldAlwaysSetCurrentGLContextWhenDrawing;
- (bool)shouldAnimateNullTransitions;
- (bool)shouldAnimateTransitionOnLastSlide;
- (bool)shouldAutomaticallyPlayMovies;
- (bool)shouldDrawTexturesAsynchronously;
- (bool)shouldForceTextureGeneration;
- (bool)shouldNotBakeActionTextures;
- (bool)shouldPreferCARenderer;
- (bool)shouldRenderSlidesSynchronously;
- (bool)shouldShowInstructionalText;
- (bool)shouldShowVideoReflectionsAndMasks;
- (bool)shouldUseContentlessLayers;
- (bool)shouldUseSourceImage;
- (id)show;
- (double)showScale;
- (bool)skipBuilds;
- (bool)skipSlides;
- (unsigned long long)slideNumberForSlideNode:(id)arg1;
- (id)textureSetForRep:(id)arg1 context:(id)arg2 shouldRender:(bool)arg3;
- (id)textureSetForRep:(id)arg1 shouldRender:(bool)arg2;
- (void)waitUntilSlideTextureRenderingIsCompleteForIdentifier:(id)arg1;

@end
