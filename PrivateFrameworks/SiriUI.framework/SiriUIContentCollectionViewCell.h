/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

@interface SiriUIContentCollectionViewCell : SiriUIClearBackgroundCell {
    struct UIOffset { 
        double horizontal; 
        double vertical; 
    }  _accessoryOffset;
    UIView * _accessoryView;
    struct UIOffset { 
        double horizontal; 
        double vertical; 
    }  _chevronOffset;
    UIImageView * _chevronView;
    UIView * _customView;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _customViewEdgeInsets;
    bool  _hasChevron;
    bool  _hasSetUpSubviewConstraints;
    bool  _hasSetupStaticSubviewConstraints;
    SiriUIKeyline * _keyline;
    long long  _keylineType;
    NSMutableArray * _subviewConstraints;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _textAndAccessoryInsets;
    UILabel * _textLabel;
    struct UIOffset { 
        double horizontal; 
        double vertical; 
    }  _textOffset;
    long long  _verticalAlignment;
    NSLayoutConstraint * leftChevronWidthConstraint;
    NSLayoutConstraint * rightChevronWidthConstraint;
}

@property (nonatomic) struct UIOffset { double x1; double x2; } accessoryOffset;
@property (nonatomic, retain) UIView *accessoryView;
@property (nonatomic) struct UIOffset { double x1; double x2; } chevronOffset;
@property (nonatomic, readonly) double chevronTrailingMargin;
@property (nonatomic, retain) UIView *customView;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } customViewEdgeInsets;
@property (nonatomic) bool hasChevron;
@property (nonatomic, readonly) SiriUIKeyline *keyline;
@property (nonatomic, retain) UIColor *keylineCustomBackgroundColor;
@property (nonatomic) long long keylineType;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } textAndAccessoryInsets;
@property (nonatomic, retain) UILabel *textLabel;
@property (nonatomic) struct UIOffset { double x1; double x2; } textOffset;
@property (nonatomic) long long verticalAlignment;

+ (bool)chevronBlendEffectEnabled;
+ (double)chevronTrailingMargin;
+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })defaultInsets;
+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (void)_updateSubviewConstraints;
- (struct UIOffset { double x1; double x2; })accessoryOffset;
- (id)accessoryView;
- (struct UIOffset { double x1; double x2; })chevronOffset;
- (double)chevronTrailingMargin;
- (id)customView;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })customViewEdgeInsets;
- (bool)hasChevron;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)keyline;
- (id)keylineCustomBackgroundColor;
- (long long)keylineType;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setAccessoryOffset:(struct UIOffset { double x1; double x2; })arg1;
- (void)setAccessoryView:(id)arg1;
- (void)setChevronOffset:(struct UIOffset { double x1; double x2; })arg1;
- (void)setCustomView:(id)arg1;
- (void)setCustomViewEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setHasChevron:(bool)arg1;
- (void)setKeylineCustomBackgroundColor:(id)arg1;
- (void)setKeylineType:(long long)arg1;
- (void)setNeedsUpdateSubviewConstraints;
- (void)setTextAndAccessoryInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setTextLabel:(id)arg1;
- (void)setTextOffset:(struct UIOffset { double x1; double x2; })arg1;
- (void)setVerticalAlignment:(long long)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })textAndAccessoryInsets;
- (id)textLabel;
- (struct UIOffset { double x1; double x2; })textOffset;
- (void)updateConstraints;
- (long long)verticalAlignment;

@end
