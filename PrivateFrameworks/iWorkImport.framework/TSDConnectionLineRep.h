/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDConnectionLineRep : TSDShapeRep {
    TSDPathSource * mLastPathSource;
}

- (id)connectionLineLayout;
- (bool)containsPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)dealloc;
- (double)shortestDistanceToPoint:(struct CGPoint { double x1; double x2; })arg1 countAsHit:(bool*)arg2;
- (bool)shouldSetPathSourceWhenChangingInfoGeometry;
- (void)updateFromLayout;

@end
