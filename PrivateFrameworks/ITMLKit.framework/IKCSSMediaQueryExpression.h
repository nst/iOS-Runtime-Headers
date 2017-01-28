/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKCSSMediaQueryExpression : NSObject {
    NSString * _dimension;
    double  _doubleValue;
    NSString * _key;
    NSString * _mediaType;
    NSString * _stringValue;
    long long  _type;
}

@property (nonatomic, retain) NSString *dimension;
@property double doubleValue;
@property (nonatomic, retain) NSString *key;
@property (nonatomic, retain) NSString *mediaType;
@property (nonatomic, retain) NSString *stringValue;
@property long long type;

- (void).cxx_destruct;
- (id)description;
- (id)dimension;
- (double)doubleValue;
- (bool)evaluate;
- (id)key;
- (id)mediaType;
- (void)setDimension:(id)arg1;
- (void)setDoubleValue:(double)arg1;
- (void)setKey:(id)arg1;
- (void)setMediaType:(id)arg1;
- (void)setStringValue:(id)arg1;
- (void)setType:(long long)arg1;
- (id)stringValue;
- (long long)type;
- (id)valueAsString;

@end
