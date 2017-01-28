/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOStateTimingUsageLogMessage : PBCodable <NSCopying> {
    double  _durationInOldState;
    struct { 
        unsigned int durationInOldState : 1; 
    }  _has;
    NSMutableArray * _stateTransitionLogMessages;
}

@property (nonatomic) double durationInOldState;
@property (nonatomic) bool hasDurationInOldState;
@property (nonatomic, retain) NSMutableArray *stateTransitionLogMessages;

+ (Class)stateTransitionLogMessageType;

- (void)addStateTransitionLogMessage:(id)arg1;
- (void)clearStateTransitionLogMessages;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (double)durationInOldState;
- (bool)hasDurationInOldState;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDurationInOldState:(double)arg1;
- (void)setHasDurationInOldState:(bool)arg1;
- (void)setStateTransitionLogMessages:(id)arg1;
- (id)stateTransitionLogMessageAtIndex:(unsigned long long)arg1;
- (id)stateTransitionLogMessages;
- (unsigned long long)stateTransitionLogMessagesCount;
- (void)writeTo:(id)arg1;

@end
