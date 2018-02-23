/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UICollectionViewTableHeaderFooterView : UICollectionReusableView {
    bool  _floating;
    UITableViewHeaderFooterView * _tableViewHeaderFooterView;
}

@property (nonatomic, retain) UIView *backgroundView;
@property (nonatomic, readonly) UIView *contentView;
@property (nonatomic, readonly) UILabel *detailTextLabel;
@property (nonatomic) bool floating;
@property (getter=_tableAttributes, nonatomic, readonly) UICollectionViewTableLayoutAttributes *tableAttributes;
@property (getter=_tableLayout, nonatomic, readonly) UICollectionViewTableLayout *tableLayout;
@property (nonatomic, retain) UITableViewHeaderFooterView *tableViewHeaderFooterView;
@property (nonatomic, readonly) UILabel *textLabel;
@property (nonatomic, retain) UIColor *tintColor;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

- (void).cxx_destruct;
- (void)_commonInit;
- (id)_tableAttributes;
- (id)_tableLayout;

// Image: /Developer/usr/lib/libMainThreadChecker.dylib

- (void)applyLayoutAttributes:(id)arg1;
- (id)backgroundView;
- (id)contentView;
- (id)detailTextLabel;
- (void)encodeWithCoder:(id)arg1;
- (bool)floating;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setBackgroundView:(id)arg1;
- (void)setFloating:(bool)arg1;
- (void)setTableViewHeaderFooterView:(id)arg1;
- (void)setTintColor:(id)arg1;
- (id)tableViewHeaderFooterView;
- (id)textLabel;
- (id)tintColor;

@end
