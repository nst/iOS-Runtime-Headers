/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDFitnessFriendsNotificationStep : NSObject {
    id  _notifyObserverBlock;
    id  _objectTransformationBlock;
    id  _objectsTransformationBlock;
    NSSet * _recordTypes;
    id  _reportingBlock;
    id  _shouldNotifyObserverBlock;
}

@property (nonatomic, copy) id notifyObserverBlock;
@property (nonatomic, copy) id objectTransformationBlock;
@property (nonatomic, copy) id objectsTransformationBlock;
@property (nonatomic, retain) NSSet *recordTypes;
@property (nonatomic, copy) id reportingBlock;
@property (nonatomic, copy) id shouldNotifyObserverBlock;

- (void).cxx_destruct;
- (id)notifyObserverBlock;
- (id)objectTransformationBlock;
- (id)objectsTransformationBlock;
- (id)objectsTransformedFromRecords:(id)arg1 cloudKitManager:(id)arg2;
- (id)recordTypes;
- (id)reportingBlock;
- (void)setNotifyObserverBlock:(id)arg1;
- (void)setObjectTransformationBlock:(id)arg1;
- (void)setObjectsTransformationBlock:(id)arg1;
- (void)setRecordTypes:(id)arg1;
- (void)setReportingBlock:(id)arg1;
- (void)setShouldNotifyObserverBlock:(id)arg1;
- (id)shouldNotifyObserverBlock;

@end