/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@interface BLTPBSectionInfo : PBCodable <NSCopying> {
    unsigned int  _alertType;
    bool  _allowsNotifications;
    NSString * _displayName;
    bool  _displaysCriticalBulletins;
    NSString * _factorySectionID;
    struct { 
        unsigned int alertType : 1; 
        unsigned int notificationCenterLimit : 1; 
        unsigned int pushSettings : 1; 
        unsigned int sectionCategory : 1; 
        unsigned int sectionType : 1; 
        unsigned int subsectionPriority : 1; 
        unsigned int suppressedSettings : 1; 
        unsigned int version : 1; 
        unsigned int allowsNotifications : 1; 
        unsigned int displaysCriticalBulletins : 1; 
        unsigned int iconsStripped : 1; 
        unsigned int phoneAllowsNotifications : 1; 
        unsigned int showsInLockScreen : 1; 
        unsigned int showsInNotificationCenter : 1; 
        unsigned int showsMessagePreview : 1; 
        unsigned int showsOnExternalDevices : 1; 
        unsigned int suppressFromSettings : 1; 
    }  _has;
    BLTPBSectionIcon * _icon;
    bool  _iconsStripped;
    unsigned int  _notificationCenterLimit;
    bool  _phoneAllowsNotifications;
    unsigned int  _pushSettings;
    int  _sectionCategory;
    NSString * _sectionID;
    int  _sectionType;
    bool  _showsInLockScreen;
    bool  _showsInNotificationCenter;
    bool  _showsMessagePreview;
    bool  _showsOnExternalDevices;
    NSString * _subsectionID;
    int  _subsectionPriority;
    NSMutableArray * _subsections;
    bool  _suppressFromSettings;
    unsigned int  _suppressedSettings;
    NSString * _universalSectionID;
    unsigned int  _version;
}

@property (nonatomic) unsigned int alertType;
@property (nonatomic) bool allowsNotifications;
@property (nonatomic, retain) NSString *displayName;
@property (nonatomic) bool displaysCriticalBulletins;
@property (nonatomic, retain) NSString *factorySectionID;
@property (nonatomic) bool hasAlertType;
@property (nonatomic) bool hasAllowsNotifications;
@property (nonatomic, readonly) bool hasDisplayName;
@property (nonatomic) bool hasDisplaysCriticalBulletins;
@property (nonatomic, readonly) bool hasFactorySectionID;
@property (nonatomic, readonly) bool hasIcon;
@property (nonatomic) bool hasIconsStripped;
@property (nonatomic) bool hasNotificationCenterLimit;
@property (nonatomic) bool hasPhoneAllowsNotifications;
@property (nonatomic) bool hasPushSettings;
@property (nonatomic) bool hasSectionCategory;
@property (nonatomic, readonly) bool hasSectionID;
@property (nonatomic) bool hasSectionType;
@property (nonatomic) bool hasShowsInLockScreen;
@property (nonatomic) bool hasShowsInNotificationCenter;
@property (nonatomic) bool hasShowsMessagePreview;
@property (nonatomic) bool hasShowsOnExternalDevices;
@property (nonatomic, readonly) bool hasSubsectionID;
@property (nonatomic) bool hasSubsectionPriority;
@property (nonatomic) bool hasSuppressFromSettings;
@property (nonatomic) bool hasSuppressedSettings;
@property (nonatomic, readonly) bool hasUniversalSectionID;
@property (nonatomic) bool hasVersion;
@property (nonatomic, retain) BLTPBSectionIcon *icon;
@property (nonatomic) bool iconsStripped;
@property (nonatomic) unsigned int notificationCenterLimit;
@property (nonatomic) bool phoneAllowsNotifications;
@property (nonatomic) unsigned int pushSettings;
@property (nonatomic) int sectionCategory;
@property (nonatomic, retain) NSString *sectionID;
@property (nonatomic) int sectionType;
@property (nonatomic) bool showsInLockScreen;
@property (nonatomic) bool showsInNotificationCenter;
@property (nonatomic) bool showsMessagePreview;
@property (nonatomic) bool showsOnExternalDevices;
@property (nonatomic, retain) NSString *subsectionID;
@property (nonatomic) int subsectionPriority;
@property (nonatomic, retain) NSMutableArray *subsections;
@property (nonatomic) bool suppressFromSettings;
@property (nonatomic) unsigned int suppressedSettings;
@property (nonatomic, retain) NSString *universalSectionID;
@property (nonatomic) unsigned int version;

+ (Class)subsectionsType;

- (void).cxx_destruct;
- (void)addSubsections:(id)arg1;
- (unsigned int)alertType;
- (bool)allowsNotifications;
- (void)clearSubsections;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)description;
- (id)dictionaryRepresentation;
- (id)displayName;
- (bool)displaysCriticalBulletins;
- (id)factorySectionID;
- (bool)hasAlertType;
- (bool)hasAllowsNotifications;
- (bool)hasDisplayName;
- (bool)hasDisplaysCriticalBulletins;
- (bool)hasFactorySectionID;
- (bool)hasIcon;
- (bool)hasIconsStripped;
- (bool)hasNotificationCenterLimit;
- (bool)hasPhoneAllowsNotifications;
- (bool)hasPushSettings;
- (bool)hasSectionCategory;
- (bool)hasSectionID;
- (bool)hasSectionType;
- (bool)hasShowsInLockScreen;
- (bool)hasShowsInNotificationCenter;
- (bool)hasShowsMessagePreview;
- (bool)hasShowsOnExternalDevices;
- (bool)hasSubsectionID;
- (bool)hasSubsectionPriority;
- (bool)hasSuppressFromSettings;
- (bool)hasSuppressedSettings;
- (bool)hasUniversalSectionID;
- (bool)hasVersion;
- (unsigned long long)hash;
- (id)icon;
- (bool)iconsStripped;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)notificationCenterLimit;
- (bool)phoneAllowsNotifications;
- (unsigned int)pushSettings;
- (bool)readFrom:(id)arg1;
- (int)sectionCategory;
- (id)sectionID;
- (int)sectionType;
- (void)setAlertType:(unsigned int)arg1;
- (void)setAllowsNotifications:(bool)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setDisplaysCriticalBulletins:(bool)arg1;
- (void)setFactorySectionID:(id)arg1;
- (void)setHasAlertType:(bool)arg1;
- (void)setHasAllowsNotifications:(bool)arg1;
- (void)setHasDisplaysCriticalBulletins:(bool)arg1;
- (void)setHasIconsStripped:(bool)arg1;
- (void)setHasNotificationCenterLimit:(bool)arg1;
- (void)setHasPhoneAllowsNotifications:(bool)arg1;
- (void)setHasPushSettings:(bool)arg1;
- (void)setHasSectionCategory:(bool)arg1;
- (void)setHasSectionType:(bool)arg1;
- (void)setHasShowsInLockScreen:(bool)arg1;
- (void)setHasShowsInNotificationCenter:(bool)arg1;
- (void)setHasShowsMessagePreview:(bool)arg1;
- (void)setHasShowsOnExternalDevices:(bool)arg1;
- (void)setHasSubsectionPriority:(bool)arg1;
- (void)setHasSuppressFromSettings:(bool)arg1;
- (void)setHasSuppressedSettings:(bool)arg1;
- (void)setHasVersion:(bool)arg1;
- (void)setIcon:(id)arg1;
- (void)setIconsStripped:(bool)arg1;
- (void)setNotificationCenterLimit:(unsigned int)arg1;
- (void)setPhoneAllowsNotifications:(bool)arg1;
- (void)setPushSettings:(unsigned int)arg1;
- (void)setSectionCategory:(int)arg1;
- (void)setSectionID:(id)arg1;
- (void)setSectionType:(int)arg1;
- (void)setShowsInLockScreen:(bool)arg1;
- (void)setShowsInNotificationCenter:(bool)arg1;
- (void)setShowsMessagePreview:(bool)arg1;
- (void)setShowsOnExternalDevices:(bool)arg1;
- (void)setSubsectionID:(id)arg1;
- (void)setSubsectionPriority:(int)arg1;
- (void)setSubsections:(id)arg1;
- (void)setSuppressFromSettings:(bool)arg1;
- (void)setSuppressedSettings:(unsigned int)arg1;
- (void)setUniversalSectionID:(id)arg1;
- (void)setVersion:(unsigned int)arg1;
- (bool)showsInLockScreen;
- (bool)showsInNotificationCenter;
- (bool)showsMessagePreview;
- (bool)showsOnExternalDevices;
- (id)subsectionID;
- (int)subsectionPriority;
- (id)subsections;
- (id)subsectionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)subsectionsCount;
- (bool)suppressFromSettings;
- (unsigned int)suppressedSettings;
- (id)universalSectionID;
- (unsigned int)version;
- (void)writeTo:(id)arg1;

@end
