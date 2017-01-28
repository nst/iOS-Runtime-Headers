/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface _GEOLocationShifterLocalProxy : NSObject <_GEOLocationShifterProxy> {
    _GEOLocationShiftRequester * _requester;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)init;
- (void)shiftCoordinate:(struct { double x1; double x2; })arg1 completionHandler:(id)arg2;

@end
