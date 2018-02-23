/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICStoreFileAssetInfo : NSObject {
    NSURL * _assetURL;
    NSString * _downloadKey;
    long long  _expectedProtectionType;
    NSArray * _fairPlayInfoList;
    NSString * _fileExtension;
    unsigned long long  _fileSize;
    long long  _flavorType;
    NSData * _md5;
    ICStoreFinanceItemMetadata * _metadata;
    NSDictionary * _responseDictionary;
}

@property (nonatomic, copy) NSURL *assetURL;
@property (nonatomic, copy) NSString *downloadKey;
@property (nonatomic) long long expectedProtectionType;
@property (nonatomic, copy) NSArray *fairPlayInfoList;
@property (nonatomic, copy) NSString *fileExtension;
@property (nonatomic) unsigned long long fileSize;
@property (nonatomic) long long flavorType;
@property (nonatomic, copy) NSData *md5;
@property (nonatomic, copy) ICStoreFinanceItemMetadata *metadata;
@property (nonatomic, readonly) long long protectionType;

- (void).cxx_destruct;
- (id)_metadataDictionary;
- (id)assetURL;
- (id)downloadKey;
- (long long)expectedProtectionType;
- (id)fairPlayInfoList;
- (id)fileExtension;
- (unsigned long long)fileSize;
- (long long)flavorType;
- (id)initWithAssetURL:(id)arg1;
- (id)initWithFileAssetResponseDictionary:(id)arg1;
- (id)md5;
- (id)metadata;
- (long long)protectionType;
- (void)setAssetURL:(id)arg1;
- (void)setDownloadKey:(id)arg1;
- (void)setExpectedProtectionType:(long long)arg1;
- (void)setFairPlayInfoList:(id)arg1;
- (void)setFileExtension:(id)arg1;
- (void)setFileSize:(unsigned long long)arg1;
- (void)setFlavorType:(long long)arg1;
- (void)setMd5:(id)arg1;
- (void)setMetadata:(id)arg1;

@end
