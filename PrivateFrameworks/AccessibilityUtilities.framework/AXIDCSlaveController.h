/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXIDCSlaveController : AXIDCRemoteController <NSNetServiceDelegate> {
    struct __CFSocket { } * _ipv4socket;
    struct __CFSocket { } * _ipv6socket;
    bool  _isVisible;
    AXDispatchTimer * _resolveTimer;
    id  _searchCompletion;
    double  _searchTimeout;
    NSString * _serviceType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id searchCompletion;
@property (nonatomic) double searchTimeout;
@property (nonatomic, retain) NSString *serviceType;
@property (readonly) Class superclass;

- (void)acceptConnection:(int)arg1;
- (void)closeConnectionWithError:(id)arg1;
- (void)dealloc;
- (id)initWithServiceType:(id)arg1;
- (bool)initialize;
- (bool)isSlave;
- (bool)isVisible;
- (void)netService:(id)arg1 didNotPublish:(id)arg2;
- (void)netServiceDidPublish:(id)arg1;
- (void)netServiceDidStop:(id)arg1;
- (void)netServiceWillPublish:(id)arg1;
- (void)receivedData:(id)arg1;
- (void)resetConnection;
- (void)resolveMasterWithCompletion:(id)arg1;
- (id)searchCompletion;
- (double)searchTimeout;
- (id)serviceType;
- (void)setSearchCompletion:(id)arg1;
- (void)setSearchTimeout:(double)arg1;
- (void)setServiceType:(id)arg1;
- (bool)setVisible:(bool)arg1;
- (bool)shouldAcceptConnection;

@end