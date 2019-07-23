/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUFormatObject : NSObject <NSCopying, NSMutableCopying, TSCHCustomFormatSupport, TSCHDataFormatter, TSCHDataFormatterPersistableStyleObject, TSCHDataFormatterSupportedClientFormatObject, TSCHFormatTypeSupport> {
    struct { 
        int mFormatType; 
        union { 
            struct { 
                unsigned int mCurrencyCodeIndex : 16; 
                unsigned int mDecimalPlaces : 8; 
                unsigned int mNegativeStyle : 3; 
                unsigned int mShowThousandsSeparator : 1; 
                unsigned int mUseAccountingStyle : 1; 
            } mNumberFormatStruct; 
            struct { 
                unsigned int mFractionAccuracy : 8; 
            } mFractionFormatStruct; 
            struct { 
                unsigned int mBase : 8; 
                unsigned int mBasePlaces : 8; 
                unsigned int mBaseUseMinusSign : 1; 
            } mBaseFormatStruct; 
            struct { 
                unsigned int mSuppressDateFormat : 1; 
                unsigned int mSuppressTimeFormat : 1; 
                NSString *mDateTimeFormat; 
            } mDateFormatStruct; 
            struct { 
                unsigned int mUseAutomaticUnits : 1; 
                int mDurationUnitSmallest; 
                int mDurationUnitLargest; 
                int mDurationStyle; 
            } mDurationFormatStruct; 
            struct { 
                NSUUID *mCustomFormatKey; 
                TSUCustomFormat *mCustomFormat; 
                unsigned int mLegacyID; 
                unsigned char mAppliedConditionKey; 
            } mCustomFormatStruct; 
        } ; 
    }  mFormatStruct;
    bool  mUseExpandedContents;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) struct { int x1; union { struct { unsigned int x_1_2_1 : 16; unsigned int x_1_2_2 : 8; unsigned int x_1_2_3 : 3; unsigned int x_1_2_4 : 1; unsigned int x_1_2_5 : 1; } x_2_1_1; struct { unsigned int x_2_2_1 : 8; } x_2_1_2; struct { unsigned int x_3_2_1 : 8; unsigned int x_3_2_2 : 8; unsigned int x_3_2_3 : 1; } x_2_1_3; struct { unsigned int x_4_2_1 : 1; unsigned int x_4_2_2 : 1; id x_4_2_3; struct { unsigned int x_4_3_1 : 1; int x_4_3_2; int x_4_3_3; int x_4_3_4; } x_4_2_4; struct { id x_5_3_1; unsigned int x_5_3_2; unsigned char x_5_3_3; } x_4_2_5; /* Warning: Unrecognized filer type: ')' using 'void*' */ void*x_4_2_6; } x_2_1_4; } x2; } formatStruct;
@property (nonatomic, readonly) int formatType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool useExpandedContents;

+ (id)defaultDateFormat:(id)arg1;
+ (id)defaultDurationFormat;
+ (id)instanceWithArchive:(const struct FormatStructArchive { int (**x1)(); struct ExtensionSet { struct Arena {} *x_2_1_1; unsigned short x_2_1_2; unsigned short x_2_1_3; union AllocatedData { struct KeyValue {} *x_4_2_1; struct map<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf::internal::ExtensionSet::Extension> > > {} *x_4_2_2; } x_2_1_4; } x2; struct InternalMetadataWithArena { void *x_3_1_1; } x3; struct HasBits<2> { unsigned int x_4_1_1[2]; } x4; struct RepeatedPtrField<std::__1::basic_string<char> > { struct Arena {} *x_5_1_1; int x_5_1_2; int x_5_1_3; struct Rep {} *x_5_1_4; } x5; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_6_1_1; } x6; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_7_1_1; } x7; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_8_1_1; } x8; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_9_1_1; } x9; }*)arg1 unarchiver:(id)arg2;

- (id)chartFormattedInspectorStringForValue:(id)arg1 locale:(id)arg2;
- (id)chartFormattedStringForValue:(id)arg1 locale:(id)arg2;
- (id)convertToPersistableStyleObject;
- (id)convertToSupportedClientFormatObjectWithLocale:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customFormatListKey;
- (id)dataFormatterForDocumentRoot:(id)arg1;
- (void)dealloc;
- (struct { int x1; union { struct { unsigned int x_1_2_1 : 16; unsigned int x_1_2_2 : 8; unsigned int x_1_2_3 : 3; unsigned int x_1_2_4 : 1; unsigned int x_1_2_5 : 1; } x_2_1_1; struct { unsigned int x_2_2_1 : 8; } x_2_1_2; struct { unsigned int x_3_2_1 : 8; unsigned int x_3_2_2 : 8; unsigned int x_3_2_3 : 1; } x_2_1_3; struct { unsigned int x_4_2_1 : 1; unsigned int x_4_2_2 : 1; id x_4_2_3; struct { unsigned int x_4_3_1 : 1; int x_4_3_2; int x_4_3_3; int x_4_3_4; } x_4_2_4; struct { id x_5_3_1; unsigned int x_5_3_2; unsigned char x_5_3_3; } x_4_2_5; /* Warning: Unrecognized filer type: ')' using 'void*' */ void*x_4_2_6; } x_2_1_4; } x2; })formatStruct;
- (int)formatType;
- (unsigned long long)hash;
- (id)init;
- (id)initWithArchive:(const struct FormatStructArchive { int (**x1)(); struct ExtensionSet { struct Arena {} *x_2_1_1; unsigned short x_2_1_2; unsigned short x_2_1_3; union AllocatedData { struct KeyValue {} *x_4_2_1; struct map<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf::internal::ExtensionSet::Extension> > > {} *x_4_2_2; } x_2_1_4; } x2; struct InternalMetadataWithArena { void *x_3_1_1; } x3; struct HasBits<2> { unsigned int x_4_1_1[2]; } x4; struct RepeatedPtrField<std::__1::basic_string<char> > { struct Arena {} *x_5_1_1; int x_5_1_2; int x_5_1_3; struct Rep {} *x_5_1_4; } x5; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_6_1_1; } x6; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_7_1_1; } x7; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_8_1_1; } x8; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_9_1_1; } x9; }*)arg1 unarchiver:(id)arg2;
- (id)initWithTSUFormatFormatStruct:(struct { int x1; union { struct { unsigned int x_1_2_1 : 16; unsigned int x_1_2_2 : 8; unsigned int x_1_2_3 : 3; unsigned int x_1_2_4 : 1; unsigned int x_1_2_5 : 1; } x_2_1_1; struct { unsigned int x_2_2_1 : 8; } x_2_1_2; struct { unsigned int x_3_2_1 : 8; unsigned int x_3_2_2 : 8; unsigned int x_3_2_3 : 1; } x_2_1_3; struct { unsigned int x_4_2_1 : 1; unsigned int x_4_2_2 : 1; id x_4_2_3; struct { unsigned int x_4_3_1 : 1; int x_4_3_2; int x_4_3_3; int x_4_3_4; } x_4_2_4; struct { id x_5_3_1; unsigned int x_5_3_2; unsigned char x_5_3_3; } x_4_2_5; /* Warning: Unrecognized filer type: ')' using 'void*' */ void*x_4_2_6; } x_2_1_4; } x2; })arg1;
- (id)initWithTSUFormatFormatStruct:(struct { int x1; union { struct { unsigned int x_1_2_1 : 16; unsigned int x_1_2_2 : 8; unsigned int x_1_2_3 : 3; unsigned int x_1_2_4 : 1; unsigned int x_1_2_5 : 1; } x_2_1_1; struct { unsigned int x_2_2_1 : 8; } x_2_1_2; struct { unsigned int x_3_2_1 : 8; unsigned int x_3_2_2 : 8; unsigned int x_3_2_3 : 1; } x_2_1_3; struct { unsigned int x_4_2_1 : 1; unsigned int x_4_2_2 : 1; id x_4_2_3; struct { unsigned int x_4_3_1 : 1; int x_4_3_2; int x_4_3_3; int x_4_3_4; } x_4_2_4; struct { id x_5_3_1; unsigned int x_5_3_2; unsigned char x_5_3_3; } x_4_2_5; /* Warning: Unrecognized filer type: ')' using 'void*' */ void*x_4_2_6; } x_2_1_4; } x2; })arg1 useExpandedContents:(bool)arg2;
- (bool)isCompatibleWithDataFormatter:(id)arg1;
- (bool)isCustom;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (long long)numberOfDecimalPlaces;
- (void)p_setFormatStruct:(struct { int x1; union { struct { unsigned int x_1_2_1 : 16; unsigned int x_1_2_2 : 8; unsigned int x_1_2_3 : 3; unsigned int x_1_2_4 : 1; unsigned int x_1_2_5 : 1; } x_2_1_1; struct { unsigned int x_2_2_1 : 8; } x_2_1_2; struct { unsigned int x_3_2_1 : 8; unsigned int x_3_2_2 : 8; unsigned int x_3_2_3 : 1; } x_2_1_3; struct { unsigned int x_4_2_1 : 1; unsigned int x_4_2_2 : 1; id x_4_2_3; struct { unsigned int x_4_3_1 : 1; int x_4_3_2; int x_4_3_3; int x_4_3_4; } x_4_2_4; struct { id x_5_3_1; unsigned int x_5_3_2; unsigned char x_5_3_3; } x_4_2_5; /* Warning: Unrecognized filer type: ')' using 'void*' */ void*x_4_2_6; } x_2_1_4; } x2; })arg1;
- (void)saveToArchive:(struct FormatStructArchive { int (**x1)(); struct ExtensionSet { struct Arena {} *x_2_1_1; unsigned short x_2_1_2; unsigned short x_2_1_3; union AllocatedData { struct KeyValue {} *x_4_2_1; struct map<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf::internal::ExtensionSet::Extension> > > {} *x_4_2_2; } x_2_1_4; } x2; struct InternalMetadataWithArena { void *x_3_1_1; } x3; struct HasBits<2> { unsigned int x_4_1_1[2]; } x4; struct RepeatedPtrField<std::__1::basic_string<char> > { struct Arena {} *x_5_1_1; int x_5_1_2; int x_5_1_3; struct Rep {} *x_5_1_4; } x5; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_6_1_1; } x6; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_7_1_1; } x7; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_8_1_1; } x8; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_9_1_1; } x9; }*)arg1 archiver:(id)arg2;
- (bool)useExpandedContents;

@end
