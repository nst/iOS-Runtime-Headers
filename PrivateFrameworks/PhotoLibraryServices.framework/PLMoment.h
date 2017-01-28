/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLMoment : PLManagedObject <PLAssetContainer, PLMomentData_Private> {
    PLMomentNameInfo * _cachedNameInfo;
    bool  _loadedNameInfo;
    bool  didRegisteredWithUserInterfaceContext;
    bool  isRegisteredForChanges;
}

@property (nonatomic, readonly) unsigned long long approximateCount;
@property (nonatomic, retain) CLLocation *approximateLocation;
@property (nonatomic, retain) NSData *approximateLocationData;
@property (nonatomic, retain) NSOrderedSet *assets;
@property (nonatomic, readonly) unsigned long long assetsCount;
@property (nonatomic) int cachedCount;
@property (nonatomic) int cachedPhotosCount;
@property (nonatomic) int cachedVideosCount;
@property (nonatomic, readonly) bool canShowAvalancheStacks;
@property (nonatomic, readonly) bool canShowComments;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didRegisteredWithUserInterfaceContext;
@property (nonatomic, retain) NSDate *endDate;
@property (nonatomic) short generationType;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isEmpty;
@property (nonatomic) bool isRegisteredForChanges;
@property (nonatomic, retain) PLManagedAsset *keyAsset;
@property (nonatomic, readonly, copy) NSArray *localizedLocationNames;
@property (nonatomic, readonly, copy) NSString *localizedTitle;
@property (nonatomic, retain) PLMomentList *megaMomentList;
@property (nonatomic, retain) NSDate *modificationDate;
@property (nonatomic, retain) PLMomentLibrary *momentLibrary;
@property (nonatomic, readonly) unsigned long long photosCount;
@property (nonatomic, retain) NSDate *representativeDate;
@property (nonatomic, retain) NSData *reverseLocationData;
@property (nonatomic) bool reverseLocationDataIsValid;
@property (nonatomic, retain) PLManagedAsset *secondaryKeyAsset;
@property (nonatomic, retain) NSDate *startDate;
@property (readonly) Class superclass;
@property (nonatomic, retain) PLManagedAsset *tertiaryKeyAsset;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, retain) NSString *title2;
@property (nonatomic, retain) NSString *title3;
@property (nonatomic, readonly, retain) NSObject<NSCopying> *uniqueObjectID;
@property (nonatomic, retain) NSArray *userTitles;
@property (nonatomic, retain) NSString *uuid;
@property (nonatomic, readonly) unsigned long long videosCount;
@property (nonatomic, retain) PLMomentList *yearMomentList;

+ (id)allAssetsIncludedInMomentsInLibrary:(id)arg1;
+ (id)allAssetsIncludedInMomentsInManagedObjectContext:(id)arg1 IDsOnly:(bool)arg2 error:(id*)arg3;
+ (id)allMomentsInLibrary:(id)arg1;
+ (id)allMomentsInManagedObjectContext:(id)arg1 error:(id*)arg2;
+ (id)allMomentsRequiringAnalysisInManagedObjectContext:(id)arg1 error:(id*)arg2;
+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
+ (id)insertNewMomentInManagedObjectContext:(id)arg1 error:(id*)arg2;
+ (id)predicateForAssetsIncludedInMoments;

- (void)_updateCachedNameInfoIfNeeded;
- (bool)_validateForInsertOrUpdate:(id*)arg1;
- (void)addAssets:(id)arg1;
- (void)addAssetsObject:(id)arg1;
- (unsigned long long)approximateCount;
- (id)approximateLocation;
- (unsigned long long)assetsCount;
- (void)awakeFromFetch;
- (void)awakeFromInsert;
- (bool)canPerformEditOperation:(unsigned long long)arg1;
- (bool)canShowAvalancheStacks;
- (bool)canShowComments;
- (unsigned long long)countForAssetsOfKind:(short)arg1;
- (void)dealloc;
- (void)delete;
- (id)diagnosticInformation;
- (bool)didRegisteredWithUserInterfaceContext;
- (void)didTurnIntoFault;
- (id)groupURL;
- (void)insertAssets:(id)arg1 atIndexes:(id)arg2;
- (void)insertObject:(id)arg1 inAssetsAtIndex:(unsigned long long)arg2;
- (void)invalidateNameInfo;
- (bool)isCloudSharedAlbum;
- (bool)isEmpty;
- (bool)isRegisteredForChanges;
- (id)keyAsset;
- (id)localizedLocationNames;
- (id)localizedTitle;
- (id)mutableAssets;
- (unsigned long long)photosCount;
- (struct CGImage { }*)posterImage;
- (void)registerForChanges;
- (void)removeAssetData:(id)arg1;
- (void)removeAssets:(id)arg1;
- (void)removeAssetsAtIndexes:(id)arg1;
- (void)removeAssetsObject:(id)arg1;
- (void)removeObjectFromAssetsAtIndex:(unsigned long long)arg1;
- (void)replaceAssetDataAtIndex:(unsigned long long)arg1 withAssetData:(id)arg2;
- (void)replaceAssetsAtIndexes:(id)arg1 withAssets:(id)arg2;
- (void)replaceObjectInAssetsAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (id)secondaryKeyAsset;
- (void)setApproximateLocation:(id)arg1;
- (void)setDidRegisteredWithUserInterfaceContext:(bool)arg1;
- (void)setIsRegisteredForChanges:(bool)arg1;
- (void)setKeyAsset:(id)arg1;
- (void)setSecondaryKeyAsset:(id)arg1;
- (void)setTertiaryKeyAsset:(id)arg1;
- (void)setUserTitles:(id)arg1;
- (bool)supportsDiagnosticInformation;
- (id)tertiaryKeyAsset;
- (id)uniqueObjectID;
- (void)unregisterForChanges;
- (id)userTitles;
- (bool)validateForInsert:(id*)arg1;
- (bool)validateForUpdate:(id*)arg1;
- (unsigned long long)videosCount;
- (void)willSave;
- (void)willTurnIntoFault;

@end
