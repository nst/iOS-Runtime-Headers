/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIActivityApplicationExtensionDiscovery : NSObject {
    id  _extensionMatchingContext;
    NSArray * _extensionPointIdentifiers;
    bool  _matchesOnlyUserElectedExtensions;
    bool  _performsInitialMatching;
    bool  _sourceIsManaged;
}

@property (retain) id extensionMatchingContext;
@property (nonatomic, copy) NSArray *extensionPointIdentifiers;
@property (nonatomic) bool matchesOnlyUserElectedExtensions;
@property bool performsInitialMatching;
@property (nonatomic) bool sourceIsManaged;

- (void).cxx_destruct;
- (id)activitiesMatchingInputItems:(id)arg1 activityItems:(id)arg2 error:(id*)arg3 updateBlock:(id)arg4;
- (void)cancelUpdatesIfNeeded;
- (void)dealloc;
- (id)extensionMatchingContext;
- (id)extensionPointIdentifiers;
- (id)init;
- (id)initWithExtensionPointIdentifiers:(id)arg1;
- (bool)matchesOnlyUserElectedExtensions;
- (bool)performsInitialMatching;
- (void)setExtensionMatchingContext:(id)arg1;
- (void)setExtensionPointIdentifiers:(id)arg1;
- (void)setMatchesOnlyUserElectedExtensions:(bool)arg1;
- (void)setPerformsInitialMatching:(bool)arg1;
- (void)setSourceIsManaged:(bool)arg1;
- (bool)sourceIsManaged;

@end
