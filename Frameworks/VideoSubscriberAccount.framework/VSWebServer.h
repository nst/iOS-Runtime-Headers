/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

@interface VSWebServer : NSObject {
    <VSWebServerDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _privateQueue;
    struct _CFHTTPServer { } * _server;
}

@property (nonatomic) <VSWebServerDelegate> *delegate;
@property (nonatomic, readonly) unsigned short port;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *privateQueue;
@property (nonatomic) struct _CFHTTPServer { }*server;

- (void).cxx_destruct;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)init;
- (id)initWithPort:(unsigned short)arg1;
- (void)invalidate;
- (id)name;
- (unsigned short)port;
- (id)privateQueue;
- (void)resume;
- (struct _CFHTTPServer { }*)server;
- (id)serviceType;
- (void)setDelegate:(id)arg1;
- (void)setPrivateQueue:(id)arg1;
- (void)setServer:(struct _CFHTTPServer { }*)arg1;
- (void)suspend;

@end
