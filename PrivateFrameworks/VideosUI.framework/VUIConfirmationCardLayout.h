/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUIConfirmationCardLayout : TVViewLayout {
    TVImageLayout * _badgeLayout;
    struct TVCornerRadii { 
        double topLeft; 
        double topRight; 
        double bottomLeft; 
        double bottomRight; 
    }  _borderRadii;
    VUITextLayout * _textLayout;
}

@property (nonatomic, readonly) TVImageLayout *badgeLayout;
@property (nonatomic) struct TVCornerRadii { double x1; double x2; double x3; double x4; } borderRadii;
@property (nonatomic, readonly) VUITextLayout *textLayout;

+ (id)layoutWithLayout:(id)arg1 element:(id)arg2;

- (void).cxx_destruct;
- (id)badgeLayout;
- (struct TVCornerRadii { double x1; double x2; double x3; double x4; })borderRadii;
- (id)init;
- (void)setBorderRadii:(struct TVCornerRadii { double x1; double x2; double x3; double x4; })arg1;
- (id)textLayout;

@end
