/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPeoplePersonDataSource : PXPeopleDataSource <PHPhotoLibraryChangeObserver> {
    NSDictionary * _assetsByFaces;
    PXPeopleFaceTileImageManager * _imageManager;
    NSObject<OS_dispatch_queue> * _imageManagerDataSourceLoadingQueue;
    NSDictionary * _keyFacesByPersons;
    long long  _personType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PXPeopleFaceTileImageManager *imageManager;
@property (nonatomic) long long personType;
@property (readonly) Class superclass;

+ (id)hiddenPeopleDataSourceWithFetchLimit:(unsigned long long)arg1;
+ (id)importantPeopleDataSourceWithFetchLimit:(unsigned long long)arg1;
+ (id)manualOrderComparator;
+ (id)otherPeopleDataSourceWithFetchLimit:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)_applyChanges:(id)arg1;
- (id)_assetForFace:(id)arg1;
- (void)_asyncLoadImageForItem:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 withCompletionBlock:(id)arg3 fastDisplayBlock:(id)arg4;
- (id)_faceForPerson:(id)arg1;
- (void)_handleMembersLoadedWithCompletion:(id)arg1;
- (id)_itemsArrayFromObjects:(id)arg1;
- (id)_membersForModelObjects:(id)arg1;
- (void)_updateMember:(id)arg1 WithModelObject:(id)arg2;
- (void)addVisiblePerson:(id)arg1;
- (void)cancelImageLoadingForItem:(id)arg1;
- (id)defaultComparator;
- (id)imageManager;
- (id)initWithImageManagerSupportAndName:(id)arg1 objectsReloadBlock:(id)arg2 asynchronousLoad:(bool)arg3 callbackDelegate:(id)arg4;
- (id)initWithName:(id)arg1 fetchResultBlock:(id)arg2;
- (id)initWithName:(id)arg1 objects:(id)arg2;
- (id)initWithName:(id)arg1 personType:(long long)arg2 fetchLimit:(unsigned long long)arg3;
- (id)initWithName:(id)arg1 personType:(long long)arg2 objects:(id)arg3;
- (void)loadObjectsAndUpdateMembersWithCompletion:(id)arg1;
- (long long)personType;
- (void)photoLibraryDidChange:(id)arg1;
- (void)removeVisiblePerson:(id)arg1;
- (void)setPersonType:(long long)arg1;
- (void)startListeningForChanges;
- (void)stopListeningForChanges;
- (id)titleAtIndex:(unsigned long long)arg1;

@end
