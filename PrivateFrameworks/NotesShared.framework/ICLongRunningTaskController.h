/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICLongRunningTaskController : NSObject <ICProgressViewControllerDelegate> {
    id  _completionBlock;
    double  _intervalBeforeOpeningProgressDialog;
    id  _keepAlive;
    NSDate * _lastAccessibilityAnnouncementDate;
    NSDate * _openProgressDate;
    NSProgress * _progress;
    NSString * _progressFormatString;
    ICProgressViewController * _progressViewController;
    bool  _progressViewControllerDidFinishPresenting;
    bool  _shouldDismissProgressViewController;
    id  _updateProgressUIBlock;
    struct UIWindow { Class x1; } * _window;
}

@property (nonatomic, copy) id completionBlock;
@property (nonatomic) double intervalBeforeOpeningProgressDialog;
@property (nonatomic, retain) id keepAlive;
@property (nonatomic, retain) NSDate *lastAccessibilityAnnouncementDate;
@property (nonatomic, retain) NSDate *openProgressDate;
@property (nonatomic, retain) NSProgress *progress;
@property (nonatomic, copy) NSString *progressFormatString;
@property (nonatomic, retain) ICProgressViewController *progressViewController;
@property (nonatomic) bool progressViewControllerDidFinishPresenting;
@property (nonatomic) bool shouldDismissProgressViewController;
@property (nonatomic, copy) id updateProgressUIBlock;
@property (nonatomic, retain) UIWindow *window;

+ (void)setMainWindow:(struct UIWindow { Class x1; }*)arg1;

- (void).cxx_destruct;
- (void)closeProgressDialog;
- (void)completeTaskIfNecessary;
- (id)completionBlock;
- (id)init;
- (id)initWithWindow:(struct UIWindow { Class x1; }*)arg1 intervalBeforeOpeningProgressDialog:(double)arg2;
- (double)intervalBeforeOpeningProgressDialog;
- (id)keepAlive;
- (id)lastAccessibilityAnnouncementDate;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)openProgressDate;
- (void)openProgressDialog;
- (id)progress;
- (id)progressFormatString;
- (id)progressViewController;
- (bool)progressViewControllerDidFinishPresenting;
- (void)setCompletionBlock:(id)arg1;
- (void)setIntervalBeforeOpeningProgressDialog:(double)arg1;
- (void)setKeepAlive:(id)arg1;
- (void)setLastAccessibilityAnnouncementDate:(id)arg1;
- (void)setOpenProgressDate:(id)arg1;
- (void)setProgress:(id)arg1;
- (void)setProgressFormatString:(id)arg1;
- (void)setProgressViewController:(id)arg1;
- (void)setProgressViewControllerDidFinishPresenting:(bool)arg1;
- (void)setShouldDismissProgressViewController:(bool)arg1;
- (void)setUpdateProgressUIBlock:(id)arg1;
- (void)setWindow:(struct UIWindow { Class x1; }*)arg1;
- (bool)shouldDismissProgressViewController;
- (void)startTask:(id)arg1 completionBlock:(id)arg2;
- (void)updateProgress;
- (id)updateProgressUIBlock;
- (void)willDismissProgressViewController:(id)arg1;
- (struct UIWindow { Class x1; }*)window;

@end
