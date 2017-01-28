/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDMessageFilter : NSObject {
    NSString * _name;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

- (void).cxx_destruct;
- (bool)acceptMessage:(id)arg1 target:(id)arg2 errorReason:(id*)arg3;
- (id)initWithName:(id)arg1;
- (id)name;
- (id)queue;
- (void)resetConfiguration;
- (void)setWorkQueue:(id)arg1;
- (bool)shouldCloudSyncData;
- (id)workQueue;

@end
