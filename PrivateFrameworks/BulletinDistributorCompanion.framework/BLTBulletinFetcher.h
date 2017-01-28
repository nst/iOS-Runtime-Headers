/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@interface BLTBulletinFetcher : NSObject {
    NSDictionary * _bulletinIDs;
    id  _clientCompletion;
    id  _fetcher;
    NSArray * _publisherMatchIDsForSection;
    unsigned long long  _publisherMatchIDsForSectionIndex;
    NSArray * _sectionIDs;
    long long  _sectionIDsIndex;
}

+ (id)batchBulletinFetchForBulletinIDs:(id)arg1 fetcher:(id)arg2 completion:(id)arg3;

- (void).cxx_destruct;
- (void)_fetchBulletins;
- (bool)_incrementSection;
- (void)_setBulletinIDs:(id)arg1;
- (void)_setClientCompletion:(id)arg1;
- (void)_setFetcher:(id)arg1;

@end
