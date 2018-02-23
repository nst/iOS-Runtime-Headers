/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudPhotoServices.framework/CloudPhotoServices
 */

@interface PHMediaFormatConversionCompositeRequest : PHMediaFormatConversionRequest

- (bool)areAllSubrequestsPreflighted;
- (id)compositeRequestCommonInitWithError:(id*)arg1;
- (void)didFinishProcessing;
- (void)didPreflightSubrequest:(id)arg1;
- (void)enqueueSubrequestsOnConversionManager:(id)arg1;
- (void)enumerateSubrequests:(id /* block */)arg1;
- (bool)isCompositeRequest;
- (void)postProcessSuccessfulCompositeRequest;
- (void)preflightWithConversionManager:(id)arg1;
- (void)propagateRequestOptionsToSubrequests;
- (bool)requiresFormatConversion;
- (void)setupProgress;

@end
