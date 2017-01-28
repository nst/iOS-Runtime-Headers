/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/MetalPerformanceShaders
 */

@interface MPSMatrixDescriptor : NSObject {
    unsigned long long  _columns;
    unsigned int  _dataType;
    unsigned long long  _rowBytes;
    unsigned long long  _rows;
}

@property (nonatomic) unsigned long long columns;
@property (nonatomic) unsigned int dataType;
@property (nonatomic) unsigned long long rowBytes;
@property (nonatomic) unsigned long long rows;

+ (id)matrixDescriptorWithDimensions:(unsigned long long)arg1 columns:(unsigned long long)arg2 rowBytes:(unsigned long long)arg3 dataType:(unsigned int)arg4;
+ (unsigned long long)rowBytesFromColumns:(unsigned long long)arg1 dataType:(unsigned int)arg2;

- (unsigned long long)columns;
- (unsigned int)dataType;
- (id)init;
- (unsigned long long)rowBytes;
- (unsigned long long)rows;
- (void)setColumns:(unsigned long long)arg1;
- (void)setDataType:(unsigned int)arg1;
- (void)setRowBytes:(unsigned long long)arg1;
- (void)setRows:(unsigned long long)arg1;

@end
