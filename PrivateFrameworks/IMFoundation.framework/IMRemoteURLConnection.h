/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@interface IMRemoteURLConnection : NSObject {
    bool  _alwaysForceCellular;
    id /* block */  _block;
    NSString * _bundleIdentifierForDataUsage;
    bool  _cancelled;
    int  _concurrentConnections;
    NSObject<OS_xpc_object> * _connection;
    bool  _disableKeepAlive;
    bool  _forceCellularIfPossible;
    int  _keepAliveCell;
    int  _keepAliveWifi;
    bool  _loading;
    NSURLRequest * _request;
    bool  _requireIDSHost;
    int  _retries;
    bool  _shouldUsePipelining;
}

@property bool alwaysForceCellular;
@property (copy) id /* block */ block;
@property (retain) NSString *bundleIdentifierForDataUsage;
@property int concurrentConnections;
@property bool disableKeepAlive;
@property bool forceCellularIfPossible;
@property int keepAliveCell;
@property int keepAliveWifi;
@property (retain) NSURLRequest *request;
@property bool requireIDSHost;
@property bool shouldUsePipelining;

- (bool)_connect;
- (bool)_disconnect;
- (void)_disconnected;
- (bool)alwaysForceCellular;
- (id /* block */)block;
- (id)bundleIdentifierForDataUsage;
- (void)cancel;
- (int)concurrentConnections;
- (void)dealloc;
- (bool)disableKeepAlive;
- (bool)forceCellularIfPossible;
- (id)initWithURLRequest:(id)arg1 completionBlock:(id /* block */)arg2;
- (int)keepAliveCell;
- (int)keepAliveWifi;
- (void)load;
- (id)request;
- (bool)requireIDSHost;
- (void)setAlwaysForceCellular:(bool)arg1;
- (void)setBlock:(id /* block */)arg1;
- (void)setBundleIdentifierForDataUsage:(id)arg1;
- (void)setConcurrentConnections:(int)arg1;
- (void)setDisableKeepAlive:(bool)arg1;
- (void)setForceCellularIfPossible:(bool)arg1;
- (void)setKeepAliveCell:(int)arg1;
- (void)setKeepAliveWifi:(int)arg1;
- (void)setRequest:(id)arg1;
- (void)setRequireIDSHost:(bool)arg1;
- (void)setShouldUsePipelining:(bool)arg1;
- (bool)shouldUsePipelining;

@end
