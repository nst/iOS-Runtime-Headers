/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIInlineCandidateCell : UIView {
    SEL  _action;
    NSString * _candidate;
    bool  _dontDrawRightEdge;
    UIFont * _font;
    bool  _highlighted;
    unsigned long long  _index;
    bool  _lastItem;
    struct CGSize { 
        double width; 
        double height; 
    }  _stringImageSize;
    id  _target;
}

- (void).cxx_destruct;
- (void)dontDrawRightEdge:(bool)arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (unsigned long long)index;
- (id)initWithCandidate:(id)arg1 andIndex:(unsigned long long)arg2 withFontSize:(double)arg3 target:(id)arg4 action:(SEL)arg5;
- (void)setHighlighted:(bool)arg1;
- (void)setLastItem:(bool)arg1;
- (struct CGSize { double x1; double x2; })stringImageSize;

@end
