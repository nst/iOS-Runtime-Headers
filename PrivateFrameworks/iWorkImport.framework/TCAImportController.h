/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TCAImportController : TSAImportController <TSAImportDelegate> {
    NSUUID * _baseUUIDForObjectUUID;
    NSString * _passphrase;
    NSError * _passphraseError;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)addWarning:(id)arg1;
- (id)baseUUIDForObjectUUID;
- (void)dealloc;
- (void)finishImportWithSuccess:(bool)arg1 error:(id)arg2;
- (void)importControllerDidRunOutOfSpace:(id)arg1;
- (bool)importWithPassphrase:(id)arg1;
- (id)initWithPath:(id)arg1 documentType:(id)arg2 baseUUIDForObjectUUID:(id)arg3;
- (void)retrievePassphraseForEncryptedDocumentWithImporter:(id)arg1 completion:(id)arg2;
- (id)templateInfoWithName:(id)arg1;
- (id)templateInfoWithName:(id)arg1 variantIndex:(unsigned long long)arg2;
- (void)willSaveImportedDocument;

@end
