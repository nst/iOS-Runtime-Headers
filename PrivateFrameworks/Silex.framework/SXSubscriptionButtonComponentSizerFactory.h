/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXSubscriptionButtonComponentSizerFactory : NSObject <SXComponentSizerFactory> {
    <SXTextComponentLayoutHosting> * _textComponentLayoutHosting;
    <SXButtonComponentTextProvider> * _textProvider;
    <SXTextSourceFactory> * _textSourceFactory;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) int role;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <SXTextComponentLayoutHosting> *textComponentLayoutHosting;
@property (nonatomic, readonly) <SXButtonComponentTextProvider> *textProvider;
@property (nonatomic, readonly) <SXTextSourceFactory> *textSourceFactory;
@property (nonatomic, readonly) NSString *type;

- (void).cxx_destruct;
- (id)initWithTextProvider:(id)arg1 textComponentLayoutHosting:(id)arg2 textSourceFactory:(id)arg3;
- (int)role;
- (id)sizerForComponent:(id)arg1 componentLayout:(id)arg2 layoutOptions:(id)arg3 DOMObjectProvider:(id)arg4;
- (id)textComponentLayoutHosting;
- (id)textProvider;
- (id)textSourceFactory;
- (id)type;

@end
