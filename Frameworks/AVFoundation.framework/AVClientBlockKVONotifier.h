/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVClientBlockKVONotifier : NSObject <AVKVOIntrospection, AVKVONotifier> {
    id  _block;
    AVCallbackContextRegistry * _callbackContextRegistry;
    void * _callbackContextToken;
    NSString * _keyPath;
    NSObject * _object;
    NSObject * _observer;
    unsigned long long  _options;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject *observedObject;
@property (readonly) Class superclass;

- (void)callbackDidFireWithChangeDictionary:(id)arg1;
- (void)cancelCallbacks;
- (void)dealloc;
- (void)finalize;
- (id)initWithCallbackContextRegistry:(id)arg1 observer:(id)arg2 object:(id)arg3 keyPath:(id)arg4 options:(unsigned long long)arg5 block:(id)arg6;
- (id)observedObject;
- (void)start;

@end
