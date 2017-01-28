/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NearField.framework/NearField
 */

@interface NFContactlessSession : NFSession <NFContactlessSessionCallbacks> {
    NFApplet * _activeApplet;
    NSDictionary * _appletsById;
    NFWeakReference * _delegate;
}

@property (readonly) NFApplet *activeApplet;
@property (readonly, copy) NSString *debugDescription;
@property <NFContactlessSessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)activeApplet;
- (id)allApplets;
- (id)appletWithIdentifier:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)didDetectField:(bool)arg1;
- (void)didDetectTechnology:(id)arg1;
- (void)didEndUnexpectedly;
- (void)didFelicaStateChange:(id)arg1;
- (void)didSelectApplet:(id)arg1;
- (void)didStartSession:(id)arg1;
- (void)endSession;
- (void)endSessionWithCompletion:(id)arg1;
- (bool)setActiveApplet:(id)arg1;
- (void)setDelegate:(id)arg1;
- (bool)startCardEmulation;
- (bool)startHostCardEmulation;
- (bool)stopCardEmulation;

@end
