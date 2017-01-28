/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

@interface RMSDAAPRequestManager : NSObject {
    <RMSDAAPRequestManagerDelegate> * _delegate;
    RMSFairPlaySession * _fairPlaySession;
    NSString * _homeSharingGroupKey;
    NSString * _hostName;
    NSString * _pairingGUID;
    long long  _port;
    long long  _sessionIdentifier;
    NSURLSession * _urlSession;
}

@property (nonatomic) <RMSDAAPRequestManagerDelegate> *delegate;
@property (nonatomic, retain) RMSFairPlaySession *fairPlaySession;
@property (nonatomic, copy) NSString *homeSharingGroupKey;
@property (nonatomic, copy) NSString *hostName;
@property (nonatomic, copy) NSString *pairingGUID;
@property (nonatomic) long long port;
@property (nonatomic) long long sessionIdentifier;

- (void).cxx_destruct;
- (id)delegate;
- (id)fairPlaySession;
- (id)homeSharingGroupKey;
- (id)hostName;
- (id)init;
- (id)pairingGUID;
- (long long)port;
- (id)requestControlCommand:(id)arg1 text:(id)arg2 promptRevision:(long long)arg3 completionHandler:(id)arg4;
- (id)requestWithPath:(id)arg1 method:(id)arg2 postData:(id)arg3 queryArgs:(id)arg4 completionHandler:(id)arg5;
- (long long)sessionIdentifier;
- (void)setDelegate:(id)arg1;
- (void)setFairPlaySession:(id)arg1;
- (void)setHomeSharingGroupKey:(id)arg1;
- (void)setHostName:(id)arg1;
- (void)setPairingGUID:(id)arg1;
- (void)setPort:(long long)arg1;
- (void)setSessionIdentifier:(long long)arg1;

@end
