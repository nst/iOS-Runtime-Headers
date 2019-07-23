/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPViewStateMetadata : TSPObject {
    struct ViewStateMetadata { 
        int (**_vptr$MessageLite)(); 
        struct InternalMetadataWithArena { 
            void *ptr_; 
        } _internal_metadata_; 
        struct HasBits<1> { 
            unsigned int has_bits_[1]; 
        } _has_bits_; 
        struct CachedSize { 
            struct atomic<int> { 
                int __a_; 
            } size_; 
        } _cached_size_; 
        struct RepeatedField<unsigned int> { 
            int current_size_; 
            int total_size_; 
            union Pointer { 
                struct Arena {} *arena; 
                struct Rep {} *rep; 
            } ptr_; 
        } version_; 
        int _version_cached_byte_size_; 
        struct RepeatedPtrField<TSP::ObjectUUIDMapEntry> { 
            struct Arena {} *arena_; 
            int current_size_; 
            int total_size_; 
            struct Rep {} *rep_; 
        } external_object_uuid_map_entries_; 
        struct ComponentInfo {} *component_; 
        struct UUID {} *version_uuid_; 
    }  _message;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)loadFromUnarchiver:(id)arg1;
- (struct ViewStateMetadata { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { int x_1_2_1; } x_4_1_1; } x4; struct RepeatedField<unsigned int> { int x_5_1_1; int x_5_1_2; union Pointer { struct Arena {} *x_3_2_1; struct Rep {} *x_3_2_2; } x_5_1_3; } x5; int x6; struct RepeatedPtrField<TSP::ObjectUUIDMapEntry> { struct Arena {} *x_7_1_1; int x_7_1_2; int x_7_1_3; struct Rep {} *x_7_1_4; } x7; struct ComponentInfo {} *x8; struct UUID {} *x9; }*)message;
- (void)saveToArchiver:(id)arg1;
- (long long)tsp_identifier;

@end
