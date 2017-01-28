/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPhotoEditImageValues : NSObject {
    bool  _complete;
    NSDictionary * _smartBlackAndWhiteStatistics;
    double  _smartColorAutoSuggestion;
    NSDictionary * _smartColorStatistics;
    double  _smartToneAutoSuggestion;
    NSDictionary * _smartToneStatistics;
}

@property (getter=isComplete) bool complete;
@property (copy) NSDictionary *smartBlackAndWhiteStatistics;
@property double smartColorAutoSuggestion;
@property (copy) NSDictionary *smartColorStatistics;
@property double smartToneAutoSuggestion;
@property (copy) NSDictionary *smartToneStatistics;

- (void).cxx_destruct;
- (bool)isComplete;
- (void)setComplete:(bool)arg1;
- (void)setSmartBlackAndWhiteStatistics:(id)arg1;
- (void)setSmartColorAutoSuggestion:(double)arg1;
- (void)setSmartColorStatistics:(id)arg1;
- (void)setSmartToneAutoSuggestion:(double)arg1;
- (void)setSmartToneStatistics:(id)arg1;
- (id)smartBlackAndWhiteStatistics;
- (double)smartColorAutoSuggestion;
- (id)smartColorStatistics;
- (double)smartToneAutoSuggestion;
- (id)smartToneStatistics;

@end
