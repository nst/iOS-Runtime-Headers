/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKCollectionElement : IKViewElement <IKAppDocumentStyleChangeObserving> {
    NSArray * _sections;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, retain) IKHeaderElement *header;
@property (nonatomic, readonly, retain) NSArray *sections;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)appDocumentDidMarkStylesDirty;
- (id)applyUpdatesWithElement:(id)arg1;
- (id)header;
- (id)sections;

@end
