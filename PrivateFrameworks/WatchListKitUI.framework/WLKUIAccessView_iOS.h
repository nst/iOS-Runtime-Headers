/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WatchListKitUI.framework/WatchListKitUI
 */

@interface WLKUIAccessView_iOS : UIView <TVCarouselViewDataSource> {
    UIButton * _allowButton;
    NSArray * _apps;
    UILabel * _bodyLabel;
    UIScrollView * _bodyScroll;
    UIStackView * _bottomStack;
    TVCarouselView * _carouselView;
    bool  _didLayout;
    UIButton * _disallowButton;
    UIStackView * _logoStack;
    UIButton * _nackButton;
    UIButton * _privacyButton;
    UILabel * _privacyLabel;
    UIStackView * _scrollStack;
    UIButton * _seeAllButton;
    UILabel * _titleLabel;
    UILayoutGuide * _titlePlacementGuide;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (struct CGSize { double x1; double x2; })iconSize;

- (void).cxx_destruct;
- (id)_buildCarousel;
- (id)_buildLogoStack;
- (id)_imageViewForIndex:(unsigned long long)arg1;
- (id)allowButton;
- (id)bodyScroll;
- (id)carouselView:(id)arg1 cellForItemAtIndex:(unsigned long long)arg2;
- (void)dealloc;
- (id)disallowButton;
- (id)initWithApps:(id)arg1;
- (void)layoutSubviews;
- (id)nackButton;
- (unsigned long long)numberOfItemsInCarouselView:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)privacyButton;
- (id)seeAllButton;
- (void)setBody:(id)arg1;
- (void)setFooter:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)showNackScreen;

@end
