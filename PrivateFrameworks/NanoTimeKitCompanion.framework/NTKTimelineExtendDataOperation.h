/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKTimelineExtendDataOperation : NTKTimelineDataOperation {
    NSDate * _boundaryDate;
    bool  _extendsLeft;
    id  _handler;
}

@property (nonatomic, copy) id handler;

- (void).cxx_destruct;
- (void)_cancel;
- (void)_extendLeft;
- (void)_extendRight;
- (void)_invokeHandlerWithEntries:(id)arg1;
- (void)_start;
- (id)handler;
- (void)setExtendsLeftFromDate:(id)arg1;
- (void)setExtendsRightFromDate:(id)arg1;
- (void)setHandler:(id)arg1;

@end
