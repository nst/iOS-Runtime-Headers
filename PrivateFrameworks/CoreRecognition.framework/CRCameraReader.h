/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreRecognition.framework/CoreRecognition
 */

@interface CRCameraReader : UIViewController <AVCaptureMetadataOutputObjectsDelegate, AVCaptureVideoDataOutputSampleBufferDelegate, CALayerDelegate> {
    UIActivityIndicatorView * _activityIndicator;
    CRAlignmentLayer * _alignmentLayer;
    float  _borderPaddingIDCard;
    CRBoxLayer * _boxLayer;
    CRPollingTimer * _boxLayerHideTimer;
    <CRCameraReaderDelegate> * _callbackDelegate;
    NSString * _cameraMode;
    long long  _cameraPosition;
    NSPointerArray * _captureBuffer;
    unsigned long long  _captureCount;
    bool  _captureMode;
    UIColor * _capturedTextColor;
    NSMutableArray * _cardBlurValues;
    NSMutableDictionary * _cardNumberCounts;
    NSMutableDictionary * _cardholderCounts;
    bool  _codeInverted;
    NSDate * _codePresented;
    double  _configDemoSpeed;
    bool  _configExperimentalMode;
    bool  _configPresentCentered;
    bool  _configUseFastScanning;
    bool  _configUseJPEGForColor;
    NSDictionary * _contactsCache;
    bool  _continousMode;
    struct __CVBuffer { } * _correctedCardBuffer;
    NSMutableArray * _dateCutRects;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    DiagnosticHUDLayer * _diagnosticHUDLayer;
    bool  _didSendEndOrCancel;
    bool  _didSendFindBox;
    CRMLModel * _embossedCardholderModel;
    CRMLModel * _embossedExpirationModel;
    CRMLModel * _embossedNumberModel;
    bool  _enableAltIDCardScan;
    NSMutableDictionary * _expirationDateCounts;
    long long  _exposureMode;
    CRMLModel * _flatPrintedModel;
    long long  _focusMode;
    NSString * _foundCode;
    NSArray * _foundPoints;
    bool  _hidePlacementText;
    unsigned long long  _imagesToCapture;
    bool  _isQRCode;
    struct opaqueCMSampleBuffer { } * _lastBuffer;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _lastFieldFoundTime;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _lastSendFindBox;
    UIColor * _maskColor;
    UIColor * _maskOutlineColor;
    NSMutableArray * _nameCutRects;
    NSArray * _outputObjectTypes;
    NSMutableDictionary * _pinnedFoundInfo;
    UIColor * _placementTextColor;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _pointsFound;
    NSString * _previousCode;
    NSCache * _previousContactMatches;
    bool  _previousIdleState;
    NSObject<OS_dispatch_semaphore> * _processingImage;
    NSObject<OS_dispatch_queue> * _processingQueue;
    bool  _sessionIsStopping;
    <CRCaptureSessionManager> * _sessionManager;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _sessionStarted;
    double  _sessionTimeout;
    bool  _showDiagnosticHUD;
    UITapGestureRecognizer * _tapGestureRecognizer;
    long long  _torchMode;
    long long  _whiteBalanceMode;
}

@property (retain) UIActivityIndicatorView *activityIndicator;
@property (retain) CRAlignmentLayer *alignmentLayer;
@property float borderPaddingIDCard;
@property (retain) CRBoxLayer *boxLayer;
@property (retain) CRPollingTimer *boxLayerHideTimer;
@property <CRCameraReaderDelegate> *callbackDelegate;
@property (copy) NSString *cameraMode;
@property long long cameraPosition;
@property (retain) NSPointerArray *captureBuffer;
@property unsigned long long captureCount;
@property (getter=isCaptureMode) bool captureMode;
@property (nonatomic, copy) UIColor *capturedTextColor;
@property (retain) NSMutableArray *cardBlurValues;
@property (retain) NSMutableDictionary *cardNumberCounts;
@property (retain) NSMutableDictionary *cardholderCounts;
@property bool codeInverted;
@property (retain) NSDate *codePresented;
@property double configDemoSpeed;
@property bool configExperimentalMode;
@property bool configPresentCentered;
@property bool configUseFastScanning;
@property bool configUseJPEGForColor;
@property (retain) NSDictionary *contactsCache;
@property bool continousMode;
@property struct __CVBuffer { }*correctedCardBuffer;
@property (readonly) long long currentCameraIdentifier;
@property (retain) NSMutableArray *dateCutRects;
@property (readonly, copy) NSString *debugDescription;
@property (retain) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, copy) NSString *description;
@property (retain) DiagnosticHUDLayer *diagnosticHUDLayer;
@property bool didSendEndOrCancel;
@property bool didSendFindBox;
@property (retain) CRMLModel *embossedCardholderModel;
@property (retain) CRMLModel *embossedExpirationModel;
@property (retain) CRMLModel *embossedNumberModel;
@property bool enableAltIDCardScan;
@property (retain) NSMutableDictionary *expirationDateCounts;
@property long long exposureMode;
@property (retain) CRMLModel *flatPrintedModel;
@property long long focusMode;
@property (retain) NSString *foundCode;
@property (retain) NSArray *foundPoints;
@property (readonly) unsigned long long hash;
@property bool hidePlacementText;
@property unsigned long long imagesToCapture;
@property bool isQRCode;
@property struct opaqueCMSampleBuffer { }*lastBuffer;
@property struct { long long x1; int x2; unsigned int x3; long long x4; } lastFieldFoundTime;
@property struct { long long x1; int x2; unsigned int x3; long long x4; } lastSendFindBox;
@property (nonatomic, copy) UIColor *maskColor;
@property (nonatomic, copy) UIColor *maskOutlineColor;
@property (retain) NSMutableArray *nameCutRects;
@property (copy) NSArray *outputObjectTypes;
@property (retain) NSMutableDictionary *pinnedFoundInfo;
@property (nonatomic, copy) UIColor *placementTextColor;
@property struct { long long x1; int x2; unsigned int x3; long long x4; } pointsFound;
@property (retain) NSString *previousCode;
@property (retain) NSCache *previousContactMatches;
@property bool previousIdleState;
@property (retain) NSObject<OS_dispatch_semaphore> *processingImage;
@property (retain) NSObject<OS_dispatch_queue> *processingQueue;
@property bool sessionIsStopping;
@property (retain) <CRCaptureSessionManager> *sessionManager;
@property struct { long long x1; int x2; unsigned int x3; long long x4; } sessionStarted;
@property double sessionTimeout;
@property bool showDiagnosticHUD;
@property (readonly) Class superclass;
@property (retain) UITapGestureRecognizer *tapGestureRecognizer;
@property long long torchMode;
@property long long whiteBalanceMode;

+ (id)extractCardImage:(id)arg1 fromPixelBuffer:(struct __CVBuffer { }*)arg2 withCardBuffer:(struct __CVBuffer { }*)arg3 pixelFocalLength:(id)arg4;
+ (id)extractCardImage:(id)arg1 fromPixelBuffer:(struct __CVBuffer { }*)arg2 withCardBuffer:(struct __CVBuffer { }*)arg3 withPoints:(id)arg4 pixelFocalLength:(id)arg5;
+ (id)extractCardImage:(id)arg1 fromPixelBuffer:(struct __CVBuffer { }*)arg2 withCardBuffer:(struct __CVBuffer { }*)arg3 withPoints:(id)arg4 pixelFocalLength:(id)arg5 padding:(float)arg6 inputOrientation:(int)arg7;
+ (id)findCodeInImage:(struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })arg1 maxStage:(unsigned long long)arg2;
+ (id)findCodeInImage:(struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })arg1 maxStage:(unsigned long long)arg2 outputObjectTypes:(id)arg3;
+ (id)findCodeInImage:(struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })arg1 maxStage:(unsigned long long)arg2 roi:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
+ (id)findCodeInImage:(struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })arg1 maxStage:(unsigned long long)arg2 roi:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 outputObjectTypes:(id)arg4;
+ (void)loadFonts;
+ (unsigned long long)supportedCameraCount;
+ (unsigned long long)supportedCameraCountForTypes:(id)arg1;
+ (id)targetRectsForImage:(id)arg1;

- (void).cxx_destruct;
- (id)activityIndicator;
- (void)aetPlacementTextColor:(id)arg1;
- (id)alignmentLayer;
- (void)animatePresentCodeAtFrameTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (float)borderPaddingIDCard;
- (id)boxLayer;
- (id)boxLayerHideTimer;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boxLayerPresentationFrame;
- (id)callbackDelegate;
- (id)cameraMode;
- (long long)cameraPosition;
- (void)cancel;
- (id)captureBuffer;
- (unsigned long long)captureCount;
- (void)captureImage;
- (void)captureImageFromSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)captureOutput:(id)arg1 didOutputMetadataObjects:(id)arg2 fromConnection:(id)arg3;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 fromConnection:(id)arg3;
- (id)capturedTextColor;
- (id)cardBlurValues;
- (id)cardNumberCounts;
- (id)cardholderCounts;
- (bool)codeInverted;
- (id)codePresented;
- (double)configDemoSpeed;
- (bool)configExperimentalMode;
- (bool)configPresentCentered;
- (bool)configUseFastScanning;
- (bool)configUseJPEGForColor;
- (id)contactsCache;
- (bool)continousMode;
- (struct __CVBuffer { }*)correctedCardBuffer;
- (void)createCorrectedCardBuffer;
- (struct __CVBuffer { }*)createFastAccessPixelBufferWithSize:(struct CGSize { double x1; double x2; })arg1 videoFormat:(int)arg2;
- (long long)currentCameraIdentifier;
- (id)currentDeviceID;
- (id)dateCutRects;
- (void)dealloc;
- (id)delegateQueue;
- (id)diagnosticHUDLayer;
- (void)didReceiveMemoryWarning;
- (bool)didSendEndOrCancel;
- (bool)didSendFindBox;
- (id)embossedCardholderModel;
- (id)embossedExpirationModel;
- (id)embossedNumberModel;
- (bool)enableAltIDCardScan;
- (id)expirationDateCounts;
- (long long)exposureMode;
- (id)findCCExpDateInImageEmbossed:(id)arg1;
- (id)findCCNameInImageEmbossed:(id)arg1;
- (id)findCCNumberInImageEmbossed:(id)arg1;
- (id)findCCObjectEmbossed:(id)arg1 inImage:(id)arg2 forRect:(id)arg3;
- (id)findCCObjectsEmbossed:(id)arg1 inImage:(id)arg2 numberRects:(id)arg3 nameRects:(id)arg4 dateRects:(id)arg5;
- (id)findCCResultsInImageFlat:(id)arg1 usingTextFeatures:(id)arg2 invert:(bool)arg3;
- (void)findCodeInSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)findIDObjects:(id)arg1 inPixelBuffer:(struct __CVBuffer { }*)arg2 attachments:(id)arg3 frameTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4;
- (id)findObjects:(id)arg1 inImage:(id)arg2 properties:(id)arg3;
- (void)findObjects:(id)arg1 inPixelBuffer:(struct __CVBuffer { }*)arg2 attachments:(id)arg3 frameTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4;
- (id)findObjectsEmbossed:(id)arg1 inImage:(id)arg2;
- (id)findObjectsFlat:(id)arg1 inImage:(id)arg2 numberRects:(id)arg3 invert:(bool)arg4;
- (void)flashScreenAndPlayCaptureSound;
- (id)flatPrintedModel;
- (long long)focusMode;
- (id)foundCode;
- (id)foundPoints;
- (id)generateStringFromDate:(id)arg1;
- (unsigned long long)getFirstTimeFrameIndexForPinnedField:(id)arg1;
- (void)handleTapFrom:(id)arg1;
- (void)hideBoxLayer;
- (bool)hidePlacementText;
- (unsigned long long)imagesToCapture;
- (id)init;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)isCaptureMode;
- (bool)isQRCode;
- (struct opaqueCMSampleBuffer { }*)lastBuffer;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })lastFieldFoundTime;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })lastSendFindBox;
- (void)loadView;
- (id)maskColor;
- (id)maskOutlineColor;
- (id)nameCutRects;
- (void)orientationDidChange:(id)arg1;
- (id)outputObjectTypes;
- (void)pauseBoxLayerHideTimer;
- (id)pinnedFoundInfo;
- (id)placementTextColor;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })pointsFound;
- (id)previousCode;
- (id)previousContactMatches;
- (bool)previousIdleState;
- (void)primeBoxLayerHideTimerWithFrameTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)processingImage;
- (id)processingQueue;
- (void)releaseCorrectedCardBuffer;
- (void)removeLayerTree;
- (void)reportAcceptedString:(id)arg1 forOutput:(id)arg2 withClientID:(id)arg3;
- (void)sendDidCancel;
- (void)sendDidDisplayMessageStyle:(long long)arg1;
- (void)sendDidEndAnimation;
- (void)sendDidEndWithError:(id)arg1;
- (void)sendDidEndWithErrorDomain:(id)arg1 code:(long long)arg2 userInfo:(id)arg3;
- (void)sendDidEndWithInfo:(id)arg1;
- (void)sendDidFindTarget:(id)arg1 frameTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)sendDidRecognizeNewObjects:(id)arg1;
- (bool)sessionIsStopping;
- (id)sessionManager;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })sessionStarted;
- (double)sessionTimeout;
- (void)setActivityIndicator:(id)arg1;
- (void)setAlignmentLayer:(id)arg1;
- (void)setBorderPaddingIDCard:(float)arg1;
- (void)setBoxLayer:(id)arg1;
- (void)setBoxLayerHideTimer:(id)arg1;
- (void)setCallbackDelegate:(id)arg1;
- (void)setCameraMode:(id)arg1;
- (void)setCameraPosition:(long long)arg1;
- (void)setCaptureBuffer:(id)arg1;
- (void)setCaptureCount:(unsigned long long)arg1;
- (void)setCaptureMode:(bool)arg1;
- (void)setCapturedTextColor:(id)arg1;
- (void)setCardBlurValues:(id)arg1;
- (void)setCardNumberCounts:(id)arg1;
- (void)setCardholderCounts:(id)arg1;
- (void)setCodeInverted:(bool)arg1;
- (void)setCodePresented:(id)arg1;
- (void)setConfigDemoSpeed:(double)arg1;
- (void)setConfigExperimentalMode:(bool)arg1;
- (void)setConfigPresentCentered:(bool)arg1;
- (void)setConfigUseFastScanning:(bool)arg1;
- (void)setConfigUseJPEGForColor:(bool)arg1;
- (void)setContactsCache:(id)arg1;
- (void)setContinousMode:(bool)arg1;
- (void)setCorrectedCardBuffer:(struct __CVBuffer { }*)arg1;
- (void)setDateCutRects:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDelegateQueue:(id)arg1;
- (void)setDiagnosticHUDLayer:(id)arg1;
- (void)setDidSendEndOrCancel:(bool)arg1;
- (void)setDidSendFindBox:(bool)arg1;
- (void)setEmbossedCardholderModel:(id)arg1;
- (void)setEmbossedExpirationModel:(id)arg1;
- (void)setEmbossedNumberModel:(id)arg1;
- (void)setEnableAltIDCardScan:(bool)arg1;
- (void)setExpirationDateCounts:(id)arg1;
- (void)setExposureMode:(long long)arg1;
- (void)setFirstTimeFrameIndexForPinnedField:(id)arg1;
- (void)setFlatPrintedModel:(id)arg1;
- (void)setFocusMode:(long long)arg1;
- (void)setFoundCode:(id)arg1;
- (void)setFoundPoints:(id)arg1;
- (void)setHidePlacementText:(bool)arg1;
- (void)setImagesToCapture:(unsigned long long)arg1;
- (void)setIsQRCode:(bool)arg1;
- (void)setLastBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)setLastFieldFoundTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setLastSendFindBox:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setMaskColor:(id)arg1;
- (void)setMaskOutlineColor:(id)arg1;
- (void)setNameCutRects:(id)arg1;
- (void)setOutputObjectTypes:(id)arg1;
- (void)setPinnedFoundInfo:(id)arg1;
- (void)setPlacementTextColor:(id)arg1;
- (void)setPointsFound:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setPreviousCode:(id)arg1;
- (void)setPreviousContactMatches:(id)arg1;
- (void)setPreviousIdleState:(bool)arg1;
- (void)setProcessingImage:(id)arg1;
- (void)setProcessingQueue:(id)arg1;
- (void)setSessionIsStopping:(bool)arg1;
- (void)setSessionManager:(id)arg1;
- (void)setSessionStarted:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setSessionTimeout:(double)arg1;
- (void)setShowDiagnosticHUD:(bool)arg1;
- (void)setTapGestureRecognizer:(id)arg1;
- (void)setTorchMode:(long long)arg1;
- (void)setWhiteBalanceMode:(long long)arg1;
- (bool)showDiagnosticHUD;
- (void)showMessage:(id)arg1 color:(id)arg2 style:(long long)arg3 duration:(double)arg4;
- (void)start;
- (void)startSession;
- (void)stopSession;
- (void)switchToCamera:(long long)arg1;
- (void)switchToCameraWithDeviceID:(id)arg1;
- (id)tapGestureRecognizer;
- (void)toggleCamera;
- (long long)torchMode;
- (void)updateContactsCache:(id)arg1;
- (void)updatePinnedInfoFrameIndex;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(bool)arg1;
- (long long)whiteBalanceMode;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;

@end
