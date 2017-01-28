/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTMergeRangeCache : NSObject {
    NSMutableIndexSet * _mergeIndexes;
    TSTMergeOwner * _mergeOwner;
    struct unordered_map<unsigned long, TSUCellRect, std::__1::hash<unsigned long>, std::__1::equal_to<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, TSUCellRect> > > { 
        struct __hash_table<std::__1::__hash_value_type<unsigned long, TSUCellRect>, std::__1::__unordered_map_hasher<unsigned long, std::__1::__hash_value_type<unsigned long, TSUCellRect>, std::__1::hash<unsigned long>, true>, std::__1::__unordered_map_equal<unsigned long, std::__1::__hash_value_type<unsigned long, TSUCellRect>, std::__1::equal_to<unsigned long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long, TSUCellRect> > > { 
            struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, TSUCellRect>, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, TSUCellRect>, void *> *> > > { 
                struct __compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, TSUCellRect>, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, TSUCellRect>, void *> *> > > { 
                    struct __hash_node<std::__1::__hash_value_type<unsigned long, TSUCellRect>, void *> {} **__first_; 
                    struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, TSUCellRect>, void *> *> > { 
                        struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, TSUCellRect>, void *> *> > { 
                            unsigned long long __first_; 
                        } __data_; 
                    } __second_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, TSUCellRect>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, TSUCellRect>, void *> > > { 
                struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, TSUCellRect>, void *> *> { 
                    struct __hash_node<std::__1::__hash_value_type<unsigned long, TSUCellRect>, void *> {} *__next_; 
                } __first_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned long, std::__1::__hash_value_type<unsigned long, TSUCellRect>, std::__1::hash<unsigned long>, true> > { 
                unsigned long long __first_; 
            } __p2_; 
            struct __compressed_pair<float, std::__1::__unordered_map_equal<unsigned long, std::__1::__hash_value_type<unsigned long, TSUCellRect>, std::__1::equal_to<unsigned long>, true> > { 
                float __first_; 
            } __p3_; 
        } __table_; 
    }  _mergeRanges;
    struct TSCEBitGrid { 
        struct vector<TSCEBitGridTile *, std::__1::allocator<TSCEBitGridTile *> > { 
            struct TSCEBitGridTile {} **__begin_; 
            struct TSCEBitGridTile {} **__end_; 
            struct __compressed_pair<TSCEBitGridTile **, std::__1::allocator<TSCEBitGridTile *> > { 
                struct TSCEBitGridTile {} **__first_; 
            } __end_cap_; 
        } _tiles; 
        unsigned long long _count; 
        unsigned long long _lastTileFoundAtIndex; 
    }  _mergedAtCellIds;
    struct TSCEBitGridTransaction { struct TSCEBitGrid {} *x1; struct vector<std::__1::pair<_NSRange, _NSRange>, std::__1::allocator<std::__1::pair<_NSRange, _NSRange> > > { struct pair<_NSRange, _NSRange> {} *x_2_1_1; struct pair<_NSRange, _NSRange> {} *x_2_1_2; struct __compressed_pair<std::__1::pair<_NSRange, _NSRange> *, std::__1::allocator<std::__1::pair<_NSRange, _NSRange> > > { struct pair<_NSRange, _NSRange> {} *x_3_2_1; } x_2_1_3; } x2; struct vector<std::__1::pair<_NSRange, _NSRange>, std::__1::allocator<std::__1::pair<_NSRange, _NSRange> > > { struct pair<_NSRange, _NSRange> {} *x_3_1_1; struct pair<_NSRange, _NSRange> {} *x_3_1_2; struct __compressed_pair<std::__1::pair<_NSRange, _NSRange> *, std::__1::allocator<std::__1::pair<_NSRange, _NSRange> > > { struct pair<_NSRange, _NSRange> {} *x_3_2_1; } x_3_1_3; } x3; } * _transaction;
}

@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) NSIndexSet *mergeIndexes;
@property (nonatomic, readonly) TSTMergeOwner *mergeOwner;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)commitRewritingTransaction;
- (unsigned long long)count;
- (void)dealloc;
- (id)description;
- (void)enumerateCacheItemsIntersectingCellRegion:(id)arg1 usingBlock:(id)arg2;
- (void)enumerateCacheItemsIntersectingRange:(struct TSUCellRect { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1 usingBlock:(id)arg2;
- (void)enumerateCacheItemsUsingBlock:(id)arg1;
- (struct TSUCellRect { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })expandCellRangeToCoverMergedCells:(struct TSUCellRect { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (id)expandCellRegionToCoverMergedCells:(id)arg1;
- (bool)hasRangeSpanningRowsForCellRange:(struct TSUCellRect { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (id)initWithMergeOwner:(id)arg1;
- (id)mergeIndexes;
- (id)mergeOwner;
- (struct TSUCellRect { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })mergeRangeAtIndex:(unsigned long long)arg1;
- (struct vector<TSUCellRect, std::__1::allocator<TSUCellRect> > { struct TSUCellRect {} *x1; struct TSUCellRect {} *x2; struct __compressed_pair<TSUCellRect *, std::__1::allocator<TSUCellRect> > { struct TSUCellRect {} *x_3_1_1; } x3; })mergeRanges;
- (struct vector<TSUCellRect, std::__1::allocator<TSUCellRect> > { struct TSUCellRect {} *x1; struct TSUCellRect {} *x2; struct __compressed_pair<TSUCellRect *, std::__1::allocator<TSUCellRect> > { struct TSUCellRect {} *x_3_1_1; } x3; })mergeRangesIntersectingCellRegion:(id)arg1;
- (struct vector<TSUCellRect, std::__1::allocator<TSUCellRect> > { struct TSUCellRect {} *x1; struct TSUCellRect {} *x2; struct __compressed_pair<TSUCellRect *, std::__1::allocator<TSUCellRect> > { struct TSUCellRect {} *x_3_1_1; } x3; })mergeRangesIntersectingRange:(struct TSUCellRect { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (id)mergedGridIndicesForDimension:(long long)arg1;
- (struct TSUCellRect { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })mergedRangeForCellID:(struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (void)openRewritingTransaction;
- (void)p_updateGridForReplacingRange:(struct TSUCellRect { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1 withRange:(struct TSUCellRect { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg2;
- (bool)partiallyIntersectsCellRange:(struct TSUCellRect { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (bool)partiallyIntersectsCellRegion:(id)arg1;
- (void)removeMergeRangeAtIndex:(unsigned long long)arg1;
- (void)setMerge:(struct TSUCellRect { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1 atIndex:(unsigned long long)arg2;

@end
