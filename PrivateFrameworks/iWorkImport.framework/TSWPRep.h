/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSWPRep : TSDContainerRep <CAAnimationDelegate, TSDDecorator, TSDTilingLayerDelegate, TSKHighlightArrayControllerProtocol, TSKPulseAnimationControllerProtocol, TSWPHyperlinkHostRepProtocol, UIAccessibilityReadingContent> {
    TSWPSearchReference * _activeSearchReference;
    bool  _caretAnimationDisabled;
    CALayer * _caretLayer;
    TSKPulseAnimationController * _caretPulseController;
    CALayer * _dragAndDropCaretLayer;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _dragRange;
    TSWPSelection * _dropSelection;
    bool  _findIsShowing;
    TSKHighlightArrayController * _highlightArrayController;
    bool  _hudStateDirty;
    CALayer * _indentAnimationLayer;
    bool  _indentAnimationRunning;
    long long  _indentDelta;
    SEL  _indentSelector;
    id  _indentTarget;
    bool  _invalidateHUDState;
    TSWPSelection * _lastSelection;
    bool  _markChanged;
    CAShapeLayer * _markHighlightLayer;
    unsigned long long  _newSelectionFlags;
    TSKHighlightArrayController * _pulseArrayController;
    bool  _repFieldsAreActive;
    NSArray * _searchReferences;
    bool  _secondaryHighlightChanged;
    CAShapeLayer * _secondaryHighlightLayer;
    int  _secondaryHighlightPathStyle;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _secondaryHighlightRange;
    bool  _selectionChanged;
    CAShapeLayer * _selectionHighlightLayer;
    CAShapeLayer * _selectionLineLayers;
    CAShapeLayer * _selectionParagraphBorderLayer;
    bool  _shouldHideSelectionControls;
    CAShapeLayer * _smartFieldHighlightLayer;
    TSWPStorageSpellChecker * _spellChecker;
    bool  _suppressCaret;
    bool  _suppressSelectionHighlight;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _suppressedMisspellingRange;
    TSDTilingLayer * _textLayers;
    bool  _updatingHighlights;
    bool  _useKeyboardWhenEditing;
}

@property (nonatomic, retain) TSWPSearchReference *activeSearchReference;
@property (nonatomic, readonly) NSArray *columns;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } dragRange;
@property (nonatomic) TSWPSelection *dropSelection;
@property (nonatomic) bool findIsShowing;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) TSWPLayout *layout;
@property (nonatomic, retain) NSArray *searchReferences;
@property (nonatomic, readonly) TSWPSelection *selection;
@property (nonatomic) bool shouldHideSelectionControls;
@property (nonatomic, readonly) TSWPStorage *storage;
@property (readonly) Class superclass;
@property (getter=isSelectionHighlightSuppressed, nonatomic) bool suppressSelectionHighlight;
@property (nonatomic, readonly) TSWPEditingController *textEditor;
@property (nonatomic, readonly) bool textIsVertical;
@property (nonatomic, readonly) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } transformToConvertNaturalToScaledRoot;
@property (nonatomic) bool useKeyboardWhenEditing;

// Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading

- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (id)activeSearchReference;
- (void)addAdditionalChildLayersToArray:(id)arg1;
- (void)addKnobsToArray:(id)arg1;
- (void)animateIndent:(long long)arg1 target:(id)arg2 action:(SEL)arg3;
- (id)beginEditing;
- (bool)canEditWithEditor:(id)arg1;
- (void)canvasDidBeginFreeTransform;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })caretRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })caretRectForCharIndex:(unsigned long long)arg1 caretAffinity:(int)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })caretRectForCharIndex:(unsigned long long)arg1 leadingEdge:(bool)arg2 caretAffinity:(int)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })caretRectForSelection:(id)arg1;
- (unsigned long long)charCountOfGlyphStartingAtCharIndex:(unsigned long long)arg1;
- (unsigned long long)charIndexForPointWithPinning:(struct CGPoint { double x1; double x2; })arg1;
- (unsigned long long)charIndexForPointWithPinning:(struct CGPoint { double x1; double x2; })arg1 isTail:(bool)arg2 selectionType:(int)arg3;
- (unsigned long long)charIndexFromPoint:(struct CGPoint { double x1; double x2; })arg1 allowPastBreak:(bool)arg2 allowNotFound:(bool)arg3 isAtEndOfLine:(bool*)arg4 leadingEdge:(bool*)arg5;
- (unsigned long long)charIndexFromPoint:(struct CGPoint { double x1; double x2; })arg1 allowPastBreak:(bool)arg2 allowNotFound:(bool)arg3 pastCenterGoesToNextChar:(bool)arg4 isAtEndOfLine:(bool*)arg5 leadingEdge:(bool*)arg6;
- (unsigned long long)charIndexFromPoint:(struct CGPoint { double x1; double x2; })arg1 allowPastBreak:(bool)arg2 isAtEndOfLine:(bool*)arg3;
- (void)clearSecondaryHighlight;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })clipRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })closestCaretRectForPoint:(struct CGPoint { double x1; double x2; })arg1 inSelection:(bool)arg2;
- (id)closestColumnForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)columnForCharIndex:(unsigned long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })columnRectForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)columns;
- (void)dealloc;
- (id)decoratorOverlayLayers;
- (void)didDrawInLayer:(id)arg1 context:(struct CGContext { }*)arg2;
- (void)didEndZooming;
- (void)didEnterBackground;
- (void)didUpdateLayer:(id)arg1;
- (bool)directlyManagesLayerContent;
- (void)disableCaretAnimation;
- (bool)doesNeedDisplayOnEditingDidEnd;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })dragRange;
- (int)dragTypeAtCanvasPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (void)drawInContext:(struct CGContext { }*)arg1 limitSelection:(id)arg2 suppressInvisibles:(bool)arg3;
- (void)drawInLayerContext:(struct CGContext { }*)arg1;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (void)drawRubyInContext:(struct CGContext { }*)arg1 rubyFieldStart:(unsigned long long)arg2 rubyGlyphRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (id)dropSelection;
- (void)editingDidEnd;
- (void)enableCaretAnimation;
- (bool)findIsShowing;
- (id)footnoteMarkAttachmentAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)footnoteReferenceAttachmentAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)forceTiling;
- (void)gesturesDidEnd;
- (unsigned long long)glyphCountForRubyFieldAtCharIndex:(unsigned long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })glyphRectForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 includingLabel:(bool)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })glyphRectForRubyFieldAtCharIndex:(unsigned long long)arg1 glyphRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (bool)handleSingleTapAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)handlesEditMenu;
- (id)hyperlinkContainerRep;
- (id)hyperlinkRegions;
- (void)i_setNeedsDisplayForSelectionChange;
- (void)i_setNeedsErasableDisplayInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)imageForSearchReference:(id)arg1 forPath:(struct CGPath { }*)arg2 shouldPulsate:(bool)arg3;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;
- (void)invalidateAnnotationColor;
- (void)invalidateHUDState;
- (void)invalidateKnobs;
- (bool)isEditing;
- (bool)isOverflowing;
- (bool)isPointInSelectedArea:(struct CGPoint { double x1; double x2; })arg1;
- (bool)isSelectionHighlightSuppressed;
- (struct CGPoint { double x1; double x2; })knobCenterForSelection:(id)arg1 knob:(id)arg2;
- (double)knobOffsetForKnob:(id)arg1 paragraphMode:(bool)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })labelRectForCharIndex:(unsigned long long)arg1;
- (Class)layerClass;
- (struct { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; double x2; double x3; double x4; double x5; })lineMetricsAtCharIndex:(unsigned long long)arg1;
- (struct { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; double x2; double x3; double x4; double x5; })lineMetricsAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)lineSearchReferencesForSearchReference:(id)arg1;
- (id)lineSelectionsForSelection:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })naturalBoundsRectForHyperlinkField:(id)arg1;
- (struct CGPath { }*)newPathForSearchReference:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })newTextLayerUnscaledBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forNewTextBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)newTrackerForKnob:(id)arg1;
- (id)overlayLayers;
- (void)p_activeFindHighlightChangedNotification:(id)arg1;
- (void)p_addRectToContext:(struct CGContext { }*)arg1 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)p_addRoundedRectToContext:(struct CGContext { }*)arg1 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)p_addRoundedRectToContext:(struct CGContext { }*)arg1 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 forCaret:(bool)arg3;
- (id)p_annotationAtPoint:(struct CGPoint { double x1; double x2; })arg1 outRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2;
- (bool)p_canRepBeginEditingOnDoubleTap;
- (bool)p_canShowSelectionAndCaretLayers;
- (struct CGColor { }*)p_caretLayerColor;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })p_caretRectForSelection:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })p_clipRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })p_convertNaturalRectToRotated:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 repAngle:(double)arg2;
- (void)p_createLayer:(int)arg1;
- (void)p_createMarkHighlightLayer;
- (struct CGPath { }*)p_createPathForParagraphSelection:(id)arg1 needsParagraphBorder:(bool)arg2;
- (void)p_createSelectionHighlightLayer;
- (void)p_createSelectionLineLayers;
- (void)p_createSelectionParagraphBorderLayer;
- (void)p_createSmartFieldHighlightLayer;
- (void)p_destroyLayer:(int)arg1;
- (void)p_destroySpellChecker;
- (void)p_didDismissPopover:(id)arg1;
- (void)p_drawTextBackgroundLayerInContext:(struct CGContext { }*)arg1;
- (void)p_drawTextInLayer:(id)arg1 context:(struct CGContext { }*)arg2 limitSelection:(id)arg3 rubyGlyphRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 renderMode:(int)arg5 suppressInvisibles:(bool)arg6;
- (void)p_drawTextLayerInContext:(struct CGContext { }*)arg1;
- (void)p_editingDidEndNotification:(id)arg1;
- (void)p_findUIStateChangedNotification:(id)arg1;
- (bool)p_hasEmptyList;
- (bool)p_hasVisibleContents;
- (void)p_hideCaretLayer;
- (void)p_hideMarkHighlightLayer;
- (void)p_hideSelectionHighlightLayer;
- (void)p_hideSelectionLayers;
- (void)p_hideSelectionParagraphBorderLayer;
- (void)p_hideSmartFieldHighlightLayer;
- (id)p_hyperlinkAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)p_hyperlinkWithTouch:(id)arg1;
- (id)p_imageForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 usingGlyphRect:(bool)arg2 drawBackground:(bool)arg3 shouldPulsate:(bool)arg4 forCaret:(bool)arg5 drawSelection:(id)arg6 suppressInvisibles:(bool)arg7;
- (void)p_indentAfterAnimationWithOptions:(id)arg1;
- (void)p_invalidateCommentKnobs;
- (void)p_invalidateSuppressedMisspellingRange;
- (bool)p_isSelectionSingleAnchoredDrawableAttachment;
- (id)p_lineSelectionsForSelection:(id)arg1;
- (void)p_markChangedNotification:(id)arg1;
- (bool)p_needsSpellChecker;
- (id)p_newCaretLayerWithZPosition:(double)arg1;
- (struct CGPath { }*)p_newSelectionPathForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 headKnobRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 tailKnobRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg3 selectionType:(int)arg4 selection:(id)arg5;
- (bool)p_paragraphModeBorderNeededForColumn:(id)arg1 dragCharIndex:(unsigned long long)arg2 knobTag:(unsigned long long)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })p_paragraphModeRectangleForColumn:(id)arg1 selection:(id)arg2;
- (struct CGPoint { double x1; double x2; })p_pinPoint:(struct CGPoint { double x1; double x2; })arg1 toRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (bool)p_positionCaretLayer:(id)arg1 forSelection:(id)arg2 layerRelative:(bool)arg3;
- (void)p_renderingOptionsDidChangeNotification:(id)arg1;
- (void)p_selectionChangedNotification:(id)arg1;
- (void)p_selectionContentsChangedNotification:(id)arg1;
- (void)p_setActiveSearchReference:(id)arg1;
- (void)p_setPulseControllerActive:(bool)arg1 autohide:(bool)arg2;
- (void)p_setSearchReferencesToHighlight:(id)arg1;
- (void)p_setSelectionHighlightColor;
- (void)p_setSelectionLineLayersHidden:(bool)arg1;
- (void)p_setSuppressedMisspellingRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (bool)p_shouldDisplaySelectionControls;
- (void)p_showCaretLayer;
- (void)p_showSelectionParagraphBorderLayerWithPath:(struct CGPath { }*)arg1;
- (id)p_smartFieldWithTouch:(id)arg1;
- (void)p_spellCheckerLanguageDidChangeNotification:(id)arg1;
- (bool)p_spellCheckingEnabled;
- (void)p_startCaretLayerAnimation;
- (void)p_stopCaretLayerAnimation;
- (void)p_teardown;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })p_topicDragRectForSelection:(id)arg1;
- (void)p_updateAnimationWithAnimatingPulse:(bool)arg1;
- (void)p_updateForCurrentSelectionWithFlags:(unsigned long long)arg1;
- (void)p_updateHighlights;
- (void)p_updateLayersForInsertionPointSelection:(id)arg1;
- (void)p_updateLayersForRangeSelection:(id)arg1 selectionFlags:(unsigned long long)arg2;
- (void)p_updateMarkHighlightLayer;
- (void)p_updateSecondaryHighlightLayer;
- (void)p_updateSmartFieldHighlightLayer;
- (void)p_updateSuppressedSpellingRange;
- (void)performBlockOnTextLayers:(id /* block */)arg1;
- (struct CGPoint { double x1; double x2; })pinToClosestColumn:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })pinToNaturalBounds:(struct CGPoint { double x1; double x2; })arg1 andLastLineFragment:(bool)arg2;
- (bool)preventClipToColumn;
- (void)processFindUIStateChangedNotificationUserInfo:(id)arg1;
- (void)pulseAnimationDidStop:(id)arg1;
- (void)pulseAnimationDidStopForPulse:(id)arg1;
- (void)pulseCaret;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfMisspelledWordAtCharIndex:(unsigned long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectForSelection:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectForSelection:(id)arg1 includeRuby:(bool)arg2;
- (id)repForCharIndex:(unsigned long long)arg1 isStart:(bool)arg2;
- (id)repForDragging;
- (id)rubyFieldAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)screenScaleDidChange;
- (id)searchReferences;
- (id)selection;
- (id)selectionForDragAndDropNaturalPoint:(struct CGPoint { double x1; double x2; })arg1 dragIsTopicSelection:(bool)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })selectionRect;
- (id)selectionRects;
- (void)setActiveSearchReference:(id)arg1;
- (void)setDragRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setDropSelection:(id)arg1;
- (void)setFindIsShowing:(bool)arg1;
- (void)setHighlightedHyperlinkField:(id)arg1;
- (void)setNeedsDisplay;
- (void)setNeedsDisplayInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSearchReferences:(id)arg1;
- (void)setSecondaryHighlightRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 color:(struct CGColor { }*)arg2 pathStyle:(int)arg3;
- (void)setShouldHideSelectionControls:(bool)arg1;
- (void)setSuppressSelectionHighlight:(bool)arg1;
- (void)setUseKeyboardWhenEditing:(bool)arg1;
- (bool)shouldAlwaysAutoHide;
- (bool)shouldBeginEditingWithGesture:(id)arg1;
- (bool)shouldCreateCommentKnobs;
- (bool)shouldCreateLockedKnobs;
- (bool)shouldCreateSelectionKnobs;
- (bool)shouldCreateTextKnobs;
- (bool)shouldHideSelectionControls;
- (bool)shouldIgnoreSingleTapAtPoint:(struct CGPoint { double x1; double x2; })arg1 withRecognizer:(id)arg2;
- (bool)shouldShowKnobs;
- (id)siblings;
- (id)smartFieldAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)spellCheckingStateChanged;
- (id)storage;
- (id)textBackgroundLayer;
- (id)textEditor;
- (id)textImageForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)textImageForSelection:(id)arg1;
- (id)textImageForSelection:(id)arg1 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 usingGlyphRect:(bool)arg3 drawBackground:(bool)arg4 shouldPulsate:(bool)arg5 suppressInvisibles:(bool)arg6;
- (id)textImageForSelection:(id)arg1 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 usingGlyphRect:(bool)arg3 shouldPulsate:(bool)arg4 suppressInvisibles:(bool)arg5;
- (bool)textIsVertical;
- (id)textLayer;
- (void)tilingLayerWillSetNeedsDisplay:(id)arg1;
- (void)tilingLayerWillSetNeedsDisplayForDirtyTiles:(id)arg1;
- (void)tilingLayerWillSetNeedsLayout:(id)arg1;
- (int)tilingMode;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transformToConvertNaturalToScaledRoot;
- (void)updateFromLayout;
- (void)updatePositionsOfKnobs:(id)arg1;
- (bool)useDynamicTiling;
- (bool)useKeyboardWhenEditing;
- (void)verticalTextPropertyChanged;
- (void)viewDidAppear;
- (void)viewScaleDidChange;
- (void)viewScrollingEnded;
- (bool)wantsToHandleTapsOnContainingGroup;
- (bool)wantsToHandleTapsWhenLocked;
- (void)willBeRemoved;
- (void)willBeginZooming;
- (void)willDisplayEditHyperlinkUIForHyperlinkField:(id)arg1 beginEditing:(bool)arg2;
- (void)willEnterForeground;
- (struct { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; double x2; double x3; double x4; double x5; bool x6; })wordMetricsAtCharIndex:(unsigned long long)arg1;
- (Class)wpEditorClass;

// Image: /System/Library/PrivateFrameworks/SilexText.framework/SilexText

- (id)_STAXColumnForLineIndex:(long long)arg1;
- (id)_STAXColumnForStorageRelativeCharIndex:(unsigned long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_accessibilityFrameForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (long long)_accessibilityLineEndPosition;
- (long long)_accessibilityLineStartPosition;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_accessibilityRangeForLineNumber:(long long)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_accessibilityRawRangeForUITextRange:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_accessibilitySelectedTextRange;
- (void)_accessibilitySetSelectedTextRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (bool)_accessibilitySpeakThisShouldScrollTextRects;
- (id)_accessibilityTextRangeFromNSRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)_accessibilityTextRectsForSpeakThisStringRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_sxaxStorageRelativeRangeOfLineFragmentAtStorageRelativeCharIndex:(unsigned long long)arg1;
- (id)accessibilityContentForLineNumber:(long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })accessibilityFrameForLineNumber:(long long)arg1;
- (long long)accessibilityLineNumberForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)accessibilityPageContent;
- (id)accessibilityValue;
- (bool)isAccessibilityElement;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })sxaxRepRelativeRangeFromStorageRelativeRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })sxaxStorageRelativeRangeFromRepRelativeRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;

@end
