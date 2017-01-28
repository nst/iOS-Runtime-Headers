/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSLinguisticTagger : NSObject {
    unsigned long long  _options;
    id  _orthographyArray;
    id  _reserved;
    NSArray * _schemes;
    NSString * _string;
    id  _tokenArray;
}

@property (retain) NSString *string;
@property (readonly, copy) NSArray *tagSchemes;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)availableTagSchemesForLanguage:(id)arg1;
+ (bool)supportsLanguage:(id)arg1;

- (bool)_acceptSentenceTerminatorRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 paragraphRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 tokens:(struct _NSLTToken { unsigned short x1; unsigned char x2; unsigned char x3; unsigned int x4; union { void *x_5_1_1; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; } x_5_1_2; } x5; }*)arg3 count:(unsigned long long)arg4 tokenIndex:(unsigned long long)arg5;
- (void)_acceptSentencesForParagraphRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)_analyzePunctuationTokensInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 paragraphRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)_analyzeTokensInInterwordRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 paragraphRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)_analyzeTokensInWordRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 paragraphRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)_calculateSentenceRangesForParagraphRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)_tagSchemeForScheme:(id)arg1;
- (id)_tokenDataForParagraphAtIndex:(unsigned long long)arg1 paragraphRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2 requireLemmas:(bool)arg3 requirePartsOfSpeech:(bool)arg4 requireNamedEntities:(bool)arg5;
- (id)_tokenDataForParagraphAtIndex:(unsigned long long)arg1 paragraphRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2 tagScheme:(id)arg3;
- (id)_tokenDataForParagraphRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 requireLemmas:(bool)arg2 requirePartsOfSpeech:(bool)arg3 requireNamedEntities:(bool)arg4;
- (void)_tokenizeParagraphAtIndex:(unsigned long long)arg1 requireLemmas:(bool)arg2 requirePartsOfSpeech:(bool)arg3 requireNamedEntities:(bool)arg4;
- (void)dealloc;
- (id)description;
- (void)enumerateTagsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 scheme:(id)arg2 options:(unsigned long long)arg3 usingBlock:(id)arg4;
- (id)initWithTagSchemes:(id)arg1 options:(unsigned long long)arg2;
- (id)orthographyAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2;
- (id)possibleTagsAtIndex:(unsigned long long)arg1 scheme:(id)arg2 tokenRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg3 sentenceRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg4 scores:(id*)arg5;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })sentenceRangeForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setOrthography:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setString:(id)arg1;
- (id)string;
- (void)stringEditedInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 changeInLength:(long long)arg2;
- (id)tagAtIndex:(unsigned long long)arg1 scheme:(id)arg2 tokenRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg3 sentenceRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg4;
- (id)tagSchemes;
- (id)tagsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 scheme:(id)arg2 options:(unsigned long long)arg3 tokenRanges:(id*)arg4;

// Image: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit

- (id)languageOfRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withPreferredLanguages:(id)arg2;

@end
