/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
 */

@interface EKReminderPredicate : EKPredicate <EKDefaultPropertiesLoading> {
    bool  _completed;
    NSSet * _defaultPropertiesToLoad;
    NSDate * _dueAfter;
    NSDate * _dueBefore;
    bool  _limitToCompletedOrIncomplete;
    NSString * _listTitle;
    unsigned long long  _maxResults;
    NSString * _searchTerm;
    bool  _shouldLoadDefaultProperties;
    int  _sortOrder;
    bool  _useCompletionDateAsAlternate;
    bool  _useDueDateAsCompletionDate;
}

@property (nonatomic) bool completed;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSSet *defaultPropertiesToLoad;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSDate *dueAfter;
@property (nonatomic, retain) NSDate *dueBefore;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool limitToCompletedOrIncomplete;
@property (nonatomic, retain) NSString *listTitle;
@property (nonatomic) unsigned long long maxResults;
@property (nonatomic, retain) NSString *searchTerm;
@property (nonatomic) bool shouldLoadDefaultProperties;
@property (nonatomic) int sortOrder;
@property (readonly) Class superclass;
@property (nonatomic) bool useCompletionDateAsAlternate;
@property (nonatomic) bool useDueDateAsCompletionDate;

+ (id)predicateWithCalendars:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)completed;
- (id)copyMatchingItemsWithDatabase:(/* Warning: unhandled struct encoding: '{CalDatabase={__CFRuntimeBase=Q[4C]I}i^{CPRecordStore}^{CalEventOccurrenceCache}^{CalScheduledTaskCache}^{__CFDictionary}^{__CFDictionary}{_opaque_pthread_mutex_t=q[56c]}II^{__CFArray}^{__CFString}^{__CFArray}ii^{__CFString}^{__CFString}i@?{_opaque_pthread_mutex_t=q[56c]}B^{__CFArray}^{__CFArray}B@}' */ struct CalDatabase { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned char x_1_1_2[4]; unsigned int x_1_1_3; } x1; int x2; struct CPRecordStore {} *x3; struct CalEventOccurrenceCache {} *x4; struct CalScheduledTaskCache {} *x5; struct __CFDictionary {} *x6; struct __CFDictionary {} *x7; struct _opaque_pthread_mutex_t { long long x_8_1_1; BOOL x_8_1_2[56]; } x8; unsigned int x9; unsigned int x10; struct __CFArray {} *x11; struct __CFString {} *x12; struct __CFArray {} *x13; int x14; int x15; struct __CFString {} *x16; struct __CFString {} *x17; int x18; id x19; struct _opaque_pthread_mutex_t { long long x_20_1_1; BOOL x_20_1_2[56]; } x20; bool x21; struct __CFArray {} *x22; struct __CFArray {} *x23; bool x24; id x25; }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)defaultPropertiesToLoad;
- (id)dueAfter;
- (id)dueBefore;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCalendars:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)limitToCompletedOrIncomplete;
- (id)listTitle;
- (unsigned long long)maxResults;
- (id)searchTerm;
- (void)setCompleted:(bool)arg1;
- (void)setDefaultPropertiesToLoad:(id)arg1;
- (void)setDueAfter:(id)arg1;
- (void)setDueBefore:(id)arg1;
- (void)setLimitToCompletedOrIncomplete:(bool)arg1;
- (void)setListTitle:(id)arg1;
- (void)setMaxResults:(unsigned long long)arg1;
- (void)setSearchTerm:(id)arg1;
- (void)setShouldLoadDefaultProperties:(bool)arg1;
- (void)setSortOrder:(int)arg1;
- (void)setUseCompletionDateAsAlternate:(bool)arg1;
- (void)setUseDueDateAsCompletionDate:(bool)arg1;
- (bool)shouldLoadDefaultProperties;
- (int)sortOrder;
- (bool)useCompletionDateAsAlternate;
- (bool)useDueDateAsCompletionDate;

@end
