/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKActivityGoalSeries : HKGraphSeries {
    HKFillStyle * _fillStyle;
    HKStrokeStyle * _strokeStyle;
}

- (void).cxx_destruct;
- (void)_enumerateCoordinateList:(id)arg1 withTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2 zoomLevelConfiguration:(id)arg3 axisRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 block:(id)arg5;
- (void)_enumerateCoordinateListByRemovingOffscreenPoints:(id)arg1 withTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2 zoomLevelConfiguration:(id)arg3 axisRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 block:(id)arg5;
- (bool)blockCoordinateIsVisibleInsideOfChartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 blockCoordinate:(id)arg2;
- (id)coordinatesForBlock:(id)arg1 blockPath:(struct { long long x1; long long x2; })arg2 xAxis:(id)arg3 yAxis:(id)arg4;
- (double)distanceFromPoint:(struct CGPoint { double x1; double x2; })arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)drawSeriesWithBlockCoordinates:(id)arg1 axisRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 zoomLevelConfiguration:(id)arg3 pointTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg4 renderContext:(struct CGContext { }*)arg5 secondaryRenderContext:(id)arg6;
- (id)initWithStrokeStyle:(id)arg1 fillStyle:(id)arg2;
- (double)xAxisDistanceFromPoint:(struct CGPoint { double x1; double x2; })arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (double)yAxisDifferenceToPoint:(struct CGPoint { double x1; double x2; })arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;

@end
