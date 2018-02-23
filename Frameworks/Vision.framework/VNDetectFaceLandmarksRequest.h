/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNDetectFaceLandmarksRequest : VNImageBasedRequest <VNFaceObservationAccepting> {
    NSNumber * _cascadeStepCount;
    bool  _performBlinkDetection;
    bool  _refineLeftEyeRegion;
    bool  _refineMouthRegion;
    bool  _refineRightEyeRegion;
}

@property (nonatomic, retain) NSNumber *cascadeStepCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *inputFaceObservations;
@property (nonatomic) bool performBlinkDetection;
@property (nonatomic) bool refineLeftEyeRegion;
@property (nonatomic) bool refineMouthRegion;
@property (nonatomic) bool refineRightEyeRegion;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_determineFacesToProcessFrom:(id)arg1 outputFacesThatNeedNoProcessing:(id)arg2 outputFacesThatNeedAlignment:(id)arg3 outputFacesThatNeedLandmarks:(id)arg4;
- (void)applyConfigurationOfRequest:(id)arg1;
- (id)cascadeStepCount;
- (long long)dependencyProcessingOrdinality;
- (id)initWithCompletionHandler:(id /* block */)arg1;
- (id)initWithName:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)internalPerformInContext:(id)arg1 error:(id*)arg2;
- (id)observationsCacheKey;
- (bool)performBlinkDetection;
- (bool)refineLeftEyeRegion;
- (bool)refineMouthRegion;
- (bool)refineRightEyeRegion;
- (id)sequencedRequestPreviousObservationsKey;
- (void)setCascadeStepCount:(id)arg1;
- (void)setPerformBlinkDetection:(bool)arg1;
- (void)setRefineLeftEyeRegion:(bool)arg1;
- (void)setRefineMouthRegion:(bool)arg1;
- (void)setRefineRightEyeRegion:(bool)arg1;
- (bool)warmUpRequestPerformer:(id)arg1 error:(id*)arg2;

@end
