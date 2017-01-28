/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPWACScanContext : NSObject {
    id  _completion;
    HAPWACScanner * _originator;
    struct __CFRunLoop { } * _runLoop;
}

@property (nonatomic, copy) id completion;
@property (nonatomic) HAPWACScanner *originator;
@property (nonatomic) struct __CFRunLoop { }*runLoop;

- (void).cxx_destruct;
- (id)completion;
- (void)dealloc;
- (id)originator;
- (struct __CFRunLoop { }*)runLoop;
- (void)setCompletion:(id)arg1;
- (void)setOriginator:(id)arg1;
- (void)setRunLoop:(struct __CFRunLoop { }*)arg1;

@end
