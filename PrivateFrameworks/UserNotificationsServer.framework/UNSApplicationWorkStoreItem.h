/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
 */

@interface UNSApplicationWorkStoreItem : NSObject {
    NSDate * _expiryDate;
    NSString * _key;
    id  _workBlock;
}

@property (nonatomic, readonly) NSDate *expiryDate;
@property (nonatomic, readonly, copy) NSString *key;
@property (nonatomic, readonly, copy) id workBlock;

- (void).cxx_destruct;
- (id)expiryDate;
- (id)initWithKey:(id)arg1 workBlock:(id)arg2 expiryDate:(id)arg3;
- (id)key;
- (id)workBlock;

@end
