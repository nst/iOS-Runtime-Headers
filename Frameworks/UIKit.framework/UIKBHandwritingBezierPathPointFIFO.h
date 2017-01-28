/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBHandwritingBezierPathPointFIFO : UIKBHandwritingPointFIFO {
    id  _emissionHandler;
    UIBezierPath * _path;
    NSMutableArray * _prevPoints;
}

@property (copy) id emissionHandler;
@property (nonatomic, retain) UIBezierPath *path;
@property (nonatomic, retain) NSMutableArray *prevPoints;

- (void).cxx_destruct;
- (void)addPoint:(struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; double x2; })arg1;
- (void)clear;
- (id)emissionHandler;
- (void)flush;
- (id)initWithFIFO:(id)arg1;
- (id)path;
- (id)prevPoints;
- (void)setEmissionHandler:(id)arg1;
- (void)setPath:(id)arg1;
- (void)setPrevPoints:(id)arg1;

@end
