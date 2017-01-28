/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCSolHeuristic : NSObject {
    bool  _alternate;
    NSArray * _groupSizes;
    long long  _heuristicSampleSize;
    long long  _iterations;
    id  _utilityBlock;
}

@property (nonatomic, readonly) bool alternate;
@property (nonatomic, retain) NSArray *groupSizes;
@property (nonatomic, readonly) long long heuristicSampleSize;
@property (nonatomic, readonly) long long iterations;
@property (nonatomic, readonly, copy) id utilityBlock;

- (void).cxx_destruct;
- (bool)alternate;
- (double)computeScoreWithArticles:(id)arg1 tags:(id)arg2 articlesByTag:(id)arg3;
- (id)fillGroupsWithArticles:(id)arg1 tags:(id)arg2 articlesByTag:(id)arg3 groupSizes:(id)arg4;
- (id)groupSizes;
- (long long)heuristicSampleSize;
- (id)initWithOption:(long long)arg1 minClusterSize:(long long)arg2 maxClusterSize:(long long)arg3 heuristicSampleSize:(long long)arg4 utilityBlock:(id)arg5;
- (long long)iterations;
- (void)setGroupSizes:(id)arg1;
- (id)utilityBlock;

@end