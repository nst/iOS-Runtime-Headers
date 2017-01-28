/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

@interface CNUIPRLikenessPhotoProvider : NSObject <CNUIPRLikenessProvider> {
    PRLikeness * _likeness;
    NSData * _originalPhotoData;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PRLikeness *likeness;
@property (nonatomic, readonly) NSData *originalPhotoData;
@property (readonly) Class superclass;

+ (struct CGImage { }*)cgImageFromData:(id)arg1;

- (void).cxx_destruct;
- (id)_cnui_likeness;
- (unsigned long long)_cnui_likenessType;
- (id)initWithPhotoData:(id)arg1;
- (id)likeness;
- (id)originalPhotoData;

@end
