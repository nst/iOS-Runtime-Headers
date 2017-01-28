/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

@interface VSFailable : NSObject <NSSecureCoding> {
    NSError * _error;
    long long  _kind;
    id  _object;
}

@property (nonatomic, copy) NSError *error;
@property (nonatomic) long long kind;
@property (nonatomic, retain) id object;

+ (id)failableWithError:(id)arg1;
+ (id)failableWithObject:(id)arg1;
+ (Class)objectClass;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithError:(id)arg1;
- (id)initWithObject:(id)arg1;
- (long long)kind;
- (id)object;
- (void)setError:(id)arg1;
- (void)setKind:(long long)arg1;
- (void)setObject:(id)arg1;
- (void)unwrapObject:(id)arg1 error:(id)arg2;

@end
