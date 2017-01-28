/* Generated by RuntimeBrowser.
 */

@protocol MNGuidanceManagerDelegate <NSObject>

@required

- (void)guidanceManager:(void *)arg1 announce:(void *)arg2 shortPromptType:(void *)arg3 stage:(void *)arg4 hasSecondaryManeuver:(void *)arg5 completionBlock:(void *)arg6; // needs 6 arg types, found 11: MNGuidanceManager *, NSString *, unsigned long long, unsigned long long, bool, id, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id, int, void*
- (void)guidanceManager:(MNGuidanceManager *)arg1 displayManeuverAlertForAnnouncementStage:(unsigned long long)arg2;
- (void)guidanceManager:(MNGuidanceManager *)arg1 displayPrimaryStep:(GEOStep *)arg2 instructions:(NSArray *)arg3 shieldType:(int)arg4 shieldText:(NSString *)arg5 drivingSide:(int)arg6 maneuverStepIndex:(unsigned long long)arg7 isSynthetic:(bool)arg8;
- (void)guidanceManager:(MNGuidanceManager *)arg1 displaySecondaryStep:(GEOStep *)arg2 instructions:(NSArray *)arg3 shieldType:(int)arg4 shieldText:(NSString *)arg5 drivingSide:(int)arg6;
- (void)guidanceManager:(MNGuidanceManager *)arg1 updatePointOfInterest:(struct { double x1; double x2; })arg2 focusStyle:(int)arg3;
- (void)guidanceManager:(MNGuidanceManager *)arg1 willAnnounce:(unsigned long long)arg2 inSeconds:(double)arg3;
- (void)guidanceManagerDidUpdateProgress:(MNGuidanceManager *)arg1 currentStepIndex:(unsigned long long)arg2 distanceUntilSign:(double)arg3 timeUntilSign:(double)arg4;
- (void)guidanceManagerHasArrived:(MNGuidanceManager *)arg1 announce:(NSString *)arg2;
- (void)guidanceManagerHideSecondaryStep:(MNGuidanceManager *)arg1;
- (bool)guidanceManagerIsOffRoute:(MNGuidanceManager *)arg1 location:(MNLocation *)arg2 stepIndex:(unsigned long long)arg3;
- (void)guidanceManagerProceedingToRoute:(MNGuidanceManager *)arg1 proceedToRouteDistance:(double)arg2 displayString:(NSString *)arg3 closestStepIndex:(unsigned long long)arg4;

@end
