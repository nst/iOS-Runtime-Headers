/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

@interface HMUIndent : NSObject {
    unsigned long long  _factor;
    NSString * _level;
    NSString * _step;
}

@property (nonatomic, readonly) unsigned long long factor;
@property (nonatomic, readonly) NSString *level;
@property (nonatomic, readonly) NSString *step;

+ (id)indentWithLevel:(id)arg1;
+ (id)indentWithLevel:(id)arg1 step:(id)arg2 factor:(unsigned long long)arg3;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)factor;
- (id)indentByFactor:(unsigned long long)arg1;
- (id)initWithLevel:(id)arg1 step:(id)arg2 factor:(unsigned long long)arg3;
- (id)level;
- (id)step;

@end
