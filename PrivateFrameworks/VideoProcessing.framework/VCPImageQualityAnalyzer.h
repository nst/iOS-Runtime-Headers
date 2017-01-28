/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPImageQualityAnalyzer : VCPImageAnalyzer {
    float  _qualityScore;
}

@property (readonly) float qualityScore;

- (int)analyzePixelBuffer:(struct __CVBuffer { }*)arg1 withTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2 flags:(unsigned long long*)arg3 results:(id*)arg4 cancel:(id)arg5;
- (float)qualityScore;

@end
