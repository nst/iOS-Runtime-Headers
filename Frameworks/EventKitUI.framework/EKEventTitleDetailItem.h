/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKEventTitleDetailItem : EKEventDetailItem <EKEventDetailTitleCellDelegate> {
    UITableViewCell * _cell;
    bool  _cellNeedsUpdate;
    UIColor * _color;
    NSObject<EKEventTitleDetailItemDelegate> * _editDelegate;
    bool  _hasMapItemLaunchOptionFromTimeToLeaveNotification;
    bool  _hidesSeparator;
    NSDate * _proposedTime;
    bool  _showDot;
}

@property (nonatomic) NSObject<EKEventTitleDetailItemDelegate> *editDelegate;
@property (nonatomic) bool hasMapItemLaunchOptionFromTimeToLeaveNotification;
@property (nonatomic) bool hidesSeparator;
@property (nonatomic, retain) NSDate *proposedTime;

- (void).cxx_destruct;
- (void)_updateCellIfNeededForWidth:(double)arg1;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (bool)configureWithCalendar:(id)arg1 preview:(bool)arg2;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2;
- (void)editButtonPressed;
- (id)editDelegate;
- (bool)hasMapItemLaunchOptionFromTimeToLeaveNotification;
- (bool)hidesSeparator;
- (void)predictionWasActedOn;
- (id)proposedTime;
- (void)reset;
- (void)setCellPosition:(int)arg1;
- (void)setEditDelegate:(id)arg1;
- (void)setHasMapItemLaunchOptionFromTimeToLeaveNotification:(bool)arg1;
- (void)setHidesSeparator:(bool)arg1;
- (void)setProposedTime:(id)arg1;
- (bool)shouldShowEditButtonInline;

@end
