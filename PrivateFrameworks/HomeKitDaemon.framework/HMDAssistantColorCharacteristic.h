/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDAssistantColorCharacteristic : NSObject {
    NSString * _format;
    bool  _mandatory;
    NSString * _readCharacteristicType;
    NSString * _writeCharacteristicType;
}

@property (nonatomic, readonly) NSString *format;
@property (nonatomic, readonly) bool mandatory;
@property (nonatomic, readonly) NSString *readCharacteristicType;
@property (nonatomic, readonly) NSString *writeCharacteristicType;

- (void).cxx_destruct;
- (id)format;
- (id)initWithReadCharacteristicType:(id)arg1 writeCharacteristicType:(id)arg2 format:(id)arg3 mandatory:(bool)arg4;
- (bool)mandatory;
- (id)readCharacteristicType;
- (id)writeCharacteristicType;

@end
