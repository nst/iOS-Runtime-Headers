/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMBufferObservance : NSObject {
    bool  _enabled;
    bool  _fulfilled;
    id  _predicate;
    bool  _removedOnceEnabled;
}

@property (getter=isEnabled, nonatomic) bool enabled;
@property (getter=isFulfilled, nonatomic) bool fulfilled;
@property (nonatomic, readonly, copy) id predicate;
@property (getter=isRemovedOnceEnabled, nonatomic, readonly) bool removedOnceEnabled;

- (void).cxx_destruct;
- (void)fulfillWithChange:(id)arg1;
- (id)initWithPredicate:(id)arg1 removedOnceEnabled:(bool)arg2;
- (bool)isEnabled;
- (bool)isFulfilled;
- (bool)isRemovedOnceEnabled;
- (id)predicate;
- (void)setEnabled:(bool)arg1;
- (void)setFulfilled:(bool)arg1;
- (void)setupObservanceForBuffer:(id)arg1;
- (bool)shouldBeFulfilledByChange:(id)arg1;
- (void)teardownObservanceForBuffer:(id)arg1;

@end
