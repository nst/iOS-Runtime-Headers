/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BookmarkDAV.framework/BookmarkDAV
 */

@interface BookmarkDAVSyncDriver : NSObject <CoreDAVContainerInfoTaskGroupDelegate, CoreDAVDeleteTaskDelegate, CoreDAVGetAccountPropertiesTaskGroupDelegate, CoreDAVLocalDBTreeInfoProvider> {
    <CoreDAVAccountInfoProvider> * _accountInfoProvider;
    unsigned long long  _accountPropertyFetchAttempt;
    void * _changeToken;
    id  _closeDBBlock;
    bool  _forceSafariOrdering;
    bool  _forceSave;
    id  _getAccountPropertiesHandler;
    id  _getDBBlock;
    NSURL * _homeURL;
    id  _openDBBlock;
    NSMutableSet * _outstandingTaskGroups;
    NSString * _pushKey;
    NSDictionary * _pushTransport;
    id  _registerForPush;
    id  _saveDBBlock;
    id  _syncHandler;
    <CoreDAVTaskManager> * _taskManager;
    BookmarkDAVSyncData * _topLevelSyncData;
}

@property (nonatomic, readonly) <CoreDAVAccountInfoProvider> *accountInfoProvider;
@property (nonatomic) unsigned long long accountPropertyFetchAttempt;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id getAccountPropertiesHandler;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSURL *homeURL;
@property (nonatomic, readonly) unsigned long long outstandingActionCount;
@property (nonatomic, retain) NSString *pushKey;
@property (nonatomic, retain) NSDictionary *pushTransport;
@property (readonly) Class superclass;
@property (nonatomic, copy) id syncHandler;
@property (nonatomic, readonly) BookmarkDAVSyncData *topLevelSyncData;

- (bool)_addChange:(void*)arg1 toData:(id)arg2 numActionsP:(int*)arg3 runningSizeP:(int*)arg4 maxResources:(long long)arg5 maxSize:(long long)arg6 foldersToAddByServerId:(struct __CFDictionary { }*)arg7 parentToArrayOfChildrenFolderChanges:(struct __CFDictionary { }*)arg8 pushedParentToArrayOfChildrenFolders:(struct __CFDictionary { }*)arg9;
- (bool)_applyReturnedBookmarks:(id)arg1 withPushedBookmarks:(struct __CFArray { }*)arg2;
- (bool)_applyReturnedFolders:(id)arg1 parentToArrayOfChildrenFolders:(struct __CFDictionary { }*)arg2 topmostFolders:(struct __CFArray { }*)arg3 postedToURL:(id)arg4;
- (bool)_applyUnmatchedParsedFolders:(id)arg1;
- (id)_bookmarkXBELDataForBookmarkChanges:(struct __CFArray { }*)arg1 pushedBookmarks:(struct __CFArray { }*)arg2 maxResources:(long long)arg3 maxSize:(long long)arg4;
- (int)_clientOrderOfItemPrecedingItemAtServerOrder:(int)arg1 inParentWithURL:(id)arg2;
- (void)_closeDBAndSave:(bool)arg1;
- (id)_copyDAVBookmarkFromBookmarkRef:(void*)arg1;
- (id)_copyDAVFolderFromFolderRef:(void*)arg1;
- (id)_dbRelativeString:(id)arg1;
- (void)_finishInitialSyncShouldPushChanges:(bool)arg1;
- (id)_folderXBELDataForTopmostFolderChanges:(struct __CFArray { }*)arg1 foldersToAddByServerId:(struct __CFDictionary { }*)arg2 parentToArrayOfChildrenFolderChanges:(struct __CFDictionary { }*)arg3 pushedParentToArrayOfChildrenFolders:(struct __CFDictionary { }*)arg4 pushedTopmostFolders:(struct __CFArray { }*)arg5 maxResources:(long long)arg6 maxSize:(long long)arg7;
- (void)_handleAddsOrModifies:(id)arg1 removes:(id)arg2;
- (bool)_handleErrorItem:(id)arg1 forBAItem:(void*)arg2;
- (void)_invokeAndNilGetAccountPropertiesHandlerWithSuccess:(bool)arg1 error:(id)arg2;
- (void)_makeBookmarkFromDAVNode:(id)arg1;
- (void)_makeFolderFromContainer:(id)arg1;
- (bool)_matchParsedFolders:(id)arg1 toPushedFolders:(struct __CFDictionary { }*)arg2 unmatchedParsedFolders:(id)arg3 parsedSetsOfChildrenFoldersByParentURL:(id)arg4 arraysOfChildrenByNameByParent:(struct __CFDictionary { }*)arg5;
- (void)_removeTempIdsFromFoldersInDict:(struct __CFDictionary { }*)arg1;
- (void)_saveDB;
- (int)_serverOrderForChange:(void*)arg1;
- (void)_setChildrenOrder:(id)arg1 forFolderURL:(id)arg2;
- (void)_setRootCTag:(id)arg1 rootSyncToken:(id)arg2 knownOrderings:(id)arg3;
- (void)_setServerIdOnItem:(void*)arg1 isBookmark:(bool)arg2 suggestedId:(id)arg3;
- (void)_syncWithRemoteChanges:(bool)arg1 completionHandler:(id)arg2 skipAddChanges:(bool)arg3;
- (id)accountInfoProvider;
- (unsigned long long)accountPropertyFetchAttempt;
- (void)containerInfoTask:(id)arg1 completedWithContainers:(id)arg2 error:(id)arg3;
- (id)copyAllLocalURLsInFolderWithURL:(id)arg1;
- (id)copyLocalETagsForURLs:(id)arg1;
- (void)dealloc;
- (id)getAccountPropertiesHandler;
- (void)getAccountPropertiesTask:(id)arg1 completedWithError:(id)arg2;
- (void)getAccountPropertiesWithCompletionHandler:(id)arg1;
- (bool)getCTag:(id*)arg1 pTag:(id*)arg2 forFolderWithURL:(id)arg3;
- (id)homeURL;
- (id)initWithAccountInfoProvider:(id)arg1 taskManager:(id)arg2 openDBBlock:(id)arg3 getDBBlock:(id)arg4 saveDBBlock:(id)arg5 closeDBBlock:(id)arg6 registerForPush:(id)arg7 forceSafariOrdering:(bool)arg8;
- (void)notePutToURL:(id)arg1 withDataPayload:(id)arg2 finishedWithIgnoredError:(id)arg3;
- (unsigned long long)outstandingActionCount;
- (id)pushKey;
- (id)pushTransport;
- (void)recursiveContainerSyncTask:(id)arg1 completedFullSyncWithNewCTag:(id)arg2 newPTag:(id)arg3 newSyncToken:(id)arg4 error:(id)arg5;
- (void)recursiveContainerSyncTask:(id)arg1 completedSyncOfFolderWithURL:(id)arg2 newCTag:(id)arg3 newPTag:(id)arg4 addedOrModified:(id)arg5 removed:(id)arg6 error:(id)arg7;
- (void)recursiveContainerSyncTask:(id)arg1 receivedAddedOrModifiedFolder:(id)arg2;
- (void)recursiveContainerSyncTask:(id)arg1 retrievedAddedOrModifiedActions:(id)arg2 removed:(id)arg3;
- (void)setAccountPropertyFetchAttempt:(unsigned long long)arg1;
- (void)setGetAccountPropertiesHandler:(id)arg1;
- (void)setHomeURL:(id)arg1;
- (bool)setLocalETag:(id)arg1 forItemWithURL:(id)arg2;
- (void)setPushKey:(id)arg1;
- (void)setPushTransport:(id)arg1;
- (void)setSyncHandler:(id)arg1;
- (id)syncHandler;
- (void)syncWithRemoteChanges:(bool)arg1 completionHandler:(id)arg2;
- (id)topLevelSyncData;

@end
