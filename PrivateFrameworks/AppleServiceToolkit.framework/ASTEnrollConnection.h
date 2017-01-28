/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/AppleServiceToolkit
 */

@interface ASTEnrollConnection : NSObject <ASTConnection> {
    <ASTConnectionStatusDelegate> * _delegate;
    id  _didReceiveResponse;
    long long  _networkDisconnectedRetryCount;
    NSURLRequest * _request;
    bool  _retryOnNetworkDisconnected;
    unsigned long long  _rootOfTrust;
    NSString * _serialNumber;
    long long  _state;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ASTConnectionStatusDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id didReceiveResponse;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long networkDisconnectedRetryCount;
@property (nonatomic, retain) NSURLRequest *request;
@property (nonatomic) bool retryOnNetworkDisconnected;
@property (nonatomic, readonly) unsigned long long rootOfTrust;
@property (nonatomic, retain) NSString *serialNumber;
@property (nonatomic) long long state;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)delegate;
- (id)didReceiveResponse;
- (id)generateRequest;
- (id)initWithSerialNumber:(id)arg1;
- (long long)networkDisconnectedRetryCount;
- (id)request;
- (bool)retryOnNetworkDisconnected;
- (unsigned long long)rootOfTrust;
- (id)serialNumber;
- (void)setDelegate:(id)arg1;
- (void)setDidReceiveResponse:(id)arg1;
- (void)setNetworkDisconnectedRetryCount:(long long)arg1;
- (void)setRequest:(id)arg1;
- (void)setRetryOnNetworkDisconnected:(bool)arg1;
- (void)setSerialNumber:(id)arg1;
- (void)setState:(long long)arg1;
- (long long)state;

@end