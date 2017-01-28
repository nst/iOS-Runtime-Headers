/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

@interface MSPQuerySource : NSObject <MSPContainerObserver, MSPQuerySourceObserver> {
    NSArray * _lastContents;
    NSArray * _lastUnmappedContents;
    NSMapTable * _lastUnmappedContentsMap;
    id  _mappingBlock;
    NSHashTable * _observers;
    MSPContainer * _owningContainer;
    MSPQuerySource * _parentSource;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addObserver:(id)arg1;
- (void)_didChangeSourceWithContents:(id)arg1 unmappedContents:(id)arg2 map:(id)arg3 forContext:(id)arg4;
- (void)_didReceiveContainerContents:(id)arg1 context:(id)arg2;
- (id)_initWithOwningContainer:(id)arg1;
- (id)_initWithParentSource:(id)arg1 mappingBlock:(id)arg2;
- (void)_removeObserver:(id)arg1;
- (void)container:(id)arg1 didEditWithNewContents:(id)arg2 orderedEdits:(id)arg3 cause:(long long)arg4 context:(id)arg5;
- (id)newQuery;
- (id)sourceByMappingContentsUsingBlock:(id)arg1;

@end
