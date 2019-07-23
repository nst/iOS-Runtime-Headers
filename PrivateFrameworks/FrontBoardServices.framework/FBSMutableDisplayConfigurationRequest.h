/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSMutableDisplayConfigurationRequest : FBSDisplayConfigurationRequest

@property (nonatomic) long long hdrMode;
@property (nonatomic) struct CGSize { double x1; double x2; } nativePixelSize;
@property (nonatomic) long long overscanCompensation;
@property (nonatomic) struct CGSize { double x1; double x2; } pixelSize;
@property (nonatomic) double refreshRate;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setHdrMode:(long long)arg1;
- (void)setNativePixelSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setOverscanCompensation:(long long)arg1;
- (void)setPixelSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setRefreshRate:(double)arg1;

@end
