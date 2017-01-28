/* Generated by RuntimeBrowser
   Image: /usr/lib/libnfshared.dylib
 */

@interface NFAWDVersionInfo : NSObject <NFAWDEventProtocol> {
    AWDNFCVersions * _metric;
    unsigned int  _nfccFWRevision;
    unsigned int  _nfccFWVersion;
    unsigned int  _nfccHWVersion;
    unsigned int  _nfccMWVersion;
    unsigned int  _nfccROMVersion;
    unsigned int  _seDeviceType;
    unsigned int  _seFWVersion;
    unsigned int  _seHWVersion;
    unsigned int  _seMigrationInst;
    unsigned int  _seMigrationPkgs;
    unsigned int  _seMigrationState;
    unsigned int  _seOSMode;
    unsigned int  _seRefCount;
    unsigned int  _seRestrictedMode;
    unsigned int  _seSeqCount;
    unsigned int  _seSignKeyType;
    unsigned int  _seosHWVersion;
    unsigned int  _seosMigrationState;
    unsigned int  _seosOSMode;
    unsigned int  _seosOSVersion;
    unsigned int  _seosSignKeyType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) AWDNFCVersions *metric;
@property (nonatomic) unsigned int nfccFWRevision;
@property (nonatomic) unsigned int nfccFWVersion;
@property (nonatomic) unsigned int nfccHWVersion;
@property (nonatomic) unsigned int nfccMWVersion;
@property (nonatomic) unsigned int nfccROMVersion;
@property (nonatomic) unsigned int seDeviceType;
@property (nonatomic) unsigned int seFWVersion;
@property (nonatomic) unsigned int seHWVersion;
@property (nonatomic) unsigned int seMigrationInst;
@property (nonatomic) unsigned int seMigrationPkgs;
@property (nonatomic) unsigned int seMigrationState;
@property (nonatomic) unsigned int seOSMode;
@property (nonatomic, retain) NSString *sePlatformId;
@property (nonatomic) unsigned int seRefCount;
@property (nonatomic) unsigned int seRestrictedMode;
@property (nonatomic) unsigned int seSeqCount;
@property (nonatomic) unsigned int seSignKeyType;
@property (nonatomic) unsigned int seosHWVersion;
@property (nonatomic) unsigned int seosMigrationState;
@property (nonatomic) unsigned int seosOSMode;
@property (nonatomic) unsigned int seosOSVersion;
@property (nonatomic, retain) NSString *seosPlatformID;
@property (nonatomic) unsigned int seosSignKeyType;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)getMetric;
- (unsigned int)getMetricId;
- (id)init;
- (id)metric;
- (unsigned int)nfccFWRevision;
- (unsigned int)nfccFWVersion;
- (unsigned int)nfccHWVersion;
- (unsigned int)nfccMWVersion;
- (unsigned int)nfccROMVersion;
- (unsigned int)seDeviceType;
- (unsigned int)seFWVersion;
- (unsigned int)seHWVersion;
- (unsigned int)seMigrationInst;
- (unsigned int)seMigrationPkgs;
- (unsigned int)seMigrationState;
- (unsigned int)seOSMode;
- (id)sePlatformId;
- (unsigned int)seRefCount;
- (unsigned int)seRestrictedMode;
- (unsigned int)seSeqCount;
- (unsigned int)seSignKeyType;
- (unsigned int)seosHWVersion;
- (unsigned int)seosMigrationState;
- (unsigned int)seosOSMode;
- (unsigned int)seosOSVersion;
- (id)seosPlatformID;
- (unsigned int)seosSignKeyType;
- (void)setMetric:(id)arg1;
- (void)setNfccFWRevision:(unsigned int)arg1;
- (void)setNfccFWVersion:(unsigned int)arg1;
- (void)setNfccHWVersion:(unsigned int)arg1;
- (void)setNfccMWVersion:(unsigned int)arg1;
- (void)setNfccROMVersion:(unsigned int)arg1;
- (void)setSeDeviceType:(unsigned int)arg1;
- (void)setSeFWVersion:(unsigned int)arg1;
- (void)setSeHWVersion:(unsigned int)arg1;
- (void)setSeMigrationInst:(unsigned int)arg1;
- (void)setSeMigrationPkgs:(unsigned int)arg1;
- (void)setSeMigrationState:(unsigned int)arg1;
- (void)setSeOSMode:(unsigned int)arg1;
- (void)setSePlatformId:(id)arg1;
- (void)setSeRefCount:(unsigned int)arg1;
- (void)setSeRestrictedMode:(unsigned int)arg1;
- (void)setSeSeqCount:(unsigned int)arg1;
- (void)setSeSignKeyType:(unsigned int)arg1;
- (void)setSeosHWVersion:(unsigned int)arg1;
- (void)setSeosMigrationState:(unsigned int)arg1;
- (void)setSeosOSMode:(unsigned int)arg1;
- (void)setSeosOSVersion:(unsigned int)arg1;
- (void)setSeosPlatformID:(id)arg1;
- (void)setSeosSignKeyType:(unsigned int)arg1;

@end
