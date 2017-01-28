/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUAttributedStringHTMLParser : NSObject {
    NSDictionary * __currentAttributes;
    NSCountedSet * __currentMarkupElements;
    unsigned int  __currentTraits;
    NSDictionary * __defaultAttributes;
    NSString * __htmlString;
    id  _parsedAttributedStringBlock;
    id  _parsedErrorBlock;
}

@property (setter=_setCurrentAttributes:, nonatomic, copy) NSDictionary *_currentAttributes;
@property (nonatomic, readonly) NSCountedSet *_currentMarkupElements;
@property (setter=_setCurrentTraits:, nonatomic) unsigned int _currentTraits;
@property (nonatomic, readonly, copy) NSDictionary *_defaultAttributes;
@property (nonatomic, readonly) NSString *_htmlString;
@property (nonatomic, copy) id parsedAttributedStringBlock;
@property (nonatomic, copy) id parsedErrorBlock;

- (void).cxx_destruct;
- (id)_currentAttributes;
- (id)_currentMarkupElements;
- (unsigned int)_currentTraits;
- (id)_defaultAttributes;
- (id)_htmlString;
- (void)_setCurrentAttributes:(id)arg1;
- (void)_setCurrentTraits:(unsigned int)arg1;
- (void)_updateCurrentTraits;
- (id)init;
- (id)initWithHTMLString:(id)arg1 defaultAttributes:(id)arg2;
- (void)parse;
- (id)parsedAttributedStringBlock;
- (id)parsedErrorBlock;
- (void)setParsedAttributedStringBlock:(id)arg1;
- (void)setParsedErrorBlock:(id)arg1;

@end
