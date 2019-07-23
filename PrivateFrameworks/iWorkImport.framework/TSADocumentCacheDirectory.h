/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSADocumentCacheDirectory : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSURL * _cacheURL;
    <TSADocumentCacheDirectoryDelegate> * _delegate;
    TSUManagedTemporaryDirectory * _documentCacheTemporaryDirectory;
    bool  _isTemporary;
}

@property (nonatomic, readonly) <TSADocumentCacheDirectoryDelegate> *delegate;

- (void).cxx_destruct;
- (id)delegate;
- (id)documentCacheURLWithDocumentProperties:(id)arg1 validate:(bool)arg2 create:(bool)arg3;
- (id)init;
- (id)initWithIsTemporary:(bool)arg1 delegate:(id)arg2;
- (id)p_documentCacheIdentifier;
- (bool)p_isValidCacheAtURL:(id)arg1 documentProperties:(id)arg2;
- (id)p_persistentCacheURL;
- (void)p_removeAndInvalidateCacheAtURL:(id)arg1;
- (void)removeAndInvalidateCache;
- (void)updateDocumentCacheProperties;

@end
