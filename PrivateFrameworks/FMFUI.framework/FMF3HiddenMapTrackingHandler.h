/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FMFUI.framework/FMFUI
 */

@interface FMF3HiddenMapTrackingHandler : NSObject <MKMapViewDelegate> {
    <FMF3HiddenMapTrackingHandlerDelegate> * _delegate;
    MKMapView * _hiddenMapView;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <FMF3HiddenMapTrackingHandlerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MKMapView *hiddenMapView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)delegate;
- (id)hiddenMapView;
- (id)initWithView:(id)arg1;
- (void)mapView:(id)arg1 didChangeUserTrackingMode:(long long)arg2 animated:(bool)arg3;
- (void)setDelegate:(id)arg1;
- (void)setHiddenMapView:(id)arg1;

@end
