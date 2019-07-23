/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPArchiverBase : NSObject <TSPArchivableContent> {
    NSMutableDictionary * _alternates;
    TSPReferenceOrderedSet * _commandToModelReferences;
    struct FieldPath { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { int x_1_2_1; } x_4_1_1; } x4; struct RepeatedField<unsigned int> { int x_5_1_1; int x_5_1_2; union Pointer { struct Arena {} *x_3_2_1; struct Rep {} *x_3_2_2; } x_5_1_3; } x5; int x6; } * _currentFieldPath;
    NSHashTable * _dataReferences;
    struct unordered_map<const TSP::FieldPath, TSP::FieldInfoRuleAttributes, TSP::FieldPathHash, TSP::FieldPathEqualTo, std::__1::allocator<std::__1::pair<const TSP::FieldPath, TSP::FieldInfoRuleAttributes> > > { struct __hash_table<std::__1::__hash_value_type<const TSP::FieldPath, TSP::FieldInfoRuleAttributes>, std::__1::__unordered_map_hasher<const TSP::FieldPath, std::__1::__hash_value_type<const TSP::FieldPath, TSP::FieldInfoRuleAttributes>, TSP::FieldPathHash, true>, std::__1::__unordered_map_equal<const TSP::FieldPath, std::__1::__hash_value_type<const TSP::FieldPath, TSP::FieldInfoRuleAttributes>, TSP::FieldPathEqualTo, true>, std::__1::allocator<std::__1::__hash_value_type<const TSP::FieldPath, TSP::FieldInfoRuleAttributes> > > { struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const TSP::FieldPath, TSP::FieldInfoRuleAttributes>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const TSP::FieldPath, TSP::FieldInfoRuleAttributes>, void *> *> *> > > { struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const TSP::FieldPath, TSP::FieldInfoRuleAttributes>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const TSP::FieldPath, TSP::FieldInfoRuleAttributes>, void *> *> *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const TSP::FieldPath, TSP::FieldInfoRuleAttributes>, void *> *> {} **x_1_3_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const TSP::FieldPath, TSP::FieldInfoRuleAttributes>, void *> *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const TSP::FieldPath, TSP::FieldInfoRuleAttributes>, void *> *> *> > { unsigned long long x_1_5_1; } x_2_4_1; } x_1_3_2; } x_1_2_1; } x_1_1_1; } x1; } * _fieldRules;
    NSHashTable * _lazyReferences;
    struct auto_ptr<google::protobuf::Message> { 
        struct Message {} *__ptr_; 
    }  _message;
    unsigned long long  _messageVersion;
    TSPObject * _object;
    TSPReferenceOrderedSet * _strongReferences;
    TSPReferenceOrderedSet * _weakReferences;
}

@property (nonatomic, readonly) NSDictionary *alternates;
@property (nonatomic, readonly) TSPReferenceOrderedSet *commandToModelReferences;
@property (nonatomic, readonly) const struct FieldPath { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { int x_1_2_1; } x_4_1_1; } x4; struct RepeatedField<unsigned int> { int x_5_1_1; int x_5_1_2; union Pointer { struct Arena {} *x_3_2_1; struct Rep {} *x_3_2_2; } x_5_1_3; } x5; int x6; }*currentFieldPath;
@property (nonatomic, readonly) NSHashTable *dataReferences;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) const struct FieldPath { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { int x_1_2_1; } x_4_1_1; } x4; struct RepeatedField<unsigned int> { int x_5_1_1; int x_5_1_2; union Pointer { struct Arena {} *x_3_2_1; struct Rep {} *x_3_2_2; } x_5_1_3; } x5; int x6; }*fieldPath;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isContentUnknown;
@property (nonatomic, readonly) bool isDiff;
@property (nonatomic, readonly) bool isForCopy;
@property (nonatomic, readonly) bool isSavingCollaborativeDocument;
@property (nonatomic, readonly) bool isSavingDocumentAs;
@property (nonatomic, readonly) NSHashTable *lazyReferences;
@property (nonatomic, readonly) unsigned int messageType;
@property (nonatomic, readonly) unsigned long long messageVersion;
@property (nonatomic) unsigned long long messageVersion;
@property (nonatomic, readonly) unsigned long long minimumSupportedVersion;
@property (nonatomic, readonly) TSPObject *object;
@property (nonatomic, readonly) TSPReferenceOrderedSet *strongReferences;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long targetType;
@property (nonatomic, readonly) TSPReferenceOrderedSet *weakReferences;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)addAlternateArchiverForVersion:(unsigned long long)arg1 fieldPath:(const struct FieldPath { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { int x_1_2_1; } x_4_1_1; } x4; struct RepeatedField<unsigned int> { int x_5_1_1; int x_5_1_2; union Pointer { struct Arena {} *x_3_2_1; struct Rep {} *x_3_2_2; } x_5_1_3; } x5; int x6; }*)arg2 isDiffArchiver:(bool)arg3 diffReadVersion:(unsigned long long)arg4;
- (void)addWeakReferenceToObjectUUID:(id)arg1;
- (id)alternateDiffToMergeBeforeVersion:(unsigned long long)arg1 fileFormatVersion:(unsigned long long)arg2;
- (id)alternateDiffToMergeBeforeVersion:(unsigned long long)arg1 fileFormatVersion:(unsigned long long)arg2 field:(int)arg3;
- (id)alternateDiffToMergeBeforeVersion:(unsigned long long)arg1 fileFormatVersion:(unsigned long long)arg2 fieldPath:(int*)arg3;
- (id)alternateDiffToMergeBeforeVersion:(unsigned long long)arg1 fileFormatVersion:(unsigned long long)arg2 fieldPath:(int*)arg3 baseFieldPath:(const struct FieldPath { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { int x_1_2_1; } x_4_1_1; } x4; struct RepeatedField<unsigned int> { int x_5_1_1; int x_5_1_2; union Pointer { struct Arena {} *x_3_2_1; struct Rep {} *x_3_2_2; } x_5_1_3; } x5; int x6; }*)arg4;
- (id)alternates;
- (const struct FieldPath { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { int x_1_2_1; } x_4_1_1; } x4; struct RepeatedField<unsigned int> { int x_5_1_1; int x_5_1_2; union Pointer { struct Arena {} *x_3_2_1; struct Rep {} *x_3_2_2; } x_5_1_3; } x5; int x6; }*)baseFieldPathAndReturnShouldDeleteReturnedValue:(bool*)arg1;
- (void)cleanup;
- (id)commandToModelReferences;
- (const struct FieldPath { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { int x_1_2_1; } x_4_1_1; } x4; struct RepeatedField<unsigned int> { int x_5_1_1; int x_5_1_2; union Pointer { struct Arena {} *x_3_2_1; struct Rep {} *x_3_2_2; } x_5_1_3; } x5; int x6; }*)currentFieldPath;
- (id)dataReferences;
- (void)dealloc;
- (void)enumerateFieldRulesUsingBlock:(id /* block */)arg1;
- (const struct FieldPath { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { int x_1_2_1; } x_4_1_1; } x4; struct RepeatedField<unsigned int> { int x_5_1_1; int x_5_1_2; union Pointer { struct Arena {} *x_3_2_1; struct Rep {} *x_3_2_2; } x_5_1_3; } x5; int x6; }*)fieldPath;
- (id)init;
- (id)initWithObject:(id)arg1;
- (bool)isContentUnknown;
- (bool)isDiff;
- (bool)isForCopy;
- (bool)isSavingCollaborativeDocument;
- (bool)isSavingDocumentAs;
- (id)lazyReferences;
- (struct Message { int (**x1)(); }*)message;
- (unsigned int)messageType;
- (unsigned long long)messageVersion;
- (struct Message { int (**x1)(); }*)messageWithNewFunction:(int (*)arg1;
- (unsigned long long)minimumSupportedVersion;
- (id)object;
- (void)pushScopeForField:(int)arg1 usingBlock:(id /* block */)arg2;
- (void)releaseMessage;
- (void)setDataReference:(id)arg1 message:(struct DataReference { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { int x_1_2_1; } x_4_1_1; } x4; unsigned long long x5; }*)arg2;
- (void)setDataReferenceArray:(id)arg1 message:(struct RepeatedPtrField<TSP::DataReference> { struct Arena {} *x1; int x2; int x3; struct Rep {} *x4; }*)arg2;
- (void)setIgnoreAndPreserveRuleForField:(int)arg1;
- (void)setIgnoreAndPreserveRuleForFieldPath:(int*)arg1;
- (void)setIgnoreAndPreserveUntilModifiedRuleForField:(int)arg1;
- (void)setIgnoreAndPreserveUntilModifiedRuleForFieldPath:(int*)arg1;
- (void)setMessageVersion:(unsigned long long)arg1;
- (void)setMustUnderstandRuleForField:(int)arg1;
- (void)setMustUnderstandRuleForFieldPath:(int*)arg1;
- (void)setRule:(int)arg1 forFieldPath:(int*)arg2 fileFormatVersion:(unsigned long long)arg3 featureIdentifier:(id)arg4;
- (void)setSparseReferenceArray:(id)arg1 isWeak:(bool)arg2 message:(struct SparseReferenceArray { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { int x_1_2_1; } x_4_1_1; } x4; struct RepeatedPtrField<TSP::SparseReferenceArray_Entry> { struct Arena {} *x_5_1_1; int x_5_1_2; int x_5_1_3; struct Rep {} *x_5_1_4; } x5; unsigned int x6; }*)arg3;
- (void)setSparseReferenceArray:(id)arg1 message:(struct SparseReferenceArray { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { int x_1_2_1; } x_4_1_1; } x4; struct RepeatedPtrField<TSP::SparseReferenceArray_Entry> { struct Arena {} *x_5_1_1; int x_5_1_2; int x_5_1_3; struct Rep {} *x_5_1_4; } x5; unsigned int x6; }*)arg2;
- (void)setSparseWeakObjectUUIDPathReferenceArray:(id)arg1 message:(struct SparseUUIDPathArray { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { int x_1_2_1; } x_4_1_1; } x4; struct RepeatedPtrField<TSP::SparseUUIDPathArray_Entry> { struct Arena {} *x_5_1_1; int x_5_1_2; int x_5_1_3; struct Rep {} *x_5_1_4; } x5; unsigned int x6; }*)arg2;
- (void)setSparseWeakObjectUUIDReferenceArray:(id)arg1 message:(struct SparseUUIDArray { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { int x_1_2_1; } x_4_1_1; } x4; struct RepeatedPtrField<TSP::SparseUUIDArray_Entry> { struct Arena {} *x_5_1_1; int x_5_1_2; int x_5_1_3; struct Rep {} *x_5_1_4; } x5; unsigned int x6; }*)arg2;
- (void)setSparseWeakReferenceArray:(id)arg1 message:(struct SparseReferenceArray { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { int x_1_2_1; } x_4_1_1; } x4; struct RepeatedPtrField<TSP::SparseReferenceArray_Entry> { struct Arena {} *x_5_1_1; int x_5_1_2; int x_5_1_3; struct Rep {} *x_5_1_4; } x5; unsigned int x6; }*)arg2;
- (void)setStrongLazyReference:(id)arg1 message:(struct Reference { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { int x_1_2_1; } x_4_1_1; } x4; unsigned long long x5; int x6; bool x7; }*)arg2;
- (void)setStrongLazyReferenceArray:(id)arg1 message:(struct RepeatedPtrField<TSP::Reference> { struct Arena {} *x1; int x2; int x3; struct Rep {} *x4; }*)arg2;
- (void)setStrongReference:(id)arg1 message:(struct Reference { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { int x_1_2_1; } x_4_1_1; } x4; unsigned long long x5; int x6; bool x7; }*)arg2;
- (void)setStrongReferenceArray:(id)arg1 message:(struct RepeatedPtrField<TSP::Reference> { struct Arena {} *x1; int x2; int x3; struct Rep {} *x4; }*)arg2;
- (void)setWeakLazyReference:(id)arg1 message:(struct Reference { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { int x_1_2_1; } x_4_1_1; } x4; unsigned long long x5; int x6; bool x7; }*)arg2;
- (void)setWeakReference:(id)arg1 message:(struct Reference { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { int x_1_2_1; } x_4_1_1; } x4; unsigned long long x5; int x6; bool x7; }*)arg2;
- (void)setWeakReferenceArray:(id)arg1 message:(struct RepeatedPtrField<TSP::Reference> { struct Arena {} *x1; int x2; int x3; struct Rep {} *x4; }*)arg2;
- (void)setWeakReferenceToObjectUUID:(id)arg1 message:(struct UUID { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { int x_1_2_1; } x_4_1_1; } x4; unsigned long long x5; unsigned long long x6; }*)arg2;
- (void)setWeakReferenceToObjectUUIDArray:(id)arg1 message:(struct RepeatedPtrField<TSP::UUID> { struct Arena {} *x1; int x2; int x3; struct Rep {} *x4; }*)arg2;
- (void)setWeakReferenceToObjectUUIDData:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; }*)arg1 message:(struct UUID { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { int x_1_2_1; } x_4_1_1; } x4; unsigned long long x5; unsigned long long x6; }*)arg2;
- (void)setWeakReferenceToObjectUUIDPath:(id)arg1 message:(struct UUIDPath { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { int x_1_2_1; } x_4_1_1; } x4; struct RepeatedPtrField<TSP::UUID> { struct Arena {} *x_5_1_1; int x_5_1_2; int x_5_1_3; struct Rep {} *x_5_1_4; } x5; }*)arg2;
- (void)setWeakReferenceToObjectUUIDPathArray:(id)arg1 message:(struct RepeatedPtrField<TSP::UUIDPath> { struct Arena {} *x1; int x2; int x3; struct Rep {} *x4; }*)arg2;
- (id)strongReferences;
- (long long)targetType;
- (id)weakReferences;

@end
