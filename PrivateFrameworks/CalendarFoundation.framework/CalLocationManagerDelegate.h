/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

@interface CalLocationManagerDelegate : NSObject <CLLocationManagerDelegate> {
    id  _completionBlock;
    CLLocation * _currentLocation;
    bool  _didFinish;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_source> * _timer;
}

@property (copy) id completionBlock;
@property (retain) CLLocation *currentLocation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property bool didFinish;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)cancel;
- (id)completionBlock;
- (id)currentLocation;
- (void)dealloc;
- (bool)didFinish;
- (void)didFinishLocationLookupWithLocation:(id)arg1 error:(id)arg2;
- (id)initWithQueue:(id)arg1;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateToLocation:(id)arg2 fromLocation:(id)arg3;
- (void)setCompletionBlock:(id)arg1;
- (void)setCurrentLocation:(id)arg1;
- (void)setDidFinish:(bool)arg1;
- (void)startTimer;
- (void)stopTimer;
- (void)timeout;

@end
