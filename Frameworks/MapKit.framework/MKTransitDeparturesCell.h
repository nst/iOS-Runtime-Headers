/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKTransitDeparturesCell : MKCustomSeparatorTableViewCell {
    NSArray * _additionalDepartureLabels;
    NSArray * _buttonToDepartureConstraints;
    bool  _centerContent;
    NSDate * _countdownReferenceDate;
    <MKTransitDeparturesCellDelegate> * _delegate;
    _MKUILabel * _departureLabel;
    NSLayoutConstraint * _departureLabelCenteringConstraint;
    UIStackView * _departureStackView;
    NSLayoutConstraint * _departureStackViewToBottomConstraint;
    unsigned long long  _departureStyle;
    NSTimeZone * _departureTimeZone;
    NSArray * _departures;
    bool  _inactive;
    UIButton * _incidentButton;
    bool  _incidentButtonHidden;
    NSLayoutConstraint * _incidentIconHorizontalConstraint;
    UIImageView * _incidentIconImageView;
    NSString * _incidentTitle;
    NSArray * _initialConstraints;
    NSLayoutConstraint * _labelBufferConstraint;
    NSLayoutConstraint * _labelLeadingMarginConstraint;
    NSArray * _labelToDepartureConstraints;
    double  _lineImageCenteringValue;
    NSLayoutConstraint * _lineImageCompressedLeadingConstraint;
    NSLayoutConstraint * _lineImageLeadingConstraint;
    NSLayoutConstraint * _lineImageToContainerTrailingConstraint;
    NSLayoutConstraint * _lineImageToTextGutterConstraint;
    UIImageView * _lineImageView;
    NSLayoutConstraint * _lineImageViewCenteringConstraint;
    double  _lineImageViewSize;
    NSLayoutConstraint * _lineImageViewToBottomConstraint;
    NSLayoutConstraint * _lineImageViewTopConstraint;
    bool  _needsInitialConstraints;
    bool  _padBottom;
    _MKUILabel * _primaryLabel;
    NSLayoutConstraint * _primaryLabelCenteringConstraint;
    NSLayoutConstraint * _primaryToBottomConstraint;
    NSLayoutConstraint * _primaryToTopConstraint;
    _MKUILabel * _secondaryLabel;
    NSLayoutConstraint * _secondaryStackToBottomConstraint;
    NSLayoutConstraint * _secondaryStackToPrimaryConstraint;
    UIStackView * _secondaryTextStackView;
    bool  _showIncidentIcon;
    bool  _showNoConnectionEmDash;
    _MKUILabel * _tertiaryLabel;
    bool  _useCompressedGutter;
    bool  _useCompressedLeading;
}

@property (nonatomic) bool centerContent;
@property (nonatomic, retain) NSDate *countdownReferenceDate;
@property (nonatomic) <MKTransitDeparturesCellDelegate> *delegate;
@property (nonatomic) unsigned long long departureStyle;
@property (nonatomic, retain) NSTimeZone *departureTimeZone;
@property (nonatomic, retain) NSArray *departures;
@property (getter=isInactive, nonatomic) bool inactive;
@property (nonatomic, retain) UIButton *incidentButton;
@property (getter=isIncidentButtonHidden, nonatomic) bool incidentButtonHidden;
@property (nonatomic, copy) NSString *incidentTitle;
@property (nonatomic, readonly) double labelMargin;
@property (nonatomic) double lineImageViewSize;
@property (nonatomic) bool padBottom;
@property (getter=isShowingIncidentIcon, nonatomic) bool showIncidentIcon;
@property (getter=isShowingNoConnectionEmDash, nonatomic) bool showNoConnectionEmDash;
@property (nonatomic) bool useCompressedGutter;
@property (nonatomic) bool useCompressedLeading;

+ (void)_calculateMaxLabelWidths;
+ (id)_departureLabelAttributes;
+ (id)_departureLabelFont;
+ (id)_departureSubtextAttributes;
+ (id)_departureSubtextFont;
+ (void)_enumerateMinutesUntilDepartureDates:(id)arg1 withReferenceDate:(id)arg2 block:(id)arg3;
+ (double)_maxExpectedDepartureLabelWidth;
+ (double)_minTextWidth:(bool)arg1;
+ (bool)_needsUpdateMaxLabelWidths;
+ (id)_nowString;
+ (id)_primaryFont;
+ (id)_singleCountdownSubtext;
+ (id)_upcomingTimestampFont;
+ (id)defaultSecondaryFont;
+ (id)displayableCountdowDepartureDatesFromDates:(id)arg1 withReferenceDate:(id)arg2;
+ (double)labelMarginWithLineImageViewWidth:(double)arg1;
+ (double)maxLineImageWidthforWidth:(double)arg1 compressed:(bool)arg2;
+ (id)strongSecondaryFont;
+ (id)timestampSecondaryFont;
+ (void)useCompressedGutter:(out bool*)arg1 compressedLeading:(out bool*)arg2 forImageWidth:(double)arg3 inWidth:(double)arg4 compressed:(bool)arg5;

- (void).cxx_destruct;
- (void)_addEmDashAttributes:(id)arg1;
- (void)_addIncidentButton;
- (void)_addIncidentIcon;
- (void)_commonInit;
- (void)_contentSizeCategoryDidChange;
- (unsigned long long)_departureLabelStyle;
- (unsigned long long)_displayableDeparturesCount;
- (void)_enumerateMinutesUntilDepartureTimesWithBlock:(id)arg1;
- (void)_incidentButtonPressed;
- (id)_incidentIcon;
- (bool)_isRTL;
- (void)_removeIncidentButton;
- (void)_removeIncidentIcon;
- (double)_separatorHeight;
- (void)_setLineImageColumnCentered:(bool)arg1 withImageWidth:(double)arg2 centeringWidth:(double)arg3;
- (void)_updateConstraintValues;
- (void)_updateLabelFonts;
- (void)_updateLineImageViewConstraints;
- (bool)centerContent;
- (id)countdownReferenceDate;
- (void)dealloc;
- (id)delegate;
- (unsigned long long)departureStyle;
- (id)departureTimeZone;
- (id)departures;
- (id)incidentButton;
- (id)incidentTitle;
- (void)infoCardThemeChanged:(id)arg1;
- (id)initWithReuseIdentifier:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (bool)isInactive;
- (bool)isIncidentButtonHidden;
- (bool)isOpaque;
- (bool)isShowingIncidentIcon;
- (bool)isShowingNoConnectionEmDash;
- (double)labelMargin;
- (void)layoutSubviews;
- (double)lineImageViewSize;
- (bool)padBottom;
- (void)prepareForReuse;
- (void)refreshDeparturesDisplay;
- (void)setCenterContent:(bool)arg1;
- (void)setCountdownReferenceDate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDepartureStyle:(unsigned long long)arg1;
- (void)setDepartureTimeZone:(id)arg1;
- (void)setDepartures:(id)arg1;
- (void)setInactive:(bool)arg1;
- (void)setIncidentButton:(id)arg1;
- (void)setIncidentButtonHidden:(bool)arg1;
- (void)setIncidentTitle:(id)arg1;
- (void)setLineImage:(id)arg1 compressed:(bool)arg2 center:(bool)arg3 centeringWidth:(double)arg4;
- (void)setLineImageViewSize:(double)arg1;
- (void)setPadBottom:(bool)arg1;
- (void)setPrimaryText:(id)arg1;
- (void)setSecondaryText:(id)arg1;
- (void)setSeparatorHidden:(bool)arg1;
- (void)setShowIncidentIcon:(bool)arg1;
- (void)setShowNoConnectionEmDash:(bool)arg1;
- (void)setShowNoConnectionEnDash:(bool)arg1;
- (void)setTertiaryText:(id)arg1;
- (void)setUseCompressedGutter:(bool)arg1;
- (void)setUseCompressedLeading:(bool)arg1;
- (struct CGSize { double x1; double x2; })systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (void)updateConstraints;
- (bool)useCompressedGutter;
- (bool)useCompressedLeading;

@end
