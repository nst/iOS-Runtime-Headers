/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKPrideLinearQuad : NTKPrideSplinesQuad {
    float  _aspectRatio;
    /* Warning: Unrecognized filer type: ']' using 'void*' */ void* _controlPointsDampingCoefficients;
    float  _currentFade;
    unsigned long long  _currentStyle;
    float  _displayMode;
    bool  _fading;
    float  _globalTouchTime;
    bool  _paused;
    struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[12]; void*x2[12]; } * _perSplineData;
    float  _vignetteAmount;
}

- (void)_computePigeonLocationsForPigeons:(int)arg1 inHoles:(int)arg2 pigeonIndices:(int**)arg3 pigeonToHole:(int**)arg4 pigeonsPerHole:(int**)arg5;
- (void)_generateControlPointDampingCoefficients;
- (void)_generateSplineColors;
- (void)_generateSplinePositions;
- (float)ampltiudeForControlPoint:(int)arg1 ofSpline:(int)arg2;
- (void)applyTransitionFromBandedToFabricWithFraction:(double)arg1;
- (void)clearWaves;
- (float)computeAmplitudeForControlPoint:(int)arg1 inSpline:(int)arg2 atTime:(double)arg3;
- (void)dealloc;
- (void)generateControlPointsForSpline:(int)arg1;
- (id)generateVignetteTextureData;
- (id /* block */)getNTKPrideSplineDefinitionFiller;
- (float)globalAmplitudeForTime:(double)arg1;
- (void)handleOrdinaryScreenWake;
- (void)handleScreenOff;
- (id)initWithDevice:(id)arg1;
- (void)initializePerSplineData;
- (float)interpolationStepSizeForSpline:(int)arg1;
- (struct { }*)noiseConfiguration;
- (void)noiseSamplePositionForControlPoint:(int)arg1 inSpline:(int)arg2;
- (int)numControlPointsPerSpline;
- (int)numSplines;
- (int)numVertsForSpline:(int)arg1;
- (void)performWristRaiseAnimation;
- (bool)preSemaphoreComputeForTime:(double)arg1;
- (void)prepareWristRaiseAnimation;
- (void)processSpline:(int)arg1;
- (void)setAmplitude:(float)arg1 forControlPoint:(int)arg2 ofSpline:(int)arg3;
- (void)setBandedMode;
- (void)setFabricMode;
- (void)setNoise:(void *)arg1 forControlPoint:(void *)arg2 inSpline:(void *)arg3; // needs 3 arg types, found 2: int, int
- (bool)shouldForceRender;
- (void)startWavesAtTime:(double)arg1;
- (id)vertexShaderFromLibrary:(id)arg1;
- (float)vignetteAmount;

@end
