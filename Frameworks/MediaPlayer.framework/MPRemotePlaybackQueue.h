/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPRemotePlaybackQueue : NSObject <MPCPlaybackContextCreating> {
    struct _MRSystemAppPlaybackQueue { } * _mediaRemotePlaybackQueue;
    NSDictionary * _userInfo;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isRequestingImmediatePlayback, nonatomic, readonly) bool requestingImmediatePlayback;
@property (nonatomic, readonly) bool shouldOverrideManuallyCuratedQueue;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSDictionary *userInfo;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

+ (id)queueWithMediaRemotePlaybackQueue:(struct _MRSystemAppPlaybackQueue { }*)arg1;
+ (void)registerRemotePlaybackQueueClass:(Class)arg1 forPlaybackQueueType:(int)arg2;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)initWithMediaRemotePlaybackQueue:(struct _MRSystemAppPlaybackQueue { }*)arg1;
- (bool)isRequestingImmediatePlayback;
- (bool)shouldOverrideManuallyCuratedQueue;
- (id)userInfo;
- (bool)verifyWithError:(id*)arg1;

// Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI

- (id)createPlaybackContext;
- (void)createPlaybackContextWithCompletion:(id)arg1;

@end
