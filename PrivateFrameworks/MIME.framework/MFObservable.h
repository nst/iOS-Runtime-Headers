/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@interface MFObservable : NSObject

+ (id)concatenate:(id)arg1;
+ (id)emptyObservable;
+ (id)neverObservable;
+ (id)observableObserver;
+ (id)observableOnDefaultNotificationCenterWithName:(id)arg1 object:(id)arg2;
+ (id)observableOnNotificationCenter:(id)arg1 name:(id)arg2 object:(id)arg3;
+ (id)observableWithBlock:(id)arg1;
+ (id)observableWithError:(id)arg1;
+ (id)observableWithFuture:(id)arg1;
+ (id)observableWithInitialState:(id)arg1 condition:(id)arg2 nextState:(id)arg3 resultSelector:(id)arg4 delay:(id)arg5 scheduler:(id)arg6;
+ (id)observableWithInitialState:(id)arg1 condition:(id)arg2 nextState:(id)arg3 resultSelector:(id)arg4 scheduler:(id)arg5;
+ (id)observableWithResult:(id)arg1;
+ (id)observableWithResults:(id)arg1;
+ (id)observableWithResults:(id)arg1 scheduler:(id)arg2;
+ (id)observableWithTimeInterval:(double)arg1 scheduler:(id)arg2;

- (id)allObjects:(id*)arg1;
- (id)distinctUntilChanged;
- (id)doOnCancel:(id)arg1;
- (id)doOnCompletion:(id)arg1;
- (id)doOnError:(id)arg1;
- (id)doOnNext:(id)arg1;
- (id)doOnSubscribe:(id)arg1;
- (id)doOnTerminate:(id)arg1;
- (id)filter:(id)arg1;
- (id)map:(id)arg1;
- (id)observeOn:(id)arg1;
- (id)publish;
- (id)replay;
- (id)replay:(unsigned long long)arg1;
- (id)sampleWithObservable:(id)arg1;
- (id)sampleWithTimeInterval:(double)arg1;
- (id)sampleWithTimeInterval:(double)arg1 scheduler:(id)arg2;
- (id)startWith:(id)arg1;
- (id)startWith:(id)arg1 scheduler:(id)arg2;
- (id)subscribeOn:(id)arg1;

@end
