/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

@interface VSWebServerResponse : NSObject {
    struct _CFHTTPServerResponse { } * _response;
}

@property (nonatomic, readonly) struct _CFHTTPServerResponse { }*response;

+ (id)responseToRequest:(id)arg1 withCode:(long long)arg2 headers:(id)arg3 bodyData:(id)arg4;
+ (id)responseToRequest:(id)arg1 withCode:(long long)arg2 headers:(id)arg3 bodyStream:(id)arg4;

- (id)connection;
- (id)description;
- (void)enqueue;
- (id)initWithResponse:(struct _CFHTTPServerResponse { }*)arg1;
- (struct __CFHTTPMessage { }*)message;
- (id)request;
- (struct _CFHTTPServerResponse { }*)response;

@end
