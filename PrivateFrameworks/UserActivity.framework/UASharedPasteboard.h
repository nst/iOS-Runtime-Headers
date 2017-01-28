/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UserActivity.framework/UserActivity
 */

@interface UASharedPasteboard : NSObject {
    UASharedPasteboardManager * _manager;
}

@property UASharedPasteboardManager *manager;

+ (void)clearLocalPasteboardInformation;
+ (void)initialize;
+ (void)localPasteboardDidAddData:(id)arg1 toItemAtIndex:(unsigned long long)arg2 generation:(unsigned long long)arg3;
+ (void)localPasteboardDidAddItems:(id)arg1 forGeneration:(unsigned long long)arg2;
+ (void)localPasteboardDidPasteGeneration:(unsigned long long)arg1;
+ (id)remotePasteboard;

- (id)manager;
- (void)prefetchRemotePasteboardTypes:(id)arg1;
- (void)requestRemotePasteboardDataForProcess:(int)arg1 withCompletion:(id)arg2;
- (void)requestRemotePasteboardTypesForProcess:(int)arg1 withCompletion:(id)arg2;
- (void)setManager:(id)arg1;

@end
