/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORouteSet : NSObject <NSSecureCoding> {
    NSMutableArray * _advisoryNotices;
    NSMutableArray * _incidentsOffRoute;
    GEODirectionsRequest * _lastRerouteRequest;
    GEODirectionsResponse * _lastRerouteResponse;
    bool  _lazyLoad;
    int  _mainTransportType;
    GEODirectionsRequest * _originalRequest;
    GEODirectionsResponse * _originalResponse;
    NSMutableArray * _pages;
    GEOComposedRoute * _preferredRoute;
    NSMutableArray * _routes;
    NSMutableArray * _routesAndContingencies;
    long long  _selectedRouteIndex;
    NSSet * _supportedTransportTypesForSubsequentRequests;
    NSArray * _waypoints;
}

@property (nonatomic, readonly) NSArray *incidentsOffRoute;
@property (nonatomic, readonly) int mainTransportType;
@property (nonatomic, readonly) GEODirectionsRequest *originalRequest;
@property (nonatomic, readonly) GEOComposedRoute *preferredRoute;
@property (nonatomic, readonly) NSArray *routes;
@property (nonatomic, readonly) NSArray *routesAndContingencies;
@property (nonatomic, readonly) NSSet *supportedTransportTypesForSubsequentRequests;
@property (nonatomic, readonly) NSArray *waypoints;

// Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_appendNewPage:(id)arg1;
- (void)_clearRoutes;
- (id)_pageForRoute:(id)arg1;
- (void)_prependNewPage:(id)arg1;
- (void)_updatePage:(id)arg1;
- (void)addRouteForReroute:(id)arg1 request:(id)arg2 response:(id)arg3;
- (void)addRoutesForRequest:(id)arg1 response:(id)arg2;
- (id)alternateStartRoutesLookup:(id)arg1;
- (id)directionsResponseID:(id)arg1;
- (id)displayHints:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)fullRouteAtIndex:(unsigned long long)arg1;
- (id)incidentsOffRoute;
- (unsigned long long)indexOfRouteInLazyRoutes:(id)arg1;
- (unsigned long long)indexOfSuggestedRoute:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithWaypoints:(id)arg1 transport:(int)arg2 lazyLoad:(bool)arg3 selectedRouteIndex:(long long)arg4;
- (bool)isNavigable:(id)arg1;
- (int)mainTransportType;
- (id)originalRequest;
- (id)partialRouteAtIndex:(unsigned long long)arg1;
- (id)preferredRoute;
- (id)requestForRoute:(id)arg1;
- (double)requestTime:(id)arg1;
- (id)responseForRoute:(id)arg1;
- (id)routeAttributes:(id)arg1;
- (id)routes;
- (id)routesAndContingencies;
- (id)styleAttributes:(id)arg1;
- (id)supportedTransportTypesForSubsequentRequests;
- (id)transitOptions:(id)arg1;
- (id)waypoints;

// Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation

+ (id)routeSetWithActiveRouteDetailsData:(id)arg1 outActiveRouteIndex:(out unsigned long long*)arg2;

@end
