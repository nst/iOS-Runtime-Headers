/* Generated by RuntimeBrowser.
 */

@protocol AirPlayControllerAsync

@required

- (void)getProperty:(void *)arg1 qualifier:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSString *, id, id, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id, int, id
- (void)performCommand:(void *)arg1 qualifier:(void *)arg2 params:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: NSString *, id, id, id, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id, int, NSDictionary *, void*
- (void)postEvent:(void *)arg1 qualifier:(void *)arg2 params:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 8: NSString *, id, id, id, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id, void*
- (void)setProperty:(void *)arg1 qualifier:(void *)arg2 value:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: NSString *, id, id, id, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id, int, void*

@end
