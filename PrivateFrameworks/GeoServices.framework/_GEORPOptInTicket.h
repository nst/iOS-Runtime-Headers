/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface _GEORPOptInTicket : NSObject <GEOMapServiceFixNotificationTicket> {
    bool  _canceled;
    GEORPProblemOptInRequest * _request;
    GEOMapServiceTraits * _traits;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) GEOMapServiceTraits *traits;

- (void)cancel;
- (void)dealloc;
- (id)initWithSubmissionID:(id)arg1 allowContactBackAtEmailAddress:(id)arg2 traits:(id)arg3;
- (void)submitWithHandler:(id)arg1 networkActivity:(id)arg2;
- (id)traits;

@end
