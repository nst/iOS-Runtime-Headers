/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIWebElementAction : NSObject {
    id  _actionHandler;
    id  _dismissalHandler;
    NSString * _title;
    int  _type;
}

@property (nonatomic, copy) id dismissalHandler;
@property (nonatomic, readonly) int type;

+ (id)customElementActionWithTitle:(id)arg1 actionHandler:(id)arg2;
+ (id)standardElementActionWithType:(int)arg1;
+ (id)standardElementActionWithType:(int)arg1 customTitle:(id)arg2 context:(id)arg3;

- (void)_runActionWithElement:(id)arg1 targetURL:(id)arg2 documentView:(id)arg3 interactionLocation:(struct CGPoint { double x1; double x2; })arg4;
- (id)_title;
- (void)dealloc;
- (id)dismissalHandler;
- (id)initWithTitle:(id)arg1 actionHandler:(id)arg2 type:(int)arg3;
- (void)setDismissalHandler:(id)arg1;
- (int)type;

@end
