/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreMedia.framework/CoreMedia
 */

@interface FigFlatToNSDictionaryWrapper : NSDictionary {
    id  _deallocatorBlock;
    void * _dictionaryBacking;
    void * _exportedKeySpec;
    struct OpaqueFigFlatDictionary { } * _flatDictionary;
    int  _keySpace;
    struct OpaqueFigFlatDictionaryKeySpec { } * _keySpec;
}

- (void)_initializeFlatDictionary;
- (id)arrayForFlatDictionaryArrayDataKey:(struct { int x1; int x2; char *x3; int x4; unsigned long long x5; void *x6; }*)arg1;
- (unsigned long long)count;
- (void)dealloc;
- (id)initLazilyWithFlatDictionaryBacking:(void*)arg1 exportedKeySpec:(void*)arg2 deallocatorBlock:(id)arg3;
- (id)initWithFlatDictionary:(struct OpaqueFigFlatDictionary { }*)arg1 keySpec:(struct OpaqueFigFlatDictionaryKeySpec { }*)arg2;
- (id)initWithObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned long long)arg3;
- (id)keyEnumerator;
- (id)objectForKey:(id)arg1;

@end
