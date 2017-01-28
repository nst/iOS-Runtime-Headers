/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface _WKWebViewPrintFormatter : UIViewPrintFormatter {
    struct RetainPtr<_WKFrameHandle> { 
        void *m_ptr; 
    }  _frameToPrint;
    struct RetainPtr<CGPDFDocument *> { 
        void *m_ptr; 
    }  _printedDocument;
}

@property (nonatomic, retain) _WKFrameHandle *frameToPrint;

- (id).cxx_construct;
- (void).cxx_destruct;
- (long long)_recalcPageCount;
- (id)_webView;
- (void)drawInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forPageAtIndex:(long long)arg2;
- (id)frameToPrint;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectForPageAtIndex:(long long)arg1;
- (void)setFrameToPrint:(id)arg1;

@end
