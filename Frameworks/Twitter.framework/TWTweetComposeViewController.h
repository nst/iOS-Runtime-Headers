/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Twitter.framework/Twitter
 */

@interface TWTweetComposeViewController : UIViewController

@property (nonatomic, copy) id completionHandler;

+ (bool)canSendTweet;

- (id)addDownSampledImageDataByProxyWithPreviewImage:(id)arg1;
- (bool)addImage:(id)arg1;
- (bool)addURL:(id)arg1;
- (id)addURLWithProxyPreviewImage:(id)arg1;
- (id)completionHandler;
- (id)init;
- (bool)removeAllImages;
- (bool)removeAllURLs;
- (void)setCompletionHandler:(id)arg1;
- (bool)setInitialText:(id)arg1;
- (void)setLongitude:(double)arg1 latitude:(double)arg2 name:(id)arg3;

@end
