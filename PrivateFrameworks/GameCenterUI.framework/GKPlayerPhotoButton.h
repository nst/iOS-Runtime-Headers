/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@interface GKPlayerPhotoButton : GKRoundButton <GKPlayerPhotoContainer> {
    GKPlayer * _player;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) GKPlayer *player;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)player;
- (void)refreshPhoto;
- (void)refreshPhotoWithCompletionHandler:(id /* block */)arg1;
- (void)setBackgroundImage:(id)arg1;
- (void)setPlayer:(id)arg1;

@end
