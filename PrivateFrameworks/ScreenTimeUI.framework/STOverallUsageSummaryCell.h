/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

@interface STOverallUsageSummaryCell : STTableCell {
    STCandyBarView * _candyBarView;
    bool  _isWidget;
    STDeviceUnlockStateListener * _lockStateListener;
    STNoUsageDataView * _noUsageDataView;
    STScreenTimeSummaryView * _summaryView;
    STHorizontallySegmentedView * _topItemsView;
    STUnlockForContentView * _unlockView;
}

@property (nonatomic, readonly) STCandyBarView *candyBarView;
@property (nonatomic, readonly) bool isWidget;
@property (nonatomic, retain) STDeviceUnlockStateListener *lockStateListener;
@property (nonatomic, readonly) STNoUsageDataView *noUsageDataView;
@property (nonatomic, readonly) STScreenTimeSummaryView *summaryView;
@property (nonatomic, readonly) STHorizontallySegmentedView *topItemsView;
@property (nonatomic, readonly) STUnlockForContentView *unlockView;

- (void).cxx_destruct;
- (void)_heightDidChange;
- (void)_layoutDidChangeFrom:(bool)arg1 to:(bool)arg2;
- (void)_numberOfLinesDidChangeFrom:(id)arg1 to:(id)arg2;
- (id)candyBarView;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 isWidget:(bool)arg4;
- (bool)isWidget;
- (id)lockStateListener;
- (id)noUsageDataView;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)refreshWithCoordinator:(id)arg1;
- (void)setLockStateListener:(id)arg1;
- (void)setValue:(id)arg1;
- (void)stOverallUsageSummaryCellCommonInit;
- (void)startMonitoringDeviceLockChanges;
- (id)summaryView;
- (id)topItemsView;
- (id)unlockView;
- (void)updateViewsForLockState:(bool)arg1;

@end
