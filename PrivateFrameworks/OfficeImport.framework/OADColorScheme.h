/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADColorScheme : NSObject <NSCopying> {
    NSMutableDictionary * mColors;
    NSString * mName;
}

@property (nonatomic, copy) NSString *name;

- (void)addColor:(id)arg1 index:(int)arg2;
- (unsigned long long)colorCount;
- (id)colorForIndex:(int)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)init;
- (bool)isEmpty;
- (bool)isEqual:(id)arg1;
- (id)name;
- (void)setColor:(id)arg1 index:(int)arg2;
- (void)setName:(id)arg1;
- (void)validateColorScheme;

@end
