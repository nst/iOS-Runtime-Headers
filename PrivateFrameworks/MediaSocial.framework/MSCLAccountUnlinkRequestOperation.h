/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
 */

@interface MSCLAccountUnlinkRequestOperation : SSVComplexOperation {
    NSObject<OS_dispatch_queue> * _accessQueue;
    SKUIMediaSocialAuthor * _author;
    id  _outputBlock;
    NSString * _serviceIdentifier;
}

@property (nonatomic, readonly, copy) SKUIMediaSocialAuthor *author;
@property (nonatomic, copy) id outputBlock;
@property (nonatomic, readonly, copy) NSString *serviceIdentifier;

- (void).cxx_destruct;
- (id)author;
- (id)initWithServiceIdentifier:(id)arg1 forAuthor:(id)arg2;
- (void)main;
- (id)outputBlock;
- (id)serviceIdentifier;
- (void)setOutputBlock:(id)arg1;

@end