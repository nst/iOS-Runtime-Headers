/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVPlaybackLeaseConfiguration : NSObject <NSCopying> {
    NSURL * _beginLeaseURL;
    NSURL * _certificateURL;
    NSURL * _getAssetURL;
    long long  _leaseType;
    NSURL * _provisionMachineURL;
    NSURL * _refreshLeaseURL;
    NSString * _storeFrontSuffix;
    NSURL * _syncMachineURL;
}

@property (nonatomic, copy) NSURL *beginLeaseURL;
@property (nonatomic, copy) NSURL *certificateURL;
@property (nonatomic, copy) NSURL *getAssetURL;
@property (nonatomic, readonly) long long leaseType;
@property (nonatomic, copy) NSURL *provisionMachineURL;
@property (nonatomic, copy) NSURL *refreshLeaseURL;
@property (nonatomic, copy) NSString *storeFrontSuffix;
@property (nonatomic, copy) NSURL *syncMachineURL;

- (void).cxx_destruct;
- (id)beginLeaseURL;
- (id)certificateURL;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)getAssetURL;
- (id)initWithURLBagDictionary:(id)arg1;
- (id)initWithURLBagDictionary:(id)arg1 leaseType:(long long)arg2;
- (long long)leaseType;
- (id)provisionMachineURL;
- (id)refreshLeaseURL;
- (void)setBeginLeaseURL:(id)arg1;
- (void)setCertificateURL:(id)arg1;
- (void)setGetAssetURL:(id)arg1;
- (void)setProvisionMachineURL:(id)arg1;
- (void)setRefreshLeaseURL:(id)arg1;
- (void)setStoreFrontSuffix:(id)arg1;
- (void)setSyncMachineURL:(id)arg1;
- (id)storeFrontSuffix;
- (id)syncMachineURL;

@end
