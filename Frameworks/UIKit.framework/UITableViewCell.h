/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITableViewCell : UIView <NSCoding, UIGestureRecognizerDelegate, UIScrollViewDelegate, _UILayoutEngineSuspending> {
    SEL  _accessoryAction;
    UIStoryboardPreviewingSegueTemplateStorage * _accessoryActionPreviewingSegueTemplateStorage;
    id  _accessoryActionSegueTemplate;
    UIColor * _accessoryTintColor;
    UIControl * _accessoryView;
    UIColor * _backgroundColor;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _backgroundInset;
    UIView * _backgroundView;
    id  _badge;
    UIView * _bottomShadowAnimationView;
    UIColor * _bottomShadowColor;
    UIView * _clearBlendingView;
    <UITableConstants> * _constants;
    UIView * _contentView;
    UIView * _customAccessoryView;
    UIView * _customEditingAccessoryView;
    double  _defaultMarginWidth;
    NSTimer * _deselectTimer;
    UILabel * _detailTextLabel;
    SEL  _editAction;
    UIFocusGuide * _editControlFocusGuide;
    UITextField * _editableTextField;
    UIControl * _editingAccessoryView;
    id  _editingData;
    _UIFloatingContentView * _floatingContentView;
    UIView * _floatingSeparatorView;
    bool  _focusable;
    id  _highlightingSupport;
    UIImageView * _imageView;
    long long  _indentationLevel;
    double  _indentationWidth;
    double  _indexBarWidth;
    bool  _isLayoutEngineSuspended;
    double  _lastSelectionTime;
    id  _layoutManager;
    long long  _lineBreakModeBeforeFocus;
    UILongPressGestureRecognizer * _menuGesture;
    UIView * _multipleSelectionBackgroundView;
    _UITableViewCellOldEditingData * _oldEditingData;
    UIFocusGuide * _reorderControlFocusGuide;
    UIImage * _reorderControlImage;
    NSIndexPath * _representedIndexPath;
    SEL  _returnAction;
    NSString * _reuseIdentifier;
    double  _rightMargin;
    UIColor * _sectionBorderColor;
    double  _sectionBorderWidth;
    double  _sectionCornerRadius;
    UIView * _selectedBackgroundView;
    UIView * _selectedOverlayView;
    double  _selectionFadeDuration;
    id  _selectionSegueTemplate;
    UIColor * _selectionTintColor;
    UIColor * _separatorColor;
    UIVisualEffect * _separatorEffect;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _separatorInset;
    _UITableViewCellSeparatorView * _separatorView;
    UITapGestureRecognizer * _swipeToDeleteCancelationGesture;
    UITableViewCellDeleteConfirmationView * _swipeToDeleteConfirmationView;
    double  _swipeToDeleteDistancePulled;
    struct { 
        unsigned int showingDeleteConfirmation : 1; 
        unsigned int separatorStyle : 3; 
        unsigned int selectionStyle : 3; 
        unsigned int selectionFadeFraction : 11; 
        unsigned int editing : 1; 
        unsigned int editingStyle : 3; 
        unsigned int accessoryType : 3; 
        unsigned int editingAccessoryType : 3; 
        unsigned int showsAccessoryWhenEditing : 1; 
        unsigned int showsReorderControl : 1; 
        unsigned int showDisclosure : 1; 
        unsigned int showTopSeparator : 1; 
        unsigned int hideTopSeparatorDuringReordering : 1; 
        unsigned int disclosureClickable : 1; 
        unsigned int disclosureStyle : 1; 
        unsigned int showingRemoveControl : 1; 
        unsigned int sectionLocation : 3; 
        unsigned int tableViewStyle : 1; 
        unsigned int shouldIndentWhileEditing : 1; 
        unsigned int fontSet : 1; 
        unsigned int usingDefaultSelectedBackgroundView : 1; 
        unsigned int usingDefaultBackgroundView : 1; 
        unsigned int wasSwiped : 1; 
        unsigned int highlighted : 1; 
        unsigned int separatorDirty : 1; 
        unsigned int drawn : 1; 
        unsigned int drawingDisabled : 1; 
        unsigned int style : 12; 
        unsigned int showingMenu : 1; 
        unsigned int clipsContents : 1; 
        unsigned int animatingSelection : 1; 
        unsigned int backgroundColorSet : 1; 
        unsigned int needsSetup : 1; 
        unsigned int dontDrawTopShadow : 1; 
        unsigned int usingMultiselectbackgroundView : 1; 
        unsigned int isCarPlayCell : 1; 
        unsigned int deleteAnimationInProgress : 1; 
        unsigned int deleteCancelationAnimationInProgress : 1; 
        unsigned int animating : 1; 
        unsigned int shouldHaveFullLengthBottomSeparator : 1; 
        unsigned int shouldHaveFullLengthTopSeparator : 1; 
        unsigned int drawsSeparatorAtTopOfSection : 1; 
        unsigned int drawsSeparatorAtBottomOfSection : 1; 
        unsigned int separatorBackdropOverlayBlendMode : 3; 
        unsigned int separatorDrawsInVibrantLightMode : 1; 
        unsigned int separatorHidden : 1; 
        unsigned int hidingSeparatorsForSelection : 1; 
        unsigned int clippedBeforeSwiping : 1; 
        unsigned int allowsReorderingWhenNotEditing : 1; 
        unsigned int needsHeightCalculation : 1; 
        unsigned int reordering : 1; 
        unsigned int doesNotOverrideDidUpdateFocus : 1; 
        unsigned int hasEditingFocusGuides : 1; 
        unsigned int focusStyle : 3; 
        unsigned int accessoryViewsHidden : 1; 
    }  _tableCellFlags;
    <UITable_UITableViewCellDelegate> * _tableView;
    id  _target;
    double  _textFieldOffset;
    UILabel * _textLabel;
    _UITableViewCellSeparatorView * _topSeparatorView;
    UIView * _topShadowAnimationView;
    UIColor * _topShadowColor;
    UIView * _topShadowView;
    struct __CFDictionary { } * _unhighlightedStates;
}

@property (getter=_isLayoutEngineSuspended, setter=_setLayoutEngineSuspended:, nonatomic) bool _layoutEngineSuspended;
@property (nonatomic) long long accessoryType;
@property (nonatomic, retain) UIView *accessoryView;
@property (nonatomic, retain) UIView *backgroundView;
@property (nonatomic, readonly) UIView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) UILabel *detailTextLabel;
@property (getter=_editControlFocusGuide, setter=_setEditControlFocusGuide:, nonatomic, retain) UIFocusGuide *editControlFocusGuide;
@property (getter=isEditing, nonatomic) bool editing;
@property (nonatomic) long long editingAccessoryType;
@property (nonatomic, retain) UIView *editingAccessoryView;
@property (nonatomic, readonly) long long editingStyle;
@property (nonatomic) long long focusStyle;
@property (readonly) unsigned long long hash;
@property (getter=isHighlighted, nonatomic) bool highlighted;
@property (nonatomic, readonly) UIImageView *imageView;
@property (nonatomic) long long indentationLevel;
@property (nonatomic) double indentationWidth;
@property (nonatomic, retain) UIView *multipleSelectionBackgroundView;
@property (getter=_reorderControlFocusGuide, setter=_setReorderControlFocusGuide:, nonatomic, retain) UIFocusGuide *reorderControlFocusGuide;
@property (nonatomic, readonly, copy) NSString *reuseIdentifier;
@property (getter=isSelected, nonatomic) bool selected;
@property (nonatomic, retain) UIView *selectedBackgroundView;
@property (nonatomic) long long selectionStyle;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } separatorInset;
@property (nonatomic) bool shouldIndentWhileEditing;
@property (nonatomic, readonly) bool showingDeleteConfirmation;
@property (nonatomic) bool showsReorderControl;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UILabel *textLabel;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

+ (id)_defaultTopShadowColor;
+ (void)_initializeForIdiom:(long long)arg1;
+ (void)initialize;

- (void).cxx_destruct;
- (SEL)_accessoryAction;
- (id)_accessoryTintColor;
- (id)_accessoryView:(bool)arg1;
- (bool)_accessoryViewsHidden;
- (void)_actionButtonPushed:(id)arg1;
- (id)_addSeparatorWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_addSubview:(id)arg1 positioned:(long long)arg2 relativeTo:(id)arg3;
- (bool)_allowsReorderingWhenNotEditing;
- (void)_animateFloatingSeparatorForInsertion:(bool)arg1 withRowAnimation:(long long)arg2;
- (void)_animateInnerShadowForInsertion:(bool)arg1 withRowAnimation:(long long)arg2;
- (bool)_backgroundColorSet;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_backgroundInset;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_backgroundSeparatorInset;
- (id)_backgroundView:(bool)arg1;
- (id)_badge;
- (id)_badge:(bool)arg1;
- (id)_badgeText;
- (void)_beginSwiping;
- (bool)_canDrawContent;
- (void)_cancelInternalPerformRequests;
- (id)_checkmarkImage:(bool)arg1;
- (void)_clearOpaqueViewState:(id)arg1;
- (id)_constants;
- (id)_contentBackgroundColor;
- (void)_contentViewLabelTextDidChange:(id)arg1;
- (id)_createRemoveControlForStyle:(long long)arg1;
- (void)_createReorderControlIfNeeded;
- (id)_currentAccessoryView:(bool)arg1;
- (id)_customAccessoryView:(bool)arg1;
- (id)_customEditingAccessoryView:(bool)arg1;
- (id)_defaultAccessoryView;
- (id)_defaultFont;
- (double)_defaultMarginWidth;
- (void)_delayedDeselect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_delegateConfirmationRect;
- (id)_deleteConfirmationView;
- (void)_descendent:(id)arg1 didMoveFromSuperview:(id)arg2 toSuperview:(id)arg3;
- (void)_descendent:(id)arg1 willMoveFromSuperview:(id)arg2 toSuperview:(id)arg3;
- (void)_deselectAnimationFinished;
- (id)_detailDisclosureImage:(bool)arg1;
- (id)_detailTextLabel;
- (id)_detailTextLabel:(bool)arg1;
- (void)_didCreateContentView;
- (void)_didTransitionToState:(unsigned long long)arg1;
- (void)_didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)_disclosureChevronImage:(bool)arg1;
- (id)_disclosureImage:(bool)arg1;
- (id)_disclosurePressedImage:(bool)arg1;
- (void)_drawContentInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 selected:(bool)arg2;
- (void)_drawSeparatorInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)_drawsSeparatorAtBottomOfSection;
- (bool)_drawsSeparatorAtTopOfSection;
- (bool)_drawsTopSeparatorDuringReordering;
- (bool)_drawsTopShadow;
- (id)_editControlFocusGuide;
- (id)_editableTextField;
- (id)_editableTextField:(bool)arg1;
- (id)_editingAccessoryView:(bool)arg1;
- (double)_editingButtonOffset;
- (id)_encodableSubviews;
- (void)_endSwiping:(bool)arg1;
- (void)_ensureFocusedFloatingContentView;
- (void)_finishTransitioningToReorderingAppearance:(bool)arg1;
- (void)_finishedFadingGrabber:(id)arg1 finished:(bool)arg2;
- (id)_forSpringBoardDefaultSelectedBackgroundView;
- (void)_forSpringBoardSetDefaultSelectedBackgroundView:(id)arg1;
- (bool)_forwardsSystemLayoutFittingSizeToContentView:(id)arg1;
- (bool)_gestureRecognizerShouldBegin:(id)arg1;
- (void)_grabberBeganReorder:(id)arg1 touch:(id)arg2;
- (void)_grabberDragged:(id)arg1 yDelta:(float)arg2;
- (void)_grabberDragged:(id)arg1 yDelta:(float)arg2 touch:(id)arg3;
- (void)_grabberReleased:(id)arg1;
- (void)_handleSwipeDeleteCancelation:(id)arg1;
- (bool)_hasAccessoryView;
- (bool)_hasEditingAccessoryView;
- (struct CGSize { double x1; double x2; })_imageInsetSize;
- (id)_imageView;
- (id)_imageView:(bool)arg1;
- (double)_imageViewTrailingX;
- (double)_indexBarWidth;
- (id)_indexPath;
- (bool)_insetsBackground;
- (bool)_isAnimating;
- (bool)_isCarPlayCell;
- (bool)_isCurrentlyConsideredHighlighted;
- (bool)_isDeleteAnimationInProgress;
- (bool)_isDeleteCancelationAnimationInProgress;
- (bool)_isHighlighted;
- (bool)_isInModalViewController;
- (bool)_isLayoutEngineSuspended;
- (bool)_isMultiselecting;
- (bool)_isReorderable;
- (bool)_isUsingOldStyleMultiselection;
- (id)_layoutDebuggingTitle;
- (void)_layoutFloatingContentView;
- (void)_layoutSubviewsAnimated:(bool)arg1;
- (void)_longPressGestureRecognized:(id)arg1;
- (double)_marginWidth;
- (void)_menuDismissed:(id)arg1;
- (id)_multiselectBackgroundColor;
- (void)_multiselectColorChanged;
- (bool)_needsHeightCalculation;
- (bool)_needsSetup;
- (id)_newAccessoryView:(bool)arg1;
- (void)_performAction:(SEL)arg1 sender:(id)arg2;
- (long long)_popoverControllerStyle;
- (void)_populateArchivedSubviews:(id)arg1;
- (id)_preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2;
- (void)_prepareToEnterReuseQueue;
- (id)_previewingSegueTemplateStorageForLocation:(struct CGPoint { double x1; double x2; })arg1 inView:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_rawSeparatorInset;
- (void)_releaseDetailTextLabel;
- (void)_releaseRemoveControl;
- (void)_releaseReorderingControl;
- (void)_releaseTextLabel;
- (id)_removeControl;
- (void)_removeFloatingSeparator;
- (void)_removeFocusedFloatingContentView;
- (void)_removeInnerShadow;
- (void)_removeRemoveControl;
- (id)_reorderControlFocusGuide;
- (id)_reorderControlImage;
- (id)_reorderingControl;
- (id)_reorderingSeparatorView;
- (void)_resetSelectionTimer;
- (double)_rightMarginWidth;
- (void)_saveOpaqueViewState:(id)arg1;
- (double)_sectionBorderWidth;
- (id)_selectedBackgroundView:(bool)arg1;
- (long long)_separatorBackdropOverlayBlendMode;
- (bool)_separatorDrawsInVibrantLightMode;
- (id)_separatorEffect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_separatorFrame;
- (double)_separatorHeight;
- (bool)_separatorHidden;
- (id)_separatorView:(bool)arg1;
- (void)_setAccessoryAction:(SEL)arg1;
- (void)_setAccessoryTintColor:(id)arg1;
- (void)_setAccessoryViewsHidden:(bool)arg1;
- (void)_setAllowsReorderingWhenNotEditing:(bool)arg1;
- (void)_setAnimating:(bool)arg1;
- (void)_setAnimating:(bool)arg1 clippingAdjacentCells:(bool)arg2;
- (void)_setBackgroundInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)_setBadgeText:(id)arg1;
- (void)_setConstants:(id)arg1;
- (void)_setCurrentScreenScale:(double)arg1;
- (void)_setDefaultMarginWidth:(double)arg1;
- (void)_setDeleteAnimationInProgress:(bool)arg1;
- (void)_setDeleteCancelationAnimationInProgress:(bool)arg1;
- (void)_setDrawsSeparatorAtBottomOfSection:(bool)arg1;
- (void)_setDrawsSeparatorAtTopOfSection:(bool)arg1;
- (void)_setDrawsTopSeparator:(bool)arg1;
- (void)_setDrawsTopSeparatorDuringReordering:(bool)arg1;
- (void)_setDrawsTopShadow:(bool)arg1;
- (void)_setEditControlFocusGuide:(id)arg1;
- (void)_setEditing:(bool)arg1 animated:(bool)arg2 cellOrAncestorViewForAnimatedLayout:(id)arg3;
- (void)_setEditingStyle:(long long)arg1;
- (void)_setFont:(id)arg1 layout:(bool)arg2;
- (void)_setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 skipLayout:(bool)arg2;
- (void)_setGrabberHidden:(bool)arg1;
- (void)_setHiddenForReuse:(bool)arg1;
- (void)_setIndexBarWidth:(double)arg1;
- (void)_setIndexPath:(id)arg1;
- (void)_setIsCarPlayCell:(bool)arg1;
- (void)_setLayoutEngineSuspended:(bool)arg1;
- (void)_setMarginWidth:(double)arg1;
- (void)_setMultiselecting:(bool)arg1;
- (void)_setNeedsHeightCalculation:(bool)arg1;
- (void)_setNeedsSetup:(bool)arg1;
- (void)_setOpaque:(bool)arg1 forSubview:(id)arg2;
- (void)_setReorderControlFocusGuide:(id)arg1;
- (void)_setReorderControlImage:(id)arg1;
- (void)_setReordering:(bool)arg1;
- (void)_setRightMarginWidth:(double)arg1;
- (void)_setSectionBorderWidth:(double)arg1;
- (void)_setSectionLocation:(int)arg1 animated:(bool)arg2 forceBackgroundSetup:(bool)arg3;
- (void)_setSelectionStyle:(long long)arg1 selectionTintColor:(id)arg2;
- (void)_setSeparatorBackdropOverlayBlendMode:(long long)arg1;
- (void)_setSeparatorDrawsInVibrantLightMode:(bool)arg1;
- (void)_setSeparatorDrawsInVibrantLightModeUIAppearance:(id)arg1;
- (void)_setSeparatorEffect:(id)arg1;
- (void)_setSeparatorHidden:(bool)arg1;
- (void)_setShouldHaveFullLengthBottomSeparator:(bool)arg1;
- (void)_setShouldHaveFullLengthTopSeparator:(bool)arg1;
- (void)_setShouldIndentWhileEditing:(bool)arg1;
- (void)_setShowingDeleteConfirmation:(bool)arg1;
- (void)_setShowsReorderControl:(bool)arg1;
- (void)_setTableBackgroundCGColor:(struct CGColor { }*)arg1 withSystemColorName:(id)arg2;
- (void)_setTableView:(id)arg1;
- (void)_setTarget:(id)arg1;
- (void)_setupBackgroundView;
- (void)_setupMenuGesture;
- (void)_setupSelectedBackgroundView;
- (void)_setupTableViewCellCommon;
- (bool)_shouldHaveFullLengthBottomSeparator;
- (bool)_shouldHaveFullLengthTopSeparator;
- (bool)_shouldHideSeparator;
- (bool)_shouldMaskToBoundsWhileAnimating;
- (bool)_shouldSaveOpaqueStateForView:(id)arg1;
- (bool)_showFullLengthTopSeparatorForTopOfSection;
- (void)_showReorderControl;
- (bool)_showSeparatorAtTopOfSection;
- (void)_startToEditTextField;
- (id)_subviewsForFloatingContentView;
- (void)_swipeAccessoryButtonPushed;
- (void)_swipeDeleteButtonPushed;
- (id)_swipeToDeleteConfirmationView;
- (void)_syncAccessoryViewsIfNecessary;
- (void)_systemTextSizeChanged;
- (id)_tableView;
- (void)_tableViewDidUpdateMarginWidth;
- (id)_target;
- (struct CGSize { double x1; double x2; })_textInsetSize;
- (id)_textLabel;
- (id)_textLabel:(bool)arg1;
- (id)_tintedDisclosureImagePressed:(bool)arg1;
- (id)_titleForDeleteConfirmationButton;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_topSeparatorFrame;
- (void)_topShadowDidFadeOut;
- (id)_topShadowView:(bool)arg1;
- (void)_transitionToReorderingAppearance:(bool)arg1;
- (void)_uiRemoveControlMinusButtonHideAnimationDone:(id)arg1;
- (void)_updateAndCacheBackgroundColorForHighlightIgnoringSelection:(bool)arg1;
- (void)_updateCellMaskViewsForView:(id)arg1 backdropView:(id)arg2;
- (void)_updateContentClip;
- (void)_updateDefaultAccessoryViewForFocus:(bool)arg1;
- (void)_updateDefaultLabelsForFocus:(bool)arg1;
- (void)_updateFloatingContentControlStateAnimated:(bool)arg1;
- (void)_updateFloatingContentControlStateInContext:(id)arg1 withAnimationCoordinator:(id)arg2 animated:(bool)arg3;
- (void)_updateFullWidthSwipeDeletionView;
- (void)_updateHighlightColors;
- (void)_updateHighlightColorsForAnimationHalfwayPoint;
- (void)_updateHighlightColorsForView:(id)arg1 highlighted:(bool)arg2;
- (void)_updateSeparatorContent;
- (void)_updateSeparatorContent:(bool)arg1;
- (void)_updateSeparatorInset;
- (void)_updateSwipeWithDistancePulled:(double)arg1;
- (void)_updateTopShadowView:(bool)arg1;
- (void)_updateViewsForDeleteButton;
- (bool)_usesRoundedGroups;
- (void)_willBeDeleted;
- (void)_willTransitionToState:(unsigned long long)arg1;
- (SEL)accessoryAction;
- (id)accessoryActionPreviewingSegueTemplateStorage;
- (id)accessoryActionSegueTemplate;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })accessoryRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 accessoryView:(id)arg2 isCustom:(bool)arg3;
- (long long)accessoryType;
- (id)accessoryView;
- (id)backgroundColor;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })backgroundRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)backgroundView;
- (id)bottomShadowColor;
- (void)bringSubviewToFront:(id)arg1;
- (bool)canBecomeFirstResponder;
- (bool)canBecomeFocused;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (bool)clipsContents;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentRectForState:(unsigned long long)arg1;
- (id)contentView;
- (void)copy:(id)arg1;
- (unsigned long long)currentStateMask;
- (void)cut:(id)arg1;
- (void)dealloc;
- (void)deleteConfirmationControlWasCancelled:(id)arg1;
- (void)deleteConfirmationControlWasClicked:(id)arg1;
- (id)detailTextLabel;
- (void)didMoveToSuperview;
- (void)didTransitionToState:(unsigned long long)arg1;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (bool)drawingEnabled;
- (SEL)editAction;
- (void)editControlWasClicked:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })editRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)editableTextField;
- (long long)editingAccessoryType;
- (id)editingAccessoryView;
- (id)editingData:(bool)arg1;
- (long long)editingStyle;
- (void)encodeWithCoder:(id)arg1;
- (long long)focusStyle;
- (void)focusedViewDidChange;
- (id)font;
- (bool)hidesAccessoryWhenEditing;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)image;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })imageRectForContentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)imageView;
- (long long)indentationLevel;
- (double)indentationWidth;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 reuseIdentifier:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)insertControl:(id)arg1 shouldInsertWithTarget:(id)arg2;
- (bool)isAtLeastHalfSelected;
- (bool)isEditing;
- (bool)isElementAccessibilityExposedToInterfaceBuilder;
- (bool)isHighlighted;
- (bool)isSelected;
- (id)layoutManager;
- (void)layoutSubviews;
- (long long)lineBreakMode;
- (id)multipleSelectionBackgroundView;
- (id)oldEditingData;
- (void)paste:(id)arg1;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)preferredFocusedView;
- (void)prepareForReuse;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })removeControl:(id)arg1 endFrameForTarget:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })removeControl:(id)arg1 startFrameForTarget:(id)arg2;
- (void)removeControl:(id)arg1 wasCanceledForTarget:(id)arg2;
- (void)removeControl:(id)arg1 willRemoveTarget:(id)arg2;
- (void)removeControlWillHideRemoveConfirmation:(id)arg1;
- (void)removeEditingData;
- (void)removeFromSuperview;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })reorderRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (SEL)returnAction;
- (id)reuseIdentifier;
- (id)sectionBorderColor;
- (int)sectionLocation;
- (id)selectedBackgroundView;
- (id)selectedImage;
- (id)selectedOverlayView;
- (id)selectedTextColor;
- (double)selectionFadeDuration;
- (float)selectionPercent;
- (id)selectionSegueTemplate;
- (long long)selectionStyle;
- (id)selectionTintColor;
- (void)sendSubviewToBack:(id)arg1;
- (id)separatorColor;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })separatorInset;
- (long long)separatorStyle;
- (void)setAccessoryAction:(SEL)arg1;
- (void)setAccessoryActionPreviewingSegueTemplateStorage:(id)arg1;
- (void)setAccessoryActionSegueTemplate:(id)arg1;
- (void)setAccessoryType:(long long)arg1;
- (void)setAccessoryView:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setBottomShadowColor:(id)arg1;
- (void)setClipsContents:(bool)arg1;
- (void)setDrawingEnabled:(bool)arg1;
- (void)setEditAction:(SEL)arg1;
- (void)setEditing:(bool)arg1;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)setEditingAccessoryType:(long long)arg1;
- (void)setEditingAccessoryView:(id)arg1;
- (void)setEditingStyle:(long long)arg1;
- (void)setFocusStyle:(long long)arg1;
- (void)setFont:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHidesAccessoryWhenEditing:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setHighlighted:(bool)arg1 animated:(bool)arg2;
- (void)setImage:(id)arg1;
- (void)setIndentationLevel:(long long)arg1;
- (void)setIndentationWidth:(double)arg1;
- (void)setLayoutManager:(id)arg1;
- (void)setLineBreakMode:(long long)arg1;
- (void)setMultipleSelectionBackgroundView:(id)arg1;
- (void)setNeedsUpdateConstraints;
- (void)setOldEditingData:(id)arg1;
- (void)setPlaceHolderValue:(id)arg1;
- (void)setReturnAction:(SEL)arg1;
- (void)setReuseIdentifier:(id)arg1;
- (void)setSectionBorderColor:(id)arg1;
- (void)setSectionLocation:(int)arg1;
- (void)setSectionLocation:(int)arg1 animated:(bool)arg2;
- (void)setSelected:(bool)arg1;
- (void)setSelected:(bool)arg1 animated:(bool)arg2;
- (void)setSelectedBackgroundView:(id)arg1;
- (void)setSelectedBackgroundView:(id)arg1 animated:(bool)arg2;
- (void)setSelectedImage:(id)arg1;
- (void)setSelectedTextColor:(id)arg1;
- (void)setSelectionFadeDuration:(double)arg1;
- (void)setSelectionSegueTemplate:(id)arg1;
- (void)setSelectionStyle:(long long)arg1;
- (void)setSelectionTintColor:(id)arg1;
- (void)setSemanticContentAttribute:(long long)arg1;
- (void)setSeparatorColor:(id)arg1;
- (void)setSeparatorInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setSeparatorStyle:(long long)arg1;
- (void)setShouldIndentWhileEditing:(bool)arg1;
- (void)setShowingDeleteConfirmation:(bool)arg1;
- (void)setShowsReorderControl:(bool)arg1;
- (void)setTableBackgroundColor:(id)arg1;
- (void)setTableSpecificElementsHidden:(bool)arg1;
- (void)setTableViewStyle:(long long)arg1;
- (void)setTarget:(id)arg1;
- (void)setText:(id)arg1;
- (void)setTextAlignment:(long long)arg1;
- (void)setTextColor:(id)arg1;
- (void)setTextFieldOffset:(double)arg1;
- (void)setTopShadowColor:(id)arg1;
- (void)setWasSwiped:(bool)arg1;
- (bool)shouldIndentWhileEditing;
- (void)showSelectedBackgroundView:(bool)arg1 animated:(bool)arg2;
- (bool)showingDeleteConfirmation;
- (bool)showsReorderControl;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (long long)style;
- (struct CGSize { double x1; double x2; })systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (id)tableBackgroundColor;
- (bool)tableSpecificElementsHidden;
- (long long)tableViewStyle;
- (id)target;
- (id)text;
- (long long)textAlignment;
- (id)textColor;
- (void)textFieldDidBecomeFirstResponder:(id)arg1;
- (double)textFieldOffset;
- (id)textLabel;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })textRectForContentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)topShadowColor;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (bool)wasSwiped;
- (void)willMoveToSuperview:(id)arg1;
- (void)willTransitionToState:(unsigned long long)arg1;

// Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI

- (void)_cnui_applyCommonContactStyle:(id)arg1;
- (void)_cnui_applyContactStyle;
- (void)_cnui_applySelectedBackgroundViewStyle:(id)arg1;

// Image: /System/Library/Frameworks/SafariServices.framework/SafariServices

- (void)sf_setUsesVibrantSelection:(bool)arg1;

// Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer

- (void)setSelectedBackgroundColor:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NetAppsUtilitiesUI.framework/NetAppsUtilitiesUI

+ (double)naui_estimatedTableRowHeight;
+ (id)naui_prototypeCell;
+ (bool)naui_supportsAutoLayout;
+ (double)naui_tableRowHeight;

// Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI

- (void)pk_applyAppearance:(id)arg1;
- (id)pk_childrenForAppearance;

// Image: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility

- (id)accessibilityTableViewCellText;

@end
