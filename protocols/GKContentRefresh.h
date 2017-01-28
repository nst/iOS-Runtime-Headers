/* Generated by RuntimeBrowser.
 */

@protocol GKContentRefresh <NSObject>

@required

- (void)_gkRefreshContentsForDataType:(unsigned int)arg1 userInfo:(NSDictionary *)arg2;
- (void)_gkResetContents;
- (bool)_gkShouldRefreshContentsForDataType:(unsigned int)arg1 userInfo:(NSDictionary *)arg2;
- (void)_gkUpdateContentsWithCompletionHandlerAndError:(void *)arg1; // needs 1 arg types, found 6: id, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id, NSError *, void*

@optional

- (void)_gkForceNextContentUpdate;
- (void)_gkSetContentsNeedUpdateWithHandler:(void *)arg1; // needs 1 arg types, found 5: id, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id, void*

@end
