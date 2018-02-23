/* Generated by RuntimeBrowser.
 */

@protocol CKMessageEntryViewDelegate <NSObject>

@required

- (void)messageEntryView:(CKMessageEntryView *)arg1 didTapMediaObject:(CKMediaObject *)arg2;
- (void)messageEntryView:(CKMessageEntryView *)arg1 sendButtonLongPressEnded:(struct CGPoint { double x1; double x2; })arg2;
- (void)messageEntryView:(CKMessageEntryView *)arg1 sendButtonLongPressMoved:(struct CGPoint { double x1; double x2; })arg2;
- (bool)messageEntryView:(CKMessageEntryView *)arg1 shouldInsertMediaObjects:(NSArray *)arg2;
- (void)messageEntryViewDidBeginEditing:(CKMessageEntryView *)arg1;
- (void)messageEntryViewDidChange:(CKMessageEntryView *)arg1;
- (void)messageEntryViewDidEndEditing:(CKMessageEntryView *)arg1;
- (double)messageEntryViewMaxHeight:(CKMessageEntryView *)arg1;
- (struct CGSize { double x1; double x2; })messageEntryViewMaxShelfPluginViewSize:(CKMessageEntryView *)arg1;
- (void)messageEntryViewRaiseGestureAutoSend:(CKMessageEntryView *)arg1;
- (void)messageEntryViewRecordingDidChange:(CKMessageEntryView *)arg1;
- (void)messageEntryViewSendButtonHit:(CKMessageEntryView *)arg1;
- (void)messageEntryViewSendButtonHitWhileDisabled:(CKMessageEntryView *)arg1;
- (void)messageEntryViewSendButtonLongPressBegan:(CKMessageEntryView *)arg1;
- (bool)messageEntryViewShouldBeginEditing:(CKMessageEntryView *)arg1;

@optional

- (bool)getContainerWidth:(double*)arg1 offset:(double*)arg2;
- (void)messageEntryViewSwipeDownGestureRecognized:(CKMessageEntryView *)arg1;
- (void)sendCurrentLocationMessage:(CKMessageEntryView *)arg1;
- (bool)shouldMessageEntryViewReportBrowserButtonHitToInputDelegate:(CKMessageEntryView *)arg1;

@end
