/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKAsset : NSObject <CKRecordValue, NSSecureCoding> {
    NSString * _UUID;
    long long  _arrayIndex;
    NSData * _assetContent;
    NSData * _assetKey;
    NSData * _authRequest;
    NSString * _authToken;
    NSURL * _contentBaseURL;
    NSNumber * _deviceID;
    NSString * _downloadBaseURL;
    unsigned long long  _downloadTokenExpiration;
    NSURL * _downloadURL;
    NSDate * _downloadURLExpiration;
    bool  _downloaded;
    NSNumber * _fileID;
    NSURL * _fileURL;
    NSNumber * _generationCountToSave;
    bool  _hasSize;
    NSData * _inlineData;
    NSString * _itemTypeHint;
    NSString * _owner;
    CKRecord * _record;
    CKRecordID * _recordID;
    NSString * _recordKey;
    NSData * _referenceSignature;
    NSString * _requestor;
    bool  _shouldReadRawEncryptedData;
    NSData * _signature;
    unsigned long long  _size;
    long long  _storageGroupingPolicy;
    long long  _uploadRank;
    NSString * _uploadReceipt;
    bool  _uploaded;
    bool  _wasCached;
    NSData * _wrappedAssetKey;
}

@property (nonatomic, retain) NSString *UUID;
@property (nonatomic) long long arrayIndex;
@property (nonatomic, copy) NSData *assetContent;
@property (nonatomic, readonly) NSString *assetHandleUUID;
@property (nonatomic, retain) NSData *assetKey;
@property (nonatomic, copy) NSData *authRequest;
@property (nonatomic, copy) NSString *authToken;
@property (nonatomic, retain) NSURL *contentBaseURL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSNumber *deviceID;
@property (nonatomic, retain) NSString *downloadBaseURL;
@property (nonatomic) unsigned long long downloadTokenExpiration;
@property (nonatomic, retain) NSURL *downloadURL;
@property (nonatomic, retain) NSDate *downloadURLExpiration;
@property (nonatomic) bool downloaded;
@property (nonatomic, readonly) NSNumber *fileID;
@property (nonatomic, copy) NSURL *fileURL;
@property (nonatomic, retain) NSNumber *generationCountToSave;
@property (nonatomic) bool hasSize;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSData *inlineData;
@property (nonatomic, retain) NSString *itemTypeHint;
@property (nonatomic, retain) NSString *owner;
@property (nonatomic) CKRecord *record;
@property (nonatomic, retain) CKRecordID *recordID;
@property (nonatomic, copy) NSString *recordKey;
@property (nonatomic, retain) NSData *referenceSignature;
@property (nonatomic, retain) NSString *requestor;
@property (nonatomic) bool shouldReadRawEncryptedData;
@property (nonatomic, copy) NSData *signature;
@property (nonatomic) unsigned long long size;
@property (nonatomic) long long storageGroupingPolicy;
@property (readonly) Class superclass;
@property (nonatomic) long long uploadRank;
@property (nonatomic, copy) NSString *uploadReceipt;
@property (nonatomic) bool uploaded;
@property (nonatomic) bool wasCached;
@property (nonatomic, retain) NSData *wrappedAssetKey;

+ (id)assetWithFileURL:(id)arg1;
+ (int)errorCodeFromPOSIXCode:(int)arg1;
+ (id)getFileMetadataAtPath:(id)arg1 error:(id*)arg2;
+ (id)getFileMetadataWithFileHandle:(id)arg1 openInfo:(id)arg2 error:(id*)arg3;
+ (id)getFileSizeWithOpenInfo:(id)arg1 error:(id*)arg2;
+ (id)openToReadRawEncryptedDataWithOpenInfo:(id)arg1 error:(id*)arg2;
+ (id)openWithOpenInfo:(id)arg1 error:(id*)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)CKDescriptionPropertiesWithPublic:(bool)arg1 private:(bool)arg2 shouldExpand:(bool)arg3;
- (id)UUID;
- (id)_initBare;
- (long long)arrayIndex;
- (id)assetContent;
- (id)assetHandleUUID;
- (id)assetKey;
- (id)authRequest;
- (id)authToken;
- (id)contentBaseURL;
- (id)description;
- (id)deviceID;
- (id)downloadBaseURL;
- (unsigned long long)downloadTokenExpiration;
- (id)downloadURL;
- (id)downloadURLExpiration;
- (bool)downloaded;
- (void)encodeWithCoder:(id)arg1;
- (id)fileID;
- (id)fileURL;
- (id)generationCountToSave;
- (bool)hasSize;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDeviceID:(id)arg1 fileID:(id)arg2 generationID:(id)arg3;
- (id)initWithFileURL:(id)arg1;
- (id)initWithFileURL:(id)arg1 signature:(id)arg2;
- (id)initWithFileURL:(id)arg1 signature:(id)arg2 assetHandleUUID:(id)arg3;
- (id)inlineData;
- (id)itemTypeHint;
- (id)openWithError:(id*)arg1;
- (id)owner;
- (id)record;
- (id)recordID;
- (id)recordKey;
- (id)referenceSignature;
- (id)requestor;
- (void)setArrayIndex:(long long)arg1;
- (void)setAssetContent:(id)arg1;
- (void)setAssetKey:(id)arg1;
- (void)setAuthRequest:(id)arg1;
- (void)setAuthToken:(id)arg1;
- (void)setContentBaseURL:(id)arg1;
- (void)setDownloadBaseURL:(id)arg1;
- (void)setDownloadTokenExpiration:(unsigned long long)arg1;
- (void)setDownloadURL:(id)arg1;
- (void)setDownloadURLExpiration:(id)arg1;
- (void)setDownloaded:(bool)arg1;
- (void)setFileURL:(id)arg1;
- (void)setGenerationCountToSave:(id)arg1;
- (void)setHasSize:(bool)arg1;
- (void)setInlineData:(id)arg1;
- (void)setItemTypeHint:(id)arg1;
- (void)setOwner:(id)arg1;
- (void)setRecord:(id)arg1;
- (void)setRecordID:(id)arg1;
- (void)setRecordKey:(id)arg1;
- (void)setReferenceSignature:(id)arg1;
- (void)setRequestor:(id)arg1;
- (void)setShouldReadRawEncryptedData:(bool)arg1;
- (void)setSignature:(id)arg1;
- (void)setSize:(unsigned long long)arg1;
- (void)setStorageGroupingPolicy:(long long)arg1;
- (void)setUUID:(id)arg1;
- (void)setUploadRank:(long long)arg1;
- (void)setUploadReceipt:(id)arg1;
- (void)setUploaded:(bool)arg1;
- (void)setWasCached:(bool)arg1;
- (void)setWrappedAssetKey:(id)arg1;
- (bool)shouldReadRawEncryptedData;
- (id)signature;
- (unsigned long long)size;
- (long long)storageGroupingPolicy;
- (long long)uploadRank;
- (id)uploadReceipt;
- (bool)uploaded;
- (bool)wasCached;
- (id)wrappedAssetKey;

@end
