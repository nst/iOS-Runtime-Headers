/* Generated by RuntimeBrowser.
 */

@protocol UIPreviewInteractionAnimating <NSObject>

@required

- (NSArray *)containerViews;
- (bool)isStopped;
- (void)setAnimationsForCancel:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 11: id, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id, void*, id, void*, void, id, bool, void*
- (void)setAnimationsForCommit:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 11: id, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id, void*, id, void*, void, id, bool, void*
- (void)setAnimationsForInteractiveHighlight:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 11: id, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id, void*, id, void*, void, id, bool, void*
- (void)setAnimationsForPreview:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 11: id, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id, void*, id, void*, void, id, bool, void*
- (void)setContainerViews:(NSArray *)arg1;
- (void)stopAnimations;

@end