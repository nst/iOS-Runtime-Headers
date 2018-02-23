/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
 */

@interface Espresso_mxnetTools_ImageBinaryRecordReader : NSObject {
    unsigned long long  _currentOffset;
    struct _mxnetTools_imageHeader_t_ { 
        unsigned int flag; 
        float label; 
        struct _mxnetTools_imageID_t_ { 
            unsigned long long ID[2]; 
        } imageID; 
    }  _imageHeader;
    NSMutableArray * _labelsPrivate;
    NSFileHandle * _recFileHandle;
    struct _mxnetTools_recordHeader_t_ { 
        unsigned int magic; 
        unsigned int lrecord; 
    }  _recordHeader;
}

@property unsigned long long currentOffset;
@property struct _mxnetTools_imageHeader_t_ { unsigned int x1; float x2; struct _mxnetTools_imageID_t_ { unsigned long long x_3_1_1[2]; } x3; } imageHeader;
@property (retain) NSMutableArray *labelsPrivate;
@property (retain) NSFileHandle *recFileHandle;
@property struct _mxnetTools_recordHeader_t_ { unsigned int x1; unsigned int x2; } recordHeader;

- (void).cxx_destruct;
- (unsigned long long)currentOffset;
- (id)imageData;
- (struct _mxnetTools_imageHeader_t_ { unsigned int x1; float x2; struct _mxnetTools_imageID_t_ { unsigned long long x_3_1_1[2]; } x3; })imageHeader;
- (struct _mxnetTools_imageID_t_ { unsigned long long x1[2]; })imageID;
- (id)initWithRecFile:(id)arg1 error:(id*)arg2;
- (id)labels;
- (id)labelsPrivate;
- (bool)nextRecordAndError:(id*)arg1;
- (id)recFileHandle;
- (struct _mxnetTools_recordHeader_t_ { unsigned int x1; unsigned int x2; })recordHeader;
- (bool)seekRecordWithID:(struct _mxnetTools_imageID_t_ { unsigned long long x1[2]; }*)arg1 error:(id*)arg2;
- (void)setCurrentOffset:(unsigned long long)arg1;
- (void)setImageHeader:(struct _mxnetTools_imageHeader_t_ { unsigned int x1; float x2; struct _mxnetTools_imageID_t_ { unsigned long long x_3_1_1[2]; } x3; })arg1;
- (void)setLabelsPrivate:(id)arg1;
- (void)setRecFileHandle:(id)arg1;
- (void)setRecordHeader:(struct _mxnetTools_recordHeader_t_ { unsigned int x1; unsigned int x2; })arg1;

@end
