/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@interface _VMULibraryLoadObserver : NSObject {
    <VMULibraryLoadDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _serialNotificationsQueue;
    struct _CSTypeRef { 
        unsigned long long _opaque_1; 
        unsigned long long _opaque_2; 
    }  _symbolicator;
}

- (void)dealloc;
- (id)initWithTask:(unsigned int)arg1 taskIsCorpse:(bool)arg2 delegate:(id)arg3;
- (void)stopObserving;

@end
