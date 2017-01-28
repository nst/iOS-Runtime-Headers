/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
 */

@interface _DPCMSRandomizer : NSObject <_DPStringRandomizer> {
    double  _epsilon;
}

@property (nonatomic, readonly) double epsilon;

+ (id)cmsRandomizerWithEpsilon:(double)arg1;

- (id)cmsSampleForString:(id)arg1;
- (id)description;
- (double)epsilon;
- (id)init;
- (id)initWithEpsilon:(double)arg1;
- (id)randomizeStrings:(id)arg1 forKey:(id)arg2;
- (id)randomizeWords:(id)arg1 fragmentWidth:(unsigned long long)arg2 forKey:(id)arg3;

@end
