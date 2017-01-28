/* Generated by RuntimeBrowser
   Image: /System/Library/TextInput/libTextInputCore.dylib
 */

@interface TIKeyboardInputManagerLoader : NSObject {
    NSMutableDictionary * _activeInputManagers;
    NSMutableDictionary * _availableInputManagers;
    NSMutableDictionary * _lastUsedDate;
    TIKeyboardInputManagerBase * _mostRecentlyRequested;
}

@property (nonatomic, retain) TIKeyboardInputManagerBase *mostRecentlyRequested;

+ (id)sharedLoader;

- (id)activeInputModeIdentifiers;
- (void)cacheInputManager:(id)arg1;
- (void)dealloc;
- (bool)hasActiveInputManagers;
- (id)init;
- (id)inputManagerForInputMode:(id)arg1 withClass:(Class)arg2;
- (id)mostRecentlyRequested;
- (void)reduceCacheToSize:(unsigned long long)arg1;
- (id)resourceInputModes;
- (void)setMostRecentlyRequested:(id)arg1;

@end