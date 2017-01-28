/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFMailMessageStoreSearchResult : NSObject {
    NSMutableDictionary * _mailboxToRemoteIdDictionary;
}

@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, retain) NSMutableDictionary *mailboxToRemoteIdDictionary;

- (void)addRemoteID:(id)arg1 mailbox:(id)arg2;
- (unsigned long long)count;
- (void)dealloc;
- (void)enumerateMailboxesAndRemoteIDsUsingBlock:(id)arg1;
- (id)init;
- (id)mailboxToRemoteIdDictionary;
- (void)setMailboxToRemoteIdDictionary:(id)arg1;

@end
