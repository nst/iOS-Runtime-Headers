/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface CPReadingModel : NSObject {
    NSAttributedString * _cachedAttributedString;
    NSString * _cachedString;
    long long  _count;
    RMList * _currentList;
    struct CGPDFDocument { } * _document;
    NSMutableArray * _headings;
    NSMutableArray * _lists;
    long long  _numberOfColumns;
    long long  _numberOfLayoutAreas;
    long long  _numberOfLines;
    long long  _numberOfParagraphs;
    long long  _pageNumber;
    long long  _pageNumberMemo;
    long long * _pageNumbers;
    struct { 
        long long location; 
        long long length; 
    }  _pageRange;
    long long  _pos;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _rangeMemo;
    struct { long long x1; long long x2; } * _stringLineRanges;
    NSMutableArray * _tables;
    struct { long long x1; long long x2; } * _textLineRanges;
    struct { 
        long long location; 
        long long length; 
    }  _textRangeMemo;
}

- (void)addListsInColumn:(struct CGPDFNode { }*)arg1;
- (void)addRange:(struct { long long x1; long long x2; })arg1;
- (unsigned long long)addRangeForLine:(unsigned long long)arg1 from:(unsigned long long)arg2;
- (void)addTable:(struct CGPDFNode { }*)arg1 layout:(struct CGPDFLayout { }*)arg2;
- (id)attributedString;
- (id)attributedStringForLine:(unsigned long long)arg1;
- (id)attributedStringForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)buildModel:(struct CGPDFDocument { }*)arg1;
- (void)buildModel:(struct CGPDFDocument { }*)arg1 pageRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)clearCache;
- (void)dealloc;
- (long long)findParagraph:(struct CGPDFNode { }*)arg1 inListArray:(id)arg2;
- (struct CGPDFNode { }*)firstParagraphInList:(id)arg1;
- (id)headings;
- (void)headings:(struct CGPDFNode { }*)arg1 layout:(struct CGPDFLayout { }*)arg2;
- (void)increamentLayoutAreaCount;
- (void)incrementColumnCount;
- (void)incrementLineCount;
- (void)incrementParagraphCount;
- (long long)indexOfFirstLineOnPage:(unsigned long long)arg1;
- (id)initWithDocument:(struct CGPDFDocument { }*)arg1;
- (id)initWithDocument:(struct CGPDFDocument { }*)arg1 withPageRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (unsigned long long)lineCount;
- (unsigned long long)lineForIndex:(unsigned long long)arg1;
- (long long)lineIndexForPoint:(struct CGPoint { double x1; double x2; })arg1 onPage:(unsigned long long)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })linesForPage:(unsigned long long)arg1;
- (id)lists;
- (void)lists:(struct CGPDFNode { }*)arg1 layout:(struct CGPDFLayout { }*)arg2;
- (struct { long long x1; long long x2; })mapStringRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (unsigned long long)pageNumberForLine:(unsigned long long)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })pageRangeForStringRange:(struct { long long x1; long long x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })pdfBoundsForCursor:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })pdfBoundsForLine:(unsigned long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })pdfBoundsForNewLine:(struct { long long x1; long long x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })pdfBoundsForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeForLine:(unsigned long long)arg1;
- (id)string;
- (id)stringForLine:(unsigned long long)arg1;
- (id)stringForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)stringLineRanges;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })stringRangeForLine:(unsigned long long)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })stringRangeForTextRange:(struct { long long x1; long long x2; })arg1 onPageNumber:(unsigned long long)arg2;
- (id)tables;
- (void)tables:(struct CGPDFNode { }*)arg1 layout:(struct CGPDFLayout { }*)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })textRangeForLine:(unsigned long long)arg1;
- (struct { long long x1; long long x2; })textRangeForStringRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)visitColumns:(struct CGPDFNode { }*)arg1 completion:(id)arg2;
- (void)visitLayoutAreas:(struct CGPDFNode { }*)arg1 completion:(id)arg2;
- (void)visitParagraphs:(struct CGPDFNode { }*)arg1 completion:(id)arg2;
- (void)visitTextLines:(struct CGPDFNode { }*)arg1 completion:(id)arg2;

@end
