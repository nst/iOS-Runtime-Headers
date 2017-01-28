/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UserActivity.framework/UserActivity
 */

@interface UASharedPasteboardManager : NSObject <UASharedPasteboardManagerResponseProtocol> {
    NSSet * _bomCheckTypes;
    id  _completionBlock;
    NSXPCConnection * _connection;
    UAPasteboardGeneration * _currentGeneration;
    bool  _currentGenerationHasUpdates;
    NSSet * _disallowdTypes;
    id  _localPasteboardWasFetched;
    NSObject<OS_dispatch_queue> * _pasteboardReadQ;
    bool  _remotePasteboardAvaliable;
    NSObject<OS_dispatch_queue> * _serverQ;
    NSDictionary * _typeAliases;
    NSDictionary * _typeBOMs;
    bool  _updateScheduled;
}

@property (retain) NSSet *bomCheckTypes;
@property id completionBlock;
@property (retain) NSXPCConnection *connection;
@property (retain) UAPasteboardGeneration *currentGeneration;
@property bool currentGenerationHasUpdates;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSSet *disallowdTypes;
@property (readonly) unsigned long long hash;
@property (copy) id localPasteboardWasFetched;
@property (retain) NSObject<OS_dispatch_queue> *pasteboardReadQ;
@property bool remotePasteboardAvaliable;
@property (retain) NSObject<OS_dispatch_queue> *serverQ;
@property (readonly) Class superclass;
@property (retain) NSDictionary *typeAliases;
@property (retain) NSDictionary *typeBOMs;
@property bool updateScheduled;

+ (bool)dontConnectToServer;
+ (void)initialize;
+ (id)sharedManager;

- (void).cxx_destruct;
- (bool)addData:(id)arg1 toItemAtIndex:(unsigned long long)arg2 generation:(unsigned long long)arg3;
- (id)bomCheckTypes;
- (void)clearLocalPasteboardInformation;
- (id)completionBlock;
- (id)connection;
- (id)currentGeneration;
- (bool)currentGenerationHasUpdates;
- (id)disallowdTypes;
- (void)doClearLocalPasteboardInfo;
- (void)fetchPasteboardDataForProcess:(int)arg1 withCompletion:(id)arg2;
- (void)fetchPasteboardStatus:(id)arg1;
- (void)fetchPasteboardTypesForProcess:(int)arg1 withCompletion:(id)arg2;
- (id)init;
- (bool)isRemotePasteboardAvaliable;
- (id)localPasteboardWasFetched;
- (id)pasteboardReadQ;
- (void)pickupLocalChanges:(id)arg1 iterNumber:(long long)arg2 completionHandler:(id)arg3;
- (bool)remotePasteboardAvaliable;
- (void)requestRemotePasteboardDataForProcess:(int)arg1 withCompletion:(id)arg2;
- (void)requestRemotePasteboardTypesForProcess:(int)arg1 withCompletion:(id)arg2;
- (void)sendUpdateToServer;
- (id)serializeItem:(id)arg1 intoInfo:(id)arg2 withFile:(id)arg3;
- (id)serializeType:(id)arg1 intoInfo:(id)arg2 withFile:(id)arg3;
- (id)serverQ;
- (void)setBomCheckTypes:(id)arg1;
- (void)setCompletionBlock:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setCurrentGeneration:(id)arg1;
- (void)setCurrentGenerationHasUpdates:(bool)arg1;
- (void)setDisallowdTypes:(id)arg1;
- (void)setLocalPasteboardWasFetched:(id)arg1;
- (void)setPasteboardReadQ:(id)arg1;
- (void)setRemotePasteboardAvaliable:(bool)arg1;
- (void)setServerQ:(id)arg1;
- (void)setTypeAliases:(id)arg1;
- (void)setTypeBOMs:(id)arg1;
- (void)setUpdateScheduled:(bool)arg1;
- (void)tellClientDebuggingEnabled:(bool)arg1 logFileHandle:(id)arg2;
- (id)typeAliases;
- (id)typeBOMs;
- (bool)updateScheduled;
- (void)writeLocalPasteboardToFile:(id)arg1 withCompletion:(id)arg2;

@end
