/* Generated by RuntimeBrowser.
 */

@protocol PLPhotoAnalysisServiceProtocol <PLPhotoAnalysisJobServiceProtocol, PLPhotoAnalysisGraphServiceProtocol, PLPhotoAnalysisVisionServiceTaxonomyProtocol, PLPhotoAnalysisVisionServiceSceneClassificationProtocol, PLPhotoAnalysisVisionServiceFaceProcessingProtocol>

@required

- (void)cancelOperationsWithIdentifiers:(void *)arg1 context:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: NSArray *, NSDictionary *, id, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id, NSDictionary *, void*
- (void)dumpAnalysisStatusWithContext:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSDictionary *, id, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id, NSDictionary *, NSError *, void*
- (void)notifyPhotoLibraryOpenedWithContext:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: NSDictionary *, id, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id, NSError *, void*

@end