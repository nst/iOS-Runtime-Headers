/* Generated by RuntimeBrowser.
 */

@protocol HMDHTTPServerMessageTransportDelegate <NSObject>

@required

- (void)server:(HMDHTTPServerMessageTransport *)arg1 didAddDevice:(HMDHTTPDevice *)arg2;
- (void)server:(void *)arg1 didReceiveMessage:(void *)arg2 fromDevice:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 10: HMDHTTPServerMessageTransport *, NSDictionary *, HMDHTTPDevice *, id, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id, NSDictionary *, NSError *, void*
- (void)server:(HMDHTTPServerMessageTransport *)arg1 didRemoveDevice:(HMDHTTPDevice *)arg2;
- (void)server:(HMDHTTPServerMessageTransport *)arg1 didStopWithError:(NSError *)arg2;

@end
