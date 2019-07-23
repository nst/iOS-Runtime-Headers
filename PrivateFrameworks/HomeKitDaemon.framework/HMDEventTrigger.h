/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDEventTrigger : HMDTrigger <HMDEventDelegate, HMFLogging> {
    unsigned long long  _activationState;
    unsigned long long  _activationType;
    NSPredicate * _evaluationCondition;
    NSMutableArray * _events;
    bool  _executeOnce;
    HMDEventTriggerExecutionSession * _executionSession;
    bool  _migratedEventsToRecords;
    HMDPredicateUtilities * _predicateUtilities;
    NSArray * _recurrences;
    HMDEventTriggerUserConfirmationSession * _userConfirmationSession;
}

@property (nonatomic) unsigned long long activationState;
@property (nonatomic) unsigned long long activationType;
@property (nonatomic, readonly) NSArray *calendarEvents;
@property (nonatomic, readonly) NSArray *charThresholdEvents;
@property (nonatomic, readonly) NSArray *characteristicBaseEvents;
@property (nonatomic, readonly) NSArray *characteristicEvents;
@property (nonatomic, readonly) bool computedActive;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *durationEvents;
@property (nonatomic, readonly) NSArray *endEvents;
@property (nonatomic, retain) NSPredicate *evaluationCondition;
@property (nonatomic, readonly) NSMutableArray *events;
@property (nonatomic) bool executeOnce;
@property (nonatomic, retain) HMDEventTriggerExecutionSession *executionSession;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *locationEvents;
@property (nonatomic) bool migratedEventsToRecords;
@property (nonatomic, retain) HMDPredicateUtilities *predicateUtilities;
@property (nonatomic, readonly) NSArray *presenceEvents;
@property (nonatomic, readonly) NSArray *recurrences;
@property (nonatomic, readonly) NSArray *significantTimeEvents;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *timeEvents;
@property (nonatomic, readonly) NSArray *triggerEvents;
@property (nonatomic, retain) HMDEventTriggerUserConfirmationSession *userConfirmationSession;

+ (bool)__validateRecurrences:(id)arg1;
+ (bool)hasMessageReceiverChildren;
+ (id)logCategory;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_activateAfterResidentChangeWithCompletion:(id /* block */)arg1;
- (void)_activateEvents:(id /* block */)arg1;
- (void)_activateWithCompletion:(id /* block */)arg1;
- (void)_addEventToEventTrigger:(id)arg1;
- (bool)_checkAddEventModel:(id)arg1 message:(id)arg2;
- (void)_computeActivation;
- (void)_evaluationConditionUpdated:(id)arg1 message:(id)arg2;
- (void)_eventTriggerRecurrencesUpdated:(id)arg1 message:(id)arg2;
- (void)_executeOnceUpdated:(id)arg1 message:(id)arg2;
- (void)_handleAddEventModel:(id)arg1 message:(id)arg2;
- (void)_handleAddEventToEventTrigger:(id)arg1;
- (void)_handleCharacteristicRemove:(id)arg1 eventsToRemove:(id)arg2;
- (void)_handleEventTriggerUpdate:(id)arg1 message:(id)arg2;
- (void)_handleLocationAuthorizationChangedNotification:(id)arg1;
- (void)_handleRemoveEventModel:(id)arg1 message:(id)arg2;
- (void)_handleRemoveEventsFromEventTrigger:(id)arg1;
- (void)_handleUpdateEventTriggerCondition:(id)arg1;
- (void)_handleUpdateEventTriggerExecuteOnce:(id)arg1;
- (void)_handleUpdateEventTriggerRecurrences:(id)arg1;
- (void)_handleUpdateEventsOnEventTrigger:(id)arg1;
- (void)_handleUpdateOwningDevice:(id)arg1;
- (void)_handleUserPermissionRequest:(id)arg1;
- (bool)_isTriggerFiredNotificationEntitled;
- (void)_migrateEventsToRecords;
- (void)_reevaluateIfRelaunchRequired;
- (void)_registerForMessages;
- (void)_removeEvents:(id)arg1;
- (void)_removeEventsFromEventTrigger:(id)arg1;
- (void)_resetExecutionState;
- (void)_transactionObjectRemoved:(id)arg1 message:(id)arg2;
- (void)_transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (void)_updateCondition:(id)arg1;
- (void)_updateEventTriggerCondition:(id)arg1;
- (void)_updateEventTriggerExecuteOnce:(id)arg1;
- (void)_updateEventTriggerRecurrences:(id)arg1;
- (id)_updateEventsOnEventTrigger:(id)arg1;
- (void)_updateOwningDevice:(id)arg1;
- (void)_userDidConfirmExecute:(bool)arg1 completionHandler:(id /* block */)arg2;
- (unsigned long long)activationState;
- (unsigned long long)activationType;
- (bool)addEventsFromMessage:(id)arg1;
- (id)backingStoreObjects:(long long)arg1;
- (id)calendarEvents;
- (id)charThresholdEvents;
- (id)characteristicBaseEvents;
- (id)characteristicEvents;
- (bool)checkSharedEventTriggerActivationResidentRequirement:(id)arg1;
- (bool)compatible:(id)arg1 user:(id)arg2;
- (bool)computedActive;
- (void)configure:(id)arg1 messageDispatcher:(id)arg2 queue:(id)arg3;
- (bool)containsRecurrences;
- (id)createEventModel:(id)arg1 endEvent:(bool)arg2 message:(id)arg3 checkForSupport:(bool)arg4 error:(id*)arg5;
- (void)dealloc;
- (id)didOccurEvent:(id)arg1 causingDevice:(id)arg2;
- (id)dumpState;
- (id)durationEvents;
- (id)emptyModelObject;
- (void)encodeWithCoder:(id)arg1;
- (id)endEvents;
- (id)evaluationCondition;
- (id)events;
- (bool)executeOnce;
- (void)executionComplete:(id)arg1 error:(id)arg2;
- (id)executionSession;
- (void)fixupForReplacementAccessory:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithModel:(id)arg1 home:(id)arg2 message:(id)arg3;
- (void)invalidate;
- (bool)isEventTriggerOnLocalDeviceForAccessory:(id)arg1;
- (bool)isEventTriggerOnRemoteGatewayForAccessory:(id)arg1;
- (id)locationEvents;
- (id)messageReceiverChildren;
- (id)metric:(bool)arg1;
- (bool)migratedEventsToRecords;
- (id)modelObjectWithChangeType:(unsigned long long)arg1 version:(long long)arg2;
- (id)predicateUtilities;
- (id)presenceEvents;
- (void)processEventRecords:(id)arg1 message:(id)arg2;
- (id)recurrences;
- (void)removeAccessory:(id)arg1;
- (void)removeCharacteristic:(id)arg1;
- (void)removeService:(id)arg1;
- (void)removeUser:(id)arg1;
- (bool)requiresDataVersion4;
- (void)resetExecutionState;
- (void)sendTriggerFiredNotification:(id)arg1;
- (void)setActivationState:(unsigned long long)arg1;
- (void)setActivationType:(unsigned long long)arg1;
- (void)setEvaluationCondition:(id)arg1;
- (void)setExecuteOnce:(bool)arg1;
- (void)setExecutionSession:(id)arg1;
- (void)setMigratedEventsToRecords:(bool)arg1;
- (void)setPredicateUtilities:(id)arg1;
- (void)setUserConfirmationSession:(id)arg1;
- (bool)shouldActivateOnLocalDevice;
- (bool)shouldEncodeLastFireDate:(id)arg1;
- (id)significantTimeEvents;
- (void)takeOverOwnershipOfTrigger;
- (id)timeEvents;
- (void)timerFired:(id)arg1;
- (id)triggerEvents;
- (unsigned long long)triggerType;
- (id)userConfirmationSession;
- (void)userDidConfirmExecute:(bool)arg1 completionHandler:(id /* block */)arg2;

@end
