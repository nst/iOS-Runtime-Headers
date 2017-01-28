/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CVML.framework/CVML
 */

@interface CVMLCluster : NSObject {
    unsigned long long  _clusterId;
    NSArray * _objects;
    NSDictionary * _representativenessById;
    bool  _shouldUpdateRepresentative;
    NSArray * _suggestedIdsForRepresentative;
    unsigned long long  _totalObjectCount;
}

@property unsigned long long clusterId;
@property (retain) NSArray *objects;
@property (retain) NSDictionary *representativenessById;
@property bool shouldUpdateRepresentative;
@property (retain) NSArray *suggestedIdsForRepresentative;
@property unsigned long long totalObjectCount;

- (void).cxx_destruct;
- (unsigned long long)clusterId;
- (id)description;
- (id)objects;
- (id)representativenessById;
- (void)setClusterId:(unsigned long long)arg1;
- (void)setObjects:(id)arg1;
- (void)setRepresentativenessById:(id)arg1;
- (void)setShouldUpdateRepresentative:(bool)arg1;
- (void)setSuggestedIdsForRepresentative:(id)arg1;
- (void)setTotalObjectCount:(unsigned long long)arg1;
- (bool)shouldUpdateRepresentative;
- (id)suggestedIdsForRepresentative;
- (unsigned long long)totalObjectCount;

@end
