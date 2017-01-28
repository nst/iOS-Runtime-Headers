/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

@interface PLArchiveJob : NSObject {
    PLArchiveEntry * _archiveEntry;
    <PLArchiveJobManager> * _manager;
    PLTimer * _watchdog;
}

@property (retain) PLArchiveEntry *archiveEntry;
@property (retain) <PLArchiveJobManager> *manager;
@property (nonatomic) unsigned long long numAttempts;
@property (nonatomic) long long stage;
@property (retain) PLTimer *watchdog;

+ (SEL)recoverSelectorForStage:(long long)arg1;
+ (SEL)runSelectorForStage:(long long)arg1;
+ (id)storageQueue;

- (void).cxx_destruct;
- (id)archiveEntry;
- (id)initWithManager:(id)arg1 andArchiveEntry:(id)arg2;
- (id)manager;
- (unsigned long long)numAttempts;
- (void)recover;
- (void)recoverCompress;
- (void)recoverCopy;
- (void)recoverTrim;
- (void)run;
- (void)setArchiveEntry:(id)arg1;
- (void)setManager:(id)arg1;
- (void)setNumAttempts:(unsigned long long)arg1;
- (void)setStage:(long long)arg1;
- (void)setWatchdog:(id)arg1;
- (long long)stage;
- (void)stageCompress;
- (void)stageCopy;
- (void)stageRemove;
- (void)stageStart;
- (void)stageTrim;
- (void)startWatchdog;
- (void)stopWatchdog;
- (id)watchdog;

@end
