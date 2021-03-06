/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLConstraintsDirector : NSObject <PLForegroundMonitorDelegate> {
    NSObject<OS_dispatch_source> * _bonusTimer;
    bool  _cameraAppInForeground;
    bool  _didTransitionToOpportunisticDisallowed;
    PLForegroundMonitor * _foregroundMonitor;
    NSObject<OS_dispatch_queue> * _isolationQueue;
    NSURL * _photoLibraryURL;
    bool  _photosAppInForeground;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)_photoanalysisdIsRunning;
+ (bool)constraintsAllowSchedulingUserInitiatedAnalysisForAssets;
+ (id)sharedConstraintsDirector;

- (void)_addBonusTime;
- (void)_disableAutoFGAndUserFGConstraints;
- (void)dealloc;
- (void)foregroundMonitor:(id)arg1 changedStateToForeground:(bool)arg2 forBundleIdentifier:(id)arg3;
- (void)informCameraAppCameraViewControllerVisibilityChanged:(bool)arg1;
- (void)informCameraAppForegroundState:(bool)arg1;
- (void)informOpportunisticTasksAllowed:(bool)arg1;
- (id)initWithPhotoLibraryURL:(id)arg1;
- (bool)shouldScheduleUserInitiatedAnalysisForAssets;

@end
