/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DFramebufferTransformPipeline : TSCH3DLinkablePipeline {
    TSCH3DFramebuffer * mInput;
    <TSCH3DPipelineLinkable> * mSource;
    TSCH3DFramebuffer * mTarget;
}

@property (nonatomic, retain) <TSCH3DPipelineLinkable> *source;
@property (nonatomic, retain) TSCH3DFramebuffer *target;

- (void)dealloc;
- (void)loadSource;
- (bool)prepareFramebuffer;
- (bool)run;
- (void)setSource:(id)arg1;
- (void)setTarget:(id)arg1;
- (id)source;
- (id)target;

@end
