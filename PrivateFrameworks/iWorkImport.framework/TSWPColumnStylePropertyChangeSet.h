/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPColumnStylePropertyChangeSet : TSSStylePropertyChangeSet {
    TSWPSpecColumns * _columns;
    TSSSpecBool * _continuous;
    bool  _definedColumns;
    bool  _definedContinuous;
    bool  _definedMargins;
    bool  _definedMinHorizontalInset;
    bool  _definedPadding;
    bool  _definedShrinkToFit;
    bool  _definedVerticalAlignment;
    bool  _definedVerticalText;
    bool  _definedWritingDirection;
    TSWPSpecPadding * _margins;
    TSSSpecDouble * _minHorizontalInset;
    TSWPSpecPadding * _padding;
    TSSSpecBool * _shrinkToFit;
    TSSSpecInteger * _verticalAlignment;
    TSSSpecBool * _verticalText;
    TSSSpecInteger * _writingDirection;
}

- (void)enumerateDefinedPropertiesWithBlock:(id)arg1;
- (void)setBoxedValue:(id)arg1 forProperty:(int)arg2;
- (void)setSpec:(id)arg1 forProperty:(int)arg2;
- (void)setUnsetSpecForProperty:(int)arg1;

@end
