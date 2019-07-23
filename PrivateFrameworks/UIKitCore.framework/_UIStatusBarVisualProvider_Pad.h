/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIStatusBarVisualProvider_Pad : _UIStatusBarVisualProvider_iOS {
    _UIStatusBarDisplayItemPlacement * _datePlacement;
    NSLayoutConstraint * _leadingRegionTrailingAnchorConstraint;
    NSDictionary * _orderedDisplayItemPlacements;
    _UIStatusBarDisplayItemPlacement * _timePlacement;
    NSLayoutConstraint * _trailingRegionLeadingAnchorConstraint;
}

@property (nonatomic, retain) _UIStatusBarDisplayItemPlacement *datePlacement;
@property (nonatomic, retain) NSLayoutConstraint *leadingRegionTrailingAnchorConstraint;
@property (nonatomic, retain) NSDictionary *orderedDisplayItemPlacements;
@property (nonatomic, retain) _UIStatusBarDisplayItemPlacement *timePlacement;
@property (nonatomic, retain) NSLayoutConstraint *trailingRegionLeadingAnchorConstraint;

+ (double)baselineOffset;
+ (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })edgeInsets;
+ (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })expandedEdgeInsets;
+ (id)expandedFont;
+ (double)height;
+ (id)normalFont;
+ (double)regionSpacing;
+ (Class)visualProviderSubclassForScreen:(id)arg1;

- (void).cxx_destruct;
- (void)_dateTimePreferencesUpdated;
- (void)_updateConstraintsForAvoidanceFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)_updateDateAndTimePlacements;
- (void)actionable:(id)arg1 highlighted:(bool)arg2 initialPress:(bool)arg3;
- (double)airplaneShouldFadeForAnimationType:(long long)arg1;
- (double)airplaneSpeedForAnimationType:(long long)arg1;
- (double)airplaneTravelOffsetInProposedPartWithIdentifier:(id*)arg1 animationType:(long long)arg2;
- (void)avoidanceFrameUpdatedFromFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)datePlacement;
- (void)dealloc;
- (id)displayItemIdentifiersForPartWithIdentifier:(id)arg1;
- (id)init;
- (void)itemCreated:(id)arg1;
- (id)leadingRegionTrailingAnchorConstraint;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)orderedDisplayItemPlacements;
- (id)orderedDisplayItemPlacementsInRegionWithIdentifier:(id)arg1;
- (id)regionIdentifiersForPartWithIdentifier:(id)arg1;
- (void)setDatePlacement:(id)arg1;
- (void)setLeadingRegionTrailingAnchorConstraint:(id)arg1;
- (void)setOrderedDisplayItemPlacements:(id)arg1;
- (void)setTimePlacement:(id)arg1;
- (void)setTrailingRegionLeadingAnchorConstraint:(id)arg1;
- (id)setupInContainerView:(id)arg1;
- (void)sizeUpdatedFromSize:(struct CGSize { double x1; double x2; })arg1;
- (id)styleAttributes;
- (id)timePlacement;
- (id)trailingRegionLeadingAnchorConstraint;

@end
