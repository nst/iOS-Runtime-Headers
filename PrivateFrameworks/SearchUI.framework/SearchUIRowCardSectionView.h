/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUIRowCardSectionView : SearchUICardSectionView {
    SearchUIImageView * _leftImageView;
}

@property (nonatomic, retain) SearchUIImageView *leftImageView;
@property (nonatomic, readonly) SFRowCardSection *section;

- (void).cxx_destruct;
- (id)addContainerWithImage:(id)arg1 text:(id)arg2 formatter:(id)arg3 left:(bool)arg4;
- (id)initWithCardSection:(id)arg1 controller:(id)arg2;
- (id)leftImageView;
- (double)separatorLeftInset;
- (void)setLeftImageView:(id)arg1;

@end
