/* Generated by RuntimeBrowser.
 */

@protocol _UIKBRTRecognizerDelegate <NSObject>

@required

- (void)recognizer:(void *)arg1 beginTouchDownForTouchWithId:(void *)arg2 atPoint:(void *)arg3 forBeginState:(void *)arg4 whenStateReady:(void *)arg5; // needs 5 arg types, found 10: _UIKBRTRecognizer *, id, struct CGPoint { double x1; double x2; }, unsigned long long, id, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id, id, void*
- (void)recognizer:(void *)arg1 cancelTouchOnLayoutWithId:(void *)arg2 startPoint:(void *)arg3 endPoint:(void *)arg4 whenReady:(void *)arg5; // needs 5 arg types, found 9: _UIKBRTRecognizer *, id, struct CGPoint { double x1; double x2; }, struct CGPoint { double x1; double x2; }, id, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id, id
- (void)recognizer:(void *)arg1 continueTrackingIgnoredTouchWithId:(void *)arg2 currentPoint:(void *)arg3 whenReady:(void *)arg4; // needs 4 arg types, found 8: _UIKBRTRecognizer *, id, struct CGPoint { double x1; double x2; }, id, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id, id
- (void)recognizer:(void *)arg1 releaseTouchToLayoutWithId:(void *)arg2 startPoint:(void *)arg3 endPoint:(void *)arg4 whenReady:(void *)arg5; // needs 5 arg types, found 9: _UIKBRTRecognizer *, id, struct CGPoint { double x1; double x2; }, struct CGPoint { double x1; double x2; }, id, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id, id
- (void)recognizer:(void *)arg1 restartTouchDownForTouchWithId:(void *)arg2 startingAt:(void *)arg3 atPoint:(void *)arg4 currentPoint:(void *)arg5 whenStateReady:(void *)arg6; // needs 6 arg types, found 11: _UIKBRTRecognizer *, id, double, struct CGPoint { double x1; double x2; }, struct CGPoint { double x1; double x2; }, id, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id, id, void*
- (void)recognizer:(void *)arg1 shouldContinueTrackingTouchWithId:(void *)arg2 startingAt:(void *)arg3 atPoint:(void *)arg4 currentPoint:(void *)arg5 forContinueState:(void *)arg6 whenStateReady:(void *)arg7; // needs 7 arg types, found 12: _UIKBRTRecognizer *, id, double, struct CGPoint { double x1; double x2; }, struct CGPoint { double x1; double x2; }, unsigned long long, id, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id, id, void*
- (void)recognizer:(void *)arg1 willIgnoreTouchWithId:(void *)arg2 startingAt:(void *)arg3 atPoint:(void *)arg4 currentPoint:(void *)arg5 whenReady:(void *)arg6; // needs 6 arg types, found 10: _UIKBRTRecognizer *, id, double, struct CGPoint { double x1; double x2; }, struct CGPoint { double x1; double x2; }, id, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id, id

@end
