/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

@interface MBDomain : NSObject {
    int  _fileDescriptor;
    int  _fileDescriptorRefCount;
    bool  _hasExternalConfig;
    bool  _isExternalConfig;
    NSString * _name;
    NSDictionary * _relativePathAggregateDictionaryGroups;
    NSDictionary * _relativePathDomainRedirects;
    NSSet * _relativePathsNotToBackup;
    NSSet * _relativePathsNotToBackupAndRestoreToAppleTVs;
    NSSet * _relativePathsNotToBackupToDrive;
    NSSet * _relativePathsNotToBackupToService;
    NSSet * _relativePathsNotToCheckIfModifiedDuringBackup;
    NSSet * _relativePathsNotToMigrate;
    NSSet * _relativePathsNotToRemoveIfNotRestored;
    NSSet * _relativePathsNotToRestore;
    NSSet * _relativePathsNotToRestoreToIPods;
    NSSet * _relativePathsOfSystemFilesToAlwaysRemoveOnRestore;
    NSSet * _relativePathsOfSystemFilesToAlwaysRestore;
    NSSet * _relativePathsToBackgroundRestore;
    NSSet * _relativePathsToBackupAndRestore;
    NSSet * _relativePathsToBackupIgnoringProtectionClass;
    NSSet * _relativePathsToIgnoreExclusionsForDrive;
    NSSet * _relativePathsToOnlyBackupEncrypted;
    NSSet * _relativePathsToRemoveOnRestore;
    NSSet * _relativePathsToRestoreOnly;
    NSSet * _relativePathsToRestoreOnlyFromService;
    NSString * _rootPath;
    bool  _shouldDigest;
    bool  _shouldRestoreRelativeSymlinks;
}

@property (getter=isAppDomain, nonatomic, readonly) bool appDomain;
@property (nonatomic, readonly) NSString *containerID;
@property (nonatomic, readonly) int containerType;
@property (getter=isGroupAppDomain, nonatomic, readonly) bool groupAppDomain;
@property (nonatomic) bool hasExternalConfig;
@property (nonatomic, readonly) bool hasRootPath;
@property (getter=isUninstalledAppDomain, nonatomic, readonly) bool installedAppDomain;
@property (nonatomic) bool isExternalConfig;
@property (nonatomic, readonly) NSString *name;
@property (getter=isPlaceholderAppDomain, nonatomic, readonly) bool placeholderAppDomain;
@property (getter=isPluginAppDomain, nonatomic, readonly) bool pluginAppDomain;
@property (nonatomic, retain) NSDictionary *relativePathAggregateDictionaryGroups;
@property (nonatomic, retain) NSDictionary *relativePathDomainRedirects;
@property (nonatomic, retain) NSSet *relativePathsNotToBackup;
@property (nonatomic, retain) NSSet *relativePathsNotToBackupAndRestoreToAppleTVs;
@property (nonatomic, retain) NSSet *relativePathsNotToBackupToDrive;
@property (nonatomic, retain) NSSet *relativePathsNotToBackupToService;
@property (nonatomic, retain) NSSet *relativePathsNotToCheckIfModifiedDuringBackup;
@property (nonatomic, retain) NSSet *relativePathsNotToMigrate;
@property (nonatomic, retain) NSSet *relativePathsNotToRemoveIfNotRestored;
@property (nonatomic, retain) NSSet *relativePathsNotToRestore;
@property (nonatomic, retain) NSSet *relativePathsNotToRestoreToIPods;
@property (nonatomic, retain) NSSet *relativePathsOfSystemFilesToAlwaysRemoveOnRestore;
@property (nonatomic, retain) NSSet *relativePathsOfSystemFilesToAlwaysRestore;
@property (nonatomic, retain) NSSet *relativePathsToBackgroundRestore;
@property (nonatomic, readonly) NSSet *relativePathsToBackup;
@property (nonatomic, retain) NSSet *relativePathsToBackupAndRestore;
@property (nonatomic, retain) NSSet *relativePathsToBackupIgnoringProtectionClass;
@property (nonatomic, retain) NSSet *relativePathsToIgnoreExclusionsForDrive;
@property (nonatomic, retain) NSSet *relativePathsToOnlyBackupEncrypted;
@property (nonatomic, retain) NSSet *relativePathsToRemoveOnRestore;
@property (nonatomic, readonly) NSSet *relativePathsToRestore;
@property (nonatomic, retain) NSSet *relativePathsToRestoreOnly;
@property (nonatomic, retain) NSSet *relativePathsToRestoreOnlyFromService;
@property (nonatomic, readonly) NSString *rootPath;
@property (nonatomic) bool shouldDigest;
@property (nonatomic) bool shouldRestoreRelativeSymlinks;
@property (getter=isSystemContainerDomain, nonatomic, readonly) bool systemContainerDomain;
@property (getter=isSystemSharedContainerDomain, nonatomic, readonly) bool systemSharedContainerDomain;

+ (bool)_boolFromValue:(id)arg1 forKey:(id)arg2;
+ (id)_dictionaryOfStringsToStringFromValue:(id)arg1 forKey:(id)arg2;
+ (double)_doubleFromStringValueForKey:(id)arg1 plist:(id)arg2;
+ (void)_loadSystemDomains;
+ (id)_relativePathsByAddingSQLiteJournals:(id)arg1;
+ (id)_setOfStringsFromValue:(id)arg1 forKey:(id)arg2;
+ (id)_stringByRemovingCommentsFromValue:(id)arg1 forKey:(id)arg2;
+ (id)appDomainWithIdentifier:(id)arg1 rootPath:(id)arg2;
+ (id)appGroupDomainWithIdentifier:(id)arg1 rootPath:(id)arg2;
+ (id)appPlaceholderDomainWithIdentifier:(id)arg1 rootPath:(id)arg2;
+ (id)appPluginDomainWithIdentifier:(id)arg1 rootPath:(id)arg2;
+ (id)containerIDWithName:(id)arg1;
+ (int)containerTypeWithName:(id)arg1;
+ (id)domainWithName:(id)arg1 rootPath:(id)arg2;
+ (bool)isAppGroupName:(id)arg1;
+ (bool)isAppPlaceholderName:(id)arg1;
+ (bool)isAppPluginName:(id)arg1;
+ (bool)isContainerName:(id)arg1;
+ (bool)isSystemContainerName:(id)arg1;
+ (bool)isSystemName:(id)arg1;
+ (bool)isSystemSharedContainerName:(id)arg1;
+ (id)nameWithAppID:(id)arg1;
+ (id)placeholderNameWithAppID:(id)arg1;
+ (bool)shouldRestoreRelativeSymlinksForDomainName:(id)arg1;
+ (id)systemContainerDomainWithIdentifier:(id)arg1 rootPath:(id)arg2;
+ (id)systemDomains;
+ (id)systemDomainsByName;
+ (double)systemDomainsMaxSupportedVersion;
+ (double)systemDomainsMinSupportedVersion;
+ (double)systemDomainsVersion;
+ (id)systemSharedContainerDomainWithIdentifier:(id)arg1 rootPath:(id)arg2;

- (void)_releaseFileDescriptor;
- (long long)compare:(id)arg1;
- (id)containerID;
- (int)containerType;
- (void)dealloc;
- (id)description;
- (int)fileDescriptor;
- (int)fileDescriptorWithSnapshotPath:(id)arg1;
- (bool)hasExternalConfig;
- (bool)hasRootPath;
- (unsigned long long)hash;
- (id)initWithName:(id)arg1 plist:(id)arg2;
- (id)initWithName:(id)arg1 rootPath:(id)arg2;
- (bool)isAppDomain;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToDomain:(id)arg1;
- (bool)isExternalConfig;
- (bool)isGroupAppDomain;
- (bool)isPlaceholderAppDomain;
- (bool)isPluginAppDomain;
- (bool)isSystemContainerDomain;
- (bool)isSystemSharedContainerDomain;
- (bool)isUninstalledAppDomain;
- (bool)loadDomainFromExternalPlist:(id)arg1;
- (bool)loadSystemDomainFromPlist:(id)arg1;
- (id)name;
- (id)relativePathAggregateDictionaryGroups;
- (id)relativePathDomainRedirects;
- (id)relativePathsNotToBackup;
- (id)relativePathsNotToBackupAndRestoreToAppleTVs;
- (id)relativePathsNotToBackupToDrive;
- (id)relativePathsNotToBackupToService;
- (id)relativePathsNotToCheckIfModifiedDuringBackup;
- (id)relativePathsNotToMigrate;
- (id)relativePathsNotToRemoveIfNotRestored;
- (id)relativePathsNotToRestore;
- (id)relativePathsNotToRestoreToIPods;
- (id)relativePathsOfSystemFilesToAlwaysRemoveOnRestore;
- (id)relativePathsOfSystemFilesToAlwaysRestore;
- (id)relativePathsToBackgroundRestore;
- (id)relativePathsToBackup;
- (id)relativePathsToBackupAndRestore;
- (id)relativePathsToBackupIgnoringProtectionClass;
- (id)relativePathsToIgnoreExclusionsForDrive;
- (id)relativePathsToOnlyBackupEncrypted;
- (id)relativePathsToRemoveOnRestore;
- (id)relativePathsToRestore;
- (id)relativePathsToRestoreOnly;
- (id)relativePathsToRestoreOnlyFromService;
- (id)rootPath;
- (void)setHasExternalConfig:(bool)arg1;
- (void)setIsExternalConfig:(bool)arg1;
- (void)setRelativePathAggregateDictionaryGroups:(id)arg1;
- (void)setRelativePathDomainRedirects:(id)arg1;
- (void)setRelativePathsNotToBackup:(id)arg1;
- (void)setRelativePathsNotToBackupAndRestoreToAppleTVs:(id)arg1;
- (void)setRelativePathsNotToBackupToDrive:(id)arg1;
- (void)setRelativePathsNotToBackupToService:(id)arg1;
- (void)setRelativePathsNotToCheckIfModifiedDuringBackup:(id)arg1;
- (void)setRelativePathsNotToMigrate:(id)arg1;
- (void)setRelativePathsNotToRemoveIfNotRestored:(id)arg1;
- (void)setRelativePathsNotToRestore:(id)arg1;
- (void)setRelativePathsNotToRestoreToIPods:(id)arg1;
- (void)setRelativePathsOfSystemFilesToAlwaysRemoveOnRestore:(id)arg1;
- (void)setRelativePathsOfSystemFilesToAlwaysRestore:(id)arg1;
- (void)setRelativePathsToBackgroundRestore:(id)arg1;
- (void)setRelativePathsToBackupAndRestore:(id)arg1;
- (void)setRelativePathsToBackupIgnoringProtectionClass:(id)arg1;
- (void)setRelativePathsToIgnoreExclusionsForDrive:(id)arg1;
- (void)setRelativePathsToOnlyBackupEncrypted:(id)arg1;
- (void)setRelativePathsToRemoveOnRestore:(id)arg1;
- (void)setRelativePathsToRestoreOnly:(id)arg1;
- (void)setRelativePathsToRestoreOnlyFromService:(id)arg1;
- (void)setShouldDigest:(bool)arg1;
- (void)setShouldRestoreRelativeSymlinks:(bool)arg1;
- (bool)shouldDigest;
- (bool)shouldRestoreRelativeSymlinks;

@end
