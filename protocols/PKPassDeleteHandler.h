/* Generated by RuntimeBrowser.
 */

@protocol PKPassDeleteHandler <NSObject>

@required

- (bool)handleDeletePassRequestWithPass:(PKPass *)arg1 forViewController:(UIViewController *)arg2;

@optional

- (bool)isDeletionInProgressForPass:(PKPass *)arg1;
- (void)setDeletionStatusHandler:(void *)arg1 forPass:(void *)arg2; // needs 2 arg types, found 6: id, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id, void*, PKPass *

@end
