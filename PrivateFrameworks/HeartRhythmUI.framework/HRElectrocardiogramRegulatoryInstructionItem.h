/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
 */

@interface HRElectrocardiogramRegulatoryInstructionItem : NSObject <HRFeatureRegulatoryPanelDisplayable>

@property (nonatomic, readonly) long long cellAccessoryType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isInteractive;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSAttributedString *titleString;
@property (nonatomic) <HRFeatureRegulatoryPanelDisplayUpdateDelegate> *updateDelegate;
@property (nonatomic, readonly, copy) NSAttributedString *valueString;

- (long long)cellAccessoryType;
- (void)handleUserInteractionWithItemWithHostViewController:(id)arg1;
- (bool)isInteractive;
- (id)titleString;
- (id)valueString;

@end
