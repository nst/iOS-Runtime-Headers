/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface _AXAssertionServer : NSObject {
    id  _assertionWasAcquiredHandler;
    id  _assertionWasReleasedHandler;
    NSMutableDictionary * _healdAssertionMap;
}

@property (nonatomic, copy) id assertionWasAcquiredHandler;
@property (nonatomic, copy) id assertionWasReleasedHandler;
@property (nonatomic, retain) NSMutableDictionary *healdAssertionMap;

- (void)addHeldAssertionOfType:(id)arg1 byClient:(id)arg2;
- (id)assertionWasAcquiredHandler;
- (id)assertionWasReleasedHandler;
- (void)dealloc;
- (id)description;
- (id)healdAssertionMap;
- (id)init;
- (void)removeHeldAssertionOfType:(id)arg1 byClient:(id)arg2;
- (void)setAssertionWasAcquiredHandler:(id)arg1;
- (void)setAssertionWasReleasedHandler:(id)arg1;
- (void)setHealdAssertionMap:(id)arg1;

@end
