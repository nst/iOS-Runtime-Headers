/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCHeadlineClusteringRules : NSObject {
    bool  _enableOptimizedLayout;
    unsigned long long  _maxClusterSize;
    unsigned long long  _maxIdealClusterSize;
    unsigned long long  _minClusterSize;
    unsigned long long  _minIdealClusterSize;
    unsigned long long  _optimizedLayoutIncrementUnit;
    unsigned long long  _optimizedLayoutSizeThreshold;
    FCSolConfiguration * _solConfiguration;
}

@property (nonatomic, readonly) bool enableOptimizedLayout;
@property (nonatomic, readonly) unsigned long long maxClusterSize;
@property (nonatomic, readonly) unsigned long long maxIdealClusterSize;
@property (nonatomic, readonly) unsigned long long minClusterSize;
@property (nonatomic, readonly) unsigned long long minIdealClusterSize;
@property (nonatomic, readonly) unsigned long long optimizedLayoutIncrementUnit;
@property (nonatomic, readonly) unsigned long long optimizedLayoutSizeThreshold;
@property (nonatomic, retain) FCSolConfiguration *solConfiguration;

+ (id)rulesWithTreatment:(id)arg1;

- (void).cxx_destruct;
- (bool)enableOptimizedLayout;
- (id)init;
- (id)initWithMinClusterSize:(unsigned long long)arg1 maxClusterSize:(unsigned long long)arg2 minIdealClusterSize:(unsigned long long)arg3 maxIdealClusterSize:(unsigned long long)arg4 enableOptimizedLayout:(bool)arg5 optimizedLayoutSizeThreshold:(unsigned long long)arg6 optimizedLayoutIncrementUnit:(unsigned long long)arg7 solConfiguration:(id)arg8;
- (unsigned long long)maxClusterSize;
- (unsigned long long)maxIdealClusterSize;
- (unsigned long long)minClusterSize;
- (unsigned long long)minIdealClusterSize;
- (unsigned long long)optimizedLayoutIncrementUnit;
- (unsigned long long)optimizedLayoutSizeThreshold;
- (void)setSolConfiguration:(id)arg1;
- (id)solConfiguration;

@end
