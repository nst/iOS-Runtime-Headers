/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRSendCommandMessage : MRProtocolMessage {
    NSDate * _serializationDate;
}

@property (nonatomic, readonly) unsigned int command;
@property (nonatomic, readonly) NSDictionary *options;
@property (nonatomic, readonly) NSDate *serializationDate;

- (unsigned int)command;
- (id)initWithCommand:(unsigned int)arg1 options:(id)arg2;
- (id)options;
- (id)serializationDate;
- (unsigned long long)type;

@end
