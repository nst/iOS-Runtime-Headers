/* Generated by RuntimeBrowser.
 */

@protocol MKMapServiceTicket <NSObject>

@required

- (void)applyToCorrectedSearch:(GEORPCorrectedSearch *)arg1;
- (void)applyToPlaceInfo:(GEORPPlaceInfo *)arg1;
- (GEOMapRegion *)boundingRegion;
- (void)cancel;
- (GEORelatedSearchSuggestion *)defaultRelatedSuggestion;
- (NSError *)error;
- (NSArray *)exactMapItems;
- (bool)isChainResultSet;
- (NSArray *)refinedMapItems;
- (NSArray *)relatedSearchSuggestions;
- (double)requestResponseTime;
- (NSString *)resultDisplayHeader;
- (int)searchResultType;
- (NSString *)sectionHeader;
- (bool)shouldEnableRedoSearch;
- (void)submitWithHandler:(void *)arg1 networkActivity:(void *)arg2; // needs 2 arg types, found 13: id, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id, NSArray *, NSError *, void*, id, void*, void, id, bool, void*
- (void)submitWithHandler:(void *)arg1 queue:(void *)arg2 networkActivity:(void *)arg3; // needs 3 arg types, found 14: id, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id, NSArray *, NSError *, void*, NSObject<OS_dispatch_queue> *, id, void*, void, id, bool, void*
- (void)submitWithHandler:(void *)arg1 timeout:(void *)arg2 networkActivity:(void *)arg3; // needs 3 arg types, found 14: id, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id, NSArray *, NSError *, void*, long long, id, void*, void, id, bool, void*
- (void)submitWithRefinedHandler:(void *)arg1 networkActivity:(void *)arg2; // needs 2 arg types, found 14: id, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id, NSArray *, NSArray *, NSError *, void*, id, void*, void, id, bool, void*
- (void)submitWithRefinedHandler:(void *)arg1 timeout:(void *)arg2 networkActivity:(void *)arg3; // needs 3 arg types, found 15: id, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id, NSArray *, NSArray *, NSError *, void*, long long, id, void*, void, id, bool, void*
- (GEOMapServiceTraits *)traits;

@end
