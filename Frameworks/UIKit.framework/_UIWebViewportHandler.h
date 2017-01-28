/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIWebViewportHandler : NSObject {
    struct CGSize { 
        double width; 
        double height; 
    }  _availableViewSize;
    bool  _classicViewportMode;
    struct _UIWebViewportConfiguration { 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
        float initialScale; 
        float minimumScale; 
        float maximumScale; 
        bool allowsUserScaling; 
        bool allowsShrinkToFit; 
    }  _configuration;
    struct CGSize { 
        double width; 
        double height; 
    }  _contentsSizeForScaling;
    struct _UIWebViewportConfiguration { 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
        float initialScale; 
        float minimumScale; 
        float maximumScale; 
        bool allowsUserScaling; 
        bool allowsShrinkToFit; 
    }  _defaultConfiguration;
    <_UIWebViewportHandlerDelegate> * _delegate;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _documentBounds;
    bool  _heightIsDeviceHeight;
    bool  _initialConfigurationHasBeenSentToDelegate;
    struct CGSize { 
        double width; 
        double height; 
    }  _viewportArgumentsSize;
    unsigned int  _webkitDefinedConfigurationFlags;
    bool  _widthIsDeviceWidth;
}

@property (nonatomic, readonly) bool allowsUserScaling;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } availableViewSize;
@property (getter=isClassicViewportMode, nonatomic, readonly) bool classicViewportMode;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } contentsSizeForScaling;
@property (nonatomic) <_UIWebViewportHandlerDelegate> *delegate;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } documentBounds;
@property (nonatomic, readonly) float initialScale;
@property (nonatomic, readonly) float maximumScale;
@property (nonatomic, readonly) float minimumScale;
@property (nonatomic, readonly) struct _UIWebViewportConfiguration { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; float x2; float x3; float x4; bool x5; bool x6; } rawViewConfiguration;
@property (nonatomic, readonly) unsigned int webkitDefinedConfigurationFlags;

- (void)_resolveViewSizeRelativeLengths;
- (bool)allowsUserScaling;
- (void)applyWebKitViewportArgumentsSize:(struct CGSize { double x1; double x2; })arg1 initialScale:(float)arg2 minimumScale:(float)arg3 maximumScale:(float)arg4 allowsUserScaling:(float)arg5 allowsShrinkToFit:(float)arg6;
- (struct CGSize { double x1; double x2; })availableViewSize;
- (void)clearWebKitViewportConfigurationFlags;
- (struct CGSize { double x1; double x2; })contentsSizeForScaling;
- (id)delegate;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })documentBounds;
- (float)initialScale;
- (double)integralInitialScale;
- (double)integralScaleForScale:(double)arg1 keepingPointFixed:(struct CGPoint { double x1; double x2; }*)arg2;
- (bool)isClassicViewportMode;
- (float)maximumScale;
- (float)minimumScale;
- (float)minimumScaleForViewSize:(struct CGSize { double x1; double x2; })arg1;
- (void)overrideViewportConfiguration:(const struct _UIWebViewportConfiguration { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; float x2; float x3; float x4; bool x5; bool x6; }*)arg1;
- (struct _UIWebViewportConfiguration { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; float x2; float x3; float x4; bool x5; bool x6; })rawViewConfiguration;
- (void)resetViewportConfiguration:(const struct _UIWebViewportConfiguration { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; float x2; float x3; float x4; bool x5; bool x6; }*)arg1;
- (void)setAvailableViewSize:(struct CGSize { double x1; double x2; })arg1 updateConfigurationSize:(bool)arg2;
- (void)setDelegate:(id)arg1;
- (void)setDocumentBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 contentsSizeForScaling:(struct CGSize { double x1; double x2; })arg2;
- (bool)shouldIgnoreHorizontalScalingConstraints;
- (bool)shouldIgnoreScalingConstraints;
- (bool)shouldIgnoreVerticalScalingConstraints;
- (void)update:(id)arg1;
- (float)viewportHeight;
- (float)viewportWidth;
- (unsigned int)webkitDefinedConfigurationFlags;

@end
