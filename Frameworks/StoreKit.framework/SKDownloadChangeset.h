/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@interface SKDownloadChangeset : NSObject <NSCopying> {
    NSNumber * _contentLength;
    NSURL * _contentURL;
    NSNumber * _downloadID;
    NSNumber * _downloadState;
    NSError * _error;
    NSNumber * _progress;
    NSNumber * _timeRemaining;
}

@property (nonatomic, copy) NSNumber *contentLength;
@property (nonatomic, copy) NSURL *contentURL;
@property (nonatomic, copy) NSNumber *downloadID;
@property (nonatomic, copy) NSNumber *downloadState;
@property (nonatomic, copy) NSError *error;
@property (nonatomic, copy) NSNumber *progress;
@property (nonatomic, copy) NSNumber *timeRemaining;

+ (id)changesetWithDownloadID:(id)arg1 state:(long long)arg2;

- (id)contentLength;
- (id)contentURL;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyXPCEncoding;
- (void)dealloc;
- (id)downloadID;
- (id)downloadState;
- (id)error;
- (id)initWithXPCEncoding:(id)arg1;
- (id)progress;
- (void)setContentLength:(id)arg1;
- (void)setContentURL:(id)arg1;
- (void)setDownloadID:(id)arg1;
- (void)setDownloadState:(id)arg1;
- (void)setError:(id)arg1;
- (void)setProgress:(id)arg1;
- (void)setTimeRemaining:(id)arg1;
- (id)timeRemaining;

@end
