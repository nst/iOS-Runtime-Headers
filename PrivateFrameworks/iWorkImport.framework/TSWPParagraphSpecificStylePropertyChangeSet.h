/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPParagraphSpecificStylePropertyChangeSet : TSSStylePropertyChangeSet {
    TSSSpecInteger * _alignment;
    TSSSpecString * _decimalTab;
    TSSSpecDouble * _defaultTabStops;
    bool  _definedAlignment;
    bool  _definedDecimalTab;
    bool  _definedDefaultTabStops;
    bool  _definedFill;
    bool  _definedFirstLineIndent;
    bool  _definedFollowingParagraphStyle;
    bool  _definedHyphenate;
    bool  _definedInitialListStyle;
    bool  _definedKeepLinesTogether;
    bool  _definedKeepWithNext;
    bool  _definedLeftIndent;
    bool  _definedLineSpacing;
    bool  _definedOutlineLevel;
    bool  _definedOutlineStyleType;
    bool  _definedPageBreakBefore;
    bool  _definedParagraphBorders;
    bool  _definedParagraphRuleOffset;
    bool  _definedParagraphRuleWidth;
    bool  _definedRightIndent;
    bool  _definedSpaceAfter;
    bool  _definedSpaceBefore;
    bool  _definedStroke;
    bool  _definedTabs;
    bool  _definedWidowControl;
    TSSSpecColor * _fill;
    TSSSpecDouble * _firstLineIndent;
    TSWPSpecParagraphStyle * _followingParagraphStyle;
    TSSSpecBool * _hyphenate;
    TSWPSpecListStyle * _initialListStyle;
    TSSSpecBool * _keepLinesTogether;
    TSSSpecBool * _keepWithNext;
    TSSSpecDouble * _leftIndent;
    TSWPSpecLineSpacing * _lineSpacing;
    TSSSpecInteger * _outlineLevel;
    TSSSpecInteger * _outlineStyleType;
    TSSSpecBool * _pageBreakBefore;
    TSSSpecInteger * _paragraphBorders;
    TSWPSpecRuleOffset * _paragraphRuleOffset;
    TSSSpecDouble * _paragraphRuleWidth;
    TSSSpecDouble * _rightIndent;
    TSSSpecDouble * _spaceAfter;
    TSSSpecDouble * _spaceBefore;
    TSDSpecStroke * _stroke;
    TSWPSpecTabs * _tabs;
    TSSSpecInteger * _widowControl;
}

- (void)enumerateDefinedPropertiesWithBlock:(id)arg1;
- (void)setBoxedValue:(id)arg1 forProperty:(int)arg2;
- (void)setSpec:(id)arg1 forProperty:(int)arg2;
- (void)setUnsetSpecForProperty:(int)arg1;

@end
