/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
 */

@interface WFKnownNetworksListController : NSObject <WFKnownNetworksViewControllerDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)getDateAddedForNetwork:(id)arg1;
- (id)getDateLastJoinedForNetwork:(id)arg1;
- (id)getGeoTagsForNetwork:(id)arg1;
- (id)getKnownNetworksList;
- (id)getPasswordForNetwork:(id)arg1;
- (id)getScoreForNetwork:(id)arg1;
- (id)getSecurityTypeStringForNetwork:(id)arg1;
- (bool)isNetworkBlacklisted:(id)arg1;
- (bool)isNetworkHidden:(id)arg1;
- (void)pushKnownNetworksOnParentViewController:(id)arg1;
- (void)removeKnownNetworkWithSsid:(id)arg1;

@end
