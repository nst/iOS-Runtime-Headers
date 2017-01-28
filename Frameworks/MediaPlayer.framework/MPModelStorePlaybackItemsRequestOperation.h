/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPModelStorePlaybackItemsRequestOperation : MPAsyncOperation {
    NSOperationQueue * _operationQueue;
    MPModelStorePlaybackItemsRequest * _request;
    id  _responseHandler;
}

@property (nonatomic, readonly, copy) MPModelStorePlaybackItemsRequest *request;
@property (nonatomic, readonly, copy) id responseHandler;

- (void).cxx_destruct;
- (void)execute;
- (id)initWithRequest:(id)arg1 responseHandler:(id)arg2;
- (id)request;
- (id)responseHandler;

@end