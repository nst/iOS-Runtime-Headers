/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPickerItem : NSObject {
    id  _selectionHandler;
    NSString * _title;
}

@property (nonatomic, copy) id selectionHandler;
@property (nonatomic, copy) NSString *title;

+ (id)itemWithTitle:(id)arg1 selectionHandler:(id)arg2;

- (void).cxx_destruct;
- (void)handleSelectionWithCompletionHandler:(id)arg1;
- (id)selectionHandler;
- (void)setSelectionHandler:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
