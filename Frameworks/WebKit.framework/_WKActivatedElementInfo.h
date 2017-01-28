/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface _WKActivatedElementInfo : NSObject {
    struct RetainPtr<NSString> { 
        void *m_ptr; 
    }  _ID;
    struct RetainPtr<NSURL> { 
        void *m_ptr; 
    }  _URL;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _boundingRect;
    struct RefPtr<WebKit::ShareableBitmap> { 
        struct ShareableBitmap {} *m_ptr; 
    }  _image;
    struct CGPoint { 
        double x; 
        double y; 
    }  _interactionLocation;
    struct RetainPtr<NSString> { 
        void *m_ptr; 
    }  _title;
    long long  _type;
    struct RetainPtr<UIImage> { 
        void *m_ptr; 
    }  _uiImage;
}

@property (nonatomic, readonly) NSString *ID;
@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } _interactionLocation;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } boundingRect;
@property (nonatomic, readonly, copy) UIImage *image;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) long long type;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)ID;
- (id)URL;
- (id)_initWithType:(long long)arg1 URL:(id)arg2 location:(struct CGPoint { double x1; double x2; })arg3 title:(id)arg4 ID:(id)arg5 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg6 image:(struct ShareableBitmap { unsigned int x1; struct IntSize { int x_2_1_1; int x_2_1_2; } x2; unsigned int x3; struct RefPtr<WebKit::SharedMemory> { struct SharedMemory {} *x_4_1_1; } x4; void *x5; }*)arg7;
- (struct CGPoint { double x1; double x2; })_interactionLocation;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingRect;
- (id)image;
- (id)title;
- (long long)type;

@end
