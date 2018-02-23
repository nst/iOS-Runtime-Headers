/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface _HDRemoteAuthorizationRequestRecord : NSObject {
    NSString * _bundleID;
    bool  _didRecieveShouldPrompt;
    NSString * _hostAppName;
    NSMutableArray * _records;
    bool  _shouldPrompt;
    NSError * _shouldPromptError;
}

@property (nonatomic, readonly, copy) NSString *bundleID;
@property (nonatomic) bool didRecieveShouldPrompt;
@property (nonatomic, copy) NSString *hostAppName;
@property (nonatomic, retain) NSMutableArray *records;
@property (nonatomic) bool shouldPrompt;
@property (nonatomic, copy) NSError *shouldPromptError;

- (void).cxx_destruct;
- (id)bundleID;
- (bool)didRecieveShouldPrompt;
- (id)hostAppName;
- (id)initWithBundleID:(id)arg1;
- (id)records;
- (void)setDidRecieveShouldPrompt:(bool)arg1;
- (void)setHostAppName:(id)arg1;
- (void)setRecords:(id)arg1;
- (void)setShouldPrompt:(bool)arg1;
- (void)setShouldPromptError:(id)arg1;
- (bool)shouldPrompt;
- (id)shouldPromptError;

@end
