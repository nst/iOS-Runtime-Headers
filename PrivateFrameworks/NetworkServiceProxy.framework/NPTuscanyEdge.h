/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
 */

@interface NPTuscanyEdge : NSObject <NSSecureCoding> {
    long long  _currentOnRampIndex;
    bool  _dayPassPending;
    double  _distance;
    unsigned long long  _index;
    NSString * _label;
    NPLocation * _location;
    NSString * _name;
    NSArray * _onRamps;
    id  _probeCompletionHandler;
    NWTCPConnection * _probeConnection;
    NPTunnelTuscanyEndpoint * _probeEndpoint;
    NSObject<OS_dispatch_source> * _probeTimer;
}

@property (readonly) NPTuscanyOnRamp *currentOnRamp;
@property long long currentOnRampIndex;
@property bool dayPassPending;
@property double distance;
@property unsigned long long index;
@property (readonly) NSString *label;
@property (readonly) NPLocation *location;
@property (readonly) NSString *name;
@property (readonly) long long nextOnRampIndex;
@property (readonly) NSArray *onRamps;
@property (copy) id probeCompletionHandler;
@property (retain) NWTCPConnection *probeConnection;
@property (readonly) NPTunnelTuscanyEndpoint *probeEndpoint;
@property (retain) NSObject<OS_dispatch_source> *probeTimer;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)cancelLatencyMeasurement;
- (long long)compareByDistance:(id)arg1;
- (id)currentOnRamp;
- (long long)currentOnRampIndex;
- (bool)dayPassPending;
- (id)description;
- (double)distance;
- (void)encodeWithCoder:(id)arg1;
- (id)getOnRamp:(long long)arg1;
- (unsigned long long)index;
- (id)initWithCoder:(id)arg1;
- (id)initWithLabel:(id)arg1 name:(id)arg2 index:(unsigned long long)arg3 onRamps:(id)arg4 probeEndpoint:(id)arg5 location:(id)arg6;
- (bool)isEqual:(id)arg1;
- (id)label;
- (id)location;
- (void)measureLatency:(id)arg1 withCompletionHandler:(id)arg2;
- (id)name;
- (long long)nextIndexWithCurrentIndex:(long long)arg1 bound:(long long)arg2;
- (long long)nextOnRampIndex;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)onRamps;
- (void)pingPong:(id)arg1;
- (id)probeCompletionHandler;
- (id)probeConnection;
- (id)probeEndpoint;
- (id)probeTimer;
- (void)replaceOnRampAtIndex:(unsigned long long)arg1 withOnRamp:(id)arg2;
- (void)setCurrentOnRampIndex:(long long)arg1;
- (void)setDayPassPending:(bool)arg1;
- (void)setDistance:(double)arg1;
- (void)setIndex:(unsigned long long)arg1;
- (void)setProbeCompletionHandler:(id)arg1;
- (void)setProbeConnection:(id)arg1;
- (void)setProbeTimer:(id)arg1;

@end
