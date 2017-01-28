/* Generated by RuntimeBrowser.
 */

@protocol SGDSuggestManagerMailProtocol <_SGDSuggestManagerBaseProtocol, _SGDSuggestManagerEventsConfirmRejectProtocol, _SGDSuggestManagerContactsConfirmRejectProtocol>

@required

- (void)fullDownloadRequestBatch:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 8: unsigned long long, id, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id, NSArray *, NSError *, void*
- (void)harvestedSuggestionsFromSearchableItem:(void *)arg1 options:(void *)arg2 withCompletion:(void *)arg3; // needs 3 arg types, found 9: CSSearchableItem *, unsigned long long, id, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id, NSArray *, NSError *, void*
- (void)messagesToRefreshWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id, NSArray *, NSError *, void*
- (void)prepareForRealtimeExtraction:(void *)arg1; // needs 1 arg types, found 6: id, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id, NSError *, void*
- (void)reportMessagesFound:(void *)arg1 lost:(void *)arg2 withCompletion:(void *)arg3; // needs 3 arg types, found 8: NSArray *, NSArray *, id, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id, NSError *, void*
- (void)resolveFullDownloadRequests:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: NSArray *, id, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id, NSError *, void*
- (void)suggestionsFromEmailContent:(void *)arg1 headers:(void *)arg2 source:(void *)arg3 options:(void *)arg4 withCompletion:(void *)arg5; // needs 5 arg types, found 11: NSString *, NSData *, NSString *, unsigned long long, id, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id, NSArray *, NSError *, void*
- (void)suggestionsFromSearchableItem:(void *)arg1 options:(void *)arg2 withCompletion:(void *)arg3; // needs 3 arg types, found 9: CSSearchableItem *, unsigned long long, id, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id, NSArray *, NSError *, void*
- (void)updateMessages:(void *)arg1 state:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSArray *, unsigned long long, id, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id, NSError *, void*

@end
