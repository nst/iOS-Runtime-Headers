/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKCSSDeclarationEdgeInsets : IKCSSDeclaration {
    unsigned long long  _edgeFlag;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _insets;
    bool  _insetsFound;
}

@property unsigned long long edgeFlag;
@property struct UIEdgeInsets { double x1; double x2; double x3; double x4; } insets;
@property bool insetsFound;

- (id)description;
- (unsigned long long)edgeFlag;
- (id)initWithParseDeclaration:(id)arg1 info:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })insets;
- (bool)insetsFound;
- (void)setEdgeFlag:(unsigned long long)arg1;
- (void)setInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setInsetsFound:(bool)arg1;
- (id)stringValue;

@end
