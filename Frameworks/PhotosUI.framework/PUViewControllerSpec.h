/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUViewControllerSpec : NSObject {
    long long  __changeCount;
    NSHashTable * __changeObservers;
    bool  __needsUpdateLayoutStyle;
    PUViewControllerSpecChange * _currentChange;
    long long  _currentLayoutStyle;
    struct CGSize { 
        double width; 
        double height; 
    }  _layoutReferenceSize;
    bool  _presentedForSecondScreen;
    struct CGSize { 
        double width; 
        double height; 
    }  _secondScreenSize;
    UITraitCollection * _traitCollection;
}

@property (setter=_setChangeCount:, nonatomic) long long _changeCount;
@property (nonatomic, readonly) NSHashTable *_changeObservers;
@property (setter=_setNeedsUpdateLayoutStyle:, nonatomic) bool _needsUpdateLayoutStyle;
@property (nonatomic, readonly) PUViewControllerSpecChange *currentChange;
@property (nonatomic, readonly) long long currentLayoutStyle;
@property (nonatomic) struct CGSize { double x1; double x2; } layoutReferenceSize;
@property (getter=isPresentedForSecondScreen, nonatomic) bool presentedForSecondScreen;
@property (nonatomic) struct CGSize { double x1; double x2; } secondScreenSize;
@property (nonatomic, retain) UITraitCollection *traitCollection;
@property (getter=isValid, nonatomic, readonly) bool valid;

- (void).cxx_destruct;
- (long long)_changeCount;
- (id)_changeObservers;
- (void)_didChange;
- (void)_invalidateLayoutStyle;
- (bool)_needsUpdateLayoutStyle;
- (void)_publishChange:(id)arg1;
- (void)_setChangeCount:(long long)arg1;
- (void)_setCurrentChange:(id)arg1;
- (void)_setCurrentLayoutStyle:(long long)arg1;
- (void)_setNeedsUpdateLayoutStyle:(bool)arg1;
- (void)_updateCurrentLayoutStyleIfNeeded;
- (void)_willChange;
- (void)assertInsideChangesBlock;
- (id)currentChange;
- (long long)currentLayoutStyle;
- (id)init;
- (bool)isPresentedForSecondScreen;
- (bool)isValid;
- (struct CGSize { double x1; double x2; })layoutReferenceSize;
- (id)newSpecChange;
- (void)performChanges:(id)arg1;
- (void)registerChangeObserver:(id)arg1;
- (struct CGSize { double x1; double x2; })secondScreenSize;
- (void)setLayoutReferenceSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPresentedForSecondScreen:(bool)arg1;
- (void)setSecondScreenSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setTraitCollection:(id)arg1;
- (id)traitCollection;
- (void)unregisterChangeObserver:(id)arg1;
- (void)updateIfNeeded;

@end
