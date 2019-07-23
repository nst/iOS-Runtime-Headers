/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTCellSelection : TSKSelection <TSDTextSelection> {
    struct TSTCellUID { 
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
        } _column; 
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
        } _row; 
    }  _anchorCellUID;
    TSTCellUIDRegion * _baseCellUIDRegion;
    bool  _beginImplicitEditing;
    TSTCellRegion * _cachedBaseRegion;
    unsigned long long  _cachedBaseRegionVersionCounter;
    TSTCellRegion * _cachedCellRegion;
    unsigned long long  _cachedCellRegionVersionCounter;
    TSTCellUIDRegion * _cellUIDRegion;
    struct TSTCellUID { 
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
        } _column; 
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
        } _row; 
    }  _cursorCellUID;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _searchReferenceRange;
    long long  _selectionType;
    TSTTableInfo * _tableInfo;
}

@property (nonatomic, readonly) struct TSUCellCoord { unsigned int x1; unsigned short x2; bool x3; bool x4; } anchorCellID;
@property (nonatomic) struct TSTCellUID { struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_1_1_1; } x1; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_2_1_1; } x2; } anchorCellUID;
@property (nonatomic, retain) TSTCellUIDRegion *baseCellUIDRegion;
@property (nonatomic, readonly) TSTCellRegion *baseRegion;
@property (nonatomic, readonly) bool beginImplicitEditing;
@property (nonatomic, retain) TSTCellRegion *cachedBaseRegion;
@property (nonatomic) unsigned long long cachedBaseRegionVersionCounter;
@property (nonatomic, retain) TSTCellRegion *cachedCellRegion;
@property (nonatomic) unsigned long long cachedCellRegionVersionCounter;
@property (nonatomic, readonly) unsigned long long cellCount;
@property (nonatomic, readonly) TSTCellRegion *cellRegion;
@property (nonatomic, retain) TSTCellUIDRegion *cellUIDRegion;
@property (nonatomic, readonly) bool containsBodyRows;
@property (nonatomic, readonly) bool containsCellsInCategoryColumn;
@property (nonatomic, readonly) bool containsCellsInCategoryColumnsOrRows;
@property (nonatomic, readonly) bool containsCellsInCategoryGroupingColumn;
@property (nonatomic, readonly) bool containsCellsInLabelRow;
@property (nonatomic, readonly) bool containsCellsInSummaryOrLabelRows;
@property (nonatomic, readonly) bool containsCellsInSummaryRow;
@property (nonatomic, readonly) bool containsFooterRows;
@property (nonatomic, readonly) bool containsGroupValueCells;
@property (nonatomic, readonly) bool containsHeaderColumns;
@property (nonatomic, readonly) bool containsHeaderRows;
@property (nonatomic, readonly) bool containsOnlyCellsInCategoryColumn;
@property (nonatomic, readonly) bool containsOnlyCellsInCategoryColumnsAndRows;
@property (nonatomic, readonly) bool containsOnlyCellsInSummaryAndLabelRows;
@property (nonatomic, readonly) bool containsOnlyCellsInSummaryRow;
@property (nonatomic, readonly) bool containsOnlyGroupValueCells;
@property (nonatomic, readonly) struct TSUCellCoord { unsigned int x1; unsigned short x2; bool x3; bool x4; } cursorCellID;
@property (nonatomic) struct TSTCellUID { struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_1_1_1; } x1; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_2_1_1; } x2; } cursorCellUID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isAtEndOfLine;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } range;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } searchReferenceRange;
@property (nonatomic, readonly) long long selectionType;
@property (readonly) Class superclass;
@property (nonatomic) TSTTableInfo *tableInfo;

+ (Class)archivedSelectionClass;
+ (id)selectionWithTableInfo:(id)arg1 cellID:(struct TSUCellCoord { unsigned int x1; unsigned short x2; bool x3; bool x4; })arg2;
+ (id)selectionWithTableInfo:(id)arg1 cellRegion:(id)arg2;
+ (id)selectionWithTableInfo:(id)arg1 cellUID:(const struct TSTCellUID { struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_1_1_1; } x1; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_2_1_1; } x2; }*)arg2;
+ (id)selectionWithTableInfo:(id)arg1 columnIndices:(id)arg2;
+ (id)selectionWithTableInfo:(id)arg1 rowIndices:(id)arg2;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct TSUCellCoord { unsigned int x1; unsigned short x2; bool x3; bool x4; })anchorCellID;
- (struct TSTCellUID { struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_1_1_1; } x1; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_2_1_1; } x2; })anchorCellUID;
- (bool)areCellsInTheSameRegionInTable:(id)arg1;
- (id)baseCellUIDRegion;
- (id)baseRegion;
- (bool)beginImplicitEditing;
- (id)cachedBaseRegion;
- (unsigned long long)cachedBaseRegionVersionCounter;
- (id)cachedCellRegion;
- (unsigned long long)cachedCellRegionVersionCounter;
- (bool)canEditWithCellSubselectionInTable:(id)arg1;
- (bool)canEditWithControlCellSubselectionInTable:(id)arg1;
- (bool)canEditWithStockCellSubselectionInTable:(id)arg1;
- (unsigned long long)cellCount;
- (id)cellRegion;
- (id)cellUIDRegion;
- (bool)containsBodyRows;
- (bool)containsCell:(struct TSUCellCoord { unsigned int x1; unsigned short x2; bool x3; bool x4; })arg1;
- (bool)containsCellsInCategoryColumn;
- (bool)containsCellsInCategoryColumnsOrRows;
- (bool)containsCellsInCategoryGroupingColumn;
- (bool)containsCellsInLabelRow;
- (bool)containsCellsInSummaryOrLabelRows;
- (bool)containsCellsInSummaryRow;
- (bool)containsFooterRows;
- (bool)containsGroupValueCells;
- (bool)containsHeaderColumns;
- (bool)containsHeaderRows;
- (bool)containsOnlyCellsInCategoryColumn;
- (bool)containsOnlyCellsInCategoryColumnsAndRows;
- (bool)containsOnlyCellsInSummaryAndLabelRows;
- (bool)containsOnlyCellsInSummaryRow;
- (bool)containsOnlyGroupValueCells;
- (bool)containsSelection:(id)arg1;
- (bool)containsSingleCellOrMergeInTable:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct TSUCellCoord { unsigned int x1; unsigned short x2; bool x3; bool x4; })cursorCellID;
- (struct TSTCellUID { struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_1_1_1; } x1; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_2_1_1; } x2; })cursorCellUID;
- (id)description;
- (bool)getAggregateType:(out unsigned char*)arg1;
- (id)initForUpgradeWithTableInfo:(id)arg1 cellRegion:(id)arg2 anchorCellID:(struct TSUCellCoord { unsigned int x1; unsigned short x2; bool x3; bool x4; })arg3 cursorCellID:(struct TSUCellCoord { unsigned int x1; unsigned short x2; bool x3; bool x4; })arg4 baseRegion:(id)arg5 selectionType:(long long)arg6;
- (id)initWithArchive:(const struct SelectionArchive { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { int x_1_2_1; } x_4_1_1; } x4; struct RepeatedPtrField<TST::CellRange> { struct Arena {} *x_5_1_1; int x_5_1_2; int x_5_1_3; struct Rep {} *x_5_1_4; } x5; struct RepeatedPtrField<TST::CellRange> { struct Arena {} *x_6_1_1; int x_6_1_2; int x_6_1_3; struct Rep {} *x_6_1_4; } x6; struct Reference {} *x7; struct CellID {} *x8; struct CellID {} *x9; struct Reference {} *x10; struct CellUIDRegionArchive {} *x11; struct CellUIDRegionArchive {} *x12; struct UUIDCoordArchive {} *x13; struct UUIDCoordArchive {} *x14; int x15; }*)arg1 unarchiver:(id)arg2;
- (id)initWithRdar39989167Archive:(const struct DeathhawkRdar39989167CellSelectionArchive { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { int x_1_2_1; } x_4_1_1; } x4; struct Reference {} *x5; struct CellUIDRegionArchive {} *x6; struct CellUIDRegionArchive {} *x7; struct UUIDCoordArchive {} *x8; struct UUIDCoordArchive {} *x9; int x10; }*)arg1 unarchiver:(id)arg2;
- (id)initWithTableInfo:(id)arg1 andCellID:(struct TSUCellCoord { unsigned int x1; unsigned short x2; bool x3; bool x4; })arg2;
- (id)initWithTableInfo:(id)arg1 andCellRange:(struct TSUCellRect { struct TSUCellCoord { unsigned int x_1_1_1; unsigned short x_1_1_2; bool x_1_1_3; bool x_1_1_4; } x1; struct { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; })arg2;
- (id)initWithTableInfo:(id)arg1 andPreviousSelection:(id)arg2 offsetBy:(struct TSUColumnRowOffset { int x1; int x2; })arg3;
- (id)initWithTableInfo:(id)arg1 cellID:(struct TSUCellCoord { unsigned int x1; unsigned short x2; bool x3; bool x4; })arg2 selectionType:(long long)arg3;
- (id)initWithTableInfo:(id)arg1 cellRange:(struct TSUCellRect { struct TSUCellCoord { unsigned int x_1_1_1; unsigned short x_1_1_2; bool x_1_1_3; bool x_1_1_4; } x1; struct { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; })arg2 type:(long long)arg3 anchorCellID:(struct TSUCellCoord { unsigned int x1; unsigned short x2; bool x3; bool x4; })arg4 cursorCellID:(struct TSUCellCoord { unsigned int x1; unsigned short x2; bool x3; bool x4; })arg5;
- (id)initWithTableInfo:(id)arg1 cellRegion:(id)arg2;
- (id)initWithTableInfo:(id)arg1 cellRegion:(id)arg2 anchorCellID:(struct TSUCellCoord { unsigned int x1; unsigned short x2; bool x3; bool x4; })arg3 cursorCellID:(struct TSUCellCoord { unsigned int x1; unsigned short x2; bool x3; bool x4; })arg4;
- (id)initWithTableInfo:(id)arg1 cellRegion:(id)arg2 anchorCellID:(struct TSUCellCoord { unsigned int x1; unsigned short x2; bool x3; bool x4; })arg3 cursorCellID:(struct TSUCellCoord { unsigned int x1; unsigned short x2; bool x3; bool x4; })arg4 baseRegion:(id)arg5;
- (id)initWithTableInfo:(id)arg1 cellRegion:(id)arg2 anchorCellID:(struct TSUCellCoord { unsigned int x1; unsigned short x2; bool x3; bool x4; })arg3 cursorCellID:(struct TSUCellCoord { unsigned int x1; unsigned short x2; bool x3; bool x4; })arg4 baseRegion:(id)arg5 selectionType:(long long)arg6;
- (id)initWithTableInfo:(id)arg1 cellRegion:(id)arg2 anchorCellID:(struct TSUCellCoord { unsigned int x1; unsigned short x2; bool x3; bool x4; })arg3 cursorCellID:(struct TSUCellCoord { unsigned int x1; unsigned short x2; bool x3; bool x4; })arg4 baseRegion:(id)arg5 selectionType:(long long)arg6 searchReferenceRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg7 beginImplicitEditing:(bool)arg8;
- (id)initWithTableInfo:(id)arg1 cellRegion:(id)arg2 anchorCellID:(struct TSUCellCoord { unsigned int x1; unsigned short x2; bool x3; bool x4; })arg3 cursorCellID:(struct TSUCellCoord { unsigned int x1; unsigned short x2; bool x3; bool x4; })arg4 selectionType:(long long)arg5;
- (id)initWithTableInfo:(id)arg1 cellUIDRegion:(id)arg2 anchorCellUID:(struct TSTCellUID { struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_1_1_1; } x1; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_2_1_1; } x2; }*)arg3 cursorCellUID:(struct TSTCellUID { struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_1_1_1; } x1; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_2_1_1; } x2; }*)arg4 baseCellUIDRegion:(id)arg5 selectionType:(long long)arg6 searchReferenceRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg7 beginImplicitEditing:(bool)arg8;
- (id)initWithTableInfo:(id)arg1 columnIndices:(id)arg2;
- (id)initWithTableInfo:(id)arg1 rowIndices:(id)arg2;
- (id)initWithTableInfo:(id)arg1 rowOrColumn:(long long)arg2 index:(unsigned int)arg3 count:(unsigned int)arg4;
- (id)initWithTableInfo:(id)arg1 selectionType:(long long)arg2;
- (id)initWithTableInfo:(id)arg1 startingColumnIndex:(unsigned short)arg2 numberOfColumns:(unsigned int)arg3;
- (id)initWithTableInfo:(id)arg1 startingRowIndex:(unsigned int)arg2 numberOfRows:(unsigned int)arg3;
- (void)insert:(long long)arg1 atIndex:(unsigned int)arg2 count:(unsigned int)arg3;
- (bool)intersectsPartialMergeRangeInTable:(id)arg1;
- (bool)isAtEndOfLine;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToSelection:(id)arg1;
- (struct TSUCellCoord { unsigned int x1; unsigned short x2; bool x3; bool x4; })logicalCellIDInTable:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (void)remove:(long long)arg1 atIndex:(unsigned int)arg2 count:(unsigned int)arg3;
- (void)saveToArchive:(struct SelectionArchive { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { int x_1_2_1; } x_4_1_1; } x4; struct RepeatedPtrField<TST::CellRange> { struct Arena {} *x_5_1_1; int x_5_1_2; int x_5_1_3; struct Rep {} *x_5_1_4; } x5; struct RepeatedPtrField<TST::CellRange> { struct Arena {} *x_6_1_1; int x_6_1_2; int x_6_1_3; struct Rep {} *x_6_1_4; } x6; struct Reference {} *x7; struct CellID {} *x8; struct CellID {} *x9; struct Reference {} *x10; struct CellUIDRegionArchive {} *x11; struct CellUIDRegionArchive {} *x12; struct UUIDCoordArchive {} *x13; struct UUIDCoordArchive {} *x14; int x15; }*)arg1 archiver:(id)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })searchReferenceRange;
- (id)selectionAdjustedForColumnVisibilityInTableInfo:(id)arg1;
- (id)selectionAdjustedForGeometryInTableInfo:(id)arg1;
- (id)selectionAdjustedForRowVisibilityInTableInfo:(id)arg1;
- (id)selectionByAddingCellRange:(struct TSUCellRect { struct TSUCellCoord { unsigned int x_1_1_1; unsigned short x_1_1_2; bool x_1_1_3; bool x_1_1_4; } x1; struct { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; })arg1 inTable:(id)arg2 withAnchor:(struct TSUCellCoord { unsigned int x1; unsigned short x2; bool x3; bool x4; })arg3 cursor:(struct TSUCellCoord { unsigned int x1; unsigned short x2; bool x3; bool x4; })arg4 selectionType:(long long)arg5;
- (id)selectionByExtendingWithCellRange:(struct TSUCellRect { struct TSUCellCoord { unsigned int x_1_1_1; unsigned short x_1_1_2; bool x_1_1_3; bool x_1_1_4; } x1; struct { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; })arg1 inTable:(id)arg2 selectionType:(long long)arg3 cursorCell:(struct TSUCellCoord { unsigned int x1; unsigned short x2; bool x3; bool x4; })arg4;
- (id)selectionByRemovingCellRange:(struct TSUCellRect { struct TSUCellCoord { unsigned int x_1_1_1; unsigned short x_1_1_2; bool x_1_1_3; bool x_1_1_4; } x1; struct { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; })arg1 inTable:(id)arg2 withAnchor:(struct TSUCellCoord { unsigned int x1; unsigned short x2; bool x3; bool x4; })arg3 cursor:(struct TSUCellCoord { unsigned int x1; unsigned short x2; bool x3; bool x4; })arg4 selectionType:(long long)arg5;
- (id)selectionExpandedToCoverCollapsedRows;
- (id)selectionToBeginImplicitEditingInTableInfo:(id)arg1;
- (long long)selectionType;
- (bool)selectsSingleControlCellWithInteractionUIInTable:(id)arg1;
- (void)setAnchorCellUID:(struct TSTCellUID { struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_1_1_1; } x1; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_2_1_1; } x2; })arg1;
- (void)setBaseCellUIDRegion:(id)arg1;
- (void)setCachedBaseRegion:(id)arg1;
- (void)setCachedBaseRegionVersionCounter:(unsigned long long)arg1;
- (void)setCachedCellRegion:(id)arg1;
- (void)setCachedCellRegionVersionCounter:(unsigned long long)arg1;
- (void)setCellRange:(struct TSUCellRect { struct TSUCellCoord { unsigned int x_1_1_1; unsigned short x_1_1_2; bool x_1_1_3; bool x_1_1_4; } x1; struct { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; })arg1;
- (void)setCellUIDRegion:(id)arg1;
- (void)setCursorCellUID:(struct TSTCellUID { struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_1_1_1; } x1; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_2_1_1; } x2; })arg1;
- (void)setSearchReferenceRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setTableInfo:(id)arg1;
- (id)tableInfo;

@end
