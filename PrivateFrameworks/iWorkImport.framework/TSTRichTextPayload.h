/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTRichTextPayload : TSPObject <TSPCopying> {
    TSWPStorage * mStorage;
}

@property (nonatomic, retain) TSWPStorage *storage;

+ (id)payloadWithStorage:(id)arg1;

- (id)copyWithContext:(id)arg1;
- (void)dealloc;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1 storage:(id)arg2;
- (id)initWithStorage:(id)arg1;
- (bool)requiresRichText;
- (void)saveToArchiver:(id)arg1;
- (void)setStorage:(id)arg1;
- (id)storage;
- (id)string;

@end
