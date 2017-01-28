/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICDrawingInputController : NSObject {
    struct ICDrawingAzimuthFilter { int (**x1)(); struct ICDrawingInputProvider<ICDrawingInputPoint> {} *x2; bool x3; double x4; long long x5; long long x6; long long x7; struct vector<ICDrawingInputPoint, std::__1::allocator<ICDrawingInputPoint> > { struct { /* ? */ } *x_8_1_1; struct { /* ? */ } *x_8_1_2; struct __compressed_pair<ICDrawingInputPoint *, std::__1::allocator<ICDrawingInputPoint> > { struct { /* ? */ } *x_3_2_1; } x_8_1_3; } x8; bool x9; id x10; } * _azimuthFilter;
    bool  _canSnapToRuler;
    ICDrawingCommandData * _currentCommand;
    long long  _currentInputType;
    <ICDrawingInputControllerDelegate> * _delegate;
    struct vector<ICDrawingInputPoint, std::__1::allocator<ICDrawingInputPoint> > { 
        struct { /* ? */ } *__begin_; 
        struct { /* ? */ } *__end_; 
        struct __compressed_pair<ICDrawingInputPoint *, std::__1::allocator<ICDrawingInputPoint> > { 
            struct { /* ? */ } *__first_; 
        } __end_cap_; 
    }  _drawPoints;
    bool  _drawingEndedButNotFinished;
    NSObject<OS_dispatch_semaphore> * _drawingWaitForFinishSemaphore;
    struct ICDrawingEndCapsFilter { int (**x1)(); struct ICDrawingInputProvider<ICDrawingOutputPoint> {} *x2; bool x3; double x4; double x5; double x6; double x7; } * _endCapFilter;
    struct ICDrawingEndHookFilter { int (**x1)(); struct ICDrawingInputProvider<ICDrawingInputPoint> {} *x2; bool x3; double x4; long long x5; bool x6; } * _endHookFilter;
    bool  _ended;
    double  _eraserIndicatorAlpha;
    /* Warning: unhandled struct encoding: '{ICDrawingEstimatedAltitudeAndAzimuthFilter=^^?^{ICDrawingInputProvider<ICDrawingInputPoint>}BdqqqddddqIqdd@}' */ struct ICDrawingEstimatedAltitudeAndAzimuthFilter { int (**x1)(); struct ICDrawingInputProvider<ICDrawingInputPoint> {} *x2; bool x3; double x4; long long x5; long long x6; long long x7; double x8; double x9; double x10; double x11; long long x12; unsigned int x13; long long x14; double x15; double x16; id x17; } * _estimatedAltitudeAndAzimuthFilter;
    long long  _immutableCount;
    /* Warning: unhandled struct encoding: '{ICDrawingInputProviderInitial=^^?@}' */ struct ICDrawingInputProviderInitial { int (**x1)(); id x2; } * _inputProvider;
    NSObject<OS_dispatch_queue> * _inputQueue;
    double  _inputScale;
    /* Warning: unhandled struct encoding: '{ICDrawingInputSmoother=^^?^{ICDrawingInputProvider<ICDrawingOutputPoint>}Bdqqq{vector<ICDrawingOutputPoint, std::__1::allocator<ICDrawingOutputPoint> >=^{?}^{?}{__compressed_pair<ICDrawingOutputPoint *, std::__1::allocator<ICDrawingOutputPoint> >=^{?}}}{vector<ICDrawingOutputPoint, std::__1::allocator<ICDrawingOutputPoint> >=^{?}^{?}{__compressed_pair<ICDrawingOutputPoint *, std::__1::allocator<ICDrawingOutputPoint> >=^{?}}}d{vector<ICSmoothingPoint, std::__1::allocator<ICSmoothingPoint> >=^{ICSmoothingPoint}^{ICSmoothingPoint}{__compressed_pair<ICSmoothingPoint *, std::__1::allocator<ICSmoothingPoint> >=^{ICSmoothingPoint}}}@}' */ struct ICDrawingInputSmoother { int (**x1)(); struct ICDrawingInputProvider<ICDrawingOutputPoint> {} *x2; bool x3; double x4; long long x5; long long x6; long long x7; struct vector<ICDrawingOutputPoint, std::__1::allocator<ICDrawingOutputPoint> > { struct { /* ? */ } *x_8_1_1; struct { /* ? */ } *x_8_1_2; struct __compressed_pair<ICDrawingOutputPoint *, std::__1::allocator<ICDrawingOutputPoint> > { struct { /* ? */ } *x_3_2_1; } x_8_1_3; } x8; struct vector<ICDrawingOutputPoint, std::__1::allocator<ICDrawingOutputPoint> > { struct { /* ? */ } *x_9_1_1; struct { /* ? */ } *x_9_1_2; struct __compressed_pair<ICDrawingOutputPoint *, std::__1::allocator<ICDrawingOutputPoint> > { struct { /* ? */ } *x_3_2_1; } x_9_1_3; } x9; double x10; struct vector<ICSmoothingPoint, std::__1::allocator<ICSmoothingPoint> > { struct ICSmoothingPoint {} *x_11_1_1; struct ICSmoothingPoint {} *x_11_1_2; struct __compressed_pair<ICSmoothingPoint *, std::__1::allocator<ICSmoothingPoint> > { struct ICSmoothingPoint {} *x_3_2_1; } x_11_1_3; } x11; id x12; } * _inputSmoother;
    /* Warning: unhandled struct encoding: '{ICDrawingInputToOutputFilter=^^?^{ICDrawingInputProvider<ICDrawingInputPoint>}Bdqqq{vector<ICDrawingInputPoint, std::__1::allocator<ICDrawingInputPoint> >=^{?}^{?}{__compressed_pair<ICDrawingInputPoint *, std::__1::allocator<ICDrawingInputPoint> >=^{?}}}{vector<ICDrawingOutputPoint, std::__1::allocator<ICDrawingOutputPoint> >=^{?}^{?}{__compressed_pair<ICDrawingOutputPoint *, std::__1::allocator<ICDrawingOutputPoint> >=^{?}}}@}' */ struct ICDrawingInputToOutputFilter { int (**x1)(); struct ICDrawingInputProvider<ICDrawingInputPoint> {} *x2; bool x3; double x4; long long x5; long long x6; long long x7; struct vector<ICDrawingInputPoint, std::__1::allocator<ICDrawingInputPoint> > { struct { /* ? */ } *x_8_1_1; struct { /* ? */ } *x_8_1_2; struct __compressed_pair<ICDrawingInputPoint *, std::__1::allocator<ICDrawingInputPoint> > { struct { /* ? */ } *x_3_2_1; } x_8_1_3; } x8; struct vector<ICDrawingOutputPoint, std::__1::allocator<ICDrawingOutputPoint> > { struct { /* ? */ } *x_9_1_1; struct { /* ? */ } *x_9_1_2; struct __compressed_pair<ICDrawingOutputPoint *, std::__1::allocator<ICDrawingOutputPoint> > { struct { /* ? */ } *x_3_2_1; } x_9_1_3; } x9; id x10; } * _inputToOutputFilter;
    bool  _isSnappedToRuler;
    bool  _isSnappedToRulerTopSide;
    struct CGPoint { 
        double x; 
        double y; 
    }  _lastPoint;
    NSObject<OS_dispatch_queue> * _outputQueue;
    /* Warning: unhandled struct encoding: '{ICDrawingPixelSmoothingFilter=^^?^{ICDrawingInputProvider<ICDrawingInputPoint>}Bddq@}' */ struct ICDrawingPixelSmoothingFilter { int (**x1)(); struct ICDrawingInputProvider<ICDrawingInputPoint> {} *x2; bool x3; double x4; double x5; long long x6; id x7; } * _pixelSmoothingFilter;
    struct ICDrawingPointReductionFilter { int (**x1)(); struct ICDrawingInputProvider<ICDrawingInputPoint> {} *x2; bool x3; double x4; long long x5; long long x6; long long x7; struct vector<ICDrawingInputPoint, std::__1::allocator<ICDrawingInputPoint> > { struct { /* ? */ } *x_8_1_1; struct { /* ? */ } *x_8_1_2; struct __compressed_pair<ICDrawingInputPoint *, std::__1::allocator<ICDrawingInputPoint> > { struct { /* ? */ } *x_3_2_1; } x_8_1_3; } x8; struct vector<ICDrawingInputPoint, std::__1::allocator<ICDrawingInputPoint> > { struct { /* ? */ } *x_9_1_1; struct { /* ? */ } *x_9_1_2; struct __compressed_pair<ICDrawingInputPoint *, std::__1::allocator<ICDrawingInputPoint> > { struct { /* ? */ } *x_3_2_1; } x_9_1_3; } x9; long long x10; long long x11; long long x12; double x13; double x14; struct vector<std::__1::pair<long, double>, std::__1::allocator<std::__1::pair<long, double> > > { struct pair<long, double> {} *x_15_1_1; struct pair<long, double> {} *x_15_1_2; struct __compressed_pair<std::__1::pair<long, double> *, std::__1::allocator<std::__1::pair<long, double> > > { struct pair<long, double> {} *x_3_2_1; } x_15_1_3; } x15; } * _pointReductionFilter;
    /* Warning: unhandled struct encoding: '{ICDrawingRulerExtremaFilter=^^?^{ICDrawingInputProvider<ICDrawingOutputPoint>}Bdqqq{vector<ICDrawingOutputPoint, std::__1::allocator<ICDrawingOutputPoint> >=^{?}^{?}{__compressed_pair<ICDrawingOutputPoint *, std::__1::allocator<ICDrawingOutputPoint> >=^{?}}}{vector<ICDrawingOutputPoint, std::__1::allocator<ICDrawingOutputPoint> >=^{?}^{?}{__compressed_pair<ICDrawingOutputPoint *, std::__1::allocator<ICDrawingOutputPoint> >=^{?}}}@}' */ struct ICDrawingRulerExtremaFilter { int (**x1)(); struct ICDrawingInputProvider<ICDrawingOutputPoint> {} *x2; bool x3; double x4; long long x5; long long x6; long long x7; struct vector<ICDrawingOutputPoint, std::__1::allocator<ICDrawingOutputPoint> > { struct { /* ? */ } *x_8_1_1; struct { /* ? */ } *x_8_1_2; struct __compressed_pair<ICDrawingOutputPoint *, std::__1::allocator<ICDrawingOutputPoint> > { struct { /* ? */ } *x_3_2_1; } x_8_1_3; } x8; struct vector<ICDrawingOutputPoint, std::__1::allocator<ICDrawingOutputPoint> > { struct { /* ? */ } *x_9_1_1; struct { /* ? */ } *x_9_1_2; struct __compressed_pair<ICDrawingOutputPoint *, std::__1::allocator<ICDrawingOutputPoint> > { struct { /* ? */ } *x_3_2_1; } x_9_1_3; } x9; id x10; } * _rulerExtremaFilter;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _rulerTransform;
    double  _rulerWidth;
    float  _smoothingKernel;
    struct ICDrawingStartHookFilter { int (**x1)(); struct ICDrawingInputProvider<ICDrawingInputPoint> {} *x2; bool x3; double x4; long long x5; bool x6; } * _startHookFilter;
    double  _strokeMaxForce;
    double  _touchSensitivity;
    struct vector<ICDrawingInputPoint, std::__1::allocator<ICDrawingInputPoint> > { 
        struct { /* ? */ } *__begin_; 
        struct { /* ? */ } *__end_; 
        struct __compressed_pair<ICDrawingInputPoint *, std::__1::allocator<ICDrawingInputPoint> > { 
            struct { /* ? */ } *__first_; 
        } __end_cap_; 
    }  _updatedDrawPoints;
    bool  _useRuler;
    struct ICDrawingVelocityCalculationFilter { int (**x1)(); struct ICDrawingInputProvider<ICDrawingInputPoint> {} *x2; bool x3; double x4; bool x5; } * _velocityFilter;
}

@property (nonatomic) struct ICDrawingAzimuthFilter { int (**x1)(); struct ICDrawingInputProvider<ICDrawingInputPoint> {} *x2; bool x3; double x4; long long x5; long long x6; long long x7; /* Warning: unhandled struct encoding: '{vector<ICDrawingInputPoint' */ struct x8; }*azimuthFilter; /* unknown property attribute:  std::__1::allocator<ICDrawingInputPoint> >=^{?}}}B@q} */
@property (nonatomic) bool canSnapToRuler;
@property (nonatomic) struct ICDrawingEndCapsFilter { int (**x1)(); struct ICDrawingInputProvider<ICDrawingOutputPoint> {} *x2; bool x3; double x4; double x5; double x6; double x7; }*endCapFilter;
@property (nonatomic) struct ICDrawingEndHookFilter { int (**x1)(); struct ICDrawingInputProvider<ICDrawingInputPoint> {} *x2; bool x3; double x4; long long x5; bool x6; }*endHookFilter;
@property (nonatomic) double eraserIndicatorAlpha;
@property (nonatomic) /* Warning: unhandled struct encoding: '{ICDrawingEstimatedAltitudeAndAzimuthFilter=^^?^{ICDrawingInputProvider<ICDrawingInputPoint>}BdqqqddddqIqdd@}' */ struct ICDrawingEstimatedAltitudeAndAzimuthFilter { int (**x1)(); struct ICDrawingInputProvider<ICDrawingInputPoint> {} *x2; bool x3; double x4; long long x5; long long x6; long long x7; double x8; double x9; double x10; double x11; long long x12; unsigned int x13; long long x14; double x15; double x16; id x17; }*estimatedAltitudeAndAzimuthFilter;
@property (nonatomic) /* Warning: unhandled struct encoding: '{ICDrawingInputProviderInitial=^^?@}' */ struct ICDrawingInputProviderInitial { int (**x1)(); id x2; }*inputProvider;
@property (nonatomic) struct ICDrawingInputSmoother { int (**x1)(); struct ICDrawingInputProvider<ICDrawingOutputPoint> {} *x2; bool x3; double x4; long long x5; long long x6; long long x7; /* Warning: unhandled struct encoding: '{vector<ICDrawingOutputPoint' */ struct x8; }*inputSmoother; /* unknown property attribute:  std::__1::allocator<ICSmoothingPoint> >=^{ICSmoothingPoint}}}@} */
@property (nonatomic) struct ICDrawingInputToOutputFilter { int (**x1)(); struct ICDrawingInputProvider<ICDrawingInputPoint> {} *x2; bool x3; double x4; long long x5; long long x6; long long x7; /* Warning: unhandled struct encoding: '{vector<ICDrawingInputPoint' */ struct x8; }*inputToOutputFilter; /* unknown property attribute:  std::__1::allocator<ICDrawingOutputPoint> >=^{?}}}@} */
@property bool isSnappedToRuler;
@property (nonatomic) bool isSnappedToRulerTopSide;
@property struct CGPoint { double x1; double x2; } lastPoint;
@property (readonly) bool lastPointIsMasked;
@property (nonatomic) /* Warning: unhandled struct encoding: '{ICDrawingPixelSmoothingFilter=^^?^{ICDrawingInputProvider<ICDrawingInputPoint>}Bddq@}' */ struct ICDrawingPixelSmoothingFilter { int (**x1)(); struct ICDrawingInputProvider<ICDrawingInputPoint> {} *x2; bool x3; double x4; double x5; long long x6; id x7; }*pixelSmoothingFilter;
@property (nonatomic) struct ICDrawingPointReductionFilter { int (**x1)(); struct ICDrawingInputProvider<ICDrawingInputPoint> {} *x2; bool x3; double x4; long long x5; long long x6; long long x7; /* Warning: unhandled struct encoding: '{vector<ICDrawingInputPoint' */ struct x8; }*pointReductionFilter; /* unknown property attribute:  std::__1::allocator<long> >=^q}}} */
@property (nonatomic) struct ICDrawingRulerExtremaFilter { int (**x1)(); struct ICDrawingInputProvider<ICDrawingOutputPoint> {} *x2; bool x3; double x4; long long x5; long long x6; long long x7; /* Warning: unhandled struct encoding: '{vector<ICDrawingOutputPoint' */ struct x8; }*rulerExtremaFilter; /* unknown property attribute:  std::__1::allocator<ICDrawingOutputPoint> >=^{?}}}@} */
@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } rulerTransform;
@property (nonatomic) double rulerWidth;
@property (nonatomic) struct ICDrawingStartHookFilter { int (**x1)(); struct ICDrawingInputProvider<ICDrawingInputPoint> {} *x2; bool x3; double x4; long long x5; bool x6; }*startHookFilter;
@property (nonatomic) double strokeMaxForce;
@property (nonatomic) double touchSensitivity;
@property (nonatomic) bool useRuler;
@property (nonatomic) struct ICDrawingVelocityCalculationFilter { int (**x1)(); struct ICDrawingInputProvider<ICDrawingInputPoint> {} *x2; bool x3; double x4; bool x5; }*velocityFilter;

+ (void)initialize;
+ (void)loadDefaults;
+ (void)setupDefaults;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_drawingAddPoint:(struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; double x4; double x5; double x6; bool x7; long long x8; double x9; bool x10; })arg1;
- (struct ICDrawingAzimuthFilter { int (**x1)(); struct ICDrawingInputProvider<ICDrawingInputPoint> {} *x2; bool x3; double x4; long long x5; long long x6; long long x7; struct vector<ICDrawingInputPoint, std::__1::allocator<ICDrawingInputPoint> > { struct { /* ? */ } *x_8_1_1; struct { /* ? */ } *x_8_1_2; struct __compressed_pair<ICDrawingInputPoint *, std::__1::allocator<ICDrawingInputPoint> > { struct { /* ? */ } *x_3_2_1; } x_8_1_3; } x8; bool x9; id x10; }*)azimuthFilter;
- (double)baseRadiusForCommandType:(unsigned int)arg1 inputType:(long long)arg2;
- (struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; double x4; double x5; double x6; double x7; })baseValuesforCommandType:(unsigned int)arg1 inputType:(long long)arg2;
- (struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; double x4; double x5; double x6; bool x7; long long x8; double x9; bool x10; })calculateVelocityForFirstPoint:(struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; double x4; double x5; double x6; bool x7; long long x8; double x9; bool x10; })arg1;
- (struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; double x4; double x5; double x6; bool x7; long long x8; double x9; bool x10; })calculateVelocityForNewPoint:(struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; double x4; double x5; double x6; bool x7; long long x8; double x9; bool x10; })arg1 previousPoint:(struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; double x4; double x5; double x6; bool x7; long long x8; double x9; bool x10; })arg2;
- (bool)canSnapToRuler;
- (unsigned long long)copyInputUpdatedRangeFromIndex:(unsigned long long)arg1 into:(struct vector<ICDrawingInputPoint, std::__1::allocator<ICDrawingInputPoint> > { struct { /* ? */ } *x1; struct { /* ? */ } *x2; struct __compressed_pair<ICDrawingInputPoint *, std::__1::allocator<ICDrawingInputPoint> > { struct { /* ? */ } *x_3_1_1; } x3; }*)arg2;
- (void)dealloc;
- (double)distanceToRulerCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)drawingAddPoint:(struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; double x4; double x5; double x6; bool x7; long long x8; double x9; bool x10; })arg1;
- (void)drawingAddPoints:(struct vector<ICDrawingInputPoint, std::__1::allocator<ICDrawingInputPoint> > { struct { /* ? */ } *x1; struct { /* ? */ } *x2; struct __compressed_pair<ICDrawingInputPoint *, std::__1::allocator<ICDrawingInputPoint> > { struct { /* ? */ } *x_3_1_1; } x3; })arg1;
- (void)drawingBeganWithCommand:(id)arg1 inputType:(long long)arg2 start:(id)arg3;
- (void)drawingCancelledWithCompletion:(id)arg1;
- (void)drawingEndedWithPreCompletion:(id)arg1 completion:(id)arg2;
- (void)drawingUpdateAllPoints;
- (void)drawingUpdatePoint:(struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; double x4; double x5; double x6; bool x7; long long x8; double x9; bool x10; })arg1;
- (struct ICDrawingEndCapsFilter { int (**x1)(); struct ICDrawingInputProvider<ICDrawingOutputPoint> {} *x2; bool x3; double x4; double x5; double x6; double x7; }*)endCapFilter;
- (struct ICDrawingEndHookFilter { int (**x1)(); struct ICDrawingInputProvider<ICDrawingInputPoint> {} *x2; bool x3; double x4; long long x5; bool x6; }*)endHookFilter;
- (double)eraserIndicatorAlpha;
- (struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; double x4; double x5; double x6; double x7; })eraserOutputPoint:(struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; double x4; double x5; double x6; bool x7; long long x8; double x9; bool x10; })arg1 baseValues:(struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; double x4; double x5; double x6; double x7; })arg2;
- (/* Warning: unhandled struct encoding: '{ICDrawingEstimatedAltitudeAndAzimuthFilter=^^?^{ICDrawingInputProvider<ICDrawingInputPoint>}BdqqqddddqIqdd@}' */ struct ICDrawingEstimatedAltitudeAndAzimuthFilter { int (**x1)(); struct ICDrawingInputProvider<ICDrawingInputPoint> {} *x2; bool x3; double x4; long long x5; long long x6; long long x7; double x8; double x9; double x10; double x11; long long x12; unsigned int x13; long long x14; double x15; double x16; id x17; }*)estimatedAltitudeAndAzimuthFilter;
- (struct vector<ICDrawingInputPoint, std::__1::allocator<ICDrawingInputPoint> > { struct { /* ? */ } *x1; struct { /* ? */ } *x2; struct __compressed_pair<ICDrawingInputPoint *, std::__1::allocator<ICDrawingInputPoint> > { struct { /* ? */ } *x_3_1_1; } x3; }*)getInputUpdatedRangeFromIndex:(inout unsigned long long*)arg1;
- (struct CGPoint { double x1; double x2; })getRulerSnapLineOriginAndTangent:(struct CGPoint { double x1; double x2; }*)arg1 andNormal:(struct CGPoint { double x1; double x2; }*)arg2;
- (struct vector<ICDrawingOutputPoint, std::__1::allocator<ICDrawingOutputPoint> > { struct { /* ? */ } *x1; struct { /* ? */ } *x2; struct __compressed_pair<ICDrawingOutputPoint *, std::__1::allocator<ICDrawingOutputPoint> > { struct { /* ? */ } *x_3_1_1; } x3; }*)getUpdatedRangeFromIndex:(inout unsigned long long*)arg1;
- (void)handleMarkerStartCapPoint:(struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; double x4; double x5; double x6; double x7; }*)arg1 forInput:(struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; double x4; double x5; double x6; bool x7; long long x8; double x9; bool x10; }*)arg2;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (/* Warning: unhandled struct encoding: '{ICDrawingInputProviderInitial=^^?@}' */ struct ICDrawingInputProviderInitial { int (**x1)(); id x2; }*)inputProvider;
- (/* Warning: unhandled struct encoding: '{ICDrawingInputSmoother=^^?^{ICDrawingInputProvider<ICDrawingOutputPoint>}Bdqqq{vector<ICDrawingOutputPoint, std::__1::allocator<ICDrawingOutputPoint> >=^{?}^{?}{__compressed_pair<ICDrawingOutputPoint *, std::__1::allocator<ICDrawingOutputPoint> >=^{?}}}{vector<ICDrawingOutputPoint, std::__1::allocator<ICDrawingOutputPoint> >=^{?}^{?}{__compressed_pair<ICDrawingOutputPoint *, std::__1::allocator<ICDrawingOutputPoint> >=^{?}}}d{vector<ICSmoothingPoint, std::__1::allocator<ICSmoothingPoint> >=^{ICSmoothingPoint}^{ICSmoothingPoint}{__compressed_pair<ICSmoothingPoint *, std::__1::allocator<ICSmoothingPoint> >=^{ICSmoothingPoint}}}@}' */ struct ICDrawingInputSmoother { int (**x1)(); struct ICDrawingInputProvider<ICDrawingOutputPoint> {} *x2; bool x3; double x4; long long x5; long long x6; long long x7; struct vector<ICDrawingOutputPoint, std::__1::allocator<ICDrawingOutputPoint> > { struct { /* ? */ } *x_8_1_1; struct { /* ? */ } *x_8_1_2; struct __compressed_pair<ICDrawingOutputPoint *, std::__1::allocator<ICDrawingOutputPoint> > { struct { /* ? */ } *x_3_2_1; } x_8_1_3; } x8; struct vector<ICDrawingOutputPoint, std::__1::allocator<ICDrawingOutputPoint> > { struct { /* ? */ } *x_9_1_1; struct { /* ? */ } *x_9_1_2; struct __compressed_pair<ICDrawingOutputPoint *, std::__1::allocator<ICDrawingOutputPoint> > { struct { /* ? */ } *x_3_2_1; } x_9_1_3; } x9; double x10; struct vector<ICSmoothingPoint, std::__1::allocator<ICSmoothingPoint> > { struct ICSmoothingPoint {} *x_11_1_1; struct ICSmoothingPoint {} *x_11_1_2; struct __compressed_pair<ICSmoothingPoint *, std::__1::allocator<ICSmoothingPoint> > { struct ICSmoothingPoint {} *x_3_2_1; } x_11_1_3; } x11; id x12; }*)inputSmoother;
- (/* Warning: unhandled struct encoding: '{ICDrawingInputToOutputFilter=^^?^{ICDrawingInputProvider<ICDrawingInputPoint>}Bdqqq{vector<ICDrawingInputPoint, std::__1::allocator<ICDrawingInputPoint> >=^{?}^{?}{__compressed_pair<ICDrawingInputPoint *, std::__1::allocator<ICDrawingInputPoint> >=^{?}}}{vector<ICDrawingOutputPoint, std::__1::allocator<ICDrawingOutputPoint> >=^{?}^{?}{__compressed_pair<ICDrawingOutputPoint *, std::__1::allocator<ICDrawingOutputPoint> >=^{?}}}@}' */ struct ICDrawingInputToOutputFilter { int (**x1)(); struct ICDrawingInputProvider<ICDrawingInputPoint> {} *x2; bool x3; double x4; long long x5; long long x6; long long x7; struct vector<ICDrawingInputPoint, std::__1::allocator<ICDrawingInputPoint> > { struct { /* ? */ } *x_8_1_1; struct { /* ? */ } *x_8_1_2; struct __compressed_pair<ICDrawingInputPoint *, std::__1::allocator<ICDrawingInputPoint> > { struct { /* ? */ } *x_3_2_1; } x_8_1_3; } x8; struct vector<ICDrawingOutputPoint, std::__1::allocator<ICDrawingOutputPoint> > { struct { /* ? */ } *x_9_1_1; struct { /* ? */ } *x_9_1_2; struct __compressed_pair<ICDrawingOutputPoint *, std::__1::allocator<ICDrawingOutputPoint> > { struct { /* ? */ } *x_3_2_1; } x_9_1_3; } x9; id x10; }*)inputToOutputFilter;
- (bool)isSnappedToRuler;
- (bool)isSnappedToRulerTopSide;
- (struct CGPoint { double x1; double x2; })lastPoint;
- (bool)lastPointIsMasked;
- (struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; double x4; double x5; double x6; double x7; })markerOutputPoint:(struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; double x4; double x5; double x6; bool x7; long long x8; double x9; bool x10; })arg1 baseValues:(struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; double x4; double x5; double x6; double x7; })arg2;
- (void)maskToRuler;
- (struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; double x4; double x5; double x6; double x7; })outputCurrentCommandPoint:(struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; double x4; double x5; double x6; bool x7; long long x8; double x9; bool x10; })arg1;
- (struct ICDrawingInputProvider<ICDrawingOutputPoint> { int (**x1)(); }*)outputFilter;
- (struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; double x4; double x5; double x6; double x7; })outputPoint:(struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; double x4; double x5; double x6; bool x7; long long x8; double x9; bool x10; })arg1 forCommandType:(unsigned int)arg2 baseValues:(struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; double x4; double x5; double x6; double x7; })arg3;
- (struct { double x1; double x2; double x3; })parametersforCommandType:(unsigned int)arg1;
- (struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; double x4; double x5; double x6; double x7; })penOutputPoint:(struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; double x4; double x5; double x6; bool x7; long long x8; double x9; bool x10; })arg1 baseValues:(struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; double x4; double x5; double x6; double x7; })arg2;
- (struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; double x4; double x5; double x6; double x7; })pencilOutputPoint:(struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; double x4; double x5; double x6; bool x7; long long x8; double x9; bool x10; })arg1 baseValues:(struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; double x4; double x5; double x6; double x7; })arg2;
- (/* Warning: unhandled struct encoding: '{ICDrawingPixelSmoothingFilter=^^?^{ICDrawingInputProvider<ICDrawingInputPoint>}Bddq@}' */ struct ICDrawingPixelSmoothingFilter { int (**x1)(); struct ICDrawingInputProvider<ICDrawingInputPoint> {} *x2; bool x3; double x4; double x5; long long x6; id x7; }*)pixelSmoothingFilter;
- (struct ICDrawingPointReductionFilter { int (**x1)(); struct ICDrawingInputProvider<ICDrawingInputPoint> {} *x2; bool x3; double x4; long long x5; long long x6; long long x7; struct vector<ICDrawingInputPoint, std::__1::allocator<ICDrawingInputPoint> > { struct { /* ? */ } *x_8_1_1; struct { /* ? */ } *x_8_1_2; struct __compressed_pair<ICDrawingInputPoint *, std::__1::allocator<ICDrawingInputPoint> > { struct { /* ? */ } *x_3_2_1; } x_8_1_3; } x8; struct vector<ICDrawingInputPoint, std::__1::allocator<ICDrawingInputPoint> > { struct { /* ? */ } *x_9_1_1; struct { /* ? */ } *x_9_1_2; struct __compressed_pair<ICDrawingInputPoint *, std::__1::allocator<ICDrawingInputPoint> > { struct { /* ? */ } *x_3_2_1; } x_9_1_3; } x9; long long x10; long long x11; long long x12; double x13; double x14; struct vector<std::__1::pair<long, double>, std::__1::allocator<std::__1::pair<long, double> > > { struct pair<long, double> {} *x_15_1_1; struct pair<long, double> {} *x_15_1_2; struct __compressed_pair<std::__1::pair<long, double> *, std::__1::allocator<std::__1::pair<long, double> > > { struct pair<long, double> {} *x_3_2_1; } x_15_1_3; } x15; }*)pointReductionFilter;
- (void)removePredictedTouches;
- (void)reset;
- (/* Warning: unhandled struct encoding: '{ICDrawingRulerExtremaFilter=^^?^{ICDrawingInputProvider<ICDrawingOutputPoint>}Bdqqq{vector<ICDrawingOutputPoint, std::__1::allocator<ICDrawingOutputPoint> >=^{?}^{?}{__compressed_pair<ICDrawingOutputPoint *, std::__1::allocator<ICDrawingOutputPoint> >=^{?}}}{vector<ICDrawingOutputPoint, std::__1::allocator<ICDrawingOutputPoint> >=^{?}^{?}{__compressed_pair<ICDrawingOutputPoint *, std::__1::allocator<ICDrawingOutputPoint> >=^{?}}}@}' */ struct ICDrawingRulerExtremaFilter { int (**x1)(); struct ICDrawingInputProvider<ICDrawingOutputPoint> {} *x2; bool x3; double x4; long long x5; long long x6; long long x7; struct vector<ICDrawingOutputPoint, std::__1::allocator<ICDrawingOutputPoint> > { struct { /* ? */ } *x_8_1_1; struct { /* ? */ } *x_8_1_2; struct __compressed_pair<ICDrawingOutputPoint *, std::__1::allocator<ICDrawingOutputPoint> > { struct { /* ? */ } *x_3_2_1; } x_8_1_3; } x8; struct vector<ICDrawingOutputPoint, std::__1::allocator<ICDrawingOutputPoint> > { struct { /* ? */ } *x_9_1_1; struct { /* ? */ } *x_9_1_2; struct __compressed_pair<ICDrawingOutputPoint *, std::__1::allocator<ICDrawingOutputPoint> > { struct { /* ? */ } *x_3_2_1; } x_9_1_3; } x9; id x10; }*)rulerExtremaFilter;
- (double)rulerOffset;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })rulerTransform;
- (double)rulerWidth;
- (void)setAzimuthFilter:(struct ICDrawingAzimuthFilter { int (**x1)(); struct ICDrawingInputProvider<ICDrawingInputPoint> {} *x2; bool x3; double x4; long long x5; long long x6; long long x7; struct vector<ICDrawingInputPoint, std::__1::allocator<ICDrawingInputPoint> > { struct { /* ? */ } *x_8_1_1; struct { /* ? */ } *x_8_1_2; struct __compressed_pair<ICDrawingInputPoint *, std::__1::allocator<ICDrawingInputPoint> > { struct { /* ? */ } *x_3_2_1; } x_8_1_3; } x8; bool x9; id x10; }*)arg1;
- (void)setCanSnapToRuler:(bool)arg1;
- (void)setEndCapFilter:(struct ICDrawingEndCapsFilter { int (**x1)(); struct ICDrawingInputProvider<ICDrawingOutputPoint> {} *x2; bool x3; double x4; double x5; double x6; double x7; }*)arg1;
- (void)setEndHookFilter:(struct ICDrawingEndHookFilter { int (**x1)(); struct ICDrawingInputProvider<ICDrawingInputPoint> {} *x2; bool x3; double x4; long long x5; bool x6; }*)arg1;
- (void)setEraserIndicatorAlpha:(double)arg1;
- (void)setEstimatedAltitudeAndAzimuthFilter:(/* Warning: unhandled struct encoding: '{ICDrawingEstimatedAltitudeAndAzimuthFilter=^^?^{ICDrawingInputProvider<ICDrawingInputPoint>}BdqqqddddqIqdd@}' */ struct ICDrawingEstimatedAltitudeAndAzimuthFilter { int (**x1)(); struct ICDrawingInputProvider<ICDrawingInputPoint> {} *x2; bool x3; double x4; long long x5; long long x6; long long x7; double x8; double x9; double x10; double x11; long long x12; unsigned int x13; long long x14; double x15; double x16; id x17; }*)arg1;
- (void)setInputProvider:(/* Warning: unhandled struct encoding: '{ICDrawingInputProviderInitial=^^?@}' */ struct ICDrawingInputProviderInitial { int (**x1)(); id x2; }*)arg1;
- (void)setInputScale:(double)arg1;
- (void)setInputSmoother:(/* Warning: unhandled struct encoding: '{ICDrawingInputSmoother=^^?^{ICDrawingInputProvider<ICDrawingOutputPoint>}Bdqqq{vector<ICDrawingOutputPoint, std::__1::allocator<ICDrawingOutputPoint> >=^{?}^{?}{__compressed_pair<ICDrawingOutputPoint *, std::__1::allocator<ICDrawingOutputPoint> >=^{?}}}{vector<ICDrawingOutputPoint, std::__1::allocator<ICDrawingOutputPoint> >=^{?}^{?}{__compressed_pair<ICDrawingOutputPoint *, std::__1::allocator<ICDrawingOutputPoint> >=^{?}}}d{vector<ICSmoothingPoint, std::__1::allocator<ICSmoothingPoint> >=^{ICSmoothingPoint}^{ICSmoothingPoint}{__compressed_pair<ICSmoothingPoint *, std::__1::allocator<ICSmoothingPoint> >=^{ICSmoothingPoint}}}@}' */ struct ICDrawingInputSmoother { int (**x1)(); struct ICDrawingInputProvider<ICDrawingOutputPoint> {} *x2; bool x3; double x4; long long x5; long long x6; long long x7; struct vector<ICDrawingOutputPoint, std::__1::allocator<ICDrawingOutputPoint> > { struct { /* ? */ } *x_8_1_1; struct { /* ? */ } *x_8_1_2; struct __compressed_pair<ICDrawingOutputPoint *, std::__1::allocator<ICDrawingOutputPoint> > { struct { /* ? */ } *x_3_2_1; } x_8_1_3; } x8; struct vector<ICDrawingOutputPoint, std::__1::allocator<ICDrawingOutputPoint> > { struct { /* ? */ } *x_9_1_1; struct { /* ? */ } *x_9_1_2; struct __compressed_pair<ICDrawingOutputPoint *, std::__1::allocator<ICDrawingOutputPoint> > { struct { /* ? */ } *x_3_2_1; } x_9_1_3; } x9; double x10; struct vector<ICSmoothingPoint, std::__1::allocator<ICSmoothingPoint> > { struct ICSmoothingPoint {} *x_11_1_1; struct ICSmoothingPoint {} *x_11_1_2; struct __compressed_pair<ICSmoothingPoint *, std::__1::allocator<ICSmoothingPoint> > { struct ICSmoothingPoint {} *x_3_2_1; } x_11_1_3; } x11; id x12; }*)arg1;
- (void)setInputToOutputFilter:(/* Warning: unhandled struct encoding: '{ICDrawingInputToOutputFilter=^^?^{ICDrawingInputProvider<ICDrawingInputPoint>}Bdqqq{vector<ICDrawingInputPoint, std::__1::allocator<ICDrawingInputPoint> >=^{?}^{?}{__compressed_pair<ICDrawingInputPoint *, std::__1::allocator<ICDrawingInputPoint> >=^{?}}}{vector<ICDrawingOutputPoint, std::__1::allocator<ICDrawingOutputPoint> >=^{?}^{?}{__compressed_pair<ICDrawingOutputPoint *, std::__1::allocator<ICDrawingOutputPoint> >=^{?}}}@}' */ struct ICDrawingInputToOutputFilter { int (**x1)(); struct ICDrawingInputProvider<ICDrawingInputPoint> {} *x2; bool x3; double x4; long long x5; long long x6; long long x7; struct vector<ICDrawingInputPoint, std::__1::allocator<ICDrawingInputPoint> > { struct { /* ? */ } *x_8_1_1; struct { /* ? */ } *x_8_1_2; struct __compressed_pair<ICDrawingInputPoint *, std::__1::allocator<ICDrawingInputPoint> > { struct { /* ? */ } *x_3_2_1; } x_8_1_3; } x8; struct vector<ICDrawingOutputPoint, std::__1::allocator<ICDrawingOutputPoint> > { struct { /* ? */ } *x_9_1_1; struct { /* ? */ } *x_9_1_2; struct __compressed_pair<ICDrawingOutputPoint *, std::__1::allocator<ICDrawingOutputPoint> > { struct { /* ? */ } *x_3_2_1; } x_9_1_3; } x9; id x10; }*)arg1;
- (void)setIsSnappedToRuler:(bool)arg1;
- (void)setIsSnappedToRulerTopSide:(bool)arg1;
- (void)setLastPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setPixelSmoothingFilter:(/* Warning: unhandled struct encoding: '{ICDrawingPixelSmoothingFilter=^^?^{ICDrawingInputProvider<ICDrawingInputPoint>}Bddq@}' */ struct ICDrawingPixelSmoothingFilter { int (**x1)(); struct ICDrawingInputProvider<ICDrawingInputPoint> {} *x2; bool x3; double x4; double x5; long long x6; id x7; }*)arg1;
- (void)setPointReductionFilter:(struct ICDrawingPointReductionFilter { int (**x1)(); struct ICDrawingInputProvider<ICDrawingInputPoint> {} *x2; bool x3; double x4; long long x5; long long x6; long long x7; struct vector<ICDrawingInputPoint, std::__1::allocator<ICDrawingInputPoint> > { struct { /* ? */ } *x_8_1_1; struct { /* ? */ } *x_8_1_2; struct __compressed_pair<ICDrawingInputPoint *, std::__1::allocator<ICDrawingInputPoint> > { struct { /* ? */ } *x_3_2_1; } x_8_1_3; } x8; struct vector<ICDrawingInputPoint, std::__1::allocator<ICDrawingInputPoint> > { struct { /* ? */ } *x_9_1_1; struct { /* ? */ } *x_9_1_2; struct __compressed_pair<ICDrawingInputPoint *, std::__1::allocator<ICDrawingInputPoint> > { struct { /* ? */ } *x_3_2_1; } x_9_1_3; } x9; long long x10; long long x11; long long x12; double x13; double x14; struct vector<std::__1::pair<long, double>, std::__1::allocator<std::__1::pair<long, double> > > { struct pair<long, double> {} *x_15_1_1; struct pair<long, double> {} *x_15_1_2; struct __compressed_pair<std::__1::pair<long, double> *, std::__1::allocator<std::__1::pair<long, double> > > { struct pair<long, double> {} *x_3_2_1; } x_15_1_3; } x15; }*)arg1;
- (void)setRulerExtremaFilter:(/* Warning: unhandled struct encoding: '{ICDrawingRulerExtremaFilter=^^?^{ICDrawingInputProvider<ICDrawingOutputPoint>}Bdqqq{vector<ICDrawingOutputPoint, std::__1::allocator<ICDrawingOutputPoint> >=^{?}^{?}{__compressed_pair<ICDrawingOutputPoint *, std::__1::allocator<ICDrawingOutputPoint> >=^{?}}}{vector<ICDrawingOutputPoint, std::__1::allocator<ICDrawingOutputPoint> >=^{?}^{?}{__compressed_pair<ICDrawingOutputPoint *, std::__1::allocator<ICDrawingOutputPoint> >=^{?}}}@}' */ struct ICDrawingRulerExtremaFilter { int (**x1)(); struct ICDrawingInputProvider<ICDrawingOutputPoint> {} *x2; bool x3; double x4; long long x5; long long x6; long long x7; struct vector<ICDrawingOutputPoint, std::__1::allocator<ICDrawingOutputPoint> > { struct { /* ? */ } *x_8_1_1; struct { /* ? */ } *x_8_1_2; struct __compressed_pair<ICDrawingOutputPoint *, std::__1::allocator<ICDrawingOutputPoint> > { struct { /* ? */ } *x_3_2_1; } x_8_1_3; } x8; struct vector<ICDrawingOutputPoint, std::__1::allocator<ICDrawingOutputPoint> > { struct { /* ? */ } *x_9_1_1; struct { /* ? */ } *x_9_1_2; struct __compressed_pair<ICDrawingOutputPoint *, std::__1::allocator<ICDrawingOutputPoint> > { struct { /* ? */ } *x_3_2_1; } x_9_1_3; } x9; id x10; }*)arg1;
- (void)setRulerTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setRulerWidth:(double)arg1;
- (void)setStartHookFilter:(struct ICDrawingStartHookFilter { int (**x1)(); struct ICDrawingInputProvider<ICDrawingInputPoint> {} *x2; bool x3; double x4; long long x5; bool x6; }*)arg1;
- (void)setStrokeMaxForce:(double)arg1;
- (void)setTouchSensitivity:(double)arg1;
- (void)setUseRuler:(bool)arg1;
- (void)setVelocityFilter:(struct ICDrawingVelocityCalculationFilter { int (**x1)(); struct ICDrawingInputProvider<ICDrawingInputPoint> {} *x2; bool x3; double x4; bool x5; }*)arg1;
- (bool)shouldSnapPointToRuler:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })snapPointToRuler:(struct CGPoint { double x1; double x2; })arg1;
- (void)snapToRuler;
- (void)snapToRuler:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1 width:(double)arg2;
- (struct ICDrawingStartHookFilter { int (**x1)(); struct ICDrawingInputProvider<ICDrawingInputPoint> {} *x2; bool x3; double x4; long long x5; bool x6; }*)startHookFilter;
- (double)strokeMaxForce;
- (double)touchSensitivity;
- (void)updateImmutableCount;
- (void)updateRulerSnapping;
- (bool)useRuler;
- (struct ICDrawingVelocityCalculationFilter { int (**x1)(); struct ICDrawingInputProvider<ICDrawingInputPoint> {} *x2; bool x3; double x4; bool x5; }*)velocityFilter;

@end
