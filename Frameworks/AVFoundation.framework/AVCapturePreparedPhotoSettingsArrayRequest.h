/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCapturePreparedPhotoSettingsArrayRequest : NSObject {
    bool  _completed;
    id  _completionHandler;
    NSArray * _photoSettingsArray;
    unsigned long long  _requestID;
}

@property (getter=isCompleted, nonatomic) bool completed;
@property (readonly) id completionHandler;
@property (readonly) NSArray *photoSettingsArray;
@property (readonly) unsigned long long requestID;

+ (id)preparedPhotoSettingsArrayRequestWithArray:(id)arg1 completionHandler:(id)arg2;

- (id)_initWithArray:(id)arg1 completionHandler:(id)arg2;
- (id)completionHandler;
- (void)dealloc;
- (bool)isCompleted;
- (id)photoSettingsArray;
- (unsigned long long)requestID;
- (void)setCompleted:(bool)arg1;

@end
