/* Generated by RuntimeBrowser.
 */

@protocol GEOComposedRouteObserver <NSObject>

@required

- (void)composedRoute:(GEOComposedRoute *)arg1 changedSelectedRideInClusteredLeg:(GEOComposedTransitTripRouteLeg *)arg2 fromIndex:(unsigned long long)arg3 toIndex:(unsigned long long)arg4;
- (void)composedRoute:(GEOComposedRoute *)arg1 selectedSections:(NSArray *)arg2 deselectedSections:(NSArray *)arg3;
- (void)composedRouteUpdatedSnappedPaths:(GEOComposedRoute *)arg1;
- (void)composedRouteUpdatedTraffic:(GEOComposedRoute *)arg1;

@end
