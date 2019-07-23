/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSFormControlMetadata : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    NSString * _addressBookLabel;
    NSDictionary * _annotations;
    NSString * _associatedUsername;
    int  _autoFillButtonType;
    NSArray * _autocompleteTokens;
    NSString * _fieldClass;
    NSString * _fieldID;
    NSString * _fieldName;
    union { 
        struct { 
            unsigned int disallowsAutocomplete : 1; 
            unsigned int claimsToBeCurrentPasswordViaAutocompleteAttribute : 1; 
            unsigned int claimsToBeNewPasswordViaAutocompleteAttribute : 1; 
            unsigned int claimsToBeUsernameViaAutocompleteAttribute : 1; 
            unsigned int looksLikeCreditCardCardholderField : 1; 
            unsigned int looksLikeCreditCardCompositeExpirationDateField : 1; 
            unsigned int looksLikeCreditCardNumberField : 1; 
            unsigned int looksLikeCreditCardSecurityCodeField : 1; 
            unsigned int looksLikeCreditCardTypeField : 1; 
            unsigned int looksLikeDayField : 1; 
            unsigned int looksLikeMonthField : 1; 
            unsigned int looksLikeYearField : 1; 
            unsigned int looksLikeIgnoredDataTypeField : 1; 
            unsigned int looksLikePasswordCredentialField : 1; 
            unsigned int looksLikeOneTimeCodeField : 1; 
            unsigned int visible : 1; 
            unsigned int active : 1; 
            unsigned int disabled : 1; 
            unsigned int readOnly : 1; 
            unsigned int textField : 1; 
            unsigned int secureTextField : 1; 
            unsigned int autoFilledTextField : 1; 
            unsigned int userEditedTextField : 1; 
            unsigned int labeledUsernameField : 1; 
        } flags; 
        long long asInteger; 
    }  _flags;
    int  _lastAutoFillButtonType;
    int  _maxLength;
    int  _minLength;
    NSString * _nextControlUniqueID;
    NSString * _passwordRules;
    NSString * _placeholder;
    NSDictionary * _radioButtonInfo;
    double  _rectHeight;
    double  _rectLeft;
    double  _rectTop;
    double  _rectWidth;
    NSArray * _selectElementInfo;
    int  _selectionLength;
    int  _selectionStart;
    int  _size;
    NSString * _tagName;
    NSString * _uniqueID;
    NSString * _value;
}

@property (getter=isActive, nonatomic, readonly) bool active;
@property (nonatomic, readonly, copy) NSString *addressBookLabel;
@property (nonatomic, readonly, copy) NSDictionary *annotations;
@property (nonatomic, readonly, copy) NSString *associatedUsername;
@property (nonatomic, readonly) long long autoFillButtonType;
@property (getter=isAutoFilledTextField, nonatomic, readonly) bool autoFilledTextField;
@property (nonatomic, readonly, copy) NSArray *autocompleteTokens;
@property (nonatomic, readonly) bool claimsToBeCurrentPasswordViaAutocompleteAttribute;
@property (nonatomic, readonly) bool claimsToBeNewPasswordViaAutocompleteAttribute;
@property (nonatomic, readonly) bool claimsToBeUsernameViaAutocompleteAttribute;
@property (nonatomic, readonly, copy) NSDictionary *dictionaryRepresentation;
@property (getter=isDisabled, nonatomic, readonly) bool disabled;
@property (nonatomic, readonly) bool disallowsAutocomplete;
@property (nonatomic, readonly, copy) NSString *fieldClass;
@property (nonatomic, readonly, copy) NSString *fieldID;
@property (nonatomic, readonly, copy) NSString *fieldName;
@property (getter=isLabeledUsernameField, nonatomic, readonly) bool labeledUsernameField;
@property (nonatomic, readonly) long long lastAutoFillButtonType;
@property (nonatomic, readonly) bool looksLikeCreditCardCardholderField;
@property (nonatomic, readonly) bool looksLikeCreditCardCompositeExpirationDateField;
@property (nonatomic, readonly) bool looksLikeCreditCardNumberField;
@property (nonatomic, readonly) bool looksLikeCreditCardSecurityCodeField;
@property (nonatomic, readonly) bool looksLikeCreditCardTypeField;
@property (nonatomic, readonly) bool looksLikeDayField;
@property (nonatomic, readonly) bool looksLikeIgnoredDataTypeField;
@property (nonatomic, readonly) bool looksLikeMonthField;
@property (nonatomic, readonly) bool looksLikeOneTimeCodeField;
@property (nonatomic, readonly) bool looksLikePasswordCredentialField;
@property (nonatomic, readonly) bool looksLikeYearField;
@property (nonatomic, readonly) unsigned long long maxLength;
@property (nonatomic, readonly) unsigned long long minLength;
@property (nonatomic, readonly, copy) NSString *nextControlUniqueID;
@property (nonatomic, readonly, copy) NSString *passwordRules;
@property (nonatomic, readonly, copy) NSString *placeholder;
@property (nonatomic, readonly, copy) NSDictionary *radioButtonInfo;
@property (getter=isReadOnly, nonatomic, readonly) bool readOnly;
@property (nonatomic, readonly) double rectHeight;
@property (nonatomic, readonly) double rectLeft;
@property (nonatomic, readonly) double rectTop;
@property (nonatomic, readonly) double rectWidth;
@property (getter=isSecureTextField, nonatomic, readonly) bool secureTextField;
@property (nonatomic, readonly, copy) NSArray *selectElementInfo;
@property (nonatomic, readonly) unsigned long long selectionLength;
@property (nonatomic, readonly) unsigned long long selectionStart;
@property (nonatomic, readonly) unsigned long long size;
@property (nonatomic, readonly, copy) NSString *tagName;
@property (getter=isTextField, nonatomic, readonly) bool textField;
@property (nonatomic, readonly, copy) NSString *uniqueID;
@property (getter=isUserEditedTextField, nonatomic, readonly) bool userEditedTextField;
@property (nonatomic, readonly, copy) NSString *value;
@property (getter=isVisible, nonatomic, readonly) bool visible;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)addressBookLabel;
- (id)annotations;
- (id)associatedUsername;
- (long long)autoFillButtonType;
- (id)autocompleteTokens;
- (bool)claimsToBeCurrentPasswordViaAutocompleteAttribute;
- (bool)claimsToBeNewPasswordViaAutocompleteAttribute;
- (bool)claimsToBeUsernameViaAutocompleteAttribute;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (bool)disallowsAutocomplete;
- (void)encodeWithCoder:(id)arg1;
- (id)fieldClass;
- (id)fieldID;
- (id)fieldName;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithMetadata:(id)arg1;
- (bool)isActive;
- (bool)isAutoFilledTextField;
- (bool)isDisabled;
- (bool)isEqual:(id)arg1;
- (bool)isLabeledUsernameField;
- (bool)isReadOnly;
- (bool)isSecureTextField;
- (bool)isTextField;
- (bool)isUserEditedTextField;
- (bool)isVisible;
- (long long)lastAutoFillButtonType;
- (bool)looksLikeCreditCardCardholderField;
- (bool)looksLikeCreditCardCompositeExpirationDateField;
- (bool)looksLikeCreditCardNumberField;
- (bool)looksLikeCreditCardSecurityCodeField;
- (bool)looksLikeCreditCardTypeField;
- (bool)looksLikeDayField;
- (bool)looksLikeIgnoredDataTypeField;
- (bool)looksLikeMonthField;
- (bool)looksLikeOneTimeCodeField;
- (bool)looksLikePasswordCredentialField;
- (bool)looksLikeYearField;
- (unsigned long long)maxLength;
- (unsigned long long)minLength;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)nextControlUniqueID;
- (id)passwordRules;
- (id)placeholder;
- (id)radioButtonInfo;
- (double)rectHeight;
- (double)rectLeft;
- (double)rectTop;
- (double)rectWidth;
- (id)selectElementInfo;
- (unsigned long long)selectionLength;
- (unsigned long long)selectionStart;
- (unsigned long long)size;
- (id)tagName;
- (id)uniqueID;
- (id)value;

@end
