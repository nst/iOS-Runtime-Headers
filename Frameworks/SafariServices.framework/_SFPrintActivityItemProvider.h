/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFPrintActivityItemProvider : _SFActivityItemProvider {
    bool  _hasReservedPrintInteractionController;
    _SFPrintController * _printController;
    UIPrintPageRenderer * _printPageRenderer;
}

@property (nonatomic, readonly) bool hasReservedPrintInteractionController;
@property (nonatomic, readonly) _SFPrintController *printController;

- (void).cxx_destruct;
- (bool)hasReservedPrintInteractionController;
- (id)initWithPrintController:(id)arg1 webView:(id)arg2;
- (id)item;
- (id)printController;

@end
