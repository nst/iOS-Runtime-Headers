/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
 */

@interface CADSourceOperationGroup : CADOperationGroup <CADSourceInterface>

+ (bool)requiresEventAccess;
+ (bool)requiresEventOrReminderAccess;
+ (bool)requiresReminderAccess;

- (void)CADCountCalendarItemsOfType:(int)arg1 inSource:(id)arg2 reply:(id /* block */)arg3;
- (void)CADDatabaseGetLocalSource:(id /* block */)arg1;
- (void)CADDatabaseGetSources:(id /* block */)arg1;
- (void)CADSourceGetConstraints:(id)arg1 reply:(id /* block */)arg2;
- (void)CADSourceGetManagedConfigurationAccountAccess:(id)arg1 reply:(id /* block */)arg2;
- (void)CADSourceRefresh:(id)arg1 isUserRequested:(bool)arg2 reply:(id /* block */)arg3;

@end
