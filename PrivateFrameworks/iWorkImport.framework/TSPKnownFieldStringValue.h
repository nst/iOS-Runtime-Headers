/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPKnownFieldStringValue : TSPKnownField {
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
            } __value_; 
        } __r_; 
    }  _value;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)initWithFieldDescriptor:(const struct FieldDescriptor { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x1; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x2; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x3; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x4; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x5; struct FileDescriptor {} *x6; struct GoogleOnceDynamic {} *x7; int x8; int x9; bool x10; bool x11; bool x12; int x13; int x14; struct Descriptor {} *x15; struct OneofDescriptor {} *x16; struct Descriptor {} *x17; struct Descriptor {} *x18; struct EnumDescriptor {} *x19; struct FieldOptions {} *x20; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x21; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x22; union { int x_23_1_1; long long x_23_1_2; unsigned int x_23_1_3; unsigned long long x_23_1_4; float x_23_1_5; double x_23_1_6; bool x_23_1_7; struct EnumValueDescriptor {} *x_23_1_8; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_23_1_9; } x23; }*)arg1 fieldInfo:(const struct FieldInfo { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { int x_1_2_1; } x_4_1_1; } x4; struct RepeatedField<unsigned long long> { int x_5_1_1; int x_5_1_2; union Pointer { struct Arena {} *x_3_2_1; struct Rep {} *x_3_2_2; } x_5_1_3; } x5; int x6; struct RepeatedField<unsigned long long> { int x_7_1_1; int x_7_1_2; union Pointer { struct Arena {} *x_3_2_1; struct Rep {} *x_3_2_2; } x_7_1_3; } x7; int x8; struct RepeatedField<unsigned int> { int x_9_1_1; int x_9_1_2; union Pointer { struct Arena {} *x_3_2_1; struct Rep {} *x_3_2_2; } x_9_1_3; } x9; int x10; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_11_1_1; } x11; struct FieldPath {} *x12; int x13; int x14; int x15; }*)arg2 message:(const struct Message { int (**x1)(); }*)arg3 reflection:(const struct Reflection { int (**x1)(); }*)arg4;
- (void)mergeToMessage:(struct Message { int (**x1)(); }*)arg1 reflection:(const struct Reflection { int (**x1)(); }*)arg2;

@end
