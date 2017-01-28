/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPModelLibraryAddToPlaylistChangeRequestOperation : MPAsyncOperation {
    NSOperationQueue * _operationQueue;
    MPModelLibraryAddToPlaylistChangeRequest * _request;
    id  _responseHandler;
}

@property (nonatomic, copy) MPModelLibraryAddToPlaylistChangeRequest *request;
@property (nonatomic, copy) id responseHandler;

- (void).cxx_destruct;
- (void)_finishWithCloudLibraryUpdateForPlaylist:(id)arg1;
- (bool)_isCloudLibraryEnabled;
- (void)execute;
- (id)request;
- (id)responseHandler;
- (void)setRequest:(id)arg1;
- (void)setResponseHandler:(id)arg1;

@end
