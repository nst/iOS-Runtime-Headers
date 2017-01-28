/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail
 */

@interface VMVoicemailTranscript : NSObject <NSSecureCoding> {
    float  _confidence;
    unsigned long long  _confidenceRating;
    NSArray * _segments;
    NSString * _transcriptionString;
}

@property (nonatomic, readonly) float confidence;
@property (nonatomic, readonly) unsigned long long confidenceRating;
@property (nonatomic, readonly) NSArray *segments;
@property (nonatomic, readonly) NSString *transcriptionString;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (float)confidence;
- (unsigned long long)confidenceRating;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithTranscription:(id)arg1;
- (id)packTranscript;
- (id)segments;
- (id)transcriptionString;

@end
