/* Generated by RuntimeBrowser.
 */

@protocol TUPluggable

@required

- (void)initializeWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, struct CGSize { double x1; double x2; }, void*
- (bool)isBeingUsedAsPlugin;
- (<TUPluggableDelegate> *)pluggableDelegate;
- (void)relayoutWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, struct CGSize { double x1; double x2; }, void*
- (void)setIsBeingUsedAsPlugin:(bool)arg1;
- (void)setPluggableDelegate:(id <TUPluggableDelegate>)arg1;

@end
