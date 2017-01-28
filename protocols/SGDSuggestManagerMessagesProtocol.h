/* Generated by RuntimeBrowser.
 */

@protocol SGDSuggestManagerMessagesProtocol <_SGDSuggestManagerBaseProtocol, _SGDSuggestManagerEventsConfirmRejectProtocol, _SGDSuggestManagerContactsConfirmRejectProtocol>

@required

- (void)harvestedSuggestionsFromMessage:(void *)arg1 bundleIdentifier:(void *)arg2 options:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 11: CSSearchableItem *, NSString *, unsigned long long, id, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id, NSError *, NSArray *, NSArray *, void*
- (void)harvestedSuggestionsFromMessages:(void *)arg1 bundleIdentifier:(void *)arg2 options:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 11: NSArray *, NSString *, unsigned long long, id, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id, NSError *, NSArray *, NSArray *, void*
- (void)suggestionsFromMessage:(void *)arg1 options:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 11: CSSearchableItem *, unsigned long long, id, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id, NSError *, NSArray *, NSArray *, NSArray *, void*

@end
