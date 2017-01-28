/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUMiniHTMLParser : NSObject {
    NSString * __string;
    id  _parsedCharactersBlock;
    id  _parsedErrorBlock;
    id  _parsedMarkupElementEndBlock;
    id  _parsedMarkupElementStartBlock;
}

@property (nonatomic, readonly) NSString *_string;
@property (nonatomic, copy) id parsedCharactersBlock;
@property (nonatomic, copy) id parsedErrorBlock;
@property (nonatomic, copy) id parsedMarkupElementEndBlock;
@property (nonatomic, copy) id parsedMarkupElementStartBlock;

- (void).cxx_destruct;
- (id)_string;
- (id)init;
- (id)initWithString:(id)arg1;
- (void)parse;
- (id)parsedCharactersBlock;
- (id)parsedErrorBlock;
- (id)parsedMarkupElementEndBlock;
- (id)parsedMarkupElementStartBlock;
- (void)setParsedCharactersBlock:(id)arg1;
- (void)setParsedErrorBlock:(id)arg1;
- (void)setParsedMarkupElementEndBlock:(id)arg1;
- (void)setParsedMarkupElementStartBlock:(id)arg1;

@end
