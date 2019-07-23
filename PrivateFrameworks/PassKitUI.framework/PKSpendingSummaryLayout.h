/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKSpendingSummaryLayout : UICollectionViewLayout {
    NSMutableDictionary * _attributesPerIndexPath;
    struct CGSize { 
        double width; 
        double height; 
    }  _currentSize;
    NSMutableDictionary * _headersPerIndexPath;
    bool  _isLowEndDevice;
    double  _lastDrawnAlpha;
    double  _transitionAlpha;
    bool  _visible;
}

@property (nonatomic) bool isLowEndDevice;
@property (nonatomic) double lastDrawnAlpha;
@property (nonatomic) double transitionAlpha;
@property (getter=isVisible, nonatomic) bool visible;

- (void).cxx_destruct;
- (void)_adjustItems:(id)arg1 withLateralMove:(double)arg2;
- (double)alphaForIndexPath:(id)arg1 visible:(bool)arg2 transition:(double)arg3;
- (struct CGSize { double x1; double x2; })collectionViewContentSize;
- (id)init;
- (bool)isLowEndDevice;
- (bool)isVisible;
- (double)lastDrawnAlpha;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (void)prepareLayout;
- (void)setIsLowEndDevice:(bool)arg1;
- (void)setLastDrawnAlpha:(double)arg1;
- (void)setTransitionAlpha:(double)arg1;
- (void)setVisible:(bool)arg1;
- (double)transitionAlpha;

@end
