/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CallKit.framework/CallKit
 */

@interface CXSetSendingVideoCallAction : CXCallAction {
    bool  _sendingVideo;
}

@property (getter=isSendingVideo, nonatomic) bool sendingVideo;

+ (bool)supportsSecureCoding;

- (id)customDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCallUUID:(id)arg1 sendingVideo:(bool)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isSendingVideo;
- (id)sanitizedCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setSendingVideo:(bool)arg1;
- (void)updateCopy:(id)arg1 withZone:(struct _NSZone { }*)arg2;

@end
