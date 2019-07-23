/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUIDeviceMediaLibrary : VUIMediaLibrary

@property (getter=isInitialUpdateInProgress, nonatomic, readonly) bool initialUpdateInProgress;
@property (getter=isUpdating, nonatomic, readonly) bool updating;

- (bool)isInitialUpdateInProgress;
- (bool)isUpdating;
- (void)updateFromCloudWithReason:(long long)arg1;
- (void)updateProgressWithCompletionHandler:(id /* block */)arg1;

@end
