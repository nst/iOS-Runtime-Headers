/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

@interface CNStack : NSObject {
    NSMutableArray * _objects;
}

@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) id peek;

- (unsigned long long)count;
- (void)dealloc;
- (id)init;
- (id)peek;
- (id)pop;
- (void)popAllWithHandler:(id)arg1;
- (void)popWithHandler:(id)arg1;
- (void)push:(id)arg1;

@end
