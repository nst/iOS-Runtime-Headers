/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@interface AVSecondScreenDebugAssistant : NSObject {
    _UICanvas * _canvas;
    CADisplay * _debugInfoDisplay;
    NSString * _debugText;
    AVObservationController * _observationController;
    AVPlayer * _player;
    AVSecondScreenViewController * _secondScreenViewController;
}

@property (nonatomic) _UICanvas *canvas;
@property (nonatomic, retain) CADisplay *debugInfoDisplay;
@property (nonatomic, copy) NSString *debugText;
@property (nonatomic, retain) AVObservationController *observationController;
@property (nonatomic, retain) AVPlayer *player;
@property (nonatomic) AVSecondScreenViewController *secondScreenViewController;

- (void).cxx_destruct;
- (void)_actuallyUpdateDebugLabelTextWithCurrentResolution:(id)arg1 currentVideoDynamicRange:(id)arg2;
- (id)_currentDisplay;
- (id)_currentEnabledVideoTrack;
- (id)_currentVideoDynamicRange;
- (void)_updateDebugLabelText;
- (id)canvas;
- (void)dealloc;
- (id)debugInfoDisplay;
- (id)debugText;
- (id)init;
- (id)observationController;
- (id)player;
- (id)secondScreenViewController;
- (void)setCanvas:(id)arg1;
- (void)setDebugInfoDisplay:(id)arg1;
- (void)setDebugText:(id)arg1;
- (void)setObservationController:(id)arg1;
- (void)setPlayer:(id)arg1;
- (void)setSecondScreenViewController:(id)arg1;

@end
