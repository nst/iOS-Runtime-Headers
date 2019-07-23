/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSKFormat : NSObject <NSCopying> {
    int  _formatType;
}

@property (nonatomic, readonly) struct { int x1; union { struct { unsigned int x_1_2_1 : 16; unsigned int x_1_2_2 : 8; unsigned int x_1_2_3 : 3; unsigned int x_1_2_4 : 1; unsigned int x_1_2_5 : 1; } x_2_1_1; struct { unsigned int x_2_2_1 : 8; } x_2_1_2; struct { unsigned int x_3_2_1 : 8; unsigned int x_3_2_2 : 8; unsigned int x_3_2_3 : 1; } x_2_1_3; struct { unsigned int x_4_2_1 : 1; unsigned int x_4_2_2 : 1; id x_4_2_3; struct { unsigned int x_4_3_1 : 1; int x_4_3_2; int x_4_3_3; int x_4_3_4; } x_4_2_4; struct { id x_5_3_1; unsigned int x_5_3_2; unsigned char x_5_3_3; } x_4_2_5; /* Warning: Unrecognized filer type: ')' using 'void*' */ void*x_4_2_6; } x_2_1_4; } x2; } formatStruct;
@property (nonatomic, readonly) int formatType;

+ (id)booleanFormat;
+ (id)checkboxFormat;
+ (id)defaultFormatWithFormatType:(int)arg1 locale:(id)arg2;
+ (id)formatFromArchive:(const struct FormatStructArchive { int (**x1)(); struct ExtensionSet { struct Arena {} *x_2_1_1; unsigned short x_2_1_2; unsigned short x_2_1_3; union AllocatedData { struct KeyValue {} *x_4_2_1; struct map<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf::internal::ExtensionSet::Extension> > > {} *x_4_2_2; } x_2_1_4; } x2; struct InternalMetadataWithArena { void *x_3_1_1; } x3; struct HasBits<2> { unsigned int x_4_1_1[2]; } x4; struct RepeatedPtrField<std::__1::basic_string<char> > { struct Arena {} *x_5_1_1; int x_5_1_2; int x_5_1_3; struct Rep {} *x_5_1_4; } x5; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_6_1_1; } x6; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_7_1_1; } x7; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_8_1_1; } x8; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_9_1_1; } x9; }*)arg1;
+ (id)formatFromTSUFormatStruct:(struct { int x1; union { struct { unsigned int x_1_2_1 : 16; unsigned int x_1_2_2 : 8; unsigned int x_1_2_3 : 3; unsigned int x_1_2_4 : 1; unsigned int x_1_2_5 : 1; } x_2_1_1; struct { unsigned int x_2_2_1 : 8; } x_2_1_2; struct { unsigned int x_3_2_1 : 8; unsigned int x_3_2_2 : 8; unsigned int x_3_2_3 : 1; } x_2_1_3; struct { unsigned int x_4_2_1 : 1; unsigned int x_4_2_2 : 1; id x_4_2_3; struct { unsigned int x_4_3_1 : 1; int x_4_3_2; int x_4_3_3; int x_4_3_4; } x_4_2_4; struct { id x_5_3_1; unsigned int x_5_3_2; unsigned char x_5_3_3; } x_4_2_5; /* Warning: Unrecognized filer type: ')' using 'void*' */ void*x_4_2_6; } x_2_1_4; } x2; })arg1;
+ (id)ratingFormat;
+ (id)textFormat;
+ (unsigned int)validatedDecimalPlaces:(unsigned long long)arg1;

- (id)asBaseFormat;
- (id)asBooleanFormat;
- (id)asCurrencyFormat;
- (id)asCustomFormatWrapper;
- (id)asDateTimeFormat;
- (id)asDurationFormat;
- (id)asFractionFormat;
- (id)asMultipleChoiceListFormat;
- (id)asNumberFormat;
- (id)asStepperSliderFormat;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeToArchive:(struct FormatStructArchive { int (**x1)(); struct ExtensionSet { struct Arena {} *x_2_1_1; unsigned short x_2_1_2; unsigned short x_2_1_3; union AllocatedData { struct KeyValue {} *x_4_2_1; struct map<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf::internal::ExtensionSet::Extension> > > {} *x_4_2_2; } x_2_1_4; } x2; struct InternalMetadataWithArena { void *x_3_1_1; } x3; struct HasBits<2> { unsigned int x_4_1_1[2]; } x4; struct RepeatedPtrField<std::__1::basic_string<char> > { struct Arena {} *x_5_1_1; int x_5_1_2; int x_5_1_3; struct Rep {} *x_5_1_4; } x5; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_6_1_1; } x6; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_7_1_1; } x7; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_8_1_1; } x8; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_9_1_1; } x9; }*)arg1;
- (void)encodeToArchive:(struct FormatStructArchive { int (**x1)(); struct ExtensionSet { struct Arena {} *x_2_1_1; unsigned short x_2_1_2; unsigned short x_2_1_3; union AllocatedData { struct KeyValue {} *x_4_2_1; struct map<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf::internal::ExtensionSet::Extension> > > {} *x_4_2_2; } x_2_1_4; } x2; struct InternalMetadataWithArena { void *x_3_1_1; } x3; struct HasBits<2> { unsigned int x_4_1_1[2]; } x4; struct RepeatedPtrField<std::__1::basic_string<char> > { struct Arena {} *x_5_1_1; int x_5_1_2; int x_5_1_3; struct Rep {} *x_5_1_4; } x5; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_6_1_1; } x6; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_7_1_1; } x7; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_8_1_1; } x8; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_9_1_1; } x9; }*)arg1 archivingCustomFormats:(bool)arg2;
- (struct { int x1; union { struct { unsigned int x_1_2_1 : 16; unsigned int x_1_2_2 : 8; unsigned int x_1_2_3 : 3; unsigned int x_1_2_4 : 1; unsigned int x_1_2_5 : 1; } x_2_1_1; struct { unsigned int x_2_2_1 : 8; } x_2_1_2; struct { unsigned int x_3_2_1 : 8; unsigned int x_3_2_2 : 8; unsigned int x_3_2_3 : 1; } x_2_1_3; struct { unsigned int x_4_2_1 : 1; unsigned int x_4_2_2 : 1; id x_4_2_3; struct { unsigned int x_4_3_1 : 1; int x_4_3_2; int x_4_3_3; int x_4_3_4; } x_4_2_4; struct { id x_5_3_1; unsigned int x_5_3_2; unsigned char x_5_3_3; } x_4_2_5; /* Warning: Unrecognized filer type: ')' using 'void*' */ void*x_4_2_6; } x_2_1_4; } x2; })formatStruct;
- (int)formatType;
- (bool)hasSimpleFormatType;
- (unsigned long long)hash;
- (id)initWithFormatType:(int)arg1;
- (bool)isEqual:(id)arg1;
- (id)stringFromBool:(bool)arg1 locale:(id)arg2;
- (id)stringFromDate:(id)arg1 locale:(id)arg2;
- (id)stringFromDouble:(double)arg1 locale:(id)arg2;
- (id)stringFromDurationTimeInterval:(double)arg1 locale:(id)arg2;
- (id)stringFromString:(id)arg1 locale:(id)arg2;

@end
