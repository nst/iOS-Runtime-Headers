/* Generated by RuntimeBrowser.
 */

@protocol MSPRemoteModelAccess <NSObject>

@required

- (void)commitFavoritesSerializedRepresentation:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSData *, id, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id, NSError *, void*
- (void)commitHistorySerializedRepresentation:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSData *, id, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id, NSError *, void*
- (void)fetchFavoritesSerializedRepresentationWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id, NSData *, NSError *, void*
- (void)fetchHistorySerializedRepresentationWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id, NSData *, NSError *, void*

@end
