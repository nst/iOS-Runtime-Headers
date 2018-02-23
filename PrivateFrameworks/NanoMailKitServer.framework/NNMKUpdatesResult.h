/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

@interface NNMKUpdatesResult : NSObject {
    NSArray * _messageIdsToDelete;
    NSArray * _messageIdsWithDefaultPriority;
    NSArray * _messageIdsWithDefaultPriorityAndProtectedChannel;
    NSArray * _messageIdsWithNotificationPriority;
    NSArray * _messagesToAdd;
    NNMKProtoMessageStatusUpdates * _protoMessageUpdatesWithDefaultPriority;
    NNMKProtoMessageStatusUpdates * _protoMessageUpdatesWithDefaultPriorityAndProtectedChannel;
    NNMKProtoMessageStatusUpdates * _protoMessageUpdatesWithNotificationPriority;
}

@property (nonatomic, retain) NSArray *messageIdsToDelete;
@property (nonatomic, retain) NSArray *messageIdsWithDefaultPriority;
@property (nonatomic, retain) NSArray *messageIdsWithDefaultPriorityAndProtectedChannel;
@property (nonatomic, retain) NSArray *messageIdsWithNotificationPriority;
@property (nonatomic, retain) NSArray *messagesToAdd;
@property (nonatomic, retain) NNMKProtoMessageStatusUpdates *protoMessageUpdatesWithDefaultPriority;
@property (nonatomic, retain) NNMKProtoMessageStatusUpdates *protoMessageUpdatesWithDefaultPriorityAndProtectedChannel;
@property (nonatomic, retain) NNMKProtoMessageStatusUpdates *protoMessageUpdatesWithNotificationPriority;

- (void).cxx_destruct;
- (id)messageIdsToDelete;
- (id)messageIdsWithDefaultPriority;
- (id)messageIdsWithDefaultPriorityAndProtectedChannel;
- (id)messageIdsWithNotificationPriority;
- (id)messagesToAdd;
- (id)protoMessageUpdatesWithDefaultPriority;
- (id)protoMessageUpdatesWithDefaultPriorityAndProtectedChannel;
- (id)protoMessageUpdatesWithNotificationPriority;
- (void)setMessageIdsToDelete:(id)arg1;
- (void)setMessageIdsWithDefaultPriority:(id)arg1;
- (void)setMessageIdsWithDefaultPriorityAndProtectedChannel:(id)arg1;
- (void)setMessageIdsWithNotificationPriority:(id)arg1;
- (void)setMessagesToAdd:(id)arg1;
- (void)setProtoMessageUpdatesWithDefaultPriority:(id)arg1;
- (void)setProtoMessageUpdatesWithDefaultPriorityAndProtectedChannel:(id)arg1;
- (void)setProtoMessageUpdatesWithNotificationPriority:(id)arg1;

@end
