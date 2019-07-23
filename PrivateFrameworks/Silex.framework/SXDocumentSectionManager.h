/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXDocumentSectionManager : NSObject <SXDocumentSectionManager, SXViewportChangeListener> {
    NSMutableDictionary * _blueprints;
    <SXDocumentSectionHosting> * _hosting;
    NFMultiDelegate * _multiScrollDelegate;
    SXViewport * _viewport;
    NSMutableSet * _visibleViewControllers;
}

@property (nonatomic, readonly) NSMutableDictionary *blueprints;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SXDocumentSectionHosting> *hosting;
@property (nonatomic, readonly) NFMultiDelegate *multiScrollDelegate;
@property (readonly) Class superclass;
@property (nonatomic, readonly) SXViewport *viewport;
@property (nonatomic, readonly) NSMutableSet *visibleViewControllers;

- (void).cxx_destruct;
- (void)applySectionBlueprint:(id)arg1 identifier:(id)arg2 offset:(struct CGPoint { double x1; double x2; })arg3 width:(double)arg4;
- (id)blueprints;
- (void)endImpressions;
- (double)heightForBlueprint:(id)arg1 width:(double)arg2 traitCollection:(id)arg3;
- (id)hosting;
- (id)initWithSectionHosting:(id)arg1 viewport:(id)arg2 appStateMonitor:(id)arg3;
- (id)multiScrollDelegate;
- (void)updateViewControllerVisibility;
- (id)view;
- (id)viewController;
- (id)viewport;
- (void)viewport:(id)arg1 appearStateChangedFromState:(unsigned long long)arg2;
- (void)viewport:(id)arg1 boundsDidChangeFromBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)viewport:(id)arg1 documentSizeDidChangeFromSize:(struct CGSize { double x1; double x2; })arg2;
- (id)visibleViewControllers;

@end
