/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKPluginDisplayContainer : NSObject <NSSecureCoding> {
    UIImage * _composeImage;
    IMPluginPayload * _pluginPayload;
}

@property (nonatomic, retain) UIImage *composeImage;
@property (nonatomic, retain) IMPluginPayload *pluginPayload;

+ (id)pluginDisplayContinerWithPluginPayload:(id)arg1 composeImage:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)composeImage;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)pluginPayload;
- (void)setComposeImage:(id)arg1;
- (void)setPluginPayload:(id)arg1;

@end
