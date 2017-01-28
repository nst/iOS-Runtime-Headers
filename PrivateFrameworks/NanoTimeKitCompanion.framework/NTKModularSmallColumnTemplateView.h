/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKModularSmallColumnTemplateView : NTKModularTemplateView {
    bool  _calculatedFontSize;
    NTKColoringLabel * _row1Column1Label;
    NTKColoringLabel * _row1Column2Label;
    NTKColoringLabel * _row2Column1Label;
    NTKColoringLabel * _row2Column2Label;
}

@property (nonatomic, readonly) CLKComplicationTemplateModularSmallColumnsText *complicationTemplate;

+ (bool)handlesComplicationTemplate:(id)arg1;
+ (void)load;
+ (bool)supportsComplicationFamily:(long long)arg1;

- (void).cxx_destruct;
- (id)_bodyFontOfSize:(double)arg1;
- (void)_enumerateForegroundColoringViewsWithBlock:(id)arg1;
- (void)_enumerateSecondaryForegroundColoringViewsWithBlock:(id)arg1;
- (id)_headerFontOfSize:(double)arg1;
- (void)_layoutContentView;
- (id)_newLabelSubview;
- (void)_update;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end