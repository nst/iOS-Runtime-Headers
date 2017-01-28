/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKAuthorizationRecord : NSObject <NSCopying, NSSecureCoding> {
    long long  _objectAnchor;
    long long  _request;
    long long  _status;
}

@property (readonly) long long objectAnchor;
@property (readonly) long long request;
@property (readonly) long long status;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAuthorizationStatus:(long long)arg1 authorizationRequest:(long long)arg2 objectAnchor:(long long)arg3;
- (id)initWithCoder:(id)arg1;
- (bool)isCompatibleStatus:(long long)arg1;
- (bool)isEqual:(id)arg1;
- (long long)objectAnchor;
- (bool)readingEnabled;
- (long long)request;
- (bool)requestedReading;
- (bool)requestedSharing;
- (bool)sharingEnabled;
- (long long)status;

@end
