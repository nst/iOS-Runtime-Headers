/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUILocalizationManager : NSObject {
    NSDictionary * _overideLocDict;
}

@property (retain) NSDictionary *overideLocDict;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)localizedStringForKey:(id)arg1;
- (id)localizedStringForKey:(id)arg1 withCount:(id)arg2;
- (id)overideLocDict;
- (void)setOverideLocDict:(id)arg1;
- (void)updateWithJSDictionary:(id)arg1;

@end
