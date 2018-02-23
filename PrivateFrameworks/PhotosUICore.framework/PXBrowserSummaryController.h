/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXBrowserSummaryController : PXObservable <PXInfoProvider, PXInfoUpdaterObserver, PXMutableBrowserSummaryController> {
    NSAttributedString * _attributedPrimaryTitle;
    NSAttributedString * _attributedSelectionTitle;
    NSDateInterval * _containerDateInterval;
    NSString * _containerTitle;
    <PXBrowserSummaryControllerDataSource> * _dataSource;
    struct { 
        bool containerTitle; 
        bool localizedContainerItemsCount; 
        bool containerDateInterval; 
        bool visibleContentSnapshot; 
        bool selectionSnapshot; 
        bool filteringContainerContent; 
    }  _dataSourceRespondsTo;
    NSDateIntervalFormatter * _dateIntervalFormatter;
    NSDictionary * _defaultAttributes;
    NSDictionary * _emphasizedAttributes;
    bool  _filteringContainerContent;
    NSString * _localizedComponentsSeparator;
    NSString * _localizedContainerItemsCount;
    NSString * _navigationTitle;
    struct { 
        bool containerTitle; 
        bool localizedContainerItemsCount; 
        bool containerDateInterval; 
        bool selectionSnapshot; 
        bool filteringContainerContent; 
        bool attributedPrimaryTitle; 
        bool secondaryTitle; 
        bool tertiaryTitle; 
        bool navigationTitle; 
        bool attributedSelectionTitle; 
        bool stackedAssets; 
    }  _needsUpdateFlags;
    NSString * _noFilteringResultsPlaceholderText;
    NSObject<OS_dispatch_queue> * _queue;
    NSString * _secondaryTitle;
    PXSelectedItemsStack * _selectedAssetsStack;
    NSDictionary * _selectionAttributes;
    PXInfoUpdater * _selectionInfoUpdater;
    <PXBrowserSelectionSnapshot> * _selectionSnapshot;
    bool  _shouldUseNavigationTitle;
    bool  _shouldUseSubtitles;
    NSArray * _stackedAssets;
    NSString * _tertiaryTitle;
    PXInfoUpdater * _visibleDateRangeInfoUpdater;
}

@property (nonatomic, copy) NSAttributedString *attributedPrimaryTitle;
@property (nonatomic, copy) NSAttributedString *attributedSelectionTitle;
@property (nonatomic, copy) NSDateInterval *containerDateInterval;
@property (nonatomic, copy) NSString *containerTitle;
@property (nonatomic) <PXBrowserSummaryControllerDataSource> *dataSource;
@property (nonatomic, readonly) NSDateIntervalFormatter *dateIntervalFormatter;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, copy) NSDictionary *defaultAttributes;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSDictionary *emphasizedAttributes;
@property (getter=isFilteringContainerContent, nonatomic) bool filteringContainerContent;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *localizedComponentsSeparator;
@property (nonatomic, copy) NSString *localizedContainerItemsCount;
@property (nonatomic, copy) NSString *navigationTitle;
@property (nonatomic, readonly) NSString *noFilteringResultsPlaceholderText;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, copy) NSString *secondaryTitle;
@property (nonatomic, retain) PXSelectedItemsStack *selectedAssetsStack;
@property (nonatomic, copy) NSDictionary *selectionAttributes;
@property (nonatomic, readonly, copy) PXInfoUpdater *selectionInfoUpdater;
@property (nonatomic, retain) <PXBrowserSelectionSnapshot> *selectionSnapshot;
@property (nonatomic) bool shouldUseNavigationTitle;
@property (nonatomic) bool shouldUseSubtitles;
@property (nonatomic, copy) NSArray *stackedAssets;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *tertiaryTitle;
@property (nonatomic, readonly, copy) PXInfoUpdater *visibleDateRangeInfoUpdater;

- (void).cxx_destruct;
- (void)_invalidateAttributedPrimaryTitle;
- (void)_invalidateAttributedSelectionTitle;
- (void)_invalidateContainerDateInterval;
- (void)_invalidateContainerTitle;
- (void)_invalidateFilteringContainerContent;
- (void)_invalidateLocalizedContainerItemsCount;
- (void)_invalidateNavigationTitle;
- (void)_invalidateSecondaryTitle;
- (void)_invalidateSelectionSnapshot;
- (void)_invalidateStackedAssets;
- (void)_invalidateTertiaryTitle;
- (bool)_needsUpdate;
- (void)_setNeedsUpdate;
- (void)_updateAttributedPrimaryTitleIfNeeded;
- (void)_updateAttributedSelectionTitleIfNeeded;
- (void)_updateContainerDateIntervalIfNeeded;
- (void)_updateContainerTitleIfNeeded;
- (void)_updateFilteringContainerContentIfNeeded;
- (void)_updateIfNeeded;
- (void)_updateLocalizedContainerItemsCountIfNeeded;
- (void)_updateNavigationTitleIfNeeded;
- (void)_updateSecondaryTitleIfNeeded;
- (void)_updateSelectionSnapshotIfNeeded;
- (void)_updateStackedAssetsIfNeeded;
- (void)_updateTertiaryTitleIfNeeded;
- (id)attributedPrimaryTitle;
- (id)attributedSelectionTitle;
- (id)containerDateInterval;
- (id)containerTitle;
- (id)dataSource;
- (id)dateIntervalFormatter;
- (id)defaultAttributes;
- (void)didPerformChanges;
- (id)emphasizedAttributes;
- (void)infoUpdaterDidUpdate:(id)arg1;
- (id)init;
- (void)invalidateContainerDateInterval;
- (void)invalidateContainerTitle;
- (void)invalidateFilteringContainerContent;
- (void)invalidateLocalizedContainerItemsCount;
- (void)invalidateSelection;
- (void)invalidateVisibleContent;
- (bool)isFilteringContainerContent;
- (id)localizedComponentsSeparator;
- (id)localizedContainerItemsCount;
- (id)mutableChangeObject;
- (id)navigationTitle;
- (id)noFilteringResultsPlaceholderText;
- (void)performChanges:(id /* block */)arg1;
- (long long)priorityForInfoRequestOfKind:(id)arg1;
- (id)queue;
- (id)requestInfoOfKind:(id)arg1 withResultHandler:(id /* block */)arg2;
- (id)secondaryTitle;
- (id)selectedAssetsStack;
- (id)selectionAttributes;
- (id)selectionInfoUpdater;
- (id)selectionSnapshot;
- (void)setAttributedPrimaryTitle:(id)arg1;
- (void)setAttributedSelectionTitle:(id)arg1;
- (void)setContainerDateInterval:(id)arg1;
- (void)setContainerTitle:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDefaultAttributes:(id)arg1;
- (void)setEmphasizedAttributes:(id)arg1;
- (void)setFilteringContainerContent:(bool)arg1;
- (void)setLocalizedContainerItemsCount:(id)arg1;
- (void)setNavigationTitle:(id)arg1;
- (void)setSecondaryTitle:(id)arg1;
- (void)setSelectedAssetsStack:(id)arg1;
- (void)setSelectionAttributes:(id)arg1;
- (void)setSelectionSnapshot:(id)arg1;
- (void)setShouldUseNavigationTitle:(bool)arg1;
- (void)setShouldUseSubtitles:(bool)arg1;
- (void)setStackedAssets:(id)arg1;
- (void)setTertiaryTitle:(id)arg1;
- (bool)shouldUseNavigationTitle;
- (bool)shouldUseSubtitles;
- (id)stackedAssets;
- (id)tertiaryTitle;
- (id)visibleDateRangeInfoUpdater;

@end
