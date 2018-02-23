/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCStatInfo : NSObject <NSCopying, NSSecureCoding> {
    NSString * _aliasTarget;
    long long  _birthtime;
    BRFieldCKInfo * _ckInfo;
    long long  _favoriteRank;
    NSData * _finderTags;
    bool  _hiddenExt;
    long long  _lastUsedTime;
    NSData * _lazyXattr;
    NSString * _logicalName;
    BOOL  _mode;
    BRCItemID * _parentID;
    BOOL  _state;
    BRCItemID * _trashPutBackParentID;
    NSString * _trashPutBackPath;
    BOOL  _type;
    NSData * _xattrSignature;
}

@property (nonatomic, readonly) BRMangledID *_aliasTargetMangledID;
@property (nonatomic, readonly) NSString *aliasTarget;
@property (nonatomic) long long birthtime;
@property (nonatomic, retain) BRFieldCKInfo *ckInfo;
@property (nonatomic) long long favoriteRank;
@property (nonatomic, retain) NSData *finderTags;
@property (getter=isHiddenExt, nonatomic) bool hiddenExt;
@property (nonatomic, readonly) bool iWorkShareable;
@property (nonatomic) long long lastUsedTime;
@property (nonatomic, retain) NSData *lazyXattr;
@property (nonatomic, retain) NSString *logicalName;
@property (nonatomic) BOOL mode;
@property (nonatomic, retain) BRCItemID *parentID;
@property (nonatomic, readonly) NSString *representableName;
@property (nonatomic) BOOL state;
@property (nonatomic, retain) BRCItemID *trashPutBackParentID;
@property (nonatomic, retain) NSString *trashPutBackPath;
@property (nonatomic) BOOL type;
@property (nonatomic, retain) NSData *xattrSignature;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_aliasTargetItemID;
- (id)_aliasTargetMangledID;
- (void)_updateAliasTarget:(id)arg1;
- (id)aliasTarget;
- (long long)birthtime;
- (bool)check:(id)arg1 logToFile:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg2;
- (bool)checkStateWithItemID:(id)arg1 logToFile:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg2;
- (id)ckInfo;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionWithContext:(id)arg1 origName:(id)arg2;
- (unsigned long long)diffAgainst:(id)arg1;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (long long)favoriteRank;
- (id)finderTags;
- (bool)iWorkShareable;
- (id)initFromResultSet:(id)arg1 pos:(int)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithStatInfo:(id)arg1;
- (bool)isEtagEqual:(id)arg1;
- (bool)isExecutable;
- (bool)isHiddenExt;
- (bool)isWritable;
- (long long)lastUsedTime;
- (id)lazyXattr;
- (id)logicalName;
- (BOOL)mode;
- (id)parentID;
- (id)representableName;
- (void)setBirthtime:(long long)arg1;
- (void)setCkInfo:(id)arg1;
- (void)setFavoriteRank:(long long)arg1;
- (void)setFinderTags:(id)arg1;
- (void)setHiddenExt:(bool)arg1;
- (void)setLastUsedTime:(long long)arg1;
- (void)setLazyXattr:(id)arg1;
- (void)setLogicalName:(id)arg1;
- (void)setMode:(BOOL)arg1;
- (void)setParentID:(id)arg1;
- (void)setState:(BOOL)arg1;
- (void)setTrashPutBackParentID:(id)arg1;
- (void)setTrashPutBackPath:(id)arg1;
- (void)setType:(BOOL)arg1;
- (void)setXattrSignature:(id)arg1;
- (BOOL)state;
- (id)trashPutBackParentID;
- (id)trashPutBackPath;
- (BOOL)type;
- (id)xattrSignature;

@end
