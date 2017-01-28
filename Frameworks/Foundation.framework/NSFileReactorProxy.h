/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSFileReactorProxy : NSObject {
    NSXPCConnection * _client;
    NSFileAccessNode * _itemLocation;
    id  _reactorID;
}

+ (void)_enumerateParentDirectoriesStartingAtURL:(id)arg1 usingBlock:(id)arg2;

- (id)_clientProxy;
- (bool)allowedForURL:(id)arg1;
- (id)client;
- (void)collectDebuggingInformationWithCompletionHandler:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)descriptionWithIndenting:(id)arg1;
- (void)forwardUsingProxy:(id)arg1;
- (id)initWithClient:(id)arg1 reactorID:(id)arg2;
- (void)invalidate;
- (id)itemLocation;
- (id)reactorID;
- (void)setItemLocation:(id)arg1;

@end
