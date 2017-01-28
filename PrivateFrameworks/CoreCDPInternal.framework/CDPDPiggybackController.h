/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
 */

@interface CDPDPiggybackController : NSObject {
    KCJoiningRequestAccountCircleDelegate * _circleDelegate;
    KCJoiningRequestCircleSession * _circleSession;
    CDPContext * _context;
}

- (void).cxx_destruct;
- (id)_createCircleSession:(id*)arg1;
- (void)_processReply:(id)arg1 completion:(id)arg2;
- (id)_replyContextWithPakeData:(id)arg1;
- (void)_replyToAcceptorWithContext:(id)arg1 completion:(id)arg2;
- (void)_sendInitiatingMessage:(id)arg1;
- (id)initWithContext:(id)arg1;
- (void)resumePiggybackingSession:(id)arg1;

@end
