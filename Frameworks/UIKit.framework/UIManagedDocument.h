/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIManagedDocument : UIDocument {
    NSDictionary * _documentMetadata;
    NSManagedObjectContext * _managedObjectContext;
    NSManagedObjectModel * _managedObjectModel;
    struct __mdocFlags { 
        unsigned int shouldWriteAdditionalContent : 1; 
        unsigned int _reserved : 31; 
    }  _mdocFlags;
    NSPersistentStoreCoordinator * _persistentStoreCoordinator;
    NSString * modelConfiguration;
    NSDictionary * persistentStoreOptions;
}

@property (nonatomic, readonly) NSManagedObjectContext *managedObjectContext;
@property (nonatomic, readonly) NSManagedObjectModel *managedObjectModel;
@property (nonatomic, copy) NSString *modelConfiguration;
@property (nonatomic, copy) NSDictionary *persistentStoreOptions;

+ (id)additionalContentPathComponent;
+ (void)initialize;
+ (bool)isPersistentStoreSynchronizedViaUbiquitousContentWithOptions:(id)arg1;
+ (id)persistentStoreName;

- (void)_handleRelocatingStoreContentDirectoryFromNonSyncedURL:(id)arg1 toSyncedURL:(id)arg2;
- (void)_handleRelocatingStoreContentDirectoryFromSyncedURL:(id)arg1 toNonSyncedURL:(id)arg2;
- (id)_readMetadataFromDocumentURL:(id)arg1;
- (bool)_writeMetadataToDocumentURL:(id)arg1;
- (id)additionalContentForURL:(id)arg1 error:(id*)arg2;
- (bool)configurePersistentStoreCoordinatorForURL:(id)arg1 ofType:(id)arg2 modelConfiguration:(id)arg3 storeOptions:(id)arg4 error:(id*)arg5;
- (id)contentsForType:(id)arg1 error:(id*)arg2;
- (void)dealloc;
- (id)initWithFileURL:(id)arg1;
- (id)managedObjectContext;
- (id)managedObjectModel;
- (id)modelConfiguration;
- (id)persistentStoreOptions;
- (id)persistentStoreTypeForFileType:(id)arg1;
- (bool)readAdditionalContentFromURL:(id)arg1 error:(id*)arg2;
- (bool)readFromURL:(id)arg1 error:(id*)arg2;
- (void)revertToContentsOfURL:(id)arg1 completionHandler:(id)arg2;
- (void)setModelConfiguration:(id)arg1;
- (void)setPersistentStoreOptions:(id)arg1;
- (bool)writeAdditionalContent:(id)arg1 toURL:(id)arg2 originalContentsURL:(id)arg3 error:(id*)arg4;
- (bool)writeContents:(id)arg1 andAttributes:(id)arg2 safelyToURL:(id)arg3 forSaveOperation:(long long)arg4 error:(id*)arg5;
- (bool)writeContents:(id)arg1 toURL:(id)arg2 forSaveOperation:(long long)arg3 originalContentsURL:(id)arg4 error:(id*)arg5;

@end
