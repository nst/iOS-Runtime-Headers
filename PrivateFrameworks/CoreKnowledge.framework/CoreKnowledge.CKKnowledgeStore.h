/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreKnowledge.framework/CoreKnowledge
 */

@interface CoreKnowledge.CKKnowledgeStore : NSObject {
    void data;
    void delegate;
    void location;
    void name;
    void path;
}

@property (nonatomic, retain) <_TtP13CoreKnowledge24CKKnowledgeStoreDelegate_> *delegate;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) long long hashValue;
@property (nonatomic, readonly) NSArray *keys;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *path;

+ (id)defaultKnowledgeStore;
+ (id)inMemoryKnowledgeStore;
+ (id)knowledgeStoreWithName:(id)arg1;
+ (id)userDefaultsKnowledgeStore;

- (id).cxx_destruct;
- (id)delegate;
- (bool)dropLinks:(id)arg1 error:(id*)arg2;
- (void)dropLinksFrom:(id)arg1 to:(id)arg2 ignoreWeights:(bool)arg3 completionHandler:(id)arg4;
- (bool)dropLinksFrom:(id)arg1 to:(id)arg2 withPredicate:(id)arg3 ignoreWeights:(bool)arg4 error:(id*)arg5;
- (void)dropLinksFrom:(id)arg1 withPredicate:(id)arg2 completionHandler:(id)arg3;
- (bool)dropLinksFrom:(id)arg1 withPredicate:(id)arg2 error:(id*)arg3;
- (id)entitiesAndReturnError:(id*)arg1;
- (id)entityWithIdentifier:(id)arg1;
- (bool)evaluateJSONLDEntryForEntity:(id)arg1 key:(id)arg2 value:(id)arg3 error:(id*)arg4;
- (long long)hash;
- (/* Warning: Unrecognized filer type: 'Â' using 'void*' */ void*)hashValue:(void *)arg1; // needs 1 arg types, found 24: /* Warning: Unrecognized filer type: '' using 'void*' */ void*, /* Warning: Unrecognized filer type: ')' using 'void*' */ void*, /* Warning: Unrecognized filer type: '`' using 'void*' */ void*, /* Warning: Unrecognized filer type: '' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'Ã' using 'void*' */ void*, /* Warning: Unrecognized filer type: '' using 'void*' */ void*, /* Warning: Unrecognized filer type: '' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'Â' using 'void*' */ void*, /* Warning: Unrecognized filer type: '' using 'void*' */ void*, long double, /* Warning: Unrecognized filer type: 'Ã' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'Â' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'Ã' using 'void*' */ void*, /* Warning: Unrecognized filer type: '' using 'void*' */ void*, /* Warning: Unrecognized filer type: '' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'Â' using 'void*' */ void*, /* Warning: Unrecognized filer type: '' using 'void*' */ void*, long double, /* Warning: Unrecognized filer type: 'Ã' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'Â' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'Ã' using 'void*' */ void*, /* Warning: Unrecognized filer type: '' using 'void*' */ void*, id, /* Warning: Unrecognized filer type: 'Ã' using 'void*' */ void*
- (void)importContentsOfJSONLDAtPath:(id)arg1 completionHandler:(id)arg2;
- (bool)importJSONLDWithData:(id)arg1 error:(id*)arg2;
- (bool)inferLinkTo:(id)arg1 withPredicate:(id)arg2 when:(id)arg3 error:(id*)arg4;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)keys;
- (void)linksWithBetween:(id)arg1 and:(id)arg2 completionHandler:(id)arg3;
- (id)linksWithBetween:(id)arg1 and:(id)arg2 error:(id*)arg3;
- (id)name;
/* MISSING HEADER DESCRIPTION FOR METHOD objectForKeyedSubscript: */
- (id)path;
- (bool)removeEntity:(id)arg1 error:(id*)arg2;
- (/* Warning: Unrecognized filer type: 'Ã' using 'void*' */ void*)removeObjectForKey:(void *)arg1 error:(void *)arg2; // needs 2 arg types, found 9: /* Warning: Unrecognized filer type: '' using 'void*' */ void*, /* Warning: Unrecognized filer type: '' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'Â' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'Â' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'H' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'Ã' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'Â' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'Â' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'Â' using 'void*' */ void*
- (void)setDelegate:(id)arg1;
/* MISSING HEADER DESCRIPTION FOR METHOD setObject:forKeyedSubscript: */
- (id)subgraphWithEntities:(id)arg1;
- (void)triplesMatching:(id)arg1 completionHandler:(id)arg2;
- (id)triplesMatching:(id)arg1 error:(id*)arg2;
- (bool)wipeAndReturnError:(id*)arg1;
- (id)writeBatch;

@end