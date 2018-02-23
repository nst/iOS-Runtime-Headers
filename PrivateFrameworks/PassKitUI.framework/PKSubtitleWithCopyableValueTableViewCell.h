/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKSubtitleWithCopyableValueTableViewCell : PKTableViewCellWithSubtitleStyle {
    UILongPressGestureRecognizer * _longPressGestureRecognizer;
    bool  _subtitleIsCopyable;
}

@property (nonatomic) bool subtitleIsCopyable;

- (void).cxx_destruct;
- (id)_copyableText;
- (void)_handleLongPressGesture:(id)arg1;
- (void)_updateLongPressGestureRecognizer;
- (bool)canBecomeFirstResponder;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)copy:(id)arg1;
- (void)setSubtitleIsCopyable:(bool)arg1;
- (bool)subtitleIsCopyable;

@end
