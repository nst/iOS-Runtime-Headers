/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKMapSnapshotRequest : NSObject {
    NSLocale * _locale;
    GEOResourceManifestConfiguration * _manifestConfiguration;
    long long  _mapType;
    struct { 
        struct { 
            double latitude; 
            double longitude; 
        } center; 
        struct { 
            double latitudeDelta; 
            double longitudeDelta; 
        } span; 
    }  _region;
    unsigned int  _scale;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
}

@property (nonatomic, retain) NSLocale *locale;
@property (nonatomic, retain) GEOResourceManifestConfiguration *manifestConfiguration;
@property (nonatomic) long long mapType;
@property (nonatomic) struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; } region;
@property (nonatomic) unsigned int scale;
@property (nonatomic) struct CGSize { double x1; double x2; } size;

- (struct VKRequestKey { struct { struct { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; long long x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; id x4; })_requestKey;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)locale;
- (id)manifestConfiguration;
- (long long)mapType;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })region;
- (unsigned int)scale;
- (void)setLocale:(id)arg1;
- (void)setManifestConfiguration:(id)arg1;
- (void)setMapType:(long long)arg1;
- (void)setRegion:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setScale:(unsigned int)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })size;

@end
