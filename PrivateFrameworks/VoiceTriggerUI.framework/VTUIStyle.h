/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceTriggerUI.framework/VoiceTriggerUI
 */

@interface VTUIStyle : NSObject {
    NSString * _deviceClass;
    NSArray * _deviceImageSuffixes;
    NSArray * _deviceStringSuffixes;
    long long  _enrollmentMode;
    bool  _isBuddy;
    bool  _isHeySiriAlwaysOn;
    bool  _isIpad;
    bool  _isLargeIpad;
    bool  _needMoreLineSpacing;
}

@property (nonatomic) long long enrollmentMode;
@property (nonatomic) bool isBuddy;
@property (nonatomic) bool isHeySiriAlwaysOn;

+ (id)sharedStyle;

- (void).cxx_destruct;
- (id)VTUIDeviceSpecificString:(id)arg1;
- (void)_createImageSuffixesForDevice;
- (void)_createStringSuffixesForDevice;
- (id)_deviceImageForBaseImageName:(id)arg1;
- (id)buttonTextColor;
- (double)continueButtonBaselineOffset;
- (id)continueButtonFont;
- (void)dealloc;
- (id)deviceDoneImage;
- (id)deviceSetupImage;
- (long long)enrollmentMode;
- (double)flamesHeight;
- (id)footerButtonFont;
- (double)footerContinueButtonMinBaselineFromText;
- (double)footerHorizontalPadding;
- (id)footerLabelFont;
- (double)footerLabelLineHeight;
- (bool)footerShouldPinToImage;
- (double)footerSkipButtonBaselineFromBottom;
- (double)footerSkipButtonBaselineFromContinueButton;
- (double)footerTextBaselineFromTop;
- (id)footerTextColor;
- (id)headerTitleFont;
- (double)headerTitleLinespacing;
- (double)horizontalPadding;
- (double)horizontalPaddingLandscape;
- (double)horizontalPaddingPortrait;
- (double)imageViewBottomOffsetFromFooter;
- (double)imageViewTopOffset;
- (id)init;
- (bool)isBuddy;
- (bool)isHeySiriAlwaysOn;
- (void)orientationChanged:(id)arg1;
- (double)radarBtnHorizontalPadding;
- (double)radarBtnVerticalPadding;
- (void)setEnrollmentMode:(long long)arg1;
- (void)setIsBuddy:(bool)arg1;
- (void)setIsHeySiriAlwaysOn:(bool)arg1;
- (bool)shouldShowFooterLine;
- (double)skipButtonBaselineBottomMargin;
- (double)statusLabelMinHeight;
- (double)statusLabelVerticalOffsetFromCenter;
- (double)subtitle1BaselineOffset;
- (double)subtitle2BaselineOffset;
- (id)subtitleFont;
- (double)subtitleLineHeight;
- (double)tickMarkHorizontalSizeRatio;
- (double)titleBaselineOffsetFromTop;
- (id)turnOnSiriContinueButtonFont;
- (double)turnOnSiriContinueButtonHeight;
- (double)turnOnSiriContinueButtonWidth;
- (double)turnOnSiriHorizontalPaddingLandscape;
- (double)turnOnSiriHorizontalPaddingPortrait;
- (double)turnOnSiriImageOffsetFromTopLandscape;
- (double)turnOnSiriImageOffsetFromTopPortrait;

@end
