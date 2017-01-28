/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDFitnessFriendsMessageQueue : NSObject {
    struct __CFString { } * _domainName;
    NSMutableDictionary * _identifierToMessageDictionary;
    struct __CFString { } * _queueName;
}

- (void).cxx_destruct;
- (void)_synchronizePreferences;
- (void)dealloc;
- (void)enumerateQueuedMessagesUsingBlock:(id)arg1;
- (id)init;
- (id)initWithQueueName:(id)arg1;
- (id)messageWithIdentifier:(id)arg1;
- (void)removeMessageWithIdentifier:(id)arg1;
- (void)setMessage:(id)arg1 identifier:(id)arg2;

@end
