/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNUIState : NSObject <NSCopying> {
    NSMutableDictionary * mChartUIState;
    NSSet * mCollapsedSlideNodes;
    struct CGPoint { 
        double x; 
        double y; 
    }  mDesktopCanvasOffset;
    double  mDesktopCanvasViewScale;
    struct CGSize { 
        double width; 
        double height; 
    }  mDesktopMainContentSize;
    struct CGPoint { 
        double x; 
        double y; 
    }  mDesktopMainWindowOrigin;
    double  mDesktopNavigatorViewWidth;
    bool  mDesktopOutlineViewDefaultFixed;
    double  mDesktopOutlineViewWidth;
    double  mDesktopPresenterNotesViewHeight;
    KNMacUILayout * mDocumentUILayout;
    bool  mLightTableHidesSkippedSlides;
    double  mLightTableZoomScale;
    struct CGPoint { 
        double x; 
        double y; 
    }  mMobileCanvasOffset;
    double  mMobileCanvasViewScale;
    NSSet * mOutlineCollapsedSlideNodes;
    NSSet * mOutlineHasBodySlideNodes;
    TSKSelectionPath * mSelectionPath;
    bool  mShowMasterGuides;
    bool  mShowSlideGuides;
    bool  mShowsComments;
    bool  mShowsRuler;
    bool  mSlideViewFitsContentInWindow;
}

@property (nonatomic) struct CGPoint { double x1; double x2; } canvasOffset;
@property (nonatomic) double canvasViewScale;
@property (nonatomic, copy) NSSet *collapsedSlideNodes;
@property (nonatomic) struct CGSize { double x1; double x2; } desktopMainContentSize;
@property (nonatomic) struct CGPoint { double x1; double x2; } desktopMainWindowOrigin;
@property (nonatomic) double desktopNavigatorViewWidth;
@property (nonatomic) bool desktopOutlineViewDefaultFixed;
@property (nonatomic) double desktopOutlineViewWidth;
@property (nonatomic) double desktopPresenterNotesHeight;
@property (nonatomic, copy) KNMacUILayout *documentUILayout;
@property (nonatomic) bool lightTableHidesSkippedSlides;
@property (nonatomic) double lightTableZoomScale;
@property (nonatomic, copy) NSSet *outlineCollapsedSlideNodes;
@property (nonatomic, copy) NSSet *outlineHasBodySlideNodes;
@property (nonatomic, retain) TSKSelectionPath *selectionPath;
@property (nonatomic) bool showMasterGuides;
@property (nonatomic) bool showSlideGuides;
@property (nonatomic) bool showsComments;
@property (nonatomic) bool showsRuler;
@property (nonatomic, readonly) KNSlideCollectionSelection *slideTreeSelection;
@property (nonatomic) bool slideViewFitsContentInWindow;

- (id)UIStateForChart:(id)arg1;
- (id)archivedUIStateInContext:(id)arg1;
- (struct CGPoint { double x1; double x2; })canvasOffset;
- (double)canvasViewScale;
- (id)collapsedSlideNodes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)debugDescription;
- (struct CGSize { double x1; double x2; })desktopMainContentSize;
- (struct CGPoint { double x1; double x2; })desktopMainWindowOrigin;
- (double)desktopNavigatorViewWidth;
- (bool)desktopOutlineViewDefaultFixed;
- (double)desktopOutlineViewWidth;
- (double)desktopPresenterNotesHeight;
- (id)documentUILayout;
- (id)init;
- (bool)lightTableHidesSkippedSlides;
- (double)lightTableZoomScale;
- (void)loadFromArchive:(const struct UIStateArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct Reference {} *x5; struct Reference {} *x6; struct Size {} *x7; struct Point {} *x8; float x9; float x10; struct RepeatedPtrField<TSP::Reference> { void **x_11_1_1; int x_11_1_2; int x_11_1_3; int x_11_1_4; } x11; struct Point {} *x12; struct Point {} *x13; struct Reference {} *x14; float x15; float x16; struct Point {} *x17; struct RepeatedPtrField<TSCH::ChartUIState> { void **x_18_1_1; int x_18_1_2; int x_18_1_3; int x_18_1_4; } x18; float x19; bool x20; bool x21; bool x22; bool x23; struct RepeatedPtrField<TSP::Reference> { void **x_24_1_1; int x_24_1_2; int x_24_1_3; int x_24_1_4; } x24; struct RepeatedPtrField<TSP::Reference> { void **x_25_1_1; int x_25_1_2; int x_25_1_3; int x_25_1_4; } x25; struct RepeatedPtrField<TSP::Reference> { void **x_26_1_1; int x_26_1_2; int x_26_1_3; int x_26_1_4; } x26; float x27; float x28; }*)arg1 unarchiver:(id)arg2 context:(id)arg3;
- (id)outlineCollapsedSlideNodes;
- (id)outlineHasBodySlideNodes;
- (void)saveToArchive:(struct UIStateArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct Reference {} *x5; struct Reference {} *x6; struct Size {} *x7; struct Point {} *x8; float x9; float x10; struct RepeatedPtrField<TSP::Reference> { void **x_11_1_1; int x_11_1_2; int x_11_1_3; int x_11_1_4; } x11; struct Point {} *x12; struct Point {} *x13; struct Reference {} *x14; float x15; float x16; struct Point {} *x17; struct RepeatedPtrField<TSCH::ChartUIState> { void **x_18_1_1; int x_18_1_2; int x_18_1_3; int x_18_1_4; } x18; float x19; bool x20; bool x21; bool x22; bool x23; struct RepeatedPtrField<TSP::Reference> { void **x_24_1_1; int x_24_1_2; int x_24_1_3; int x_24_1_4; } x24; struct RepeatedPtrField<TSP::Reference> { void **x_25_1_1; int x_25_1_2; int x_25_1_3; int x_25_1_4; } x25; struct RepeatedPtrField<TSP::Reference> { void **x_26_1_1; int x_26_1_2; int x_26_1_3; int x_26_1_4; } x26; float x27; float x28; }*)arg1 archiver:(id)arg2 context:(id)arg3;
- (id)selectionPath;
- (void)setCanvasOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setCanvasViewScale:(double)arg1;
- (void)setCollapsedSlideNodes:(id)arg1;
- (void)setDesktopMainContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setDesktopMainWindowOrigin:(struct CGPoint { double x1; double x2; })arg1;
- (void)setDesktopNavigatorViewWidth:(double)arg1;
- (void)setDesktopOutlineViewDefaultFixed:(bool)arg1;
- (void)setDesktopOutlineViewWidth:(double)arg1;
- (void)setDesktopPresenterNotesHeight:(double)arg1;
- (void)setDocumentUILayout:(id)arg1;
- (void)setLightTableHidesSkippedSlides:(bool)arg1;
- (void)setLightTableZoomScale:(double)arg1;
- (void)setOutlineCollapsedSlideNodes:(id)arg1;
- (void)setOutlineHasBodySlideNodes:(id)arg1;
- (void)setSelectionPath:(id)arg1;
- (void)setShowMasterGuides:(bool)arg1;
- (void)setShowSlideGuides:(bool)arg1;
- (void)setShowsComments:(bool)arg1;
- (void)setShowsRuler:(bool)arg1;
- (void)setSlideTreeSelection:(id)arg1 withDocumentRoot:(id)arg2;
- (void)setSlideViewFitsContentInWindow:(bool)arg1;
- (void)setUIState:(id)arg1 forChart:(id)arg2;
- (bool)showMasterGuides;
- (bool)showSlideGuides;
- (bool)showsComments;
- (bool)showsRuler;
- (id)slideTreeSelection;
- (bool)slideViewFitsContentInWindow;
- (void)updateOutlineStateFromSlideTree:(id)arg1;

@end
