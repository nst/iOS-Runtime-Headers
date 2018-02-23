/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HardwareSupport.framework/HardwareSupport
 */

@interface HSDetachedRWProperty : NSObject {
    HSEntityEncoder * _encoder;
    id  _field;
}

@property (nonatomic, readonly) HSEntityEncoder *encoder;
@property (nonatomic, readonly) id field;

- (void).cxx_destruct;
- (id)encoder;
- (id)field;
- (id)initWithField:(id)arg1 encoder:(id)arg2;
- (bool)setValue:(id)arg1 onEntity:(id)arg2 error:(id*)arg3;
- (id)valueFromEntity:(id)arg1 error:(id*)arg2;

@end
