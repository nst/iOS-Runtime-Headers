/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UITextServiceSession : NSObject <UIPopoverControllerDelegate> {
    bool  _dismissed;
    id  _dismissedHandler;
    bool  _isTextEffectsWindow;
    UIViewController * _modalViewController;
    UIPopoverController * _popoverController;
    long long  _type;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id dismissedHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)canShowTextServices;
+ (bool)shouldPresentAsPopoverForServiceOfType:(long long)arg1 inView:(id)arg2;
+ (id)showServiceForText:(id)arg1 selectedTextRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 type:(long long)arg3 fromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 inView:(id)arg5;
+ (id)showServiceForText:(id)arg1 type:(long long)arg2 fromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 inView:(id)arg4;
+ (id)textServiceSessionForType:(long long)arg1;

- (void).cxx_destruct;
- (void)_endSession;
- (void)dismissTextServiceAnimated:(bool)arg1;
- (id)dismissedHandler;
- (id)init;
- (id)initWithType:(long long)arg1;
- (bool)isDisplaying;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)sessionDidDismiss;
- (void)setDismissedHandler:(id)arg1;
- (long long)type;

@end
