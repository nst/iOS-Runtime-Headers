/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
 */

@interface TSMTraceFileParser : NSObject {
    NSData * mData;
    unsigned long long  mDataLength;
    unsigned long long  mOffset;
    struct TSMTraceRecord_s { struct TSMTraceRecordHeader_s { unsigned char x_1_1_1; unsigned char x_1_1_2; unsigned short x_1_1_3; struct timeval { long long x_4_2_1; int x_4_2_2; } x_1_1_4; } x1; BOOL x2[0]; } * mRecordBuffer;
}

+ (bool)dataIsTraceFile:(id)arg1;
+ (id)parserWithData:(id)arg1;

- (void)dealloc;
- (id)initWithData:(id)arg1;
- (struct TSMTraceRecord_s { struct TSMTraceRecordHeader_s { unsigned char x_1_1_1; unsigned char x_1_1_2; unsigned short x_1_1_3; struct timeval { long long x_4_2_1; int x_4_2_2; } x_1_1_4; } x1; BOOL x2[0]; }*)nextTraceRecord;

@end
