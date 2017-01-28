/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@interface GKSegmentedSectionDataSource : GKCollectionViewDataSource <GKSegmentInfoDelegagte> {
    GKSegmentedSectionHeaderView * _headerView;
    SEL  _noContentButtonAction;
    id  _noContentButtonTarget;
    NSString * _noContentButtonTitle;
    NSString * _noContentMessage;
    NSString * _noContentTitle;
    GKCollectionViewPlaceholderView * _placeholderView;
    GKCollectionViewDataSource * _rootDataSource;
    NSMutableArray * _segmentInfos;
    Class  _segmentedHeaderClass;
    GKSegmentInfo * _selectedSegmentInfo;
    bool  _shouldHideSegment;
    bool  _usePlaceholder;
    bool  _waitingForAnimation;
}

@property (nonatomic, readonly) NSArray *dataSources;
@property (nonatomic, retain) GKSegmentedSectionHeaderView *headerView;
@property (nonatomic) SEL noContentButtonAction;
@property (nonatomic) id noContentButtonTarget;
@property (nonatomic, retain) NSString *noContentButtonTitle;
@property (nonatomic, retain) NSString *noContentMessage;
@property (nonatomic, retain) NSString *noContentTitle;
@property (nonatomic, retain) GKCollectionViewPlaceholderView *placeholderView;
@property (nonatomic, retain) GKCollectionViewDataSource *rootDataSource;
@property (nonatomic, retain) NSMutableArray *segmentInfos;
@property (nonatomic) Class segmentedHeaderClass;
@property (nonatomic) GKCollectionViewDataSource *selectedDataSource;
@property (nonatomic) unsigned long long selectedDataSourceIndex;
@property (nonatomic, retain) GKSegmentInfo *selectedSegmentInfo;
@property (nonatomic) bool shouldHideSegment;
@property (nonatomic) bool usePlaceholder;
@property (nonatomic) bool waitingForAnimation;

- (id)_gkDescriptionWithChildren:(int)arg1;
- (void)addDataSource:(id)arg1;
- (id)allTitles;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 evaluateFactoryForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 isRecursive:(bool)arg4;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)collectionViewDidBecomeInactive:(id)arg1;
- (void)collectionViewWillBecomeActive:(id)arg1;
- (void)configureCollectionView:(id)arg1;
- (void)configureSegmentedHeader:(id)arg1;
- (bool)containsDataSource:(id)arg1;
- (id)createMetricsTreeWithGridLayout:(id)arg1;
- (void)dataSource:(id)arg1 didInsertItemsAtIndexPaths:(id)arg2;
- (void)dataSource:(id)arg1 didInsertSections:(id)arg2;
- (void)dataSource:(id)arg1 didMoveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (void)dataSource:(id)arg1 didMoveSection:(long long)arg2 toSection:(long long)arg3;
- (void)dataSource:(id)arg1 didRefreshItemsAtIndexPaths:(id)arg2;
- (void)dataSource:(id)arg1 didRefreshSections:(id)arg2;
- (void)dataSource:(id)arg1 didRemoveItemsAtIndexPaths:(id)arg2;
- (void)dataSource:(id)arg1 didRemoveSections:(id)arg2;
- (void)dataSource:(id)arg1 performBatchUpdate:(id)arg2 complete:(id)arg3;
- (void)dataSourceDidLoad;
- (void)dataSourceDidReloadData:(id)arg1;
- (id)dataSourceForSection:(unsigned long long)arg1;
- (void)dataSourceWillLoad;
- (id)dataSources;
- (void)dealloc;
- (id)description;
- (void)groupDidLoad:(id)arg1;
- (id)headerView;
- (void)hoistSegmentedFactoryToRoot;
- (id)indexPathsForItem:(id)arg1;
- (id)infoForDataSource:(id)arg1;
- (id)infoForSegment:(long long)arg1;
- (void)infosChanged;
- (id)initWithDataSources:(id)arg1;
- (id)initWithDataSources:(id)arg1 rootDataSource:(id)arg2;
- (bool)item:(id)arg1 matchesSearchTerms:(id)arg2 inSection:(long long)arg3;
- (id)itemAtIndexPath:(id)arg1;
- (SEL)noContentButtonAction;
- (id)noContentButtonTarget;
- (id)noContentButtonTitle;
- (id)noContentMessage;
- (id)noContentTitle;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)placeholderView;
- (void)refreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2 updateNotifier:(id)arg3;
- (void)removeDataSource:(id)arg1;
- (void)removeItemAtIndexPath:(id)arg1 completionHandler:(id)arg2;
- (id)rootDataSource;
- (unsigned long long)sectionForDataSource:(id)arg1;
- (void)segmentDidChangeLoadingState:(id)arg1;
- (id)segmentInfos;
- (Class)segmentedHeaderClass;
- (id)selectedDataSource;
- (unsigned long long)selectedDataSourceIndex;
- (void)selectedSegmentChanged:(id)arg1;
- (id)selectedSegmentInfo;
- (void)setHeaderView:(id)arg1;
- (void)setNoContentButtonAction:(SEL)arg1;
- (void)setNoContentButtonTarget:(id)arg1;
- (void)setNoContentButtonTitle:(id)arg1;
- (void)setNoContentMessage:(id)arg1;
- (void)setNoContentTitle:(id)arg1;
- (void)setPlaceholderView:(id)arg1;
- (void)setRootDataSource:(id)arg1;
- (void)setSegmentInfos:(id)arg1;
- (void)setSegmentedHeaderClass:(Class)arg1;
- (void)setSelectedDataSource:(id)arg1;
- (void)setSelectedDataSourceIndex:(unsigned long long)arg1;
- (void)setSelectedDataSourceIndex:(unsigned long long)arg1 reload:(bool)arg2;
- (void)setSelectedSegmentInfo:(id)arg1;
- (void)setShouldHideSegment:(bool)arg1;
- (void)setTitle:(id)arg1 forDataSource:(id)arg2;
- (void)setUsePlaceholder:(bool)arg1;
- (void)setWaitingForAnimation:(bool)arg1;
- (bool)shouldHideSegment;
- (void)updatePlaceholderNotify:(bool)arg1;
- (bool)usePlaceholder;
- (bool)waitingForAnimation;

@end
