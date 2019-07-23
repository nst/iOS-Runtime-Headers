/* Generated by RuntimeBrowser.
 */

@protocol PKInkToolButton

@required

+ (UIButton<PKInkToolButton> *)buttonWithIdentifier:(NSString *)arg1 color:(UIColor *)arg2 sizeState:(unsigned long long)arg3;

- (unsigned long long)attributeSet;
- (UIColor *)color;
- (NSString *)identifier;
- (UIButton<PKInkToolButton> *)initWithIdentifier:(NSString *)arg1 color:(UIColor *)arg2 sizeState:(unsigned long long)arg3;
- (bool)isUsedOnDarkBackground;
- (void)setAttributeSet:(unsigned long long)arg1;
- (void)setColor:(UIColor *)arg1;
- (void)setColor:(UIColor *)arg1 animated:(bool)arg2;
- (void)setIdentifier:(NSString *)arg1;
- (void)setIsUsedOnDarkBackground:(bool)arg1;
- (void)setSizeState:(unsigned long long)arg1;
- (unsigned long long)sizeState;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1 sizeState:(unsigned long long)arg2;

@end
