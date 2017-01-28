/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPAudioVideoRoutingPopoverController : UIPopoverController <MPAVRoutingViewControllerDelegate> {
    int  _airPlayPasswordAlertDidAppearToken;
    bool  _airPlayPasswordAlertDidAppearTokenIsValid;
    bool  _mirroringIncluded;
    bool  _mirroringOnly;
    MPAVRoutingViewController * _routingViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool mirroringOnly;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_tableViewController;
- (void)dealloc;
- (id)initWithContentViewController:(id)arg1;
- (id)initWithType:(long long)arg1;
- (id)initWithType:(long long)arg1 includeMirroring:(bool)arg2;
- (bool)mirroringOnly;
- (id)routingController;
- (void)routingViewController:(id)arg1 didPickRoute:(id)arg2;
- (void)routingViewControllerDidUpdateContents:(id)arg1;
- (void)setMirroringOnly:(bool)arg1;

@end
