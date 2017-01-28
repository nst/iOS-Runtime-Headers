/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetWriterFailedTerminalHelper : AVAssetWriterTerminalHelper {
    NSError * _terminalError;
}

- (void)dealloc;
- (void)endSessionAtSourceTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)error;
- (void)finishWriting;
- (void)finishWritingWithCompletionHandler:(id)arg1;
- (id)initWithConfigurationState:(id)arg1;
- (id)initWithConfigurationState:(id)arg1 terminalError:(id)arg2;
- (void)startSessionAtSourceTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (long long)status;

@end
