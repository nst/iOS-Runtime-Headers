/* Generated by RuntimeBrowser.
 */

@protocol _LSDReadProtocol

@required

- (void)bindDocumentProxy:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: LSDocumentProxy *, id, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id, LSDocumentProxy *, NSError *, void*
- (void)getAllUserActivityTypesAndDomainNamesWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 8: id, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id, NSSet *, NSSet *, NSError *, void*
- (void)getDiskUsage:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: _LSDiskUsage *, id, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id, _LSDiskUsage *, NSError *, void*
- (void)getKernelPackageExtensionsWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id, NSArray *, NSError *, void*
- (void)getKnowledgeUUIDAndSequenceNumberWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id, NSUUID *, NSNumber *, void*
- (void)getLocalizationDictionaryForTypeWithIdentifier:(void *)arg1 UUID:(void *)arg2 preferredLocalizations:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: NSString *, NSUUID *, NSArray *, id, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id, NSDictionary *, void*
- (void)getLocalizedNameWithBundleType:(void *)arg1 bundleIdentifier:(void *)arg2 bundleUUID:(void *)arg3 context:(void *)arg4 shortNameOnly:(void *)arg5 preferredLocalizations:(void *)arg6 completionHandler:(void *)arg7; // needs 7 arg types, found 13: NSString *, NSString *, NSString *, NSString *, bool, NSArray *, id, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id, NSString *, NSError *, void*
- (void)getResourceValuesForKeys:(void *)arg1 URL:(void *)arg2 preferredLocalizations:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 11: NSSet *, NSURL *, NSArray *, id, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id, NSDictionary *, NSSet *, NSError *, void*
- (void)getServerStatusWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id, unsigned int, void*
- (void)getServerStoreWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 8: id, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id, _CSStoreXPCRepresentation *, NSURL *, NSError *, void*
- (void)getURLOverrideForURL:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: NSURL *, id, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id, NSURL *, NSError *, void*
- (void)mapBundleIdentifiers:(void *)arg1 orMachOUUIDs:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 10: NSSet *, NSSet *, id, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id, NSArray *, NSArray *, NSError *, void*
- (void)mapPlugInBundleIdentifiersToContainingBundleIdentifiers:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: NSSet *, id, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id, NSDictionary *, NSError *, void*
- (void)resolveQueries:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: NSSet *, id, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id, NSDictionary *, NSError *, void*

@end
