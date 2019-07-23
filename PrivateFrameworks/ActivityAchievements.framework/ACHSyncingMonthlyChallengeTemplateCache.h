/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ActivityAchievements.framework/ActivityAchievements
 */

@interface ACHSyncingMonthlyChallengeTemplateCache : NSObject {
    HDDatabaseTransactionContext * _databaseContext;
    NSCalendar * _gregorianCalendar;
    HDKeyValueDomain * _keyValueDomain;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    HDProfile * _profile;
}

@property (nonatomic) HDDatabaseTransactionContext *databaseContext;
@property (nonatomic, retain) NSCalendar *gregorianCalendar;
@property (nonatomic, retain) HDKeyValueDomain *keyValueDomain;
@property (nonatomic) struct os_unfair_lock_s { unsigned int x1; } lock;
@property (nonatomic, retain) HDProfile *profile;

- (void).cxx_destruct;
- (id)allCachedTemplatesWithError:(id*)arg1;
- (bool)cacheTemplate:(id)arg1 error:(id*)arg2;
- (id)databaseContext;
- (id)gregorianCalendar;
- (id)initWithProfile:(id)arg1;
- (id)keyValueDomain;
- (struct os_unfair_lock_s { unsigned int x1; })lock;
- (id)profile;
- (void)setDatabaseContext:(id)arg1;
- (void)setGregorianCalendar:(id)arg1;
- (void)setKeyValueDomain:(id)arg1;
- (void)setLock:(struct os_unfair_lock_s { unsigned int x1; })arg1;
- (void)setProfile:(id)arg1;
- (id)templateForDateComponents:(id)arg1 error:(id*)arg2;

@end
