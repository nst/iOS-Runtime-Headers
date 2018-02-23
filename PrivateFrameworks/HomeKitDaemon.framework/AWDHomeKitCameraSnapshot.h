/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface AWDHomeKitCameraSnapshot : PBCodable <NSCopying> {
    AWDHomeKitCameraSnapshotMessaging * _controllerMessaging;
    unsigned int  _errorCode;
    bool  _forNotification;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int errorCode : 1; 
        unsigned int receivedSnapshotFromAccessory : 1; 
        unsigned int sentSnapshotRequestToAccessory : 1; 
        unsigned int underlyingErrorCode : 1; 
        unsigned int forNotification : 1; 
        unsigned int isLocal : 1; 
    }  _has;
    AWDHomeKitCameraIDSSessionSetup * _idsSessionSetup;
    bool  _isLocal;
    AWDHomeKitCameraSnapshotIDSTransfer * _phoneToWatch;
    unsigned int  _receivedSnapshotFromAccessory;
    AWDHomeKitCameraSnapshotMessaging * _residentMessaging;
    AWDHomeKitCameraSnapshotIDSTransfer * _residentToPhone;
    unsigned int  _sentSnapshotRequestToAccessory;
    NSString * _sessionID;
    unsigned long long  _timestamp;
    unsigned int  _underlyingErrorCode;
    NSString * _underlyingErrorDomain;
    AWDHomeKitVendorInformation * _vendorDetails;
    AWDHomeKitCameraSnapshotMessaging * _watchMessaging;
}

@property (nonatomic, retain) AWDHomeKitCameraSnapshotMessaging *controllerMessaging;
@property (nonatomic) unsigned int errorCode;
@property (nonatomic) bool forNotification;
@property (nonatomic, readonly) bool hasControllerMessaging;
@property (nonatomic) bool hasErrorCode;
@property (nonatomic) bool hasForNotification;
@property (nonatomic, readonly) bool hasIdsSessionSetup;
@property (nonatomic) bool hasIsLocal;
@property (nonatomic, readonly) bool hasPhoneToWatch;
@property (nonatomic) bool hasReceivedSnapshotFromAccessory;
@property (nonatomic, readonly) bool hasResidentMessaging;
@property (nonatomic, readonly) bool hasResidentToPhone;
@property (nonatomic) bool hasSentSnapshotRequestToAccessory;
@property (nonatomic, readonly) bool hasSessionID;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasUnderlyingErrorCode;
@property (nonatomic, readonly) bool hasUnderlyingErrorDomain;
@property (nonatomic, readonly) bool hasVendorDetails;
@property (nonatomic, readonly) bool hasWatchMessaging;
@property (nonatomic, retain) AWDHomeKitCameraIDSSessionSetup *idsSessionSetup;
@property (nonatomic) bool isLocal;
@property (nonatomic, retain) AWDHomeKitCameraSnapshotIDSTransfer *phoneToWatch;
@property (nonatomic) unsigned int receivedSnapshotFromAccessory;
@property (nonatomic, retain) AWDHomeKitCameraSnapshotMessaging *residentMessaging;
@property (nonatomic, retain) AWDHomeKitCameraSnapshotIDSTransfer *residentToPhone;
@property (nonatomic) unsigned int sentSnapshotRequestToAccessory;
@property (nonatomic, retain) NSString *sessionID;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) unsigned int underlyingErrorCode;
@property (nonatomic, retain) NSString *underlyingErrorDomain;
@property (nonatomic, retain) AWDHomeKitVendorInformation *vendorDetails;
@property (nonatomic, retain) AWDHomeKitCameraSnapshotMessaging *watchMessaging;

- (void).cxx_destruct;
- (id)controllerMessaging;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)errorCode;
- (bool)forNotification;
- (bool)hasControllerMessaging;
- (bool)hasErrorCode;
- (bool)hasForNotification;
- (bool)hasIdsSessionSetup;
- (bool)hasIsLocal;
- (bool)hasPhoneToWatch;
- (bool)hasReceivedSnapshotFromAccessory;
- (bool)hasResidentMessaging;
- (bool)hasResidentToPhone;
- (bool)hasSentSnapshotRequestToAccessory;
- (bool)hasSessionID;
- (bool)hasTimestamp;
- (bool)hasUnderlyingErrorCode;
- (bool)hasUnderlyingErrorDomain;
- (bool)hasVendorDetails;
- (bool)hasWatchMessaging;
- (unsigned long long)hash;
- (id)idsSessionSetup;
- (bool)isEqual:(id)arg1;
- (bool)isLocal;
- (void)mergeFrom:(id)arg1;
- (id)phoneToWatch;
- (bool)readFrom:(id)arg1;
- (unsigned int)receivedSnapshotFromAccessory;
- (id)residentMessaging;
- (id)residentToPhone;
- (unsigned int)sentSnapshotRequestToAccessory;
- (id)sessionID;
- (void)setControllerMessaging:(id)arg1;
- (void)setErrorCode:(unsigned int)arg1;
- (void)setForNotification:(bool)arg1;
- (void)setHasErrorCode:(bool)arg1;
- (void)setHasForNotification:(bool)arg1;
- (void)setHasIsLocal:(bool)arg1;
- (void)setHasReceivedSnapshotFromAccessory:(bool)arg1;
- (void)setHasSentSnapshotRequestToAccessory:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasUnderlyingErrorCode:(bool)arg1;
- (void)setIdsSessionSetup:(id)arg1;
- (void)setIsLocal:(bool)arg1;
- (void)setPhoneToWatch:(id)arg1;
- (void)setReceivedSnapshotFromAccessory:(unsigned int)arg1;
- (void)setResidentMessaging:(id)arg1;
- (void)setResidentToPhone:(id)arg1;
- (void)setSentSnapshotRequestToAccessory:(unsigned int)arg1;
- (void)setSessionID:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setUnderlyingErrorCode:(unsigned int)arg1;
- (void)setUnderlyingErrorDomain:(id)arg1;
- (void)setVendorDetails:(id)arg1;
- (void)setWatchMessaging:(id)arg1;
- (unsigned long long)timestamp;
- (unsigned int)underlyingErrorCode;
- (id)underlyingErrorDomain;
- (id)vendorDetails;
- (id)watchMessaging;
- (void)writeTo:(id)arg1;

@end
