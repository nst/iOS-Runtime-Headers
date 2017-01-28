/* Generated by RuntimeBrowser.
 */

@protocol _UIKeyboardArbitration

@required

- (void)applicationShouldFocusWithBundle:(void *)arg1 onCompletion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id, bool, void*
- (void)notifyHostedPIDsOfSuppression:(bool)arg1;
- (void)retrieveDebugInformation:(void *)arg1; // needs 1 arg types, found 6: id, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id, NSString *, void*
- (void)retrieveMoreDebugInformationWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id, NSArray *, void*
- (void)setWindowContextID:(unsigned int)arg1 sceneIdentifier:(NSString *)arg2 forKeyboard:(bool)arg3 withLevel:(double)arg4;
- (void)setWindowHostingPID:(int)arg1 active:(bool)arg2;
- (void)signalKeyboardChangeComplete;
- (void)signalKeyboardChanged:(void *)arg1 onCompletion:(void *)arg2; // needs 2 arg types, found 6: _UIKeyboardChangedInformation *, id, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id, void*
- (void)startArbitrationWithExpectedState:(void *)arg1 hostingPIDs:(void *)arg2 withSuppression:(void *)arg3 onConnected:(void *)arg4; // needs 4 arg types, found 9: _UIKeyboardChangedInformation *, NSArray *, int, id, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id, _UIKeyboardChangedInformation *, void*
- (void)transition:(NSString *)arg1 eventStage:(unsigned long long)arg2 withInfo:(NSDictionary *)arg3;

@end
