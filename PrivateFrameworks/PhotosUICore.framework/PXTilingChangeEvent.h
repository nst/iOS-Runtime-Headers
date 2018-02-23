/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXTilingChangeEvent : NSObject {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInset;
    PXTilingLayoutInvalidationContext * _context;
    PXTilingLayout * _layout;
    struct CGSize { 
        double width; 
        double height; 
    }  _referenceSize;
    long long  _type;
}

@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInset;
@property (nonatomic, readonly) PXTilingLayoutInvalidationContext *context;
@property (nonatomic, readonly) PXTilingLayout *layout;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } referenceSize;
@property (nonatomic, readonly) long long type;

- (void).cxx_destruct;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInset;
- (id)context;
- (id)description;
- (id)init;
- (id)initWithChangeToContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (id)initWithChangeToLayout:(id)arg1;
- (id)initWithChangeToReferenceSize:(struct CGSize { double x1; double x2; })arg1;
- (id)initWithCoordinateSpaceChange;
- (id)initWithLayoutInvalidationContext:(id)arg1;
- (id)layout;
- (struct CGSize { double x1; double x2; })referenceSize;
- (long long)type;

@end
