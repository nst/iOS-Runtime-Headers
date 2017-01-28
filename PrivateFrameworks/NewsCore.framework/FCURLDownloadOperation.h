/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCURLDownloadOperation : FCNetworkOperation {
    NSURLRequest * _URLRequest;
    NSURLSession * _URLSession;
    id  _downloadCompletionHandler;
    NSURLSessionDownloadTask * _downloadTask;
    NSError * _error;
    NSHTTPURLResponse * _httpResponse;
    NSURL * _location;
    unsigned long long  _requestSize;
    unsigned long long  _responseSize;
    NSDictionary * _timingData;
}

@property (nonatomic, retain) NSURLRequest *URLRequest;
@property (nonatomic, retain) NSURLSession *URLSession;
@property (nonatomic, copy) id downloadCompletionHandler;
@property (retain) NSURLSessionDownloadTask *downloadTask;
@property (nonatomic, retain) NSError *error;
@property (nonatomic, retain) NSHTTPURLResponse *httpResponse;
@property (nonatomic, retain) NSURL *location;
@property (nonatomic) unsigned long long requestSize;
@property (nonatomic) unsigned long long responseSize;
@property (nonatomic, retain) NSDictionary *timingData;

- (void).cxx_destruct;
- (id)URLRequest;
- (id)URLSession;
- (id)downloadCompletionHandler;
- (id)downloadTask;
- (id)error;
- (id)httpResponse;
- (id)location;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (unsigned long long)requestSize;
- (void)resetForRetry;
- (unsigned long long)responseSize;
- (void)setDownloadCompletionHandler:(id)arg1;
- (void)setDownloadTask:(id)arg1;
- (void)setError:(id)arg1;
- (void)setHttpResponse:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setRelativePriority:(long long)arg1;
- (void)setRequestSize:(unsigned long long)arg1;
- (void)setResponseSize:(unsigned long long)arg1;
- (void)setTimingData:(id)arg1;
- (void)setURLRequest:(id)arg1;
- (void)setURLSession:(id)arg1;
- (id)throttleGroup;
- (id)timingData;
- (bool)validateOperation;

@end