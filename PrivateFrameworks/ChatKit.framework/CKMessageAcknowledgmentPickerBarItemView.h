/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKMessageAcknowledgmentPickerBarItemView : UIView {
    CKAcknowledgmentGlyphView * _acknowledgmentGlyphView;
    <CKMessageAcknowledgmentPickerBarItemViewDelegate> * _delegate;
    CKMessageAcknowledgmentDraftDescriptor * _draft;
    UIButton * _itemButton;
    long long  _messageAcknowledgmentType;
    bool  _selected;
}

@property (nonatomic, readonly) CKAcknowledgmentGlyphView *acknowledgmentGlyphView;
@property (nonatomic) <CKMessageAcknowledgmentPickerBarItemViewDelegate> *delegate;
@property (nonatomic, readonly) bool displaySelected;
@property (nonatomic, readonly) CKMessageAcknowledgmentDraftDescriptor *draft;
@property (nonatomic, retain) UIButton *itemButton;
@property (nonatomic, readonly) long long messageAcknowledgmentType;
@property (getter=isSelected, nonatomic) bool selected;

- (void).cxx_destruct;
- (id)acknowledgmentGlyphView;
- (void)configureWithMessageAcknowledgmentDescriptor:(id)arg1 initiallySelected:(bool)arg2;
- (void)dealloc;
- (id)delegate;
- (bool)displaySelected;
- (id)draft;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isSelected;
- (id)itemButton;
- (void)itemButtonTapped:(id)arg1;
- (void)layoutSubviews;
- (long long)messageAcknowledgmentType;
- (void)setDelegate:(id)arg1;
- (void)setItemButton:(id)arg1;
- (void)setSelected:(bool)arg1;

@end
