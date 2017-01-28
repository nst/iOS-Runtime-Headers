/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
 */

@interface NMRProtobufSerialization : NSObject {
    NSDictionary * _dictionaryKeyToProtobufKeyMapping;
    id  _dictionaryValueToProtobufValueTransformer;
    Class  _protobufClass;
    NSDictionary * _protobufKeyToDictionaryKeyMapping;
    id  _protobufValueToDictionaryValueTransformer;
}

@property (nonatomic, copy) NSDictionary *dictionaryKeyToProtobufKeyMapping;
@property (nonatomic, copy) id dictionaryValueToProtobufValueTransformer;
@property (nonatomic, retain) Class protobufClass;
@property (nonatomic, copy) id protobufValueToDictionaryValueTransformer;

- (void).cxx_destruct;
- (id)dictionaryFromProtobuf:(id)arg1;
- (id)dictionaryFromProtobufData:(id)arg1;
- (id)dictionaryKeyToProtobufKeyMapping;
- (id)dictionaryValueToProtobufValueTransformer;
- (Class)protobufClass;
- (id)protobufDataFromDictionary:(id)arg1;
- (id)protobufFromDictionary:(id)arg1;
- (id)protobufValueToDictionaryValueTransformer;
- (void)setDictionaryKeyToProtobufKeyMapping:(id)arg1;
- (void)setDictionaryValueToProtobufValueTransformer:(id)arg1;
- (void)setProtobufClass:(Class)arg1;
- (void)setProtobufValueToDictionaryValueTransformer:(id)arg1;

@end
