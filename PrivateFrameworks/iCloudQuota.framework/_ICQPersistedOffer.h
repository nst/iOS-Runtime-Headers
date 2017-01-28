/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iCloudQuota.framework/iCloudQuota
 */

@interface _ICQPersistedOffer : NSObject {
    NSString * _accountAltDSID;
    double  _callbackInterval;
    bool  _failedToFetchFromServer;
    NSDictionary * _failureDetails;
    NSString * _notificationID;
    NSDate * _retrievalDate;
    NSDictionary * _serverDictionary;
    long long  _testKind;
    long long  _testLevel;
}

@property (nonatomic, retain) NSString *accountAltDSID;
@property (nonatomic) double callbackInterval;
@property bool failedToFetchFromServer;
@property (nonatomic, retain) NSDictionary *failureDetails;
@property (nonatomic, retain) NSString *notificationID;
@property (nonatomic, retain) NSDate *retrievalDate;
@property (nonatomic, retain) NSDictionary *serverDictionary;
@property (nonatomic) long long testKind;
@property (nonatomic) long long testLevel;

- (void).cxx_destruct;
- (id)accountAltDSID;
- (double)callbackInterval;
- (bool)failedToFetchFromServer;
- (id)failureDetails;
- (id)initWithDictionary:(id)arg1;
- (id)notificationID;
- (id)persistedOfferDictionary;
- (id)retrievalDate;
- (id)serverDictionary;
- (void)setAccountAltDSID:(id)arg1;
- (void)setCallbackInterval:(double)arg1;
- (void)setFailedToFetchFromServer:(bool)arg1;
- (void)setFailureDetails:(id)arg1;
- (void)setNotificationID:(id)arg1;
- (void)setRetrievalDate:(id)arg1;
- (void)setServerDictionary:(id)arg1;
- (void)setTestKind:(long long)arg1;
- (void)setTestLevel:(long long)arg1;
- (long long)testKind;
- (long long)testLevel;

@end
