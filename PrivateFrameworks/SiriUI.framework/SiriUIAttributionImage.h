/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

@interface SiriUIAttributionImage : NSObject {
    NSString * _localPressedResourceName;
    SAUIAppPunchOut * _localPunchOut;
    NSBundle * _localResourceBundle;
    NSString * _localResourceName;
    struct CGSize { 
        double width; 
        double height; 
    }  _logoSize;
    double  _remotePressedScale;
    NSURL * _remotePressedURL;
    SAUIAppPunchOut * _remotePunchOut;
    double  _remoteScale;
    NSURL * _remoteURL;
}

@property (nonatomic, copy) NSString *localPressedResourceName;
@property (nonatomic, retain) SAUIAppPunchOut *localPunchOut;
@property (nonatomic, retain) NSBundle *localResourceBundle;
@property (nonatomic, copy) NSString *localResourceName;
@property (nonatomic) struct CGSize { double x1; double x2; } logoSize;
@property (nonatomic) double remotePressedScale;
@property (nonatomic, copy) NSURL *remotePressedURL;
@property (nonatomic, retain) SAUIAppPunchOut *remotePunchOut;
@property (nonatomic) double remoteScale;
@property (nonatomic, copy) NSURL *remoteURL;

+ (id)attributionImageFromAppPunchOut:(id)arg1;
+ (id)attributionImageFromImageResource:(id)arg1;
+ (id)attributionImageFromKey:(id)arg1 pressedKey:(id)arg2 punchOut:(id)arg3;
+ (id)attributionImageWithLocalResourceName:(id)arg1 pressedResourceName:(id)arg2 localPunchOut:(id)arg3 bundle:(id)arg4;

- (void).cxx_destruct;
- (void)_fetchLocalResourcesWithCompletion:(id)arg1;
- (void)_fetchRemoteResourcesWithCompletion:(id)arg1;
- (id)_imageInLocalResourceBundleNamed:(id)arg1;
- (void)getLogoWithCompletion:(id)arg1;
- (id)localPressedResourceName;
- (id)localPunchOut;
- (id)localResourceBundle;
- (id)localResourceName;
- (struct CGSize { double x1; double x2; })logoSize;
- (double)remotePressedScale;
- (id)remotePressedURL;
- (id)remotePunchOut;
- (double)remoteScale;
- (id)remoteURL;
- (void)setLocalPressedResourceName:(id)arg1;
- (void)setLocalPunchOut:(id)arg1;
- (void)setLocalResourceBundle:(id)arg1;
- (void)setLocalResourceName:(id)arg1;
- (void)setLogoSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setRemotePressedScale:(double)arg1;
- (void)setRemotePressedURL:(id)arg1;
- (void)setRemotePunchOut:(id)arg1;
- (void)setRemoteScale:(double)arg1;
- (void)setRemoteURL:(id)arg1;

@end
