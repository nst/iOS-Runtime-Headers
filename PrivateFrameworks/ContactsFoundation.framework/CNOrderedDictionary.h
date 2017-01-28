/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

@interface CNOrderedDictionary : NSObject <NSCopying, NSMutableCopying> {
    NSMutableDictionary * _dictionary;
    NSMutableArray * _orderedKeys;
}

@property (readonly, copy) NSArray *allKeys;

+ (id)dictionaryWithObject:(id)arg1 forKey:(id)arg2;
+ (id)orderedDictionary;

- (id)allKeys;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)objectForKey:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;

@end
