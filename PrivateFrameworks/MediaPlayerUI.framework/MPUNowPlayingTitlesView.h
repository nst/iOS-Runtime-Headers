/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
 */

@interface MPUNowPlayingTitlesView : UIView {
    NSString * _albumText;
    NSString * _artistText;
    UILabel * _detailLabel;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _detailMarqueeEdgeInsets;
    MPUMarqueeView * _detailMarqueeView;
    NSDictionary * _detailTextAttributes;
    bool  _explicit;
    UIImage * _explicitImage;
    UIImageView * _explicitImageView;
    bool  _needsLabelUpdate;
    NSString * _stationNameText;
    long long  _style;
    double  _textMargin;
    UILabel * _titleLabel;
    double  _titleLeading;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _titleMarqueeEdgeInsets;
    MPUMarqueeView * _titleMarqueeView;
    NSString * _titleText;
    NSDictionary * _titleTextAttributes;
}

@property (nonatomic, copy) NSString *albumText;
@property (nonatomic, copy) NSString *artistText;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } detailMarqueeEdgeInsets;
@property (nonatomic, retain) NSDictionary *detailTextAttributes;
@property (getter=isExplicit, nonatomic) bool explicit;
@property (nonatomic, retain) UIImage *explicitImage;
@property (getter=isMarqueeEnabled, nonatomic) bool marqueeEnabled;
@property (nonatomic, copy) NSString *stationNameText;
@property (nonatomic) long long style;
@property (nonatomic) double textMargin;
@property (nonatomic, readonly) double titleBaselineOffsetFromBottom;
@property (nonatomic) double titleLeading;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } titleMarqueeEdgeInsets;
@property (nonatomic, copy) NSString *titleText;
@property (nonatomic, retain) NSDictionary *titleTextAttributes;

+ (Class)labelClass;

- (void).cxx_destruct;
- (id)_detailLabel;
- (id)_detailMarqueeView;
- (id)_titleLabel;
- (id)_titleMarqueeView;
- (void)_updateAttributedTitleLabel;
- (id)albumText;
- (id)artistText;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })detailMarqueeEdgeInsets;
- (id)detailTextAttributes;
- (id)explicitImage;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithStyle:(long long)arg1;
- (bool)isExplicit;
- (bool)isMarqueeEnabled;
- (void)layoutSubviews;
- (void)resetMarqueePositions;
- (void)setAlbumText:(id)arg1;
- (void)setArtistText:(id)arg1;
- (void)setDetailMarqueeEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setDetailTextAttributes:(id)arg1;
- (void)setExplicit:(bool)arg1;
- (void)setExplicitImage:(id)arg1;
- (void)setMarqueeEnabled:(bool)arg1;
- (void)setMarqueeEnabled:(bool)arg1 withOptions:(long long)arg2;
- (void)setStationNameText:(id)arg1;
- (void)setStyle:(long long)arg1;
- (void)setTextMargin:(double)arg1;
- (void)setTitleLeading:(double)arg1;
- (void)setTitleMarqueeEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setTitleText:(id)arg1;
- (void)setTitleTextAttributes:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)stationNameText;
- (long long)style;
- (double)textMargin;
- (double)titleBaselineOffsetFromBottom;
- (double)titleLeading;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })titleMarqueeEdgeInsets;
- (id)titleText;
- (id)titleTextAttributes;

@end
