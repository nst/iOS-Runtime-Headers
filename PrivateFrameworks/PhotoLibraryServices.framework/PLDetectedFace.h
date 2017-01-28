/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLDetectedFace : PLManagedObject <PLSyncableDetectedFace>

@property (nonatomic, copy) NSDate *adjustmentVersion;
@property (nonatomic, retain) NSDate *adjustmentVersion;
@property (nonatomic, retain) PLManagedAsset *asset;
@property (nonatomic) double blurScore;
@property (nonatomic) double centerX;
@property (nonatomic) double centerY;
@property (nonatomic) short cloudLocalState;
@property (nonatomic) int clusterSequenceNumber;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double expressionConfidence;
@property (nonatomic) double expressionScore1;
@property (nonatomic) double expressionScore2;
@property (nonatomic) double expressionScore3;
@property (nonatomic) int expressionType1;
@property (nonatomic) int expressionType2;
@property (nonatomic) int expressionType3;
@property (nonatomic) int faceAlgorithmVersion;
@property (nonatomic, retain) PLDetectedFaceGroup *faceGroupBeingKeyFace;
@property (nonatomic, retain) NSSet *faceGroups;
@property (nonatomic, retain) PLDetectedFaceprint *faceprint;
@property (nonatomic) bool hasSmile;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hidden;
@property (nonatomic) bool isInTrash;
@property (nonatomic) bool isLeftEyeClosed;
@property (nonatomic) bool isRightEyeClosed;
@property (nonatomic) double leftEyeX;
@property (nonatomic) double leftEyeY;
@property (nonatomic) bool manual;
@property (nonatomic, retain) NSString *masterIdentifier;
@property (nonatomic) double mouthX;
@property (nonatomic) double mouthY;
@property (nonatomic) int nameSource;
@property (nonatomic) bool nameSourceAuto;
@property (nonatomic, retain) <PLSyncablePerson> *person;
@property (nonatomic, retain) PLPerson *person;
@property (nonatomic, retain) <PLSyncablePerson> *personBeingKeyFace;
@property (nonatomic, retain) PLPerson *personBeingKeyFace;
@property (nonatomic) double posePitch;
@property (nonatomic) double poseRoll;
@property (nonatomic) double poseYaw;
@property (nonatomic) int qualityMeasure;
@property (nonatomic, retain) NSSet *rejectedPeople;
@property (nonatomic) double rightEyeX;
@property (nonatomic) double rightEyeY;
@property (nonatomic) double size;
@property (nonatomic) int sourceHeight;
@property (nonatomic) int sourceWidth;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *uuid;

+ (id)_allSyncableFacesInManagedObjectContext:(id)arg1;
+ (void)batchFetchDetectedFacesByAssetUUIDWithAssetUUIDs:(id)arg1 predicate:(id)arg2 completion:(id)arg3;
+ (void)batchFetchKeyFacesByPersonUUIDWithPersonUUIDs:(id)arg1 completion:(id)arg2;
+ (unsigned long long)countOfHiddenFacesOnAssetsWithObjectIDs:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)detectedFaceWithUUID:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
+ (void)enumerateAssetUUIDsForSearchIndexingWithDetctedFaceUUIDs:(id)arg1 managedObjectContext:(id)arg2 assetUUIDHandler:(id)arg3;
+ (id)findExistingFaceMatchingDimension:(struct PLFaceDimension { double x1; double x2; double x3; long long x4; long long x5; })arg1 inFaces:(id)arg2 inAsset:(id)arg3;
+ (id)findExistingFaceMatchingRef:(id)arg1 inFaces:(id)arg2 inAsset:(id)arg3;
+ (id)insertInManagedObjectContext:(id)arg1;
+ (id)predicatesToExcludeNonVisibleFaces;
+ (long long)resetAssetForAllSyncableFacesInManagedObjectContext:(id)arg1 error:(id*)arg2;
+ (id)userCuratedFacePredicate;

- (void)_updateFaceGroupIfNeeded;
- (void)_updateFileSystemPersistenceIfNeeded;
- (void)_verifyAssetRelationship;
- (void)awakeFromInsert;
- (id)debugLogDescription;
- (void)delete;
- (bool)nameSourceAuto;
- (id)rejectedPeople;
- (void)removeFaceprint;
- (void)setNameSourceAuto:(bool)arg1;
- (void)setRejectedPeople:(id)arg1;
- (void)willSave;

@end
