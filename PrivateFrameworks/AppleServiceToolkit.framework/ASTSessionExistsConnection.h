/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/AppleServiceToolkit
 */

@interface ASTSessionExistsConnection : NSObject <ASTConnection> {
    <ASTConnectionStatusDelegate> * _delegate;
    id  _didReceiveResponse;
    long long  _networkDisconnectedRetryCount;
    NSURLRequest * _request;
    bool  _retryOnNetworkDisconnected;
    unsigned long long  _rootOfTrust;
    NSArray * _serialNumbers;
    long long  _state;
    NSString * _ticket;
    double  _timeout;
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
@property (nonatomic, retain) NSArray *serialNumbers;
@property (nonatomic) long long state;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *ticket;
@property (nonatomic) double timeout;

- (void).cxx_destruct;
- (id)delegate;
- (id)didReceiveResponse;
- (id)generateRequest;
- (id)initWithSerialNumbers:(id)arg1 ticket:(id)arg2 timeout:(double)arg3;
- (long long)networkDisconnectedRetryCount;
- (id)request;
- (bool)retryOnNetworkDisconnected;
- (unsigned long long)rootOfTrust;
- (id)serialNumbers;
- (void)setDelegate:(id)arg1;
- (void)setDidReceiveResponse:(id)arg1;
- (void)setNetworkDisconnectedRetryCount:(long long)arg1;
- (void)setRequest:(id)arg1;
- (void)setRetryOnNetworkDisconnected:(bool)arg1;
- (void)setSerialNumbers:(id)arg1;
- (void)setState:(long long)arg1;
- (void)setTicket:(id)arg1;
- (void)setTimeout:(double)arg1;
- (long long)state;
- (id)ticket;
- (double)timeout;

@end
