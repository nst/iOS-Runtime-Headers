/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPListStylePropertyChangeSet : TSSStylePropertyChangeSet {
    bool  _definedFontColor;
    bool  _definedFontName;
    bool  _definedListClassicTextIndentArray;
    bool  _definedListLabelGeometryArray;
    bool  _definedListLabelImageDataArray;
    bool  _definedListLabelIndentArray;
    bool  _definedListLabelNumberArray;
    bool  _definedListLabelStringArray;
    bool  _definedListLabelTieredNumberArray;
    bool  _definedListLabelTypeArray;
    bool  _definedListTextIndentArray;
    bool  _definedTextShadow;
    bool  _definedWritingDirection;
    TSSSpecColor * _fontColor;
    TSSSpecString * _fontName;
    TSWPSpecListStyleFloatArray * _listClassicTextIndentArray;
    TSWPSpecListStyleListLabelGeometryArray * _listLabelGeometryArray;
    TSWPSpecListStyleImageDataArray * _listLabelImageDataArray;
    TSWPSpecListStyleFloatArray * _listLabelIndentArray;
    TSWPSpecListStyleListNumberTypeArray * _listLabelNumberArray;
    TSWPSpecListStyleStringArray * _listLabelStringArray;
    TSWPSpecListStyleBoolArray * _listLabelTieredNumberArray;
    TSWPSpecListStyleListLabelTypeArray * _listLabelTypeArray;
    TSWPSpecListStyleFloatArray * _listTextIndentArray;
    TSDSpecShadow * _textShadow;
    TSSSpecInteger * _writingDirection;
}

- (void)enumerateDefinedPropertiesWithBlock:(id)arg1;
- (void)setBoxedValue:(id)arg1 forProperty:(int)arg2;
- (void)setSpec:(id)arg1 forProperty:(int)arg2;
- (void)setUnsetSpecForProperty:(int)arg1;

@end
