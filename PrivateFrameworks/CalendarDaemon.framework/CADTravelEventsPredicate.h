/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
 */

@interface CADTravelEventsPredicate : EKPredicate

+ (bool)supportsSecureCoding;

- (id)_fetchTravelEventsWithDatabase:(/* Warning: unhandled struct encoding: '{CalDatabase={__CFRuntimeBase=Q[4C]I}i^{CPRecordStore}^{CalEventOccurrenceCache}^{CalScheduledTaskCache}^{__CFDictionary}^{__CFDictionary}{_opaque_pthread_mutex_t=q[56c]}II^{__CFArray}^{__CFString}^{__CFArray}ii^{__CFString}^{__CFString}i@?{_opaque_pthread_mutex_t=q[56c]}B^{__CFArray}^{__CFArray}B@}' */ struct CalDatabase { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned char x_1_1_2[4]; unsigned int x_1_1_3; } x1; int x2; struct CPRecordStore {} *x3; struct CalEventOccurrenceCache {} *x4; struct CalScheduledTaskCache {} *x5; struct __CFDictionary {} *x6; struct __CFDictionary {} *x7; struct _opaque_pthread_mutex_t { long long x_8_1_1; BOOL x_8_1_2[56]; } x8; unsigned int x9; unsigned int x10; struct __CFArray {} *x11; struct __CFString {} *x12; struct __CFArray {} *x13; int x14; int x15; struct __CFString {} *x16; struct __CFString {} *x17; int x18; id x19; struct _opaque_pthread_mutex_t { long long x_20_1_1; BOOL x_20_1_2[56]; } x20; bool x21; struct __CFArray {} *x22; struct __CFArray {} *x23; bool x24; id x25; }*)arg1;
- (id)copyMatchingItemsWithDatabase:(/* Warning: unhandled struct encoding: '{CalDatabase={__CFRuntimeBase=Q[4C]I}i^{CPRecordStore}^{CalEventOccurrenceCache}^{CalScheduledTaskCache}^{__CFDictionary}^{__CFDictionary}{_opaque_pthread_mutex_t=q[56c]}II^{__CFArray}^{__CFString}^{__CFArray}ii^{__CFString}^{__CFString}i@?{_opaque_pthread_mutex_t=q[56c]}B^{__CFArray}^{__CFArray}B@}' */ struct CalDatabase { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned char x_1_1_2[4]; unsigned int x_1_1_3; } x1; int x2; struct CPRecordStore {} *x3; struct CalEventOccurrenceCache {} *x4; struct CalScheduledTaskCache {} *x5; struct __CFDictionary {} *x6; struct __CFDictionary {} *x7; struct _opaque_pthread_mutex_t { long long x_8_1_1; BOOL x_8_1_2[56]; } x8; unsigned int x9; unsigned int x10; struct __CFArray {} *x11; struct __CFString {} *x12; struct __CFArray {} *x13; int x14; int x15; struct __CFString {} *x16; struct __CFString {} *x17; int x18; id x19; struct _opaque_pthread_mutex_t { long long x_20_1_1; BOOL x_20_1_2[56]; } x20; bool x21; struct __CFArray {} *x22; struct __CFArray {} *x23; bool x24; id x25; }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)defaultPropertiesToLoad;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCalendarIDs:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)predicateFormat;

@end
