/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKRasterMapTileCreator : NSObject <VKImageCanvasDelegate> {
    VKMapImageCanvas * _canvas;
    id  _completion;
    GGLImageCanvas * _displayTarget;
    NSObject<OS_dispatch_queue> * _homeQueue;
    bool  _loaderOpen;
    VKMapModel * _mapModel;
    struct Renderer { int (**x1)(); struct Device {} *x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; bool x6; float x7; struct vector<std::__1::shared_ptr<ggl::DebugRenderer>, std::__1::allocator<std::__1::shared_ptr<ggl::DebugRenderer> > > { struct shared_ptr<ggl::DebugRenderer> {} *x_8_1_1; struct shared_ptr<ggl::DebugRenderer> {} *x_8_1_2; struct __compressed_pair<std::__1::shared_ptr<ggl::DebugRenderer> *, std::__1::allocator<std::__1::shared_ptr<ggl::DebugRenderer> > > { struct shared_ptr<ggl::DebugRenderer> {} *x_3_2_1; } x_8_1_3; } x8; struct unique_ptr<ggl::RenderQueue, std::__1::default_delete<ggl::RenderQueue> > { struct __compressed_pair<ggl::RenderQueue *, std::__1::default_delete<ggl::RenderQueue> > { struct RenderQueue {} *x_1_2_1; } x_9_1_1; } x9; struct shared_ptr<ggl::CommonLibrary> { struct CommonLibrary {} *x_10_1_1; struct __shared_weak_count {} *x_10_1_2; } x10; struct unique_ptr<ggl::RenderResourceFences, std::__1::default_delete<ggl::RenderResourceFences> > { struct __compressed_pair<ggl::RenderResourceFences *, std::__1::default_delete<ggl::RenderResourceFences> > { struct RenderResourceFences {} *x_1_2_1; } x_11_1_1; } x11; } * _renderer;
    VKRasterMapTileRequest * _request;
    double  _startTimestamp;
    struct VKTileKey { 
        unsigned int z; 
        int x; 
        int y; 
        unsigned int pointSize; 
    }  _superTileKey;
}

- (void)_lookAtKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1;
- (void)dealloc;
- (id)detailedDescription;
- (id)detailedDescriptionDictionaryRepresentation;
- (void)imageCanvasDidBecomeFullyDrawn:(id)arg1 hasFailedTiles:(bool)arg2;
- (void)imageCanvasWillBecomeFullyDrawn:(id)arg1;
- (id)initWithHomeQueue:(id)arg1;
- (void)renderRequest:(id)arg1 completion:(id)arg2;

@end
