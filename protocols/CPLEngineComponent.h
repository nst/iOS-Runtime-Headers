/* Generated by RuntimeBrowser.
 */

@protocol CPLEngineComponent <NSObject>

@required

- (void)closeAndDeactivate:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: bool, id, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id, NSError *, void*
- (NSString *)componentName;
- (void)openWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id, NSError *, void*

@optional

- (void)getStatusDictionaryWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id, NSDictionary *, NSError *, void*
- (void)getStatusWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id, NSString *, NSError *, void*

@end
