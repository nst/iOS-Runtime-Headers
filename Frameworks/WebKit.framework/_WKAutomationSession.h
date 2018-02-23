/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface _WKAutomationSession : NSObject <WKObject> {
    /* Warning: unhandled struct encoding: '{WeakObjCPtr<id<_WKAutomationSessionDelegate> >="m_weakReference"@}' */ struct WeakObjCPtr<id<_WKAutomationSessionDelegate> > { 
        id m_weakReference; 
    }  _delegate;
    struct ObjectStorage<WebKit::WebAutomationSession> { 
        struct type { 
            unsigned char __lx[512]; 
        } data; 
    }  _session;
}

@property (readonly) /* Warning: unhandled struct encoding: '{Object=^^?@}' */ struct Object { int (**x1)(); id x2; }*_apiObject;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_WKAutomationSessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isPaired, nonatomic, readonly) bool paired;
@property (nonatomic, copy) NSString *sessionIdentifier;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (/* Warning: unhandled struct encoding: '{Object=^^?@}' */ struct Object { int (**x1)(); id x2; }*)_apiObject;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (bool)isPaired;
- (id)sessionIdentifier;
- (void)setDelegate:(id)arg1;
- (void)setSessionIdentifier:(id)arg1;

@end
