/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/JITAppKit.framework/JITAppKit
 */

@interface TKRepository : NSObject {
    NSURL * _URL;
    NSString * _bundlePath;
    NSString * _version;
}

@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) NSString *version;

+ (id)bundlePathForURL:(id)arg1;
+ (void)loadWithURL:(id)arg1 completion:(id /* block */)arg2;
+ (void)reset;
+ (void)unpackBundleWithURL:(id)arg1 destinationPath:(id)arg2 completion:(id /* block */)arg3;

- (void).cxx_destruct;
- (id)URL;
- (id)initWithURL:(id)arg1 bundlePath:(id)arg2;
- (id)version;
- (id)viewPathForName:(id)arg1;

@end
