/* Generated by RuntimeBrowser.
 */

@protocol _LSQueryResolving

@required

- (void)_enumerateResolvedResultsOfQuery:(void *)arg1 XPCConnection:(void *)arg2 withBlock:(void *)arg3; // needs 3 arg types, found 10: _LSQuery *, NSXPCConnection *, id, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id, _LSQueryResult *, NSError *, bool*, void*
- (_LSQueryCache *)_queryCache;
- (void)_resolveQueries:(void *)arg1 synchronously:(void *)arg2 XPCConnection:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 10: NSSet *, bool, NSXPCConnection *, id, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id, NSDictionary *, NSError *, void*

@end