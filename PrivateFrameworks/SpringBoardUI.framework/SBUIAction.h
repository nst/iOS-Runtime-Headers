/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

@interface SBUIAction : NSObject {
    UIView * _badgeView;
    id  _handler;
    UIImage * _image;
    NSString * _subtitle;
    NSString * _title;
}

@property (nonatomic, readonly) UIView *badgeView;
@property (nonatomic, readonly, copy) id handler;
@property (nonatomic, readonly) UIImage *image;
@property (nonatomic, readonly, copy) NSString *subtitle;
@property (nonatomic, readonly, copy) NSString *title;

- (void).cxx_destruct;
- (id)badgeView;
- (id)handler;
- (id)image;
- (id)init;
- (id)initWithTitle:(id)arg1 handler:(id)arg2;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 handler:(id)arg3;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 image:(id)arg3 badgeView:(id)arg4 handler:(id)arg5;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 image:(id)arg3 handler:(id)arg4;
- (id)subtitle;
- (id)title;

@end
