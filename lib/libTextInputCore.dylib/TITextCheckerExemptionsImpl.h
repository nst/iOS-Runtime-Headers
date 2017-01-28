/* Generated by RuntimeBrowser
   Image: /System/Library/TextInput/libTextInputCore.dylib
 */

@interface TITextCheckerExemptionsImpl : NSObject {
    NSSet * _addressBookTokens;
    NSUUID * _contactCollectionUUID;
    id  _contactObserver;
    unsigned long long  _observerAssertionCount;
    id  _userDictionaryObserver;
    NSSet * _userDictionaryTokens;
    NSUUID * _userDictionaryUUID;
}

@property (retain) NSSet *addressBookTokens;
@property (nonatomic, copy) NSUUID *contactCollectionUUID;
@property (retain) NSSet *userDictionaryTokens;
@property (nonatomic, copy) NSUUID *userDictionaryUUID;

+ (id)sharedTextCheckerExemptionsImpl;

- (void)addObserverAssertion;
- (id)addressBookTokens;
- (id)contactCollectionUUID;
- (void)dealloc;
- (void)removeObserverAssertion;
- (void)setAddressBookTokens:(id)arg1;
- (void)setContactCollectionUUID:(id)arg1;
- (void)setUserDictionaryTokens:(id)arg1;
- (void)setUserDictionaryUUID:(id)arg1;
- (bool)stringIsExemptFromChecker:(id)arg1;
- (id)userDictionaryTokens;
- (id)userDictionaryUUID;

@end
