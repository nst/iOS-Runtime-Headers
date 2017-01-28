/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SACFFetchScriptCommand : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *jsScriptIdentifiers;
@property (nonatomic, copy) NSString *refId;
@property (readonly) Class superclass;

+ (id)fetchScriptCommand;
+ (id)fetchScriptCommandWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)jsScriptIdentifiers;
- (void)setJsScriptIdentifiers:(id)arg1;

@end
