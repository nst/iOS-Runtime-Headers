/* Generated by RuntimeBrowser.
 */

@protocol INCacheableObject <NSObject>

@required

+ (void)buildFromCachePayload:(void *)arg1 identifier:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 7: NSDictionary *, NSString *, id, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id, id

- (NSString *)cacheIdentifier;
- (void)generateCachePayloadWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id, NSDictionary *, void*

@end
