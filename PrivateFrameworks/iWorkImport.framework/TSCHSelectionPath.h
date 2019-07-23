/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHSelectionPath : NSObject <NSCopying> {
    NSArray * mArguments;
    TSCHSelectionPathType * mPathType;
    TSCHSelectionPath * mSubSelection;
}

@property (nonatomic, readonly) TSCHSelectionPathType *pathType;
@property (nonatomic, readonly) TSCHSelectionPath *subSelection;

+ (id)selectionPathWithPathType:(id)arg1 arguments:(id)arg2;
+ (id)selectionPathWithPathType:(id)arg1 arguments:(id)arg2 subSelection:(id)arg3;
+ (id)selectionPathWithType:(id)arg1 name:(id)arg2 arguments:(id)arg3;
+ (id)seriesSelectionPathWithSeriesIndex:(unsigned long long)arg1;
+ (id)seriesSymbolsSelectionPathWithSeriesIndex:(unsigned long long)arg1;
+ (id)seriesValueLabelSelectionPathWithSeriesIndex:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)argumentAtIndex:(unsigned long long)arg1;
- (unsigned long long)argumentsCount;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debuggingName;
- (id)description;
- (unsigned long long)hash;
- (id)initWithArchive:(const struct ChartSelectionPathArchive { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { int x_1_2_1; } x_4_1_1; } x4; struct RepeatedPtrField<TSCH::ChartSelectionPathArgumentArchive> { struct Arena {} *x_5_1_1; int x_5_1_2; int x_5_1_3; struct Rep {} *x_5_1_4; } x5; struct ChartSelectionPathTypeArchive {} *x6; struct ChartSelectionPathArchive {} *x7; }*)arg1;
- (id)initWithPathType:(id)arg1 arguments:(id)arg2 subSelection:(id)arg3;
- (id)initWithType:(id)arg1 name:(id)arg2 arguments:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)name;
- (id)pathType;
- (id)rangeOfPathsToPath:(id)arg1;
- (id)rangeOfReferenceLinePathsToPath:(id)arg1 forModel:(id)arg2;
- (void)saveToArchive:(struct ChartSelectionPathArchive { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { int x_1_2_1; } x_4_1_1; } x4; struct RepeatedPtrField<TSCH::ChartSelectionPathArgumentArchive> { struct Arena {} *x_5_1_1; int x_5_1_2; int x_5_1_3; struct Rep {} *x_5_1_4; } x5; struct ChartSelectionPathTypeArchive {} *x6; struct ChartSelectionPathArchive {} *x7; }*)arg1;
- (id)subSelection;
- (id)type;

@end
