/* Generated by RuntimeBrowser.
 */

@protocol _CPUsageSinceLookback <NSObject>

@required

- (int)activeDaysInCollectionPeriod;
- (int)client;
- (long long)collectionEndTimestamp;
- (long long)collectionStartTimestamp;
- (int)configuredLookbackTimeInDays;
- (_CPDeviceContext *)context;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (void)setActiveDaysInCollectionPeriod:(int)arg1;
- (void)setClient:(int)arg1;
- (void)setCollectionEndTimestamp:(long long)arg1;
- (void)setCollectionStartTimestamp:(long long)arg1;
- (void)setConfiguredLookbackTimeInDays:(int)arg1;
- (void)setContext:(_CPDeviceContext *)arg1;
- (void)setTotalUsagesInCollectionPeriod:(int)arg1;
- (int)totalUsagesInCollectionPeriod;

@end
