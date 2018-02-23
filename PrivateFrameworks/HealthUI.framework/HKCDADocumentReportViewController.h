/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKCDADocumentReportViewController : HKViewController <HKIncrementalSearchBarDelegate> {
    long long  _currentHighlightedHit;
    UIView * _disclosureView;
    NSData * _documentData;
    long long  _hitCount;
    HKIncrementalSearchBar * _incrementalSearchBar;
    bool  _javascriptIsRunning;
    NSMutableArray * _javascriptOperationQueue;
    bool  _javascriptSearchInstalled;
    bool  _searchInProgress;
    WKWebView * _webView;
}

@property (nonatomic) long long currentHighlightedHit;
@property (nonatomic, readonly) UIView *disclosureView;
@property (readonly) NSData *documentData;
@property (nonatomic) long long hitCount;
@property (nonatomic, readonly) HKIncrementalSearchBar *incrementalSearchBar;
@property (nonatomic) bool javascriptIsRunning;
@property (nonatomic, retain) NSMutableArray *javascriptOperationQueue;
@property (nonatomic) bool javascriptSearchInstalled;
@property (nonatomic) bool searchInProgress;
@property (nonatomic, readonly) WKWebView *webView;

+ (id)xmlToHTMLTranslator;

- (void).cxx_destruct;
- (void)_finishJavascriptOperation;
- (void)_incrementCurrentHitBy:(long long)arg1;
- (void)_runJavascript:(id)arg1 clearQueuedCommands:(bool)arg2 completion:(id /* block */)arg3;
- (void)_runJavascriptOperation:(id)arg1 clearQueuedCommands:(bool)arg2;
- (void)_translateXMLInBackground;
- (void)_updateMatchDisplayString:(long long)arg1 numMatches:(long long)arg2;
- (void)_updateSearchBarState;
- (void)_updateSearchHits:(long long)arg1;
- (id)buildDisclosureView;
- (long long)currentHighlightedHit;
- (id)disclosureView;
- (id)documentData;
- (void)hideDisclosure:(id)arg1;
- (long long)hitCount;
- (id)incrementalSearchBar;
- (id)initWithDocumentData:(id)arg1;
- (bool)javascriptIsRunning;
- (id)javascriptOperationQueue;
- (bool)javascriptSearchInstalled;
- (void)searchBarChangeSearch:(id)arg1 searchString:(id)arg2;
- (void)searchBarDoneAction:(id)arg1;
- (void)searchBarDownAction:(id)arg1;
- (void)searchBarUpAction:(id)arg1;
- (bool)searchInProgress;
- (void)setCurrentHighlightedHit:(long long)arg1;
- (void)setHitCount:(long long)arg1;
- (void)setJavascriptIsRunning:(bool)arg1;
- (void)setJavascriptOperationQueue:(id)arg1;
- (void)setJavascriptSearchInstalled:(bool)arg1;
- (void)setSearchInProgress:(bool)arg1;
- (void)startIncrementalSearch;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;
- (id)webView;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;

@end
