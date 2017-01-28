/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
 */

@interface TSUBufferedReadChannelHelper : NSObject <TSUStreamReadChannel> {
    TSUBufferedReadChannel * _bufferedReadChannel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)close;
- (id)initWithBufferedReadChannel:(id)arg1;
- (void)readWithQueue:(id)arg1 handler:(id)arg2;

@end
