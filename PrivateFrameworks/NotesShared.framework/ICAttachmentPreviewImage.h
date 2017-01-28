/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICAttachmentPreviewImage : ICCloudSyncingObject {
    NSObject<OS_dispatch_queue> * _fileQueue;
    long long  _fileQueueOnceToken;
    unsigned long long  _imageID;
}

@property (nonatomic, retain) ICAttachment *attachment;
@property (nonatomic, retain) NSData *cryptoMetadataInitializationVector;
@property (nonatomic, retain) NSData *cryptoMetadataTag;
@property (nonatomic, retain) NSData *encryptedMetadata;
@property (nonatomic) double height;
@property (nonatomic, retain) NSData *metadata;
@property (nonatomic, retain) NSDate *modifiedDate;
@property (nonatomic) double scale;
@property (nonatomic) bool scaleWhenDrawing;
@property (nonatomic) short version;
@property (nonatomic) bool versionOutOfDate;
@property (nonatomic) double width;

+ (id)allAttachmentPreviewImagesInContext:(id)arg1;
+ (id)attachmentPreviewImageIdentifiersForAccount:(id)arg1;
+ (id)attachmentPreviewImageWithIdentifier:(id)arg1 inContext:(id)arg2;
+ (id)attachmentPreviewImagesMatchingPredicate:(id)arg1 inContext:(id)arg2;
+ (id)concurrentFileLoadLimitSemaphore;
+ (void)deleteStrandedAttachmentPreviewImagesInContext:(id)arg1;
+ (id)fileGlobalQueue;
+ (id)fileQueueGroup;
+ (id)identifierForContentIdentifier:(id)arg1 scale:(double)arg2 width:(double)arg3 height:(double)arg4;
+ (id)imageCache;
+ (id)newAttachmentPreviewImageInContext:(id)arg1;
+ (struct UIImage { Class x1; }*)orientedImage:(struct UIImage { Class x1; }*)arg1 withTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2 background:(int)arg3 backgroundTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg4;
+ (id)previewImageDirectoryURL;
+ (id)previewImageURLsForIdentifier:(id)arg1;
+ (void)purgeAllAttachmentPreviewImagesInContext:(id)arg1;
+ (void)purgeAllPreviewImageFiles;
+ (void)purgePreviewImageFilesForIdentifiers:(id)arg1;
+ (id)visibleAttachmentPreviewImagesInContext:(id)arg1;
+ (void)waitUntilAllFileWritesAreFinished;

- (void).cxx_destruct;
- (id)_decryptedImageData;
- (bool)_writeEncryptedImageFromData:(id)arg1;
- (id)asyncImage:(id)arg1 aboutToLoadHandler:(id)arg2;
- (struct UIImage { Class x1; }*)cachedImage;
- (struct UIImage { Class x1; }*)cachedOrientedImage;
- (id)decryptedImageData;
- (void)deleteFromLocalDatabase;
- (id)encryptedPreviewImageURL;
- (id)fileQueue;
- (id)ic_loggingValues;
- (struct UIImage { Class x1; }*)image;
- (bool)imageIsValid;
- (struct UIImage { Class x1; }*)imageWithBackground:(int)arg1;
- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;
- (void)invalidateCache;
- (void)invalidateImage;
- (void)invalidateOrientedImage;
- (bool)isMap;
- (bool)isSketch;
- (bool)makeSurePreviewImageDirectoryExists:(id*)arg1;
- (id)metadata;
- (bool)needsInitialFetchFromCloud;
- (bool)needsToBeDeletedFromCloud;
- (bool)needsToBeFetchedFromCloud;
- (bool)needsToBePushedToCloud;
- (id)newImageLoaderForUpdatingImageOnCompletion:(bool)arg1;
- (id)newImageLoaderForUpdatingImageOnCompletion:(bool)arg1 asyncDataLoading:(bool)arg2;
- (id)oldPreviewImageURL;
- (struct UIImage { Class x1; }*)orientedImage;
- (id)orientedImageID;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })orientedImageTransform;
- (struct UIImage { Class x1; }*)orientedImageWithBackground:(int)arg1;
- (id)orientedPreviewImageURL;
- (id)orientedPreviewImageURLCreateIfNeeded:(bool)arg1;
- (id)parentEncryptableObject;
- (void)prepareForDeletion;
- (long long)previewImageOrientation;
- (id)previewImageURL;
- (void)removeItemAtURL:(id)arg1;
- (void)saveAndClearDecryptedData;
- (void)saveScaledImageFromImageSrc:(struct CGImageSource { }*)arg1 completion:(id)arg2;
- (void)setCachedImage:(struct UIImage { Class x1; }*)arg1;
- (void)setCachedOrientedImage:(struct UIImage { Class x1; }*)arg1;
- (void)setImage:(struct UIImage { Class x1; }*)arg1 withScale:(double)arg2 completion:(id)arg3;
- (void)setMetadata:(id)arg1;
- (bool)shouldSyncToCloud;
- (struct CGSize { double x1; double x2; })size;
- (void)updateFlagToExcludeFromBackup;
- (void)updateFlagToExcludeFromBackupForURL:(id)arg1 touchFileIfNecessary:(bool)arg2;
- (void)updateFlagToExcludeFromBackupTouchFileIfNecessary:(bool)arg1;
- (bool)writeEncryptedImageFromData:(id)arg1;

@end
