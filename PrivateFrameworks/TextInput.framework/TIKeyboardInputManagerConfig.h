/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@class NSString;

@interface TIKeyboardInputManagerConfig : NSObject  {
    BOOL allowsSpaceCorrections;
    NSString *dynamicDictionaryPath;
    NSString *inputMode;
    NSString *ngramModelPath;
    NSString *staticDictionaryPath;
    BOOL testing;
    BOOL usesTextChecker;
    BOOL usesAutocorrectionLists;
    BOOL usesExtendedLearning;
    BOOL usesRetrocorrection;
}

@property(copy) NSString * inputMode;
@property(copy) NSString * staticDictionaryPath;
@property(copy) NSString * dynamicDictionaryPath;
@property(copy) NSString * ngramModelPath;
@property BOOL allowsSpaceCorrections;
@property BOOL usesTextChecker;
@property BOOL usesAutocorrectionLists;
@property BOOL usesExtendedLearning;
@property BOOL usesRetrocorrection;
@property(getter=isTesting) BOOL testing;

+ (id)configurationFromUIKit;

- (void)setTesting:(BOOL)arg1;
- (void)setUsesRetrocorrection:(BOOL)arg1;
- (void)setUsesExtendedLearning:(BOOL)arg1;
- (void)setUsesAutocorrectionLists:(BOOL)arg1;
- (void)setUsesTextChecker:(BOOL)arg1;
- (void)setAllowsSpaceCorrections:(BOOL)arg1;
- (void)setNgramModelPath:(id)arg1;
- (void)setDynamicDictionaryPath:(id)arg1;
- (void)setStaticDictionaryPath:(id)arg1;
- (void)setInputMode:(id)arg1;
- (id)ngramModelPath;
- (id)dynamicDictionaryPath;
- (id)staticDictionaryPath;
- (id)inputMode;
- (BOOL)usesRetrocorrection;
- (BOOL)usesExtendedLearning;
- (BOOL)usesAutocorrectionLists;
- (BOOL)usesTextChecker;
- (BOOL)allowsSpaceCorrections;
- (BOOL)isTesting;
- (void)dealloc;

@end