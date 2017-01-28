/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKRoadTrafficMapModel : VKVectorMapModel {
    bool  _clearFrameBufferAlpha;
    struct ClearItem { 
        unsigned char colorMask; 
        struct Matrix<float, 4, 1> { 
            float _e[4]; 
        } color; 
        bool clearDepthBuffer; 
        float depth; 
        unsigned char clearStencilBuffer; 
        unsigned int stencil; 
    }  _clearItem;
    bool  _enabled;
    VKRoadMapModel * _roadModel;
    int  _sourceTileZtoStencilOffset;
}

@property (nonatomic) bool clearFrameBufferAlpha;
@property (nonatomic) bool enabled;
@property (nonatomic, retain) VKRoadMapModel *roadModel;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)clearFrameBufferAlpha;
- (void)dealloc;
- (void)didReceiveMemoryWarning:(bool)arg1;
- (bool)enabled;
- (void)gglLayoutScene:(id)arg1 withContext:(struct LayoutContext { id x1; short x2; /* Warning: Unrecognized filer type: 'h' using 'void*' */ void*x3; void*x4; const void*x5; double x6; void*x7; void*x8; void*x9; const void*x10; void*x11; double x12; SEL x13; SEL x14; oneway int x15; void*x16; void*x17; void*x18; const void*x19; in short x20; float x21; out const void*x22; void*x23; void*x24; struct ViewTransform {} *x25; struct __shared_weak_count {} *x26; }*)arg2 renderQueue:(struct RenderQueue { int (**x1)(); struct shared_ptr<ggl::RenderQueue> { struct RenderQueue {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; }*)arg3;
- (id)initWithTarget:(id)arg1 sharedResources:(id)arg2;
- (unsigned long long)mapLayerPosition;
- (id)roadModel;
- (void)setClearFrameBufferAlpha:(bool)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setRoadModel:(id)arg1;
- (void)stylesheetDidChange;
- (void)stylesheetDidReload;

@end
