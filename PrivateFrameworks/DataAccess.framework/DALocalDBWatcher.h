/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@interface DALocalDBWatcher : NSObject {
    void * _abWatcher;
    /* Warning: unhandled struct encoding: '{CalDatabase={__CFRuntimeBase=Q[4C]I}i^{CPRecordStore}^{CalEventOccurrenceCache}^{CalScheduledTaskCache}^{__CFDictionary}^{__CFDictionary}{_opaque_pthread_mutex_t=q[56c]}II^{__CFArray}^{__CFString}^{__CFArray}ii^{__CFString}^{__CFString}i@?{_opaque_pthread_mutex_t=q[56c]}B^{__CFArray}^{__CFArray}B@}' */ struct CalDatabase { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned char x_1_1_2[4]; unsigned int x_1_1_3; } x1; int x2; struct CPRecordStore {} *x3; struct CalEventOccurrenceCache {} *x4; struct CalScheduledTaskCache {} *x5; struct __CFDictionary {} *x6; struct __CFDictionary {} *x7; struct _opaque_pthread_mutex_t { long long x_8_1_1; BOOL x_8_1_2[56]; } x8; unsigned int x9; unsigned int x10; struct __CFArray {} *x11; struct __CFString {} *x12; struct __CFArray {} *x13; int x14; int x15; struct __CFString {} *x16; struct __CFString {} *x17; int x18; id x19; struct _opaque_pthread_mutex_t { long long x_20_1_1; BOOL x_20_1_2[56]; } x20; bool x21; struct __CFArray {} *x22; struct __CFArray {} *x23; bool x24; id x25; } * _calWatcher;
    NSMapTable * _concernedABPartyToBlockMap;
    NSMapTable * _concernedBookmarkPartyToBlockMap;
    NSMapTable * _concernedCalPartyToBlockMap;
    NSMapTable * _concernedNotePartyToBlockMap;
    int  _lastSavedABSequenceNumber;
    int  _lastSavedCalSequenceNumber;
    NoteContext * _noteWatcher;
    bool  _watchingBookmarks;
}

@property (nonatomic) int lastSavedABSequenceNumber;
@property (nonatomic) int lastSavedCalSequenceNumber;

+ (id)sharedDBWatcher;

- (void).cxx_destruct;
- (void)_handleABChangeNotificationWithInfo:(id)arg1;
- (void)_handleBookmarkChangeNotification;
- (void)_handleCalChangeNotification;
- (void)_notesChangedExternally;
- (void)dealloc;
- (void)didReceiveDarwinNotification:(id)arg1;
- (id)init;
- (int)lastSavedABSequenceNumber;
- (int)lastSavedCalSequenceNumber;
- (void)noteABDBDirChanged;
- (void)noteCalDBDirChanged;
- (void)registerConcernedABParty:(id)arg1 withChangedBlock:(id)arg2;
- (void)registerConcernedBookmarkParty:(id)arg1 withChangedBlock:(id)arg2;
- (void)registerConcernedCalParty:(id)arg1 withChangedBlock:(id)arg2;
- (void)registerConcernedNoteParty:(id)arg1 withChangedBlock:(id)arg2;
- (void)removeConcernedABParty:(id)arg1;
- (void)removeConcernedBookmarkParty:(id)arg1;
- (void)removeConcernedCalParty:(id)arg1;
- (void)removeConcernedNoteParty:(id)arg1;
- (void)setLastSavedABSequenceNumber:(int)arg1;
- (void)setLastSavedCalSequenceNumber:(int)arg1;

@end
