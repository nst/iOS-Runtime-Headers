/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PrivateFederatedLearning.framework/PrivateFederatedLearning
 */

@interface _PFLModelTrainer : NSObject {
    unsigned long long  _imageCount;
    ETModelDefMLP * _mlp;
    ETTaskClassifier * _task;
}

@property unsigned long long imageCount;
@property (retain) ETModelDefMLP *mlp;
@property (retain) ETTaskClassifier *task;

+ (unsigned long long)countFilesInDirectory:(id)arg1;
+ (unsigned long long)countSubDirectoryInDirectory:(id)arg1;

- (void).cxx_destruct;
- (bool)copyWeightsAndBiasesForLayerNamed:(id)arg1 combinedWeightBiasesOut:(float**)arg2 weightCountOut:(unsigned int*)arg3 biasCountOut:(unsigned int*)arg4;
- (unsigned long long)imageCount;
- (id)init;
- (id)mlp;
- (id)sdpWithInitVector:(id)arg1 currentVector:(id)arg2 gamma:(double)arg3 nu:(double)arg4;
- (id)sdpWithInitWeights:(id)arg1 currentWeights:(id)arg2 initBiases:(id)arg3 currentBiases:(id)arg4 diffOnly:(bool)arg5 gamma:(double)arg6 nu:(double)arg7;
- (void)setImageCount:(unsigned long long)arg1;
- (void)setMlp:(id)arg1;
- (void)setTask:(id)arg1;
- (id)task;
- (void)trainImageModel:(id)arg1 epoch:(unsigned long long)arg2 imageDirectory:(id)arg3 completion:(id /* block */)arg4;
- (void)trainNumberModel:(id)arg1 epoch:(unsigned long long)arg2 dataSource:(id)arg3 completion:(id /* block */)arg4;
- (void)updateLayerNamed:(id)arg1 withWeights:(float*)arg2 weightCount:(unsigned long long)arg3 andBiases:(float*)arg4 biasCount:(unsigned long long)arg5;

@end
