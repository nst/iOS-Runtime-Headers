/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIDatePickerContentView : UIView {
    struct { 
        unsigned int isAmPm : 1; 
    }  _datePickerContentViewFlags;
    bool  _isModern;
    _UIDatePickerMode * _mode;
    long long  _titleAlignment;
    UILabel * _titleLabel;
    double  _titleLabelMaxX;
}

@property (nonatomic) bool isAmPm;
@property (nonatomic) bool isModern;
@property (nonatomic, retain) _UIDatePickerMode *mode;
@property (nonatomic) long long titleAlignment;
@property (nonatomic, readonly) UILabel *titleLabel;
@property (nonatomic) double titleLabelMaxX;

- (void).cxx_destruct;
- (bool)_canBeReusedInPickerView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithMode:(id)arg1;
- (bool)isAmPm;
- (bool)isModern;
- (void)layoutSubviews;
- (id)mode;
- (void)setIsAmPm:(bool)arg1;
- (void)setIsModern:(bool)arg1;
- (void)setMode:(id)arg1;
- (void)setTitleAlignment:(long long)arg1;
- (void)setTitleLabelMaxX:(double)arg1;
- (long long)titleAlignment;
- (id)titleLabel;
- (double)titleLabelMaxX;

@end
