/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
 */

@interface MSAMNotificationInfo : NSObject {
    id  _completionBlock;
    MSAlertManager * _owner;
    NSString * _personID;
    struct __CFRunLoopSource { } * _runLoopSource;
    struct __CFUserNotification { } * _userNotification;
}

@property (nonatomic, copy) id completionBlock;
@property (nonatomic) MSAlertManager *owner;
@property (nonatomic, retain) NSString *personID;
@property (nonatomic) struct __CFRunLoopSource { }*runLoopSource;
@property (nonatomic) struct __CFUserNotification { }*userNotification;

+ (id)info;

- (void).cxx_destruct;
- (id)completionBlock;
- (void)dealloc;
- (id)owner;
- (id)personID;
- (struct __CFRunLoopSource { }*)runLoopSource;
- (void)setCompletionBlock:(id)arg1;
- (void)setOwner:(id)arg1;
- (void)setPersonID:(id)arg1;
- (void)setRunLoopSource:(struct __CFRunLoopSource { }*)arg1;
- (void)setUserNotification:(struct __CFUserNotification { }*)arg1;
- (struct __CFUserNotification { }*)userNotification;

@end
