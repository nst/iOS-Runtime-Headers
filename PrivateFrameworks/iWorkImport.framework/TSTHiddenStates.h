/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTHiddenStates : NSObject <TSTAdditionalHiddenRowColumnProviding, TSTTableHiddenRowColumnProviding> {
    TSTHiddenStateExtent * _columnHiddenStateExtent;
    TSTHiddenStatesOwner * _hiddenStatesOwner;
    struct UUIDData<TSP::UUIDData> { 
        union { 
            unsigned char _uuid[16]; 
            struct { 
                unsigned char byte0; 
                unsigned char byte1; 
                unsigned char byte2; 
                unsigned char byte3; 
                unsigned char byte4; 
                unsigned char byte5; 
                unsigned char byte6; 
                unsigned char byte7; 
                unsigned char byte8; 
                unsigned char byte9; 
                unsigned char byte10; 
                unsigned char byte11; 
                unsigned char byte12; 
                unsigned char byte13; 
                unsigned char byte14; 
                unsigned char byte15; 
            } _cfuuid; 
            struct { 
                unsigned long long _lower; 
                unsigned long long _upper; 
            } ; 
        } ; 
    }  _hiddenStatesUid;
    TSTHiddenStateExtent * _rowHiddenStateExtent;
}

@property (nonatomic, readonly, retain) TSTHiddenStateExtent *columnHiddenStateExtent;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) TSTTableFilterSet *filterSet;
@property (nonatomic, readonly) bool hasCollapsedRows;
@property (nonatomic, readonly) bool hasHiddenColumns;
@property (nonatomic, readonly) bool hasHiddenRows;
@property (nonatomic, readonly) bool hasUserHiddenColumns;
@property (nonatomic, readonly) bool hasUserHiddenRows;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; } hiddenStateOwnerForColumnsUID;
@property (nonatomic) struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; } hiddenStateOwnerForRowsUID;
@property (nonatomic) TSTHiddenStatesOwner *hiddenStatesOwner;
@property (nonatomic) struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; } hiddenStatesUid;
@property (nonatomic) bool needsFilterFormulaRewriteForImport;
@property (nonatomic) bool needsToUpdateFilterSetForImport;
@property (nonatomic, readonly) unsigned int numberOfHiddenColumns;
@property (nonatomic, readonly) unsigned int numberOfHiddenRows;
@property (nonatomic, readonly) unsigned int numberOfUserHiddenColumns;
@property (nonatomic, readonly) unsigned int numberOfUserHiddenRows;
@property (nonatomic, readonly, retain) TSTHiddenStateExtent *rowHiddenStateExtent;
@property (readonly) Class superclass;

+ (struct TSUCellCoord { unsigned int x1; unsigned short x2; bool x3; bool x4; })filterFormulaCoordinate;
+ (struct TSUCellCoord { unsigned int x1; unsigned short x2; bool x3; bool x4; })filterFormulaCoordinateForRow:(unsigned int)arg1;
+ (struct TSUCellCoord { unsigned int x1; unsigned short x2; bool x3; bool x4; })filterFormulaThresholdCoordinateForRow:(unsigned int)arg1;
+ (id)mutableIndexSetByIntersecting:(id)arg1 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)anyHiddenColumnsInCellRange:(struct TSUCellRect { struct TSUCellCoord { unsigned int x_1_1_1; unsigned short x_1_1_2; bool x_1_1_3; bool x_1_1_4; } x1; struct { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; })arg1;
- (bool)anyHiddenRowsInCellRange:(struct TSUCellRect { struct TSUCellCoord { unsigned int x_1_1_1; unsigned short x_1_1_2; bool x_1_1_3; bool x_1_1_4; } x1; struct { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; })arg1;
- (bool)anyHiddenRowsInCellRange:(struct TSUCellRect { struct TSUCellCoord { unsigned int x_1_1_1; unsigned short x_1_1_2; bool x_1_1_3; bool x_1_1_4; } x1; struct { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; })arg1 forAction:(unsigned char)arg2;
- (id)applyCollapseExpandState:(id)arg1 outUndoState:(id*)arg2;
- (id)collapseSummaryGroupUIDs:(id)arg1;
- (id)collapsedGroupUids;
- (id)columnHiddenStateExtent;
- (id)copyCollapsedStateToUpdatedGroupUids:(id)arg1;
- (void)copyFromHiddenStates:(id)arg1 forRange:(struct TSUCellRect { struct TSUCellCoord { unsigned int x_1_1_1; unsigned short x_1_1_2; bool x_1_1_3; bool x_1_1_4; } x1; struct { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; })arg2 withContext:(id)arg3 isWholeTableCopy:(bool)arg4;
- (void)deleteColumnsFromBaseRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 columnUids:(const struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> {} *x1; struct UUIDData<TSP::UUIDData> {} *x2; struct __compressed_pair<TSU::UUIDData<TSP::UUIDData> *, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> {} *x_3_1_1; } x3; }*)arg2;
- (void)deleteRowsFromBaseRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 rowUids:(const struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> {} *x1; struct UUIDData<TSP::UUIDData> {} *x2; struct __compressed_pair<TSU::UUIDData<TSP::UUIDData> *, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> {} *x_3_1_1; } x3; }*)arg2;
- (void)dirtyFilterState;
- (void)dirtyFilterStateForHeaders;
- (id)duplicateFilterSet;
- (id)duplicateFilterSetInUidFormWithTable:(id)arg1;
- (void)enableFilterSet:(bool)arg1;
- (void)encodeToArchive:(struct HiddenStatesArchive { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { int x_1_2_1; } x_4_1_1; } x4; struct UUID {} *x5; struct HiddenStateExtentArchive {} *x6; struct HiddenStateExtentArchive {} *x7; }*)arg1 archiver:(id)arg2;
- (id)expandSummaryGroupUIDs:(id)arg1;
- (id)filterSet;
- (void)filterSetUpdated;
- (bool)hasActiveFilters;
- (bool)hasCollapsedRows;
- (bool)hasFilterRulesWithTable:(id)arg1 inBaseColumns:(id)arg2;
- (bool)hasHiddenColumnAtIndex:(unsigned short)arg1;
- (bool)hasHiddenColumnAtIndex:(unsigned short)arg1 forAction:(unsigned char)arg2;
- (bool)hasHiddenColumns;
- (bool)hasHiddenRowAtIndex:(unsigned int)arg1;
- (bool)hasHiddenRowAtIndex:(unsigned int)arg1 forAction:(unsigned char)arg2;
- (bool)hasHiddenRows;
- (bool)hasUserHiddenColumns;
- (bool)hasUserHiddenRows;
- (struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; })hiddenStateOwnerForColumnsUID;
- (struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; })hiddenStateOwnerForRowsUID;
- (id)hiddenStatesOwner;
- (struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; })hiddenStatesUid;
- (bool)hideBaseColumnAtIndex:(struct TSUModelColumnIndex { unsigned short x1; })arg1 forAction:(unsigned char)arg2;
- (bool)hideBaseRowAtIndex:(struct TSUModelRowIndex { unsigned int x1; })arg1 forAction:(unsigned char)arg2;
- (bool)hideColumnAtIndex:(unsigned short)arg1 forAction:(unsigned char)arg2;
- (bool)hideRowAtIndex:(unsigned int)arg1 forAction:(unsigned char)arg2;
- (unsigned char)hidingActionForBaseColumnAtIndex:(struct TSUModelColumnIndex { unsigned short x1; })arg1;
- (unsigned char)hidingActionForBaseRowAtIndex:(struct TSUModelRowIndex { unsigned int x1; })arg1;
- (unsigned char)hidingActionForColumnAtIndex:(unsigned short)arg1;
- (unsigned char)hidingActionForRowAtIndex:(unsigned int)arg1;
- (unsigned short)indexOfVisibleColumnAfterAndIncludingColumnAtIndex:(unsigned short)arg1;
- (unsigned short)indexOfVisibleColumnAfterColumnAtIndex:(unsigned short)arg1;
- (unsigned short)indexOfVisibleColumnBeforeAndIncludingColumnAtIndex:(unsigned short)arg1;
- (unsigned short)indexOfVisibleColumnBeforeColumnAtIndex:(unsigned short)arg1;
- (unsigned int)indexOfVisibleRowAfterAndIncludingRowAtIndex:(unsigned int)arg1;
- (unsigned int)indexOfVisibleRowAfterRowAtIndex:(unsigned int)arg1;
- (unsigned int)indexOfVisibleRowBeforeAndIncludingRowAtIndex:(unsigned int)arg1;
- (unsigned int)indexOfVisibleRowBeforeRowAtIndex:(unsigned int)arg1;
- (id)indexesOfCollapsedRowsInCellRange:(struct TSUCellRect { struct TSUCellCoord { unsigned int x_1_1_1; unsigned short x_1_1_2; bool x_1_1_3; bool x_1_1_4; } x1; struct { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; })arg1;
- (id)indexesOfFilteredRowsInCellRange:(struct TSUCellRect { struct TSUCellCoord { unsigned int x_1_1_1; unsigned short x_1_1_2; bool x_1_1_3; bool x_1_1_4; } x1; struct { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; })arg1;
- (id)indexesOfHiddenColumnsInBaseCellRange:(struct TSUModelCellRect { struct TSUCellRect { struct TSUCellCoord { unsigned int x_1_2_1; unsigned short x_1_2_2; bool x_1_2_3; bool x_1_2_4; } x_1_1_1; struct { unsigned int x_2_2_1; unsigned int x_2_2_2; } x_1_1_2; } x1; })arg1;
- (id)indexesOfHiddenColumnsInCellRange:(struct TSUCellRect { struct TSUCellCoord { unsigned int x_1_1_1; unsigned short x_1_1_2; bool x_1_1_3; bool x_1_1_4; } x1; struct { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; })arg1;
- (id)indexesOfHiddenRowsInBaseCellRange:(struct TSUModelCellRect { struct TSUCellRect { struct TSUCellCoord { unsigned int x_1_2_1; unsigned short x_1_2_2; bool x_1_2_3; bool x_1_2_4; } x_1_1_1; struct { unsigned int x_2_2_1; unsigned int x_2_2_2; } x_1_1_2; } x1; })arg1;
- (id)indexesOfHiddenRowsInCellRange:(struct TSUCellRect { struct TSUCellCoord { unsigned int x_1_1_1; unsigned short x_1_1_2; bool x_1_1_3; bool x_1_1_4; } x1; struct { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; })arg1;
- (id)indexesOfUserHiddenColumnsInCellRange:(struct TSUCellRect { struct TSUCellCoord { unsigned int x_1_1_1; unsigned short x_1_1_2; bool x_1_1_3; bool x_1_1_4; } x1; struct { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; })arg1;
- (id)indexesOfUserHiddenRowsInCellRange:(struct TSUCellRect { struct TSUCellCoord { unsigned int x_1_1_1; unsigned short x_1_1_2; bool x_1_1_3; bool x_1_1_4; } x1; struct { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; })arg1;
- (id)indexesOfUserVisibleRowsInCellRange:(struct TSUCellRect { struct TSUCellCoord { unsigned int x_1_1_1; unsigned short x_1_1_2; bool x_1_1_3; bool x_1_1_4; } x1; struct { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; })arg1;
- (id)indexesOfVisibleColumnsInCellRange:(struct TSUCellRect { struct TSUCellCoord { unsigned int x_1_1_1; unsigned short x_1_1_2; bool x_1_1_3; bool x_1_1_4; } x1; struct { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; })arg1;
- (id)indexesOfVisibleColumnsInCellRegion:(id)arg1;
- (id)indexesOfVisibleColumnsInColumnRange:(id)arg1;
- (id)indexesOfVisibleRowsInCellRange:(struct TSUCellRect { struct TSUCellCoord { unsigned int x_1_1_1; unsigned short x_1_1_2; bool x_1_1_3; bool x_1_1_4; } x1; struct { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; })arg1;
- (id)indexesOfVisibleRowsInCellRegion:(id)arg1;
- (id)indexesOfVisibleRowsInRowRange:(id)arg1;
- (id)initWithArchive:(const struct HiddenStatesArchive { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { int x_1_2_1; } x_4_1_1; } x4; struct UUID {} *x5; struct HiddenStateExtentArchive {} *x6; struct HiddenStateExtentArchive {} *x7; }*)arg1 unarchiver:(id)arg2 forHiddenStatesOwner:(id)arg3;
- (id)initWithHiddenStatesOwner:(id)arg1;
- (id)initWithHiddenStatesOwner:(id)arg1 hiddenStatesUid:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; }*)arg2;
- (void)insertNewColumnsInBaseRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)insertNewRowsInBaseRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (bool)isCategoryGroupOrParentsCollapsed:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; }*)arg1;
- (bool)isCategoryGroupUIDCollapsed:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; }*)arg1;
- (void)loadIndexesFromTable:(id)arg1;
- (void)moveBaseColumnRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 toColumnIndex:(struct TSUModelColumnIndex { unsigned short x1; })arg2;
- (void)moveBaseRowRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 toRowIndex:(struct TSUModelRowIndex { unsigned int x1; })arg2;
- (void)moveViewColumnRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 toColumnIndex:(struct TSUViewColumnIndex { unsigned short x1; })arg2;
- (id)mutableAnyHiddenColumnIndexes;
- (id)mutableAnyHiddenRowIndexes;
- (id)mutableFilteredRowIndexes;
- (id)mutableUserHiddenColumnIndexes;
- (id)mutableUserHiddenRowIndexes;
- (void)mutateFormulaFiltersWithTable:(id)arg1 usingBlock:(id /* block */)arg2;
- (bool)needsFilterFormulaRewriteForImport;
- (bool)needsToUpdateFilterSetForImport;
- (unsigned int)numberOfHiddenColumns;
- (struct TSUModelColumnIndex { unsigned short x1; })numberOfHiddenColumnsInBaseCellRange:(struct TSUModelCellRect { struct TSUCellRect { struct TSUCellCoord { unsigned int x_1_2_1; unsigned short x_1_2_2; bool x_1_2_3; bool x_1_2_4; } x_1_1_1; struct { unsigned int x_2_2_1; unsigned int x_2_2_2; } x_1_1_2; } x1; })arg1;
- (unsigned int)numberOfHiddenColumnsInCellRange:(struct TSUCellRect { struct TSUCellCoord { unsigned int x_1_1_1; unsigned short x_1_1_2; bool x_1_1_3; bool x_1_1_4; } x1; struct { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; })arg1;
- (unsigned int)numberOfHiddenRows;
- (struct TSUModelRowIndex { unsigned int x1; })numberOfHiddenRowsInBaseCellRange:(struct TSUModelCellRect { struct TSUCellRect { struct TSUCellCoord { unsigned int x_1_2_1; unsigned short x_1_2_2; bool x_1_2_3; bool x_1_2_4; } x_1_1_1; struct { unsigned int x_2_2_1; unsigned int x_2_2_2; } x_1_1_2; } x1; })arg1;
- (unsigned int)numberOfHiddenRowsInCellRange:(struct TSUCellRect { struct TSUCellCoord { unsigned int x_1_1_1; unsigned short x_1_1_2; bool x_1_1_3; bool x_1_1_4; } x1; struct { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; })arg1;
- (unsigned int)numberOfUserHiddenColumns;
- (unsigned int)numberOfUserHiddenRows;
- (struct TSUModelRowIndex { unsigned int x1; })numberOfUserHiddenRowsInBaseCellRange:(struct TSUModelCellRect { struct TSUCellRect { struct TSUCellCoord { unsigned int x_1_2_1; unsigned short x_1_2_2; bool x_1_2_3; bool x_1_2_4; } x_1_1_1; struct { unsigned int x_2_2_1; unsigned int x_2_2_2; } x_1_1_2; } x1; })arg1;
- (unsigned int)numberOfUserHiddenRowsInCellRange:(struct TSUCellRect { struct TSUCellCoord { unsigned int x_1_1_1; unsigned short x_1_1_2; bool x_1_1_3; bool x_1_1_4; } x1; struct { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; })arg1;
- (struct TSCERangeRef { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x_1_2_1; unsigned short x_1_2_2; bool x_1_2_3; bool x_1_2_4; } x_1_1_1; struct TSUCellCoord { unsigned int x_2_2_1; unsigned short x_2_2_2; bool x_2_2_3; bool x_2_2_4; } x_1_1_2; } x1; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_2_1_1; } x2; })referenceToHiddenStateFromColumn:(unsigned short)arg1 toColumn:(unsigned short)arg2;
- (struct TSCERangeRef { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x_1_2_1; unsigned short x_1_2_2; bool x_1_2_3; bool x_1_2_4; } x_1_1_1; struct TSUCellCoord { unsigned int x_2_2_1; unsigned short x_2_2_2; bool x_2_2_3; bool x_2_2_4; } x_1_1_2; } x1; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_2_1_1; } x2; })referenceToHiddenStateFromRow:(unsigned int)arg1 toRow:(unsigned int)arg2;
- (int)registerWithCalcEngine:(id)arg1 baseOwnerUID:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; }*)arg2;
- (void)remapTableUIDsInFormulasWithMap:(const struct UUIDMap<TSP::UUIDMap> { struct __hash_table<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, std::__1::__unordered_map_hasher<TSU::UUIDData<TSP::UUIDData>, std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, std::__1::hash<TSUUUID>, true>, std::__1::__unordered_map_equal<TSU::UUIDData<TSP::UUIDData>, std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, std::__1::equal_to<TSU::UUIDData<TSP::UUIDData> >, true>, std::__1::allocator<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> > > > { struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, void *> *> *> > > { struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, void *> *> *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, void *> *> {} **x_1_3_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, void *> *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, void *> *> *> > { unsigned long long x_1_5_1; } x_2_4_1; } x_1_3_2; } x_1_2_1; } x_1_1_1; } x1; }*)arg1 calcEngine:(id)arg2;
- (id)rowHiddenStateExtent;
- (id)runChange:(id)arg1 withCollapsedState:(id)arg2 outUndoState:(id*)arg3;
- (void)setCategoryGroupUID:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; }*)arg1 asCollapsed:(bool)arg2;
- (void)setFilterSet:(id)arg1;
- (void)setFilterSetType:(int)arg1;
- (void)setFormulaOwnerUIDsWithMap:(id)arg1;
- (void)setHiddenStateOwnerForColumnsUID:(struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; })arg1;
- (void)setHiddenStateOwnerForRowsUID:(struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; })arg1;
- (void)setHiddenStatesOwner:(id)arg1;
- (void)setHiddenStatesUid:(struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; })arg1;
- (void)setNeedsFilterFormulaRewriteForImport:(bool)arg1;
- (void)setNeedsToUpdateFilterSetForImport:(bool)arg1;
- (void)setTableInfo:(id)arg1;
- (bool)showBaseColumnAtIndex:(struct TSUModelColumnIndex { unsigned short x1; })arg1 forAction:(unsigned char)arg2;
- (bool)showBaseRowAtIndex:(struct TSUModelRowIndex { unsigned int x1; })arg1 forAction:(unsigned char)arg2;
- (bool)showColumnAtIndex:(unsigned short)arg1 forAction:(unsigned char)arg2;
- (bool)showRowAtIndex:(unsigned int)arg1 forAction:(unsigned char)arg2;
- (void)swapBaseRowAtIndex:(struct TSUModelRowIndex { unsigned int x1; })arg1 withRowAtIndex:(struct TSUModelRowIndex { unsigned int x1; })arg2;
- (void)syncUpHiddenStateFormulaOwnerUIDs;
- (void)unregisterFromCalcEngine;
- (void)willChangeGroupByTo:(id)arg1;

@end
