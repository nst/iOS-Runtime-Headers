/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TNDocumentRoot : TSADocumentRoot <TSTFormsSheetProvider, TSTResolverContainerNameProvider> {
    NSMutableArray * _mutableSheets;
    struct CGSize { 
        double width; 
        double height; 
    }  _pageSize;
    NSString * _paperID;
    bool  _printingAllSheets;
    TSKTreeNode * _sidebarOrder;
    TSSStylesheet * _stylesheet;
    TNTheme * _theme;
    TNUIState * _uiState;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableArray *mutableSheets;
@property (nonatomic) struct CGSize { double x1; double x2; } pageSize;
@property (nonatomic, copy) NSString *paperID;
@property (getter=isPrintPreviewSupported, nonatomic, readonly) bool printPreviewSupported;
@property (nonatomic, copy) NSString *printerID;
@property (getter=isPrintingAllSheets, nonatomic) bool printingAllSheets;
@property (nonatomic) bool removedAllQuickCalcFunctions;
@property (nonatomic, copy) NSArray *selectedQuickCalcFunctions;
@property (nonatomic, readonly, copy) NSArray *sheets;
@property (nonatomic, retain) TSKTreeNode *sidebarOrder;
@property (nonatomic, retain) TSSStylesheet *stylesheet;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long tableCount;
@property (nonatomic, readonly) TNTheme *theme;
@property (nonatomic, retain) TNUIState *uiState;

+ (struct CGSize { double x1; double x2; })previewImageMaxSizeForType:(unsigned long long)arg1;
+ (struct CGSize { double x1; double x2; })previewImageSizeForType:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)UIStateForChart:(id)arg1;
- (id)activeSheet;
- (void)addSheet:(id)arg1 dolcContext:(id)arg2;
- (unsigned long long)applicationType;
- (id)childEnumerator;
- (void)collectDocumentOpenAnalyticsWithLogger:(id)arg1;
- (bool)containsForms;
- (void)documentDidLoad;
- (id)initWithContext:(id)arg1;
- (void)initializeForImport;
- (void)initializeHardCodedBlankDocument;
- (void)insertSheet:(id)arg1 sheetIndex:(unsigned long long)arg2 forPasteOrUndoDelete:(bool)arg3 context:(id)arg4;
- (bool)isMultiPageForQuickLook;
- (bool)isPendingTableNameUniquification;
- (bool)isPrintPreviewSupported;
- (bool)isPrintingAllSheets;
- (bool)isTableLinkedToAForm:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; }*)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (void)moveSheetFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (id)mutableSheets;
- (id)nameForResolverContainer:(id)arg1;
- (int)naturalAlignmentAtCharIndex:(unsigned long long)arg1 inTextStorage:(id)arg2;
- (id)nearestDisplayableSheetToSheet:(id)arg1;
- (void)p_addSidebarNodeForSheet:(id)arg1;
- (struct CGSize { double x1; double x2; })p_adjustCapturedContentSize:(struct CGSize { double x1; double x2; })arg1 toAspectRatio:(struct CGSize { double x1; double x2; })arg2;
- (void)p_buildSidebarOrder;
- (id)p_chartsWantingDeferredUpgrade;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })p_contentFrameToCaptureForSheet:(id)arg1;
- (double)p_imageBorderForSize:(struct CGSize { double x1; double x2; })arg1;
- (id)p_previewImageWithImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)p_removeSidebarNodeForSheet:(id)arg1;
- (id)p_resolverContainerForResolver:(id)arg1;
- (unsigned long long)p_tableCountForSheet:(id)arg1;
- (struct CGSize { double x1; double x2; })pageSize;
- (id)paperID;
- (void)performDeferredUpgradeImportOperationsOnNewThreadForCharts:(id)arg1;
- (void)performDeferredUpgradeImportOperationsRequiringCalcEngine;
- (bool)prepareAndValidateSidecarViewStateObjectWithVersionUUIDMismatch:(id)arg1 originalDocumentViewStateObject:(id)arg2;
- (void)prepareNewDocumentWithTemplateBundle:(id)arg1 documentLocale:(id)arg2;
- (id)previewImageForSize:(struct CGSize { double x1; double x2; })arg1;
- (id)printerID;
- (void)removeAllSheets;
- (void)removeSheet:(id)arg1;
- (bool)removedAllQuickCalcFunctions;
- (id)resolverContainerForName:(id)arg1 caseSensitive:(bool)arg2;
- (id)resolverContainerNameForResolver:(id)arg1;
- (id)resolverContainerNamesMatchingPrefix:(id)arg1;
- (id)resolverMatchingName:(id)arg1;
- (id)resolverMatchingName:(id)arg1 contextContainerName:(id)arg2;
- (id)resolverMatchingName:(id)arg1 contextResolver:(id)arg2;
- (id)resolversMatchingPrefix:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (id)selectedQuickCalcFunctions;
- (void)setImportedPaperID:(id)arg1 printerID:(id)arg2;
- (void)setMutableSheets:(id)arg1;
- (void)setPageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPaperID:(id)arg1;
- (void)setPrinterID:(id)arg1;
- (void)setPrintingAllSheets:(bool)arg1;
- (void)setRemovedAllQuickCalcFunctions:(bool)arg1;
- (void)setSelectedQuickCalcFunctions:(id)arg1;
- (void)setSidebarChildren:(id)arg1 forSheet:(id)arg2;
- (void)setSidebarOrder:(id)arg1;
- (void)setStylesheet:(id)arg1;
- (void)setStylesheet:(id)arg1 andThemeForImport:(id)arg2;
- (void)setStylesheetForUpgradeToSingleStylesheet:(id)arg1;
- (void)setTheme:(id)arg1;
- (void)setThemeForTemplateImport:(id)arg1;
- (void)setUIState:(id)arg1 forChart:(id)arg2;
- (void)setUiState:(id)arg1;
- (void)sheet:(id)arg1 insertedDrawable:(id)arg2;
- (void)sheet:(id)arg1 removedDrawable:(id)arg2;
- (id)sheets;
- (bool)shouldAllowDrawableInGroups:(id)arg1 forImport:(bool)arg2;
- (bool)shouldShowComments;
- (id)sidebarOrder;
- (id)stylesheet;
- (unsigned long long)tableCount;
- (void)tableUID:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; }*)arg1 changedToTableUID:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; }*)arg2;
- (id)theme;
- (id)uiState;
- (id)uniqueNameForSheet:(id)arg1 appendNewTag:(bool)arg2;
- (id)untitledSheetName;
- (bool)validName:(id)arg1 forRenamingSheet:(id)arg2;
- (bool)validNameForNewSheet:(id)arg1;
- (int)verticalAlignmentForTextStorage:(id)arg1;

@end
