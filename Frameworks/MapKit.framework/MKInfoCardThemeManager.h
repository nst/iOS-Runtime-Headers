/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKInfoCardThemeManager : NSObject <MKInfoCardTheme> {
    NSDictionary * _colors;
    UIColor * _currentTintColor;
    NSPointerArray * _otherListeners;
    unsigned long long  _themeType;
    bool  _themeWasExplicitySet;
    id  _tintColorProvider;
    id  _titleFontProvider;
    NSPointerArray * _viewControllerListeners;
    NSPointerArray * _viewListeners;
}

@property (nonatomic, readonly) UIFont *attributionFont;
@property (nonatomic, readonly) UIColor *backgroundColor;
@property (nonatomic, readonly) UIFont *bodyFont;
@property (nonatomic, readonly) UIFont *boldBodyFont;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIColor *highlightedRowColor;
@property (nonatomic, readonly) bool isDarkTheme;
@property (nonatomic, readonly) bool isVibrantTheme;
@property (nonatomic, readonly) UIFont *largeTitleFont;
@property (nonatomic, readonly) UIColor *lightTextColor;
@property (nonatomic, readonly) UIFont *mediumBodyFont;
@property (nonatomic, readonly) UIColor *rowColor;
@property (nonatomic, readonly) UIFont *sectionHeaderFont;
@property (nonatomic, readonly) UIColor *selectedRowColor;
@property (nonatomic, readonly) UIColor *separatorLineColor;
@property (nonatomic, readonly) UIFont *smallAttributionFont;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIColor *textColor;
@property (nonatomic, readonly) unsigned long long themeType;
@property (nonatomic, readonly) UIColor *tintColor;
@property (nonatomic, readonly) UIFont *titleFont;

+ (id)_currentTheme:(unsigned long long)arg1;
+ (bool)_shouldAutoSwitchTheme;
+ (void)addThemeChangedListener:(id)arg1;
+ (id)currentTheme;
+ (void)setTheme:(unsigned long long)arg1;
+ (void)setTintColorProvider:(id)arg1;
+ (void)setTitleFontProvider:(id)arg1;
+ (id)themeWithThemeType:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)_addThemeChangedListener:(id)arg1;
- (unsigned long long)_currentSystemTheme;
- (id)_initWithThemeType:(unsigned long long)arg1;
- (void)_notifyAllListenersOfThemeChange:(id)arg1 visitedSet:(id)arg2 subListenerMethod:(int (*)arg3 subListenerSelector:(SEL)arg4;
- (void)_notifyAllListenersOfTintChange:(id)arg1 visitedSet:(id)arg2;
- (void)_setTheme:(unsigned long long)arg1;
- (void)_setTintColorProvider:(id)arg1;
- (void)_setTitleFontProvider:(id)arg1;
- (void)_tintColorDidChange;
- (id)attributionFont;
- (id)backgroundColor;
- (id)bodyFont;
- (id)boldBodyFont;
- (id)highlightedRowColor;
- (id)iconFontToMatch:(id)arg1;
- (id)init;
- (bool)isDarkTheme;
- (bool)isVibrantTheme;
- (id)largeTitleFont;
- (id)lightTextColor;
- (id)mediumBodyFont;
- (id)rowColor;
- (id)sectionHeaderFont;
- (id)selectedRowColor;
- (id)separatorLineColor;
- (id)smallAttributionFont;
- (id)textColor;
- (unsigned long long)themeType;
- (id)tintColor;
- (id)titleFont;

@end
