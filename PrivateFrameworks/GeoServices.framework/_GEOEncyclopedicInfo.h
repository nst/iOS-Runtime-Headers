/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface _GEOEncyclopedicInfo : NSObject <GEOEncyclopedicInfo> {
    NSMapTable * _attributionMap;
    GEOPDPlace * _placeData;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) GEOMapItemAttribution *encyclopedicAttribution;
@property (nonatomic, readonly) NSArray *factoids;
@property (nonatomic, readonly) bool hasPairOfFactoids;
@property (nonatomic, readonly) bool hasTextBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *textBlockText;
@property (nonatomic, readonly) NSString *textBlockTitle;

- (void).cxx_destruct;
- (id)encyclopedicAttribution;
- (id)factoids;
- (bool)hasPairOfFactoids;
- (bool)hasTextBlock;
- (id)initWithPlaceData:(id)arg1 attributionMap:(id)arg2;
- (id)textBlockText;
- (id)textBlockTitle;

@end
