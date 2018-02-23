/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKTextBalloonView : CKColoredBalloonView <CKBalloonTextViewInteractionDelegate> {
    NSAttributedString * _attributedText;
    bool  _centerTextWhenSkinny;
    CKBalloonTextView * _textView;
}

@property (nonatomic, copy) NSAttributedString *attributedText;
@property (nonatomic) bool centerTextWhenSkinny;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) CKBalloonTextView *textView;

- (void).cxx_destruct;
- (void)addFilter:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (void)attachInvisibleInkEffectView;
- (id)attributedText;
- (bool)centerTextWhenSkinny;
- (void)clearFilters;
- (void)configureForComposition:(id)arg1;
- (void)configureForMessagePart:(id)arg1;
- (void)cullSubviewsWithVisibleBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)description;
- (void)detachInvisibleInkEffectView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)interactionStartedFromPreviewItemControllerInTextView:(id)arg1;
- (void)interactionStoppedFromPreviewItemControllerInTextView:(id)arg1;
- (Class)invisibleInkEffectViewClass;
- (void)invisibleInkEffectViewWasUncovered;
- (void)layoutSubviews;
- (void)prepareForDisplay;
- (void)prepareForReuse;
- (void)restoreFromLargeTextTruncation;
- (void)setAttributedText:(id)arg1;
- (void)setCenterTextWhenSkinny:(bool)arg1;
- (void)setTextView:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1 textAlignmentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; }*)arg2;
- (id)textView;
- (double)textViewWidthForWidth:(double)arg1;
- (void)truncateForLargeText;
- (void)updateRasterizationForInvisibleInkEffect;

@end
