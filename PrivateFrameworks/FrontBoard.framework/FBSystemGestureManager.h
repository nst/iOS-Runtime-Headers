/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBSystemGestureManager : NSObject <UIGestureRecognizerDelegate> {
    NSMapTable * _displayToManagerMap;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void)_defaultsDidChange:(id)arg1;
- (void)addGestureRecognizer:(id)arg1 toDisplay:(id)arg2;
- (void)dealloc;
- (id)description;
- (id)init;
- (void)removeGestureRecognizer:(id)arg1 fromDisplay:(id)arg2;
- (id)windowForSystemGesturesForDisplay:(id)arg1;

@end
