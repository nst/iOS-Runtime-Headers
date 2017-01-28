/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

@interface _LSDocumentProxyBindingQuery : _LSQuery {
    bool  _airDropStyle;
    LSDocumentProxy * _documentProxy;
    NSString * _handlerRank;
    bool  _withTypeOwner;
}

@property (nonatomic, readonly) bool airDropStyle;
@property (nonatomic, readonly, retain) LSDocumentProxy *documentProxy;
@property (nonatomic, readonly, copy) NSString *handlerRank;
@property (nonatomic, readonly) bool withTypeOwner;

+ (bool)supportsSecureCoding;

- (void)_enumerateWithXPCConnection:(id)arg1 block:(id)arg2;
- (bool)_shouldCacheResolvedResults;
- (bool)airDropStyle;
- (int)calculatePriorityForApp:(id)arg1 cloudOwner:(id)arg2 preferredHandler:(id)arg3;
- (void)dealloc;
- (id)documentProxy;
- (void)encodeWithCoder:(id)arg1;
- (id)handlerRank;
- (id)initWithCoder:(id)arg1;
- (id)initWithDocumentProxy:(id)arg1 withTypeOwner:(bool)arg2 airDropStyle:(bool)arg3 handlerRank:(id)arg4;
- (bool)withTypeOwner;

@end
