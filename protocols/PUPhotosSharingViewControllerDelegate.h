/* Generated by RuntimeBrowser.
 */

@protocol PUPhotosSharingViewControllerDelegate <NSObject>

@required

- (void)photosSharingViewController:(PUPhotosSharingViewController *)arg1 didCompleteWithActivityType:(NSString *)arg2 success:(bool)arg3 withAsset:(PHAsset *)arg4;
- (void)photosSharingViewControllerDidCancel:(PUPhotosSharingViewController *)arg1 needsDismiss:(bool)arg2;
- (void)photosSharingViewControllerWillCancel:(PUPhotosSharingViewController *)arg1 withAsset:(PHAsset *)arg2;

@end
