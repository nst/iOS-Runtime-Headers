/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
 */

@interface UIAccessibilityElementDescription : NSObject <NSSecureCoding> {
    NSAttributedString * _attributedLabel;
    NSAttributedString * _attributedValue;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _frame;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _frameInContainerSpace;
    bool  _isAccessibleElement;
    NSString * _label;
    unsigned long long  _traits;
    NSString * _value;
}

@property (nonatomic, retain) NSAttributedString *attributedLabel;
@property (nonatomic, retain) NSAttributedString *attributedValue;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frame;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frameInContainerSpace;
@property (nonatomic) bool isAccessibleElement;
@property (nonatomic, retain) NSString *label;
@property (nonatomic) unsigned long long traits;
@property (nonatomic, retain) NSString *value;

+ (id)_descriptionWithAXElement:(id)arg1;
+ (id)_descriptionWithLocalElement:(id)arg1;
+ (id)descriptionWithElement:(id)arg1 frameInContainerSpaceOrNil:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attributedLabel;
- (id)attributedValue;
- (id)convertToAccessibilityElementWithContainer:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameInContainerSpace;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isAccessibleElement;
- (id)label;
- (void)setAttributedLabel:(id)arg1;
- (void)setAttributedValue:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFrameInContainerSpace:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setIsAccessibleElement:(bool)arg1;
- (void)setLabel:(id)arg1;
- (void)setTraits:(unsigned long long)arg1;
- (void)setValue:(id)arg1;
- (unsigned long long)traits;
- (id)value;

@end