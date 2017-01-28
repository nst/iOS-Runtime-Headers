/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPModelLibraryHasPurchasesRequestOperation : MPAsyncOperation {
    MPModelLibraryHasPurchasesRequest * _request;
    id  _responseHandler;
}

@property (nonatomic, copy) MPModelLibraryHasPurchasesRequest *request;
@property (nonatomic, copy) id responseHandler;

- (void).cxx_destruct;
- (void)execute;
- (id)request;
- (id)responseHandler;
- (void)setRequest:(id)arg1;
- (void)setResponseHandler:(id)arg1;

@end