/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNBlurMeasure : NSObject

+ (bool)computeApproximateBlurScore:(float*)arg1 onGrayscaleImage:(struct __CVBuffer { }*)arg2 sampledPixelsCount:(int)arg3 insetFactor:(float)arg4 error:(id*)arg5;
+ (bool)computeApproximateBlurScore:(float*)arg1 onRGBAImage:(struct __CVBuffer { }*)arg2 sampledPixelsCount:(int)arg3 insetFactor:(float)arg4 error:(id*)arg5;
+ (bool)computeBlurScore:(float*)arg1 onGrayscaleImage:(struct __CVBuffer { }*)arg2 andWithRegionOfInterestInImageCoordinates:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 andRegionOfInterestInsetFactor:(float)arg4 error:(id*)arg5;
+ (bool)computeBlurScore:(float*)arg1 onGrayscaleImage:(struct __CVBuffer { }*)arg2 insetFactor:(float)arg3 error:(id*)arg4;
+ (bool)computeBlurScore:(float*)arg1 usingBlurSignature:(id)arg2 insetFactor:(float)arg3 imageROI:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 error:(id*)arg5;
+ (bool)computeEdgeWidthBlurScore:(float*)arg1 onGrayscaleImage:(struct __CVBuffer { }*)arg2 error:(id*)arg3;

@end
