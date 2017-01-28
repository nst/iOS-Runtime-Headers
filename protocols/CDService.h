/* Generated by RuntimeBrowser.
 */

@protocol CDService <NSObject>

@required

- (NSString *)ID;
- (bool)doNotQuery;
- (bool)doesPeriodic;
- (bool)doesPurge;
- (bool)inFlight;
- (bool)multiUserOnly;
- (bool)noQuota;
- (bool)rootOnly;
- (void)serviceCallback:(void *)arg1 replyBlock:(void *)arg2; // needs 2 arg types, found 7: NSDictionary *, id, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id, NSDictionary *, void*
- (void)serviceCancelPurge:(void *)arg1; // needs 1 arg types, found 5: id, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id, void*
- (void)serviceNotify:(void *)arg1 replyBlock:(void *)arg2; // needs 2 arg types, found 6: NSDictionary *, id, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id, void*
- (void)servicePeriodic:(void *)arg1 info:(void *)arg2 replyBlock:(void *)arg3; // needs 3 arg types, found 8: int, NSDictionary *, id, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id, NSDictionary *, void*
- (void)servicePing:(void *)arg1; // needs 1 arg types, found 5: id, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id, void*
- (void)servicePurge:(void *)arg1 info:(void *)arg2 replyBlock:(void *)arg3; // needs 3 arg types, found 8: int, NSDictionary *, id, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id, NSDictionary *, void*
- (void)servicePurgeable:(void *)arg1 info:(void *)arg2 replyBlock:(void *)arg3; // needs 3 arg types, found 8: int, NSDictionary *, id, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id, NSDictionary *, void*
- (void)setServiceInvalidationHandler:(void *)arg1; // needs 1 arg types, found 5: id, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id, void*

@end
