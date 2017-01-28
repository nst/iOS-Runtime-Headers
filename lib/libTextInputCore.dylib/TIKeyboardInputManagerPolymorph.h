/* Generated by RuntimeBrowser
   Image: /System/Library/TextInput/libTextInputCore.dylib
 */

@interface TIKeyboardInputManagerPolymorph : TIKeyboardInputManagerWrapper

- (void)dealloc;
- (void)handleKeyboardInput:(id)arg1 keyboardState:(id)arg2 completionHandler:(id)arg3;
- (void)handleKeyboardState:(id)arg1;
- (void)setInputManagerForInputMode:(id)arg1 withClass:(Class)arg2;
- (void)setInputManagerForKeyboardState:(id)arg1;
- (void)skipHitTestForTouchEvent:(id)arg1 keyboardState:(id)arg2;
- (void)syncToKeyboardState:(id)arg1 completionHandler:(id)arg2;

@end