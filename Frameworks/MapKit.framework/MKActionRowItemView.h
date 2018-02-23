/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKActionRowItemView : UIView {
    MKPlaceCardActionItem * _actionRowItem;
    NSArray * _constraints;
    <MKActionRowItemViewDelegate> * _delegate;
    bool  _enabled;
    bool  _fullWidthMode;
    _MKUILabel * _glyphLabel;
    bool  _highlighted;
    _MKUILabel * _label;
    unsigned long long  _style;
    bool  _touched;
}

@property (nonatomic, retain) MKPlaceCardActionItem *actionRowItem;
@property (nonatomic) <MKActionRowItemViewDelegate> *delegate;
@property (nonatomic) bool enabled;
@property (nonatomic) bool fullWidthMode;
@property (nonatomic) bool highlighted;
@property (nonatomic) bool touched;

+ (id)glyphFont;
+ (id)labelFont;
+ (double)minWidthForString:(id)arg1 forSize:(id)arg2;
+ (double)widthBrandItem;
+ (id)widthDictionary;

- (void).cxx_destruct;
- (void)_contentSizeDidChange;
- (void)_touchBegan;
- (void)_touchCancelled;
- (void)_touchEnded;
- (id)actionRowItem;
- (void)createConstraints;
- (void)dealloc;
- (id)delegate;
- (bool)enabled;
- (bool)fullWidthMode;
- (bool)highlighted;
- (void)infoCardThemeChanged:(id)arg1;
- (id)initWithActionRowItem:(id)arg1 style:(unsigned long long)arg2;
- (void)layoutSubviews;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setActionRowItem:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setFullWidthMode:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setTouched:(bool)arg1;
- (bool)touched;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)updateColor;

@end
