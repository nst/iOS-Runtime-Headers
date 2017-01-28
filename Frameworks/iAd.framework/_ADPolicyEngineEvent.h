/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@interface _ADPolicyEngineEvent : NSObject <ADBannerViewInternalDelegate> {
    NSMutableArray * _banners;
    id  _bannersLoadedHandler;
    NSMutableArray * _bannersWaitingOnLoad;
}

@property (nonatomic, readonly) NSArray *bannerIdentifiers;
@property (nonatomic, retain) NSMutableArray *banners;
@property (nonatomic, copy) id bannersLoadedHandler;
@property (nonatomic, retain) NSMutableArray *bannersWaitingOnLoad;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_considerCallingLoadedHandler;
- (void)addBannerForCreativeType:(int)arg1;
- (id)bannerIdentifiers;
- (void)bannerView:(id)arg1 didFailToReceiveAdWithError:(id)arg2;
- (void)bannerViewDidLoadAd:(id)arg1;
- (id)banners;
- (id)bannersLoadedHandler;
- (id)bannersWaitingOnLoad;
- (void)dealloc;
- (id)init;
- (id)loadedBannerWithIdentifier:(id)arg1;
- (void)setBanners:(id)arg1;
- (void)setBannersLoadedHandler:(id)arg1;
- (void)setBannersWaitingOnLoad:(id)arg1;
- (void)waitForLoadsForBanners:(id)arg1 completionHandler:(id)arg2;

@end
