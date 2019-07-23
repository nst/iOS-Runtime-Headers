/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface _WKWebsitePolicies : NSObject <WKObject> {
    struct ObjectStorage<API::WebsitePolicies> { 
        struct type { 
            unsigned char __lx[80]; 
        } data; 
    }  _websitePolicies;
}

@property (readonly) /* Warning: unhandled struct encoding: '{Object=^^?@}' */ struct Object { int (**x1)(); id x2; }*_apiObject;
@property (nonatomic) unsigned long long allowedAutoplayQuirks;
@property (nonatomic) long long autoplayPolicy;
@property (nonatomic) bool contentBlockersEnabled;
@property (nonatomic, copy) NSDictionary *customHeaderFields;
@property (nonatomic, copy) NSString *customNavigatorPlatform;
@property (nonatomic, copy) NSString *customUserAgent;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool deviceOrientationEventEnabled;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long popUpPolicy;
@property (readonly) Class superclass;
@property (nonatomic, retain) WKWebsiteDataStore *websiteDataStore;

- (/* Warning: unhandled struct encoding: '{Object=^^?@}' */ struct Object { int (**x1)(); id x2; }*)_apiObject;
- (unsigned long long)allowedAutoplayQuirks;
- (long long)autoplayPolicy;
- (bool)contentBlockersEnabled;
- (id)customHeaderFields;
- (id)customNavigatorPlatform;
- (id)customUserAgent;
- (void)dealloc;
- (id)description;
- (bool)deviceOrientationEventEnabled;
- (id)init;
- (unsigned long long)popUpPolicy;
- (void)setAllowedAutoplayQuirks:(unsigned long long)arg1;
- (void)setAutoplayPolicy:(long long)arg1;
- (void)setContentBlockersEnabled:(bool)arg1;
- (void)setCustomHeaderFields:(id)arg1;
- (void)setCustomNavigatorPlatform:(id)arg1;
- (void)setCustomUserAgent:(id)arg1;
- (void)setDeviceOrientationEventEnabled:(bool)arg1;
- (void)setPopUpPolicy:(unsigned long long)arg1;
- (void)setWebsiteDataStore:(id)arg1;
- (id)websiteDataStore;

@end
