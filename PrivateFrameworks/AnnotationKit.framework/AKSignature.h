/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKSignature : NSObject <NSSecureCoding> {
    double  _baselineOffset;
    NSDate * _creationDate;
    struct CGPath { } * _path;
    bool  _shouldPersist;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _strokesBounds;
    NSUUID * _uniqueID;
}

@property double baselineOffset;
@property (retain) NSDate *creationDate;
@property (readonly) struct CGPath { }*path;
@property (readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } pathBounds;
@property bool shouldPersist;
@property (retain) NSUUID *uniqueID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)baselineOffset;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creationDate;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPath:(struct CGPath { }*)arg1 baselineOffset:(double)arg2;
- (id)initWithPath:(struct CGPath { }*)arg1 baselineOffset:(double)arg2 creationDate:(id)arg3;
- (bool)isEqual:(id)arg1;
- (struct CGPath { }*)path;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })pathBounds;
- (void)setBaselineOffset:(double)arg1;
- (void)setCreationDate:(id)arg1;
- (void)setPath:(struct CGPath { }*)arg1;
- (void)setShouldPersist:(bool)arg1;
- (void)setUniqueID:(id)arg1;
- (bool)shouldPersist;
- (id)uniqueID;

@end
