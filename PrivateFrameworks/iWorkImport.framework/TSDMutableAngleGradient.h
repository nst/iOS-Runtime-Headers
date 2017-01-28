/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDMutableAngleGradient : TSDAngleGradient <TSDGradientStopContainer>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) TSUColor *firstColor;
@property (nonatomic) double gradientAngle;
@property (nonatomic) double gradientAngleInDegrees;
@property (nonatomic, retain) NSArray *gradientStops;
@property (nonatomic) unsigned long long gradientType;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isAdvancedGradient;
@property (nonatomic, retain) TSUColor *lastColor;
@property (nonatomic) double opacity;
@property (readonly) Class superclass;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)evenlyDistributeStops;
- (void)insertGradientStop:(id)arg1;
- (id)insertStopAtFraction:(double)arg1;
- (id)insertStopAtFraction:(double)arg1 withColor:(id)arg2;
- (void)moveStopAtIndex:(unsigned long long)arg1 toFraction:(double)arg2;
- (void)removeStop:(id)arg1;
- (id)removeStopAtIndex:(unsigned long long)arg1;
- (void)reverseStopOrder;
- (void)setColorOfStopAtIndex:(unsigned long long)arg1 toColor:(id)arg2;
- (void)setFirstColor:(id)arg1;
- (void)setGradientAngle:(double)arg1;
- (void)setGradientAngleInDegrees:(double)arg1;
- (void)setGradientStops:(id)arg1;
- (void)setGradientType:(unsigned long long)arg1;
- (void)setInflectionOfStopAtIndex:(unsigned long long)arg1 toInflection:(double)arg2;
- (void)setIsAdvancedGradient:(bool)arg1;
- (void)setLastColor:(id)arg1;
- (void)setOpacity:(double)arg1;
- (void)swapStopAtIndex:(unsigned long long)arg1 withStopAtIndex:(unsigned long long)arg2;

@end
