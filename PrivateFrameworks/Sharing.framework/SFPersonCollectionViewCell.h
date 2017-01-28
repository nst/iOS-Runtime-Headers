/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFPersonCollectionViewCell : UICollectionViewCell {
    long long  _cellState;
    SFCircleProgressView * _circleProgressView;
    bool  _darkStyleOnLegacyApp;
    NSObject<SFPersonCollectionViewCellDelegate> * _delegate;
    UIColor * _fadedSecondLabelColor;
    SFPersonImageView * _imageView;
    UIImpactFeedbackGenerator * _impactHaptic;
    UILabel * _nameLabel;
    UINotificationFeedbackGenerator * _notificationHaptic;
    SFAirDropNode * _person;
    NSProgress * _progress;
    NSArray * _progressKeyPaths;
    id  _progressToken;
    UILabel * _secondLabel;
    NSLayoutConstraint * _secondLabelFBConstraint;
    NSArray * _secondLabelVisibleConstraintsArray;
    UISelectionFeedbackGenerator * _selectionHaptic;
    NSString * _sessionID;
    bool  _stateBeingRestored;
}

@property (nonatomic) long long cellState;
@property (nonatomic, retain) SFCircleProgressView *circleProgressView;
@property (nonatomic) bool darkStyleOnLegacyApp;
@property (nonatomic) NSObject<SFPersonCollectionViewCellDelegate> *delegate;
@property (nonatomic, retain) UIColor *fadedSecondLabelColor;
@property (nonatomic, retain) SFPersonImageView *imageView;
@property (nonatomic, retain) UIImpactFeedbackGenerator *impactHaptic;
@property (nonatomic, retain) UILabel *nameLabel;
@property (nonatomic, retain) UINotificationFeedbackGenerator *notificationHaptic;
@property (nonatomic, retain) SFAirDropNode *person;
@property (nonatomic, retain) NSProgress *progress;
@property (nonatomic, retain) NSArray *progressKeyPaths;
@property (nonatomic, retain) id progressToken;
@property (nonatomic, retain) UILabel *secondLabel;
@property (nonatomic, retain) NSLayoutConstraint *secondLabelFBConstraint;
@property (nonatomic, retain) NSArray *secondLabelVisibleConstraintsArray;
@property (nonatomic, retain) UISelectionFeedbackGenerator *selectionHaptic;
@property (nonatomic, retain) NSString *sessionID;
@property (nonatomic) bool stateBeingRestored;

- (void).cxx_destruct;
- (void)addObserverOfValuesForKeyPaths:(id)arg1 ofObject:(id)arg2;
- (long long)cellState;
- (id)circleProgressView;
- (bool)darkStyleOnLegacyApp;
- (void)deactivateHaptics;
- (void)dealloc;
- (id)delegate;
- (id)fadedSecondLabelColor;
- (void)fireHapticsForState:(long long)arg1;
- (void)handleKVOUpdateForPerson:(id)arg1 keyPath:(id)arg2;
- (void)handleKVOUpdateForProgress:(id)arg1 keyPath:(id)arg2;
- (id)imageView;
- (id)impactHaptic;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)nameLabel;
- (id)notificationHaptic;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)person;
- (void)prepareForReuse;
- (void)prepareHaptics;
- (id)progress;
- (id)progressKeyPaths;
- (id)progressToken;
- (void)removeObserverOfValuesForKeyPaths:(id)arg1 ofObject:(id)arg2;
- (void)restoreCellStateFromFinalTransferState:(long long)arg1;
- (id)secondLabel;
- (id)secondLabelFBConstraint;
- (id)secondLabelVisibleConstraintsArray;
- (id)selectionHaptic;
- (id)sessionID;
- (void)setCellState:(long long)arg1;
- (void)setCellState:(long long)arg1 animated:(bool)arg2;
- (void)setCircleProgressView:(id)arg1;
- (void)setDarkStyleOnLegacyApp:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFadedSecondLabelColor:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setImpactHaptic:(id)arg1;
- (void)setNameLabel:(id)arg1;
- (void)setNotificationHaptic:(id)arg1;
- (void)setPerson:(id)arg1;
- (void)setProgress:(id)arg1;
- (void)setProgressKeyPaths:(id)arg1;
- (void)setProgressToken:(id)arg1;
- (void)setSecondLabel:(id)arg1;
- (void)setSecondLabelFBConstraint:(id)arg1;
- (void)setSecondLabelText:(id)arg1 withTextColor:(id)arg2 animated:(bool)arg3 completion:(id)arg4;
- (void)setSecondLabelVisibleConstraintsArray:(id)arg1;
- (void)setSelected:(bool)arg1;
- (void)setSelectionHaptic:(id)arg1;
- (void)setSessionID:(id)arg1;
- (void)setStateBeingRestored:(bool)arg1;
- (bool)stateBeingRestored;
- (void)triggerKVOForKeyPaths:(id)arg1 ofObject:(id)arg2;
- (void)updateNameLabel;
- (void)updatePersonIconView;
- (void)userDidCancel;
- (void)userDidSelect;

@end
