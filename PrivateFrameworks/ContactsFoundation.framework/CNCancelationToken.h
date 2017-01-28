/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

@interface CNCancelationToken : NSObject <CNCancelable, CNCancelationToken> {
    NSMutableArray * _cancelationBlocks;
    bool  _isCanceled;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)tokenWithCancelationBlock:(id)arg1;
+ (id)tokenWrappingCancelable:(id)arg1;

- (void).cxx_destruct;
- (void)addCancelable:(id)arg1;
- (void)addCancelationBlock:(id)arg1;
- (void)callCancelationBlocks:(id)arg1;
- (void)cancel;
- (id)init;
- (bool)isCanceled;
- (id)nts_cancel;
- (void)performBlock:(id)arg1;

@end
