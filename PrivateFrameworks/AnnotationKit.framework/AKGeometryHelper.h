/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKGeometryHelper : NSObject {
    AKPageController * _pageController;
}

@property AKPageController *pageController;

+ (struct CGPoint { double x1; double x2; })_alignedPointForPoint:(struct CGPoint { double x1; double x2; })arg1 alignToContent:(bool)arg2 alignToScreenUsingPageController:(id)arg3 orAlignToBitmapContext:(struct CGContext { }*)arg4 usingAnnotation:(id)arg5;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_alignedStableRectForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 alignToContent:(bool)arg2 alignToScreenUsingPageController:(id)arg3 orAlignToBitmapContext:(struct CGContext { }*)arg4 usingAnnotation:(id)arg5;
+ (void)_checkIntersectionOfLineSegmentStartingAt:(struct CGPoint { double x1; double x2; })arg1 endingAt:(struct CGPoint { double x1; double x2; })arg2 withCircleAt:(struct CGPoint { double x1; double x2; })arg3 andRadius:(double)arg4 results:(id)arg5;
+ (void)_collectIntersectionsOfLineSegmentStartingAt:(struct CGPoint { double x1; double x2; })arg1 endingAt:(struct CGPoint { double x1; double x2; })arg2 withCornerCirclesOfRoundedRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 withRadius:(double)arg4 results:(id)arg5;
+ (id)_cornersOfRotatedRectangle:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 angle:(double)arg2;
+ (struct CGPoint { double x1; double x2; })_farthestPointFrom:(struct CGPoint { double x1; double x2; })arg1 inArray:(id)arg2;
+ (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_rawAffineTransformForExifOrientation:(long long)arg1;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_rectForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 alignToContent:(bool)arg2 alignToScreenUsingPageController:(id)arg3 orAlignToBitmapContext:(struct CGContext { }*)arg4 usingAnnotation:(id)arg5 withAlignmentBlock:(id)arg6;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_strokeAlignedRectForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withStrokeWidth:(double)arg2 shouldAlignStrictlyToScreen:(bool)arg3 alignToScreenUsingPageController:(id)arg4 orAlignToBitmapContext:(struct CGContext { }*)arg5 usingAnnotation:(id)arg6;
+ (void)adjustOriginalExifOrientationOnAnnotation:(id)arg1 flatteningOriginalModelExif:(long long)arg2;
+ (struct CGPoint { double x1; double x2; })adjustPoint:(struct CGPoint { double x1; double x2; })arg1 forExifOrientation:(long long)arg2 aboutCenter:(struct CGPoint { double x1; double x2; })arg3;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })adjustRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forExifOrientation:(long long)arg2 aboutCenter:(struct CGPoint { double x1; double x2; })arg3;
+ (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })affineTransformFlatteningOriginalModelExif:(long long)arg1 withOriginalModelSize:(struct CGSize { double x1; double x2; })arg2;
+ (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })affineTransformForExifOrientation:(long long)arg1 aboutCenter:(struct CGPoint { double x1; double x2; })arg2;
+ (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })affineTransformRecenteringAboutOriginForExifOrientation:(long long)arg1 withOriginalSize:(struct CGSize { double x1; double x2; })arg2;
+ (double)angleBetweenPoint:(struct CGPoint { double x1; double x2; })arg1 andPoint:(struct CGPoint { double x1; double x2; })arg2;
+ (double)angleOfVector:(struct CGVector { double x1; double x2; })arg1;
+ (bool)annotationHasRotation:(id)arg1 outAngle:(double*)arg2;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundsOfRotatedRectangle:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 angle:(double)arg2;
+ (struct CGPoint { double x1; double x2; })centerOfRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })centeredCircleToEllipseTransform:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (struct CGPoint { double x1; double x2; })compareVectorDirectionsFirstVector:(struct CGPoint { double x1; double x2; })arg1 secondVector:(struct CGPoint { double x1; double x2; })arg2;
+ (long long)concatExifOrientation:(long long)arg1 withExifOrientation:(long long)arg2;
+ (struct CGPoint { double x1; double x2; })convertModelToScreenOrientationForPoint:(struct CGPoint { double x1; double x2; })arg1 relativeToRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 withPageController:(id)arg3;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertModelToScreenOrientationForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withPageController:(id)arg2;
+ (struct CGPoint { double x1; double x2; })convertScreenToModelOrientationForPoint:(struct CGPoint { double x1; double x2; })arg1 relativeToRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 withPageController:(id)arg3;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertScreenToModelOrientationForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withPageController:(id)arg2;
+ (double)distanceBetweenPoints:(struct CGPoint { double x1; double x2; })arg1 andPoint:(struct CGPoint { double x1; double x2; })arg2;
+ (unsigned long long)draggableArea:(unsigned long long)arg1 convertedForExif:(long long)arg2;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })effectiveDrawingBoundsForAnnotation:(id)arg1 forDisplay:(bool)arg2 pageControllerOrNil:(id)arg3 outScaleFactor:(double*)arg4;
+ (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })ellipseToCenteredCircleTransform:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (bool)exifOrientationHasFlip:(long long)arg1;
+ (bool)exifOrientationHasReversedAxes:(long long)arg1;
+ (long long)exifOrientationWithConversionBlock:(id)arg1;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })expandCGRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 toContainPoint:(struct CGPoint { double x1; double x2; })arg2;
+ (struct CGPoint { double x1; double x2; })flipPointVertically:(struct CGPoint { double x1; double x2; })arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
+ (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })horizontalFlipTransformForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })integralRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withOptions:(unsigned long long)arg2;
+ (void)intersectCircleAtPoint:(struct CGPoint { double x1; double x2; })arg1 withRadius:(double)arg2 withCircleAtPoint:(struct CGPoint { double x1; double x2; })arg3 withRadius:(double)arg4 firstOutPoint:(struct CGPoint { double x1; double x2; }*)arg5 secondOutPoint:(struct CGPoint { double x1; double x2; }*)arg6;
+ (struct CGPoint { double x1; double x2; })intersectLineSegmentStartingAt:(struct CGPoint { double x1; double x2; })arg1 ending:(struct CGPoint { double x1; double x2; })arg2 withAnotherSegmentStartingAt:(struct CGPoint { double x1; double x2; })arg3 ending:(struct CGPoint { double x1; double x2; })arg4;
+ (struct CGPoint { double x1; double x2; })intersectLineSegmentStartingAt:(struct CGPoint { double x1; double x2; })arg1 ending:(struct CGPoint { double x1; double x2; })arg2 withCircleWithCenter:(struct CGPoint { double x1; double x2; })arg3 andRadius:(double)arg4 farthestResult:(bool)arg5;
+ (struct CGPoint { double x1; double x2; })intersectLineSegmentStartingAt:(struct CGPoint { double x1; double x2; })arg1 ending:(struct CGPoint { double x1; double x2; })arg2 withEllipseOfRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 farthestResult:(bool)arg4;
+ (struct CGPoint { double x1; double x2; })intersectLineSegmentStartingAt:(struct CGPoint { double x1; double x2; })arg1 ending:(struct CGPoint { double x1; double x2; })arg2 withRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 andRoundedCornerRadius:(double)arg4;
+ (struct CGPoint { double x1; double x2; })intersectRayStartingAt:(struct CGPoint { double x1; double x2; })arg1 ending:(struct CGPoint { double x1; double x2; })arg2 withCircleWithCenter:(struct CGPoint { double x1; double x2; })arg3 andRadius:(double)arg4 farthestResult:(bool)arg5;
+ (struct CGPoint { double x1; double x2; })intersectRayStartingAt:(struct CGPoint { double x1; double x2; })arg1 ending:(struct CGPoint { double x1; double x2; })arg2 withEllipseOfRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 farthestResult:(bool)arg4;
+ (long long)inverseExifOrientation:(long long)arg1;
+ (bool)isPoint:(struct CGPoint { double x1; double x2; })arg1 onEllipse:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
+ (bool)isPointOnLeft:(struct CGPoint { double x1; double x2; })arg1 ofRayWithFirstPoint:(struct CGPoint { double x1; double x2; })arg2 andSecondPoint:(struct CGPoint { double x1; double x2; })arg3;
+ (bool)isUnpresentablePoint:(struct CGPoint { double x1; double x2; })arg1;
+ (bool)isUnpresentableRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (double)lengthOfVector:(struct CGVector { double x1; double x2; })arg1;
+ (struct CGPath { }*)newPathWithPath:(struct CGPath { }*)arg1 applyingExifOrientation:(long long)arg2 aboutCenter:(struct CGPoint { double x1; double x2; })arg3;
+ (struct CGVector { double x1; double x2; })normalizeVector:(struct CGVector { double x1; double x2; })arg1;
+ (struct CGPoint { double x1; double x2; })normalizeVectorPoint:(struct CGPoint { double x1; double x2; })arg1;
+ (struct CGPoint { double x1; double x2; })pointAtAngle:(double)arg1 inCircleWithCenter:(struct CGPoint { double x1; double x2; })arg2 andRadius:(double)arg3;
+ (struct CGPoint { double x1; double x2; })projectPoint:(struct CGPoint { double x1; double x2; })arg1 ontoRayWithFirstPoint:(struct CGPoint { double x1; double x2; })arg2 andSecondPoint:(struct CGPoint { double x1; double x2; })arg3;
+ (struct CGPoint { double x1; double x2; })projectVector:(struct CGPoint { double x1; double x2; })arg1 ontoAspectVector:(struct CGPoint { double x1; double x2; })arg2;
+ (double)radiusOfCenteredCircleFor:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectForSize:(struct CGSize { double x1; double x2; })arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectWithSize:(struct CGSize { double x1; double x2; })arg1 centeredAtPoint:(struct CGPoint { double x1; double x2; })arg2;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })renderingAlignedTextRectForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 alignToScreenUsingPageController:(id)arg2 orAlignToContext:(struct CGContext { }*)arg3 usingAnnotation:(id)arg4;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })renderingStrokeAlignedRectForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withStrokeWidth:(double)arg2 alignToScreenUsingPageController:(id)arg3 orAlignToContext:(struct CGContext { }*)arg4 usingAnnotation:(id)arg5;
+ (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })rotationTransformAroundPoint:(struct CGPoint { double x1; double x2; })arg1 withAngle:(double)arg2;
+ (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })rotationTransformForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withAngle:(double)arg2;
+ (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })rotationTransformForRectangularAnnotation:(id)arg1 hasRotation:(bool*)arg2;
+ (double)scaleOfTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
+ (struct CGPoint { double x1; double x2; })snapVector:(struct CGPoint { double x1; double x2; })arg1 toDiagonalForAspectRatio:(double)arg2 ignoreWidth:(bool)arg3 ignoreHeight:(bool)arg4;
+ (struct CGPoint { double x1; double x2; })snapVectorTo45Degrees:(struct CGPoint { double x1; double x2; })arg1;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })stableIntegralRectForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (struct CGPoint { double x1; double x2; })tangentOfEllipse:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 throughRayWithFirstPoint:(struct CGPoint { double x1; double x2; })arg2 goingThrough:(struct CGPoint { double x1; double x2; })arg3;
+ (void)tangentPointsToEllipse:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fromPoint:(struct CGPoint { double x1; double x2; })arg2 firstOutPoint:(struct CGPoint { double x1; double x2; }*)arg3 secondOutPoint:(struct CGPoint { double x1; double x2; }*)arg4;
+ (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })verticalFlipTransformForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (id)verticesOfPolygonWithPointCount:(unsigned long long)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 rotation:(double)arg3 flippedVertically:(bool)arg4;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_clippingFrameForView:(id)arg1;
- (id)_rootLayer;
- (bool)_shouldAlignToContent;
- (bool)_shouldAlignToScreen;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_smartAlignedRectForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })adornmentLayerFrameForAnnotation:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })annotationLayerFrameForAnnotation:(id)arg1 layerIsClipped:(bool*)arg2;
- (struct CGPoint { double x1; double x2; })contentAlignedPointForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentAlignedRectForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGPoint { double x1; double x2; })convertPoint:(struct CGPoint { double x1; double x2; })arg1 fromModelToLayer:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fromModelToLayer:(id)arg2;
- (id)initWithPageController:(id)arg1;
- (id)pageController;
- (struct CGPoint { double x1; double x2; })screenPixelAlignedPointForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })screenPixelAlignedRectForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })screenStrokeAlignedRectForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withStrokeWidth:(double)arg2;
- (void)setPageController:(id)arg1;

@end
