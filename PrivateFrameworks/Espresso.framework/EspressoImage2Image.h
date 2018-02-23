/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
 */

@interface EspressoImage2Image : NSObject {
    int  _flip_y;
    int  _rotation_degrees;
    void * ctx;
    NSString * currentNetworkPath;
    long long  currentResolutionPreset;
    struct postprocessing_settings_t { 
        struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { 
            struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { 
                struct __rep { 
                    union { 
                        struct __long { 
                            char *__data_; 
                            unsigned long long __size_; 
                            unsigned long long __cap_; 
                        } __l; 
                        struct __short { 
                            BOOL __data_[23]; 
                            struct { 
                                unsigned char __size_; 
                            } ; 
                        } __s; 
                        struct __raw { 
                            unsigned long long __words[3]; 
                        } __r; 
                    } ; 
                } __first_; 
            } __r_; 
        } name; 
        struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { 
            struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { 
                struct __rep { 
                    union { 
                        struct __long { 
                            char *__data_; 
                            unsigned long long __size_; 
                            unsigned long long __cap_; 
                        } __l; 
                        struct __short { 
                            BOOL __data_[23]; 
                            struct { 
                                unsigned char __size_; 
                            } ; 
                        } __s; 
                        struct __raw { 
                            unsigned long long __words[3]; 
                        } __r; 
                    } ; 
                } __first_; 
            } __r_; 
        } network; 
        int do_blend; 
        float blend_alpha; 
        int grayscale_i0; 
        int grayscale_i1; 
        float temporal_alpha; 
        float gamma; 
        float saturation; 
        float contrast; 
        float brightness; 
        int color_transfer_mode; 
        int width; 
        int height; 
        int width_fast; 
        int height_fast; 
        int width_capture; 
        int height_capture; 
        int width_miniature; 
        int height_miniature; 
        int width_fullscreen; 
        int height_fullscreen; 
        int width_hd; 
        int height_hd; 
        float old_frame_scale; 
        float noise_strength; 
        int dyn_noise; 
        float noise_speed; 
        float preprocessing_bias_b; 
        float preprocessing_bias_g; 
        float preprocessing_bias_r; 
        float preprocessing_scale; 
        float preprocessing_old_frame_bias_scale; 
        bool high_quality_scaling; 
    }  current_postprocessing_settings;
    int  defaultHeight;
    int  defaultWidth;
    <MTLDevice> * device;
    unsigned long long  dim;
    unsigned long long  dim_small;
    NSObject<OS_dispatch_queue> * dispatch_queue;
    bool  is_temporal_model;
    struct { 
        void *plan; 
        int network_index; 
    }  net;
    struct shared_ptr<Espresso::V9Engine::v9_noise_kernel> { 
        struct v9_noise_kernel {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  noise_k;
    struct shared_ptr<Espresso::generic_load_constant_kernel> { 
        struct generic_load_constant_kernel {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  noise_load_constant_kernel;
    struct { 
        void *data; 
        void *reserved; 
        unsigned long long dim[4]; 
        unsigned long long stride[4]; 
        unsigned long long width; 
        unsigned long long height; 
        unsigned long long channels; 
        unsigned long long batch_number; 
        unsigned long long sequence_length; 
        unsigned long long stride_width; 
        unsigned long long stride_height; 
        unsigned long long stride_channels; 
        unsigned long long stride_batch_number; 
        unsigned long long stride_sequence_length; 
        int storage_type; 
    }  output_blob;
    void * plan;
    struct shared_ptr<Espresso::blob<float, 1> > { 
        struct blob<float, 1> {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  precomputed_noise;
    <MTLCommandQueue> * queue;
    int  scale_ratio;
    <MTLTexture> * smallOldResultTexture;
    float  t0;
    <MTLTexture> * tmpDestinationTexture;
    struct map<std::__1::basic_string<char>, float, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, float> > > { 
        struct __tree<std::__1::__value_type<std::__1::basic_string<char>, float>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, float>, std::__1::less<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, float> > > { 
            struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *__begin_node_; 
            struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, float>, void *> > > { 
                struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                    struct __tree_node_base<void *> {} *__left_; 
                } __first_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, float>, std::__1::less<std::__1::basic_string<char> >, true> > { 
                unsigned long long __first_; 
            } __pair3_; 
        } __tree_; 
    }  tweaks;
}

@property (nonatomic) int flip_y;
@property (nonatomic) int rotation_degrees;

+ (int)featureVersion;
+ (id)getStylesKeys;
+ (void)gpuSync:(id)arg1 tex:(id)arg2;
+ (bool)loadStylesConfigAtDefaultsKey:(id)arg1;
+ (bool)loadStylesConfigAtPath:(id)arg1;
+ (void)setDefaultOption:(id)arg1 toValue:(id)arg2;
+ (void)tuneNetworks:(id)arg1;
+ (void)tuneNetworksWGWindowSize:(id)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_resetTemporalState;
- (int)_reshapeToResolutionPreset:(long long)arg1;
- (int)_reshapeToWidth:(int)arg1 andHeight:(int)arg2;
- (void)_tune;
- (void)addNoiseLayer;
- (void)aggregateWisdom:(struct wisdom_trainer2 { int x1; int x2; int x3; bool x4; float x5; float x6; float x7; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_8_1_1; } x8; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_9_1_1; } x9; }*)arg1;
- (float)benchmark;
- (void)dealloc;
- (int)encodeToCommandBuffer:(id)arg1 sourceTexture:(id)arg2 destinationTexture:(id)arg3 cropRect:(struct { struct { unsigned long long x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; } x1; struct { unsigned long long x_2_1_1; unsigned long long x_2_1_2; unsigned long long x_2_1_3; } x2; })arg4;
- (int)encodeToCommandBuffer:(id)arg1 sourceTexture:(id)arg2 destinationTexture:(id)arg3 cropRect:(struct { struct { unsigned long long x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; } x1; struct { unsigned long long x_2_1_1; unsigned long long x_2_1_2; unsigned long long x_2_1_3; } x2; })arg4 destinationRect:(struct { struct { unsigned long long x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; } x1; struct { unsigned long long x_2_1_1; unsigned long long x_2_1_2; unsigned long long x_2_1_3; } x2; })arg5;
- (int)flip_y;
- (struct { void *x1; int x2; })getEspressoNetwork;
- (id)getInternalDataForKey:(id)arg1;
- (int)height;
- (id)init;
- (id)initWithQueue:(id)arg1;
- (int)load:(id)arg1;
- (int)load:(id)arg1 resolutionPreset:(long long)arg2;
- (id)newOutputTexture;
- (void)postProcess:(id)arg1 cameraSourceTexture:(id)arg2 inputTexture:(id)arg3 destinationTexture:(id)arg4;
- (int)reload;
- (void)resetTemporalState;
- (int)reshapeToResolutionPreset:(long long)arg1;
- (int)reshapeToResolutionPreset:(long long)arg1 aspectRatio:(float)arg2;
- (int)reshapeToWidth:(int)arg1 andHeight:(int)arg2;
- (struct pair<int, int> { int x1; int x2; })resolutionForPreset:(long long)arg1;
- (int)rotation_degrees;
- (void)setFlip_y:(int)arg1;
- (void)setRotation_degrees:(int)arg1;
- (id)setupWithQueue:(id)arg1;
- (void)simpleLinearResize:(id)arg1 sourceTexture:(id)arg2 destinationTexture:(id)arg3;
- (id)styleName;
- (int)submitToQueueWithSourceTexture:(id)arg1 destinationTexture:(id)arg2;
- (int)submitToQueueWithSourceTexture:(id)arg1 destinationTexture:(id)arg2 cropRect:(struct { struct { unsigned long long x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; } x1; struct { unsigned long long x_2_1_1; unsigned long long x_2_1_2; unsigned long long x_2_1_3; } x2; })arg3;
- (void)tune;
- (void)tweak:(id)arg1 value:(float)arg2;
- (int)wasReshaped;
- (int)width;

@end
