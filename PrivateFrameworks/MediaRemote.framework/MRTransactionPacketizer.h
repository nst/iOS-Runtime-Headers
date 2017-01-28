/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRTransactionPacketizer : NSObject {
    NSMutableDictionary * _incomingPackets;
    NSMutableArray * _outgoingPackets;
}

@property (nonatomic, readonly) bool hasMorePacketsToPacketize;
@property (nonatomic, readonly) bool hasMorePacketsToUnpacketize;

- (void)dealloc;
- (bool)hasMorePacketsToPacketize;
- (bool)hasMorePacketsToUnpacketize;
- (void)packetize:(id)arg1 packageSize:(unsigned long long)arg2 completion:(id)arg3;
- (void)unpacketize:(id)arg1 completion:(id)arg2;

@end
