/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FMFUI.framework/FMFUI
 */

@interface FMFWildcardGestureRecognizer : UIGestureRecognizer {
    id  _touchesBeganCallback;
    id  _touchesEndedCallback;
}

@property (nonatomic, copy) id touchesBeganCallback;
@property (nonatomic, copy) id touchesEndedCallback;

- (void).cxx_destruct;
- (bool)canPreventGestureRecognizer:(id)arg1;
- (void)ignoreTouch:(id)arg1 forEvent:(id)arg2;
- (id)init;
- (void)reset;
- (void)setTouchesBeganCallback:(id)arg1;
- (void)setTouchesEndedCallback:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)touchesBeganCallback;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (id)touchesEndedCallback;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
