/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

@interface FUChart : UIView <FUChartDataGroupDataSource, FUChartSeriesDataSource> {
    double  _animationDuration;
    FUChartBackgroundView * _backgroundView;
    NSArray * _chartSeries;
    FUChartDataGroup * _dataGroup;
    <FUChartDataSource> * _dataSource;
    bool  _labelsInsetChartBackground;
    NSDate * _maxXValue;
    NSNumber * _maxYValue;
    NSDate * _minXValue;
    NSNumber * _minYValue;
    bool  _needsAnimation;
    UIScrollView * _scrollView;
    FUTimeAxisDescriptor * _xAxisDescriptor;
    NSArray * _xAxisLabels;
    NSArray * _xAxisSubLabels;
    double  _xAxisToLabelPadding;
    double  _yAxisEdgeInset;
}

@property (nonatomic) double animationDuration;
@property (nonatomic, retain) FUChartBackgroundView *backgroundView;
@property (nonatomic) <FUChartDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool labelsInsetChartBackground;
@property (nonatomic, retain) NSDate *maxXValue;
@property (nonatomic, retain) NSNumber *maxYValue;
@property (nonatomic, retain) NSDate *minXValue;
@property (nonatomic, retain) NSNumber *minYValue;
@property (nonatomic, readonly) UIScrollView *scrollView;
@property (readonly) Class superclass;
@property (nonatomic, retain) FUTimeAxisDescriptor *xAxisDescriptor;
@property (nonatomic) double xAxisToLabelPadding;
@property (nonatomic) double yAxisEdgeInset;

- (void).cxx_destruct;
- (double)_absolutePositionForXPlaneValue:(id)arg1;
- (double)_absolutePositionForYPlaneValue:(id)arg1;
- (void)_adjustMinMaxValues;
- (void)_animateSeries;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_chartRect;
- (id)_getDataPointAtIndex:(unsigned long long)arg1 forSeriesAtIndex:(unsigned long long)arg2;
- (id)_getDataPointsForSeriesAtIndex:(unsigned long long)arg1;
- (id)_getLabelsForSeriesAtIndex:(unsigned long long)arg1;
- (unsigned long long)_getNumberOfDataPointsForSeriesAtIndex:(unsigned long long)arg1;
- (unsigned long long)_getNumberOfSeries;
- (id)_getSeriesAtIndex:(unsigned long long)arg1;
- (void)_layoutAxisLabels;
- (void)_layoutChartSeries;
- (void)_layoutScrollView;
- (void)_layoutXAxisLabels;
- (float)_relativePositionForXPlaneValue:(id)arg1;
- (float)_relativePositionForYPlaneValue:(id)arg1;
- (void)_reloadDataSeries;
- (void)_updateBackgroundView;
- (void)_updateDataSeries;
- (double)_xAxisLabelPaddingForBackground:(bool)arg1;
- (double)_yAxisLabelPadding;
- (void)animate;
- (double)animationDuration;
- (id)backgroundView;
- (id)dataGroup:(id)arg1 dataPointsForSetAtIndex:(unsigned long long)arg2;
- (id)dataGroup:(id)arg1 labelsForSetAtIndex:(unsigned long long)arg2;
- (unsigned long long)dataGroup:(id)arg1 numberOfPointsInSetAtIndex:(unsigned long long)arg2;
- (id)dataGroup:(id)arg1 pointForSetAtIndex:(unsigned long long)arg2 pointIndex:(unsigned long long)arg3;
- (id)dataSource;
- (id)init;
- (id)initWithMinDate:(id)arg1 maxDate:(id)arg2;
- (bool)labelsInsetChartBackground;
- (void)layoutSubviews;
- (id)maxXValue;
- (id)maxXValueForChartSeries:(id)arg1;
- (id)maxYValue;
- (id)maxYValueForChartSeries:(id)arg1;
- (id)minXValue;
- (id)minXValueForChartSeries:(id)arg1;
- (id)minYValue;
- (id)minYValueForChartSeries:(id)arg1;
- (unsigned long long)numberOfDataSetsInGroup:(id)arg1;
- (void)refreshView;
- (void)refreshViewAnimated:(bool)arg1;
- (void)reloadData;
- (void)reloadDataAnimated:(bool)arg1;
- (id)scrollView;
- (void)selectAxisPoint:(long long)arg1 selected:(bool)arg2;
- (void)setAnimationDuration:(double)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setLabelsInsetChartBackground:(bool)arg1;
- (void)setMaxXValue:(id)arg1;
- (void)setMaxYValue:(id)arg1;
- (void)setMinXValue:(id)arg1;
- (void)setMinYValue:(id)arg1;
- (void)setXAxisDescriptor:(id)arg1;
- (void)setXAxisToLabelPadding:(double)arg1;
- (void)setYAxisEdgeInset:(double)arg1;
- (id)xAxisDescriptor;
- (double)xAxisToLabelPadding;
- (double)yAxisEdgeInset;

@end
