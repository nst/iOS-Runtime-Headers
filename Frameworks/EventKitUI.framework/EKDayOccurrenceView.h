/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKDayOccurrenceView : UIVisualEffectView <EKDayOccurrenceTravelTimeViewMetricsDelegate, NSCopying> {
    bool  _allDay;
    bool  _allDayDrawingStyle;
    double  _bottomPinningProximity;
    unsigned long long  _bottomPinningState;
    double  _cappedColorBarHeight;
    UIColor * _color;
    EKDayOccurrenceContentView * _content;
    bool  _declined;
    NSObject<EKDayOccurrenceViewDelegate> * _delegate;
    bool  _dimmed;
    bool  _drawsResizeHandles;
    UIView * _endResizeHandle;
    UIImageView * _eventBackgroundView;
    bool  _hideBackgroundImage;
    bool  _hideText;
    bool  _isProposedTime;
    bool  _isSelectedCopyView;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _margin;
    bool  _needsBackgroundImageUpdate;
    bool  _needsContentCalc;
    bool  _needsReply;
    EKEvent * _occurrence;
    int  _occurrenceBackgroundStyle;
    unsigned int  _offsetContentForLandscape;
    double  _originalXBeforeOffset;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _padding;
    UIView * _pinFadeView;
    bool  _reduceLayoutProcessingForAnimation;
    bool  _selected;
    EKDayOccurrenceView * _selectedCopy;
    bool  _showsTravelTime;
    UIView * _startResizeHandle;
    bool  _tentative;
    double  _topYBoundaryForText;
    unsigned int  _touchKeptInsideOccurrence;
    bool  _touchesAreBeingTracked;
    UIImageView * _travelBackgroundView;
    double  _travelTime;
    EKDayOccurrenceTravelTimeView * _travelTimeContentView;
    double  _travelTimeSubviewHeightInPoints;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _unpinnedEventBackgroundFrame;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _unpinnedTravelBackgroundFrame;
    double  _visibleHeight;
    bool  _visibleHeightLocked;
}

@property (getter=isAllDay, nonatomic) bool allDay;
@property (nonatomic) bool allDayDrawingStyle;
@property (getter=isBirthday, nonatomic) bool birthday;
@property (nonatomic) double bottomPinningProximity;
@property (getter=isCancelled, nonatomic) bool cancelled;
@property (nonatomic) double cappedColorBarHeight;
@property (nonatomic, copy) UIColor *color;
@property (readonly, copy) NSString *debugDescription;
@property (getter=isDeclined, nonatomic) bool declined;
@property (nonatomic) NSObject<EKDayOccurrenceViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool dimmed;
@property (nonatomic) bool drawsResizeHandles;
@property (getter=isFacebook, nonatomic) bool facebook;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hideBackgroundImage;
@property (nonatomic) bool hideText;
@property (nonatomic, readonly) bool isPinned;
@property (nonatomic) bool isProposedTime;
@property (nonatomic) bool isSelectedCopyView;
@property (nonatomic, copy) NSString *location;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } margin;
@property (nonatomic) bool needsReply;
@property (nonatomic, retain) EKEvent *occurrence;
@property (nonatomic) int occurrenceBackgroundStyle;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } padding;
@property (nonatomic) bool reduceLayoutProcessingForAnimation;
@property (nonatomic) long long routingMode;
@property (nonatomic, retain) UIColor *secondaryTextColor;
@property (nonatomic) bool selected;
@property (nonatomic) EKDayOccurrenceView *selectedCopy;
@property (nonatomic) bool showsTravelTime;
@property (readonly) Class superclass;
@property (getter=isTentative, nonatomic) bool tentative;
@property (nonatomic, retain) UIColor *textBackgroundColor;
@property (nonatomic, retain) UIColor *timeTextColor;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, retain) UIColor *titleTextColor;
@property (nonatomic) double topYBoundaryForText;
@property (nonatomic) bool touchesAreBeingTracked;
@property (nonatomic) double travelTime;
@property (nonatomic) double travelTimeSubviewHeightInPoints;
@property (nonatomic) bool usesSmallText;
@property (nonatomic, readonly) bool visibleHeightLocked;

+ (id)_cachedImageForCalendarColor:(id)arg1 selected:(bool)arg2 declined:(bool)arg3 cancelled:(bool)arg4 tentative:(bool)arg5 needsReply:(bool)arg6 colorBarStyle:(long long)arg7 dayViewBackgroundStyle:(int)arg8;
+ (void)_clearViewCache;
+ (id)_color:(id)arg1 lightenedToPercentage:(double)arg2 withFinalAlpha:(double)arg3;
+ (id)_imageForBarColor:(id)arg1 backgroundColor:(id)arg2 colorBarStyle:(long long)arg3;
+ (id)_imageForBarColor:(id)arg1 backgroundColor:(id)arg2 stripeColor:(id)arg3 stripedImageAlpha:(double)arg4 colorBarStyle:(long long)arg5;
+ (id)_lightStripeColorForColor:(id)arg1;
+ (id)_viewCache;
+ (double)barToBarGapWidth;
+ (double)barToBarHorizontalDistanceIncludingBarWidth;
+ (double)bottomShadowMargin;
+ (void)clearCaches;
+ (double)colorBarThickness;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentStretchRectForFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })defaultMargin;
+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })defaultPadding;
+ (double)minimumHeightForOrientation:(long long)arg1;
+ (double)minimumHeightForOrientation:(long long)arg1 isAllDay:(bool)arg2;
+ (double)minimumHeightForOrientation:(long long)arg1 isAllDay:(bool)arg2 usesSmallText:(bool)arg3;
+ (id)occurrenceViewWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

- (void).cxx_destruct;
- (void)_addTravelTimeSubviews;
- (id)_backgroundColor;
- (long long)_compareOccurrenceViewForSelectedCopyOrdering:(id)arg1;
- (long long)_compareOccurrenceViewLeftToRight:(id)arg1;
- (long long)_compareOccurrenceViewTopToBottom:(id)arg1;
- (long long)_compareOccurrenceViewTopToBottomLeftToRight:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_computeContentRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_computeTravelTimeContentRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameMutatedForProximityToHourLine:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_invalidateContentBounds;
- (bool)_isAboveAllDayOccurrenceView:(id)arg1;
- (bool)_isAboveOccurrenceView:(id)arg1 overlapToIgnore:(double)arg2;
- (bool)_isBelowAllDayOccurrenceView:(id)arg1;
- (bool)_isBelowOccurrenceView:(id)arg1 overlapToIgnore:(double)arg2;
- (bool)_isTimedOccurrenceDrawingStyle;
- (id)_newResizeHandleView;
- (void)_removeTravelTimeSubviews;
- (void)_resetContentViewPosition;
- (bool)_shouldShowTimeString;
- (void)_updateColors;
- (void)_updateResizeHandleLocations;
- (double)_verticalContentInset;
- (bool)allDayDrawingStyle;
- (void)animateToFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 isAllDay:(bool)arg2 beginFromCurrentState:(bool)arg3 whenFinished:(id)arg4;
- (id)arrayOfResizeHandles;
- (double)bottomPinningProximity;
- (void)bringResizeHandlesToFront;
- (double)cappedColorBarHeight;
- (id)color;
- (long long)compareOccurrenceViewForTabOrdering:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentRectForPreview;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (void)didMoveToSuperview;
- (bool)dimmed;
- (int)dragTypeFromPoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)drawsResizeHandles;
- (double)enoughHeightForOneLine;
- (void)fadeInContentViewAt:(double)arg1 minWidth:(double)arg2 animated:(bool)arg3;
- (bool)hasIcon;
- (bool)hideBackgroundImage;
- (bool)hideText;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isAllDay;
- (bool)isBirthday;
- (bool)isCancelled;
- (bool)isDeclined;
- (bool)isFacebook;
- (bool)isPinned;
- (bool)isProposedTime;
- (bool)isSelectedCopyView;
- (bool)isTentative;
- (void)layoutSubviews;
- (id)location;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })margin;
- (bool)needsReply;
- (id)occurrence;
- (int)occurrenceBackgroundStyle;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })padding;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)prepareForReuse;
- (bool)reduceLayoutProcessingForAnimation;
- (void)removeFromSuperview;
- (bool)resetContentViewToOriginalState:(bool)arg1;
- (void)resetVisibleHeight;
- (long long)routingMode;
- (id)secondaryTextColor;
- (bool)selected;
- (id)selectedCopy;
- (void)setAllDay:(bool)arg1;
- (void)setAllDayDrawingStyle:(bool)arg1;
- (void)setAllDayDrawingStyle:(bool)arg1 animated:(bool)arg2;
- (void)setBirthday:(bool)arg1;
- (void)setBottomPinningProximity:(double)arg1;
- (void)setCancelled:(bool)arg1;
- (void)setCappedColorBarHeight:(double)arg1;
- (void)setColor:(id)arg1;
- (void)setDeclined:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDimmed:(bool)arg1;
- (void)setDrawsResizeHandles:(bool)arg1;
- (void)setFacebook:(bool)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHidden:(bool)arg1;
- (void)setHideBackgroundImage:(bool)arg1;
- (void)setHideText:(bool)arg1;
- (void)setHideText:(bool)arg1 animate:(bool)arg2;
- (void)setIsProposedTime:(bool)arg1;
- (void)setIsSelectedCopyView:(bool)arg1;
- (void)setLocation:(id)arg1;
- (void)setMargin:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setNeedsReply:(bool)arg1;
- (void)setOccurrence:(id)arg1;
- (void)setOccurrenceBackgroundStyle:(int)arg1;
- (void)setPadding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setReduceLayoutProcessingForAnimation:(bool)arg1;
- (void)setRoutingMode:(long long)arg1;
- (void)setSecondaryTextColor:(id)arg1;
- (void)setSelected:(bool)arg1;
- (void)setSelectedCopy:(id)arg1;
- (void)setShowsTravelTime:(bool)arg1;
- (void)setTentative:(bool)arg1;
- (void)setTextBackgroundColor:(id)arg1;
- (void)setTime:(id)arg1;
- (void)setTimeTextColor:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleTextColor:(id)arg1;
- (void)setTopYBoundaryForText:(double)arg1;
- (void)setTouchesAreBeingTracked:(bool)arg1;
- (void)setTravelTime:(double)arg1;
- (void)setTravelTimeSubviewHeightInPoints:(double)arg1;
- (void)setUserInteractionEnabled:(bool)arg1;
- (void)setUsesSmallText:(bool)arg1;
- (void)setVisibleHeight:(double)arg1;
- (bool)showsTravelTime;
- (id)textBackgroundColor;
- (id)time;
- (id)timeTextColor;
- (id)title;
- (id)titleTextColor;
- (double)topYBoundaryForText;
- (bool)touchesAreBeingTracked;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (double)travelTime;
- (double)travelTimeSubviewHeightInPoints;
- (double)unconstrainedWidth;
- (bool)usesSmallText;
- (double)viewMaxNaturalTextHeight;
- (bool)visibleHeightLocked;

@end
