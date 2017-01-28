/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCTopicalNode : NSObject <NSCopying> {
    NSSet * _children;
    NSSet * _displayedElements;
    NSString * _identifier;
    NSSet * _identifiers;
    FCTopicalNode * _parent;
    double  _parentRawScore;
    double  _relatedness;
    double  _score;
    double  _scoreMultiplier;
    bool  _scored;
    double  _specificity;
    NSString * _storedNodeIdentifier;
    NSCountedSet * _topicCollections;
}

@property (nonatomic, retain) NSSet *children;
@property (nonatomic, retain) NSSet *displayedElements;
@property (retain) NSString *identifier;
@property (nonatomic, retain) NSSet *identifiers;
@property (nonatomic) FCTopicalNode *parent;
@property (nonatomic) double parentRawScore;
@property (nonatomic) double relatedness;
@property (nonatomic) double score;
@property (nonatomic) double scoreMultiplier;
@property (nonatomic) bool scored;
@property (nonatomic) double specificity;
@property (nonatomic, retain) NSString *storedNodeIdentifier;
@property (nonatomic, retain) NSCountedSet *topicCollections;

- (void).cxx_destruct;
- (id)calculateLeafScoresWithTopicScoreProvider:(id)arg1;
- (void)calculateNonLeafScoresWithTopicProvider:(id)arg1;
- (void)calculateScoreWithTopicScoreProvider:(id)arg1;
- (id)children;
- (long long)compare:(id)arg1;
- (void)considerEdge:(id)arg1 withNodeScorer:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)displayedElements;
- (id)identifier;
- (id)identifiers;
- (double)individualScoreWithTopicScoreProvider:(id)arg1;
- (id)initWithIdentifier:(id)arg1 displayedElements:(id)arg2 allTopicCollections:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)leaves;
- (id)parent;
- (double)parentRawScore;
- (double)relatedness;
- (double)score;
- (double)scoreMultiplier;
- (bool)scored;
- (void)setChildren:(id)arg1;
- (void)setDisplayedElements:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIdentifiers:(id)arg1;
- (void)setParent:(id)arg1;
- (void)setParentRawScore:(double)arg1;
- (void)setRelatedness:(double)arg1;
- (void)setScore:(double)arg1;
- (void)setScoreMultiplier:(double)arg1;
- (void)setScored:(bool)arg1;
- (void)setSpecificity:(double)arg1;
- (void)setStoredNodeIdentifier:(id)arg1;
- (void)setTopicCollections:(id)arg1;
- (double)specificity;
- (id)storedNodeIdentifier;
- (id)topicCollections;

@end
