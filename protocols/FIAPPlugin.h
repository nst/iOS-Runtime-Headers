/* Generated by RuntimeBrowser.
 */

@protocol FIAPPlugin <NSObject>

@required

- (NSString *)identifier;

@optional

- (void)deleteSpotlightReferencesWithBundleIdentifier:(NSString *)arg1;
- (void)deleteSpotlightReferencesWithBundleIdentifier:(NSString *)arg1 domainIdentifiers:(NSArray *)arg2;
- (void)deleteSpotlightReferencesWithBundleIdentifier:(NSString *)arg1 uniqueIdentifiers:(NSArray *)arg2;
- (FIAPResult *)processSearchableItem:(CSSearchableItem *)arg1;
- (FIAPResult *)processUserAction:(CSUserAction *)arg1 searchableItem:(CSSearchableItem *)arg2;
- (void)purgeSpotlightReferencesWithBundleIdentifier:(NSString *)arg1 uniqueIdentifiers:(NSArray *)arg2;
- (FIAPResult *)setup;

@end
