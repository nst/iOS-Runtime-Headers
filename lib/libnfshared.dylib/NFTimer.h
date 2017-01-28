/* Generated by RuntimeBrowser
   Image: /usr/lib/libnfshared.dylib
 */

@interface NFTimer : NSObject {
    id  _block;
    unsigned int  _index;
    NSObject<OS_dispatch_queue> * _queue;
}

- (void)dealloc;
- (id)initWithCallback:(id)arg1 queue:(id)arg2;
- (void)startTimer:(double)arg1;
- (void)stopTimer;

@end
