/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKMessageEntryView : UIView <CKActionMenuControllerDelegate, CKActionMenuGestureRecognizerButtonDelegate, CKAudioRecorderDelegate, CKInlineAudioReplyButtonDelegate, CKMessageEntryContentViewDelegate, CKMessageEntryRecordedAudioViewDelegate, CKMessageEntryViewStyleProtocol, UIGestureRecognizerDelegate, _UIBackdropViewGraphicsQualityChangeDelegate> {
    CKEntryViewButton * _arrowButton;
    CKActionMenuController * _audioActionMenuController;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _audioActionMenuFrame;
    CKActionMenuGestureRecognizerButton * _audioActionMenuGestureRecognizerButton;
    CKEntryViewButton * _audioButton;
    CKComposition * _audioComposition;
    CKMessageEntryAudioHintView * _audioHintView;
    CKInlineAudioReplyButtonController * _audioReplyButton;
    _UIBackdropView * _backdropView;
    CKEntryViewButton * _browserButton;
    bool  _characterCountHidden;
    UILabel * _characterCountLabel;
    struct CGSize { 
        double width; 
        double height; 
    }  _characterCountSize;
    UILabel * _collpasedPlaceholderLabel;
    bool  _composingRecipient;
    UIView * _contentClipView;
    CKMessageEntryContentView * _contentView;
    CKConversation * _conversation;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _coverInsets;
    <CKMessageEntryViewDelegate><UIPreviewInteractionDelegate> * _delegate;
    CKEntryViewButton * _digitalTouchButton;
    bool  _disablePluginButtons;
    unsigned long long  _displayMode;
    CKScheduledUpdater * _entryFieldCollapsedUpdater;
    bool  _entryFieldUpdaterAnimatedValue;
    bool  _entryFieldUpdaterCollapsedValue;
    bool  _failedRecipients;
    UIView * _inputButtonContainerView;
    struct CGSize { 
        double width; 
        double height; 
    }  _inputButtonSize;
    <CKMessageEntryViewInputDelegate> * _inputDelegate;
    NSArray * _keyCommands;
    bool  _keyboardVisible;
    UIView * _knockoutCoverView;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _marginInsets;
    struct CGPoint { 
        double x; 
        double y; 
    }  _panAnimationStartPosition;
    double  _panStartTime;
    bool  _performingActionMenuSend;
    CKEntryViewButton * _photoButton;
    <UIPreviewInteractionDelegate> * _previewInteractionDelegate;
    CKMessageEntryRecordedAudioView * _recordedAudioView;
    CKAudioRecorder * _recorder;
    CKEntryViewButton * _sendButton;
    UILongPressGestureRecognizer * _sendButtonLongPressGestureRecognizer;
    UIPreviewInteraction * _sendButtonPreviewInteraction;
    struct CGSize { 
        double width; 
        double height; 
    }  _sendButtonSize;
    bool  _sendingMessage;
    bool  _shouldAllowImpactSend;
    bool  _shouldCenterCharacterCount;
    bool  _shouldConfigureForFullscreenAppView;
    bool  _shouldEntryViewBeExpanded;
    bool  _shouldKnockoutCoverView;
    bool  _shouldShowCharacterCount;
    bool  _shouldShowPluginButtons;
    bool  _shouldShowSendButton;
    bool  _shouldShowSubject;
    CAMShutterButton * _shutterButton;
    long long  _style;
    bool  _unreachableEmergencyRecipient;
    CKMessageEntryWaveformView * _waveformView;
    struct CGSize { 
        double width; 
        double height; 
    }  _waveformViewSize;
}

@property (nonatomic, retain) CKEntryViewButton *arrowButton;
@property (nonatomic, retain) CKActionMenuController *audioActionMenuController;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } audioActionMenuFrame;
@property (nonatomic, retain) CKActionMenuGestureRecognizerButton *audioActionMenuGestureRecognizerButton;
@property (nonatomic, retain) CKEntryViewButton *audioButton;
@property (nonatomic, retain) CKComposition *audioComposition;
@property (nonatomic, retain) CKMessageEntryAudioHintView *audioHintView;
@property (nonatomic, retain) CKInlineAudioReplyButtonController *audioReplyButton;
@property (nonatomic, retain) _UIBackdropView *backdropView;
@property (nonatomic, retain) CKEntryViewButton *browserButton;
@property (getter=isCharacterCountHidden, nonatomic) bool characterCountHidden;
@property (nonatomic, retain) UILabel *characterCountLabel;
@property (nonatomic) struct CGSize { double x1; double x2; } characterCountSize;
@property (nonatomic, retain) UILabel *collpasedPlaceholderLabel;
@property (getter=isComposingRecipient, nonatomic) bool composingRecipient;
@property (nonatomic, retain) CKComposition *composition;
@property (nonatomic, readonly) CKComposition *compositionWithAcceptedAutocorrection;
@property (nonatomic, retain) UIView *contentClipView;
@property (nonatomic, retain) CKMessageEntryContentView *contentView;
@property (nonatomic, retain) CKConversation *conversation;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } coverInsets;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CKMessageEntryViewDelegate><UIPreviewInteractionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CKEntryViewButton *digitalTouchButton;
@property (getter=shouldDisablePluginButtons, nonatomic) bool disablePluginButtons;
@property (nonatomic) unsigned long long displayMode;
@property bool entryFieldCollapsed;
@property (nonatomic, retain) CKScheduledUpdater *entryFieldCollapsedUpdater;
@property (nonatomic) bool entryFieldUpdaterAnimatedValue;
@property (nonatomic) bool entryFieldUpdaterCollapsedValue;
@property (getter=hasFailedRecipients, nonatomic) bool failedRecipients;
@property (nonatomic, readonly) bool hasRecording;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIView *inputButtonContainerView;
@property (nonatomic) struct CGSize { double x1; double x2; } inputButtonSize;
@property (nonatomic) <CKMessageEntryViewInputDelegate> *inputDelegate;
@property (nonatomic, readonly) bool isAudioActionMenuVisible;
@property (nonatomic, copy) NSArray *keyCommands;
@property (getter=isKeyboardVisible, nonatomic) bool keyboardVisible;
@property (nonatomic, retain) UIView *knockoutCoverView;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } marginInsets;
@property (nonatomic) struct CGPoint { double x1; double x2; } panAnimationStartPosition;
@property (nonatomic) double panStartTime;
@property (getter=isPerformingActionMenuSend, nonatomic) bool performingActionMenuSend;
@property (nonatomic, retain) CKEntryViewButton *photoButton;
@property (nonatomic) <UIPreviewInteractionDelegate> *previewInteractionDelegate;
@property (nonatomic, retain) CKMessageEntryRecordedAudioView *recordedAudioView;
@property (nonatomic, retain) CKAudioRecorder *recorder;
@property (getter=isRecording, nonatomic, readonly) bool recording;
@property (nonatomic, retain) CKEntryViewButton *sendButton;
@property (nonatomic, retain) UILongPressGestureRecognizer *sendButtonLongPressGestureRecognizer;
@property (nonatomic, retain) UIPreviewInteraction *sendButtonPreviewInteraction;
@property (nonatomic) struct CGSize { double x1; double x2; } sendButtonSize;
@property (getter=isSendingMessage, nonatomic) bool sendingMessage;
@property (nonatomic) bool shouldAllowImpactSend;
@property (nonatomic) bool shouldCenterCharacterCount;
@property (nonatomic) bool shouldConfigureForFullscreenAppView;
@property (nonatomic) bool shouldEntryViewBeExpanded;
@property (nonatomic) bool shouldHideBackgroundView;
@property (nonatomic) bool shouldKnockoutCoverView;
@property (nonatomic) bool shouldShowCharacterCount;
@property (nonatomic) bool shouldShowPluginButtons;
@property (nonatomic) bool shouldShowSendButton;
@property (nonatomic) bool shouldShowSubject;
@property (nonatomic, retain) CAMShutterButton *shutterButton;
@property (nonatomic) long long style;
@property (readonly) Class superclass;
@property (getter=hasUnreachableEmergencyRecipient, nonatomic) bool unreachableEmergencyRecipient;
@property (nonatomic, retain) CKMessageEntryWaveformView *waveformView;
@property (nonatomic) struct CGSize { double x1; double x2; } waveformViewSize;

+ (id)_imageNamesForPrecaching;
+ (id)audioButtonImage;
+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentViewInsetsForMarginInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1 shouldShowPluginButtons:(bool)arg2 shouldShowCharacterCount:(bool)arg3 shouldCoverSendButton:(bool)arg4;
+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })coverViewInsetsForMarginInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1 shouldShowPluginButtons:(bool)arg2 shouldShowCharacterCount:(bool)arg3;
+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })coverViewInsetsForMarginInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1 shouldShowPluginButtons:(bool)arg2 shouldShowCharacterCount:(bool)arg3 shouldCenterCharacterCount:(bool*)arg4;

- (void).cxx_destruct;
- (double)_accessoryViewFadeDuration;
- (void)_animateCollapseInteractive:(bool)arg1;
- (void)_animateExpand;
- (void)_setupWaveformView;
- (bool)_shouldNotAnimateCollapseInteractive;
- (void)_updateUIForEntryFieldCollapsedStateChange;
- (void)actionMenuControllerDidDismissActionMenu:(id)arg1;
- (void)actionMenuControllerWillDismissActionMenu:(id)arg1 animated:(bool)arg2;
- (void)actionMenuControllerWillPresentActionMenu:(id)arg1 animated:(bool)arg2;
- (void)actionMenuGestureRecognizerButtonDidTouchDownButton:(id)arg1;
- (void)actionMenuGestureRecognizerButtonDidTouchUpInsideButton:(id)arg1;
- (void)actionMenuGestureRecognizerButtonGestureDidBegin:(id)arg1;
- (void)actionMenuGestureRecognizerButtonGestureDidEnd:(id)arg1;
- (bool)actionMenuGestureRecognizerButtonIsShowingHint:(id)arg1;
- (bool)actionMenuGestureRecognizerButtonShouldRecognizeGesture:(id)arg1;
- (bool)actionMenuGestureRecognizerButtonShouldShowHint:(id)arg1;
- (void)actionMenuGestureRecognizerButtonShowHint:(id)arg1;
- (id)arrowButton;
- (void)arrowButtonTapped:(id)arg1;
- (void)arrowCollapsePanGestureRecongnized:(id)arg1;
- (id)audioActionMenuController;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })audioActionMenuFrame;
- (id)audioActionMenuGestureRecognizerButton;
- (id)audioButton;
- (id)audioComposition;
- (id)audioHintView;
- (void)audioMenuItemAction:(id)arg1;
- (void)audioRecorderDidUpdateAveragePower:(float)arg1;
- (void)audioRecorderRecordingDidChange:(id)arg1;
- (void)audioRecorderRecordingDidFail:(id)arg1;
- (id)audioReplyButton;
- (void)audioReplyButtonCancel:(id)arg1;
- (void)audioReplyButtonStart:(id)arg1;
- (void)audioReplyButtonStop:(id)arg1;
- (id)backdropView;
- (void)backdropView:(id)arg1 didChangeToGraphicsQuality:(long long)arg2;
- (id)backdropView:(id)arg1 willChangeToGraphicsQuality:(long long)arg2;
- (void)beginDeferringEntryFieldCollapsedStateChanges;
- (id)browserButton;
- (void)browserButtonTapped:(id)arg1;
- (void)cancelRecordingAndShowAudioHint;
- (id)characterCountLabel;
- (struct CGSize { double x1; double x2; })characterCountSize;
- (void)clearResponseContext;
- (void)collapseGestureRecongnized;
- (id)collpasedPlaceholderLabel;
- (void)collpasedPlaceholderLabelTapped:(id)arg1;
- (id)composition;
- (id)compositionWithAcceptedAutocorrection;
- (void)configureAudioActionMenuControllerForPlayback:(bool)arg1;
- (void)configureForDisplayMode:(unsigned long long)arg1;
- (id)contentClipView;
- (id)contentView;
- (id)conversation;
- (void)conversationPreferredServiceChanged:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })coverFrameThatFitsInSize:(struct CGSize { double x1; double x2; })arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })coverInsets;
- (void)dealloc;
- (id)delegate;
- (id)digitalTouchButton;
- (void)digitalTouchButtonTapped:(id)arg1;
- (void)dismissAudioActionMenuAnimated:(bool)arg1;
- (unsigned long long)displayMode;
- (void)endDeferringEntryFieldCollapsedStateChanges;
- (bool)entryFieldCollapsed;
- (id)entryFieldCollapsedUpdater;
- (bool)entryFieldUpdaterAnimatedValue;
- (bool)entryFieldUpdaterCollapsedValue;
- (void)expandGestureRecongnized;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)hasFailedRecipients;
- (bool)hasRecording;
- (bool)hasUnreachableEmergencyRecipient;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initForFullscreenAppViewWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 marginInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2 shouldAllowImpact:(bool)arg3 shouldShowSendButton:(bool)arg4 shouldShowSubject:(bool)arg5 shouldShowBrowserButton:(bool)arg6 shouldShowCharacterCount:(bool)arg7;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 marginInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2 shouldAllowImpact:(bool)arg3 shouldShowSendButton:(bool)arg4 shouldShowSubject:(bool)arg5 shouldShowPluginButtons:(bool)arg6 shouldShowCharacterCount:(bool)arg7;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 marginInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2 shouldShowSendButton:(bool)arg3 shouldShowSubject:(bool)arg4 shouldShowPluginButtons:(bool)arg5 shouldShowCharacterCount:(bool)arg6;
- (id)inputButtonContainerView;
- (struct CGSize { double x1; double x2; })inputButtonSize;
- (id)inputDelegate;
- (bool)isAudioActionMenuVisible;
- (bool)isCharacterCountHidden;
- (bool)isComposingRecipient;
- (bool)isKeyboardVisible;
- (bool)isPerformingActionMenuSend;
- (bool)isRecording;
- (bool)isSendingMessage;
- (void)keyCommandSend:(id)arg1;
- (id)keyCommands;
- (id)knockoutCoverView;
- (void)layoutSubviews;
- (void)loadRecordedAudioViewsIfNeeded;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })marginInsets;
- (void)messageEntryContentView:(id)arg1 didPasteURL:(id)arg2;
- (void)messageEntryContentView:(id)arg1 didTapMediaObject:(id)arg2;
- (bool)messageEntryContentView:(id)arg1 shouldInsertMediaObjects:(id)arg2;
- (void)messageEntryContentViewCancelWasTapped:(id)arg1 shelfPluginPayload:(id)arg2;
- (void)messageEntryContentViewDidBeginEditing:(id)arg1;
- (void)messageEntryContentViewDidChange:(id)arg1;
- (void)messageEntryContentViewDidEndEditing:(id)arg1;
- (void)messageEntryContentViewDidTapHandwritingKey:(id)arg1;
- (struct CGSize { double x1; double x2; })messageEntryContentViewMaxShelfPluginViewSize:(id)arg1;
- (bool)messageEntryContentViewShouldBeginEditing:(id)arg1;
- (void)messageEntryContentViewWasTapped:(id)arg1 isLongPress:(bool)arg2;
- (void)messageEntryRecordedAudioView:(id)arg1 mediaObjectDidFinishPlaying:(id)arg2;
- (void)messageReceived:(id)arg1;
- (struct CGPoint { double x1; double x2; })panAnimationStartPosition;
- (double)panStartTime;
- (void)pauseMenuItemAction:(id)arg1;
- (id)photoButton;
- (void)photoButtonTapped:(id)arg1;
- (double)placeholderHeight;
- (void)playMenuItemAction:(id)arg1;
- (bool)pluginButtonsEnabled;
- (void)presentAudioActionMenu;
- (id)previewInteractionDelegate;
- (id)recordedAudioView;
- (id)recorder;
- (id)sendButton;
- (struct CGPoint { double x1; double x2; })sendButtonConvertPointToScreen:(struct CGPoint { double x1; double x2; })arg1;
- (bool)sendButtonEnabled;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })sendButtonFrameInScreenCoordinates;
- (void)sendButtonLongPressGesture:(id)arg1;
- (id)sendButtonLongPressGestureRecognizer;
- (id)sendButtonPreviewInteraction;
- (struct CGSize { double x1; double x2; })sendButtonSize;
- (void)sendCurrentLocationMessage;
- (void)sendMenuItemAction:(id)arg1;
- (void)setArrowButton:(id)arg1;
- (void)setAudioActionMenuController:(id)arg1;
- (void)setAudioActionMenuFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setAudioActionMenuGestureRecognizerButton:(id)arg1;
- (void)setAudioButton:(id)arg1;
- (void)setAudioComposition:(id)arg1;
- (void)setAudioHintView:(id)arg1;
- (void)setAudioReplyButton:(id)arg1;
- (void)setBackdropView:(id)arg1;
- (void)setBrowserButton:(id)arg1;
- (void)setCharacterCountHidden:(bool)arg1;
- (void)setCharacterCountLabel:(id)arg1;
- (void)setCharacterCountSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setCollpasedPlaceholderLabel:(id)arg1;
- (void)setComposingRecipient:(bool)arg1;
- (void)setComposition:(id)arg1;
- (void)setContentClipView:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setConversation:(id)arg1;
- (void)setCoverInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setDigitalTouchButton:(id)arg1;
- (void)setDisablePluginButtons:(bool)arg1;
- (void)setDisplayMode:(unsigned long long)arg1;
- (void)setEntryFieldCollapsed:(bool)arg1;
- (void)setEntryFieldCollapsed:(bool)arg1 animated:(bool)arg2;
- (void)setEntryFieldCollapsedUpdater:(id)arg1;
- (void)setEntryFieldUpdaterAnimatedValue:(bool)arg1;
- (void)setEntryFieldUpdaterCollapsedValue:(bool)arg1;
- (void)setFailedRecipients:(bool)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setInputButtonContainerView:(id)arg1;
- (void)setInputButtonSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setInputDelegate:(id)arg1;
- (void)setKeyCommands:(id)arg1;
- (void)setKeyboardVisible:(bool)arg1;
- (void)setKnockoutCoverView:(id)arg1;
- (void)setMarginInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setPanAnimationStartPosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)setPanStartTime:(double)arg1;
- (void)setPerformingActionMenuSend:(bool)arg1;
- (void)setPhotoButton:(id)arg1;
- (void)setPreviewInteractionDelegate:(id)arg1;
- (void)setRecordedAudioView:(id)arg1;
- (void)setRecorder:(id)arg1;
- (void)setSendButton:(id)arg1;
- (void)setSendButtonLongPressGestureRecognizer:(id)arg1;
- (void)setSendButtonPreviewInteraction:(id)arg1;
- (void)setSendButtonSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setSendingMessage:(bool)arg1;
- (void)setShouldAllowImpactSend:(bool)arg1;
- (void)setShouldCenterCharacterCount:(bool)arg1;
- (void)setShouldConfigureForFullscreenAppView:(bool)arg1;
- (void)setShouldEntryViewBeExpanded:(bool)arg1;
- (void)setShouldHideBackgroundView:(bool)arg1;
- (void)setShouldKnockoutCoverView:(bool)arg1;
- (void)setShouldShowCharacterCount:(bool)arg1;
- (void)setShouldShowPluginButtons:(bool)arg1;
- (void)setShouldShowSendButton:(bool)arg1;
- (void)setShouldShowSubject:(bool)arg1;
- (void)setShutterButton:(id)arg1;
- (void)setStyle:(long long)arg1;
- (void)setUnreachableEmergencyRecipient:(bool)arg1;
- (void)setWaveformView:(id)arg1;
- (void)setWaveformViewSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)shouldAllowImpactSend;
- (bool)shouldCenterCharacterCount;
- (bool)shouldConfigureForFullscreenAppView;
- (bool)shouldDisablePluginButtons;
- (bool)shouldEntryViewBeExpanded;
- (bool)shouldHideBackgroundView;
- (bool)shouldKnockoutCoverView;
- (bool)shouldRecordForService:(id)arg1;
- (bool)shouldShowCharacterCount;
- (bool)shouldShowPluginButtons;
- (bool)shouldShowSendButton;
- (bool)shouldShowSubject;
- (id)shutterButton;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)startRecordingForRaiseGesture;
- (void)stopRecordingForRaiseGestureWithFailure:(bool)arg1;
- (long long)style;
- (void)touchUpInsideDeleteAudioRecordingButton:(id)arg1;
- (void)touchUpInsideSendButton:(id)arg1;
- (void)updateEntryView;
- (void)updateResponseContext;
- (void)updateTextViewsForShouldHideCaret:(bool)arg1;
- (id)waveformView;
- (struct CGSize { double x1; double x2; })waveformViewSize;

@end
