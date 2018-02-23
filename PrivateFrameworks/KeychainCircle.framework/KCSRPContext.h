/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/KeychainCircle.framework/KeychainCircle
 */

@interface KCSRPContext : NSObject {
    struct ccsrp_ctx { struct ccdigest_info {} *x1; struct ccdh_gp {} *x2; struct ccrng_state {} *x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; unsigned int x_4_1_4 : 16; } x4; unsigned char x5[7]; unsigned long long x6[1]; } * _context;
    struct ccrng_state { int (*x1)(); } * _rng;
    NSString * _user;
}

@property struct ccsrp_ctx { struct ccdigest_info {} *x1; struct ccdh_gp {} *x2; struct ccrng_state {} *x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; unsigned int x_4_1_4 : 16; } x4; unsigned char x5[7]; unsigned long long x6[1]; }*context;
@property struct ccrng_state { int (*x1)(); }*rng;
@property (retain) NSString *user;

+ (id)createWithUser:(id)arg1 digestInfo:(const struct ccdigest_info { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; char *x5; void *x6; int (*x7)(); int (*x8)(); }*)arg2 group:(struct ccdh_gp { unsigned long long x1; unsigned long long x2; int (*x3)(); unsigned long long x4[0]; }*)arg3 randomSource:(struct ccrng_state { int (*x1)(); }*)arg4;

- (void).cxx_destruct;
- (struct ccsrp_ctx { struct ccdigest_info {} *x1; struct ccdh_gp {} *x2; struct ccrng_state {} *x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; unsigned int x_4_1_4 : 16; } x4; unsigned char x5[7]; unsigned long long x6[1]; }*)context;
- (id)dataForPassword:(id)arg1;
- (void)finalize;
- (id)getKey;
- (id)initWithUser:(id)arg1 digestInfo:(const struct ccdigest_info { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; char *x5; void *x6; int (*x7)(); int (*x8)(); }*)arg2 group:(struct ccdh_gp { unsigned long long x1; unsigned long long x2; int (*x3)(); unsigned long long x4[0]; }*)arg3 randomSource:(struct ccrng_state { int (*x1)(); }*)arg4;
- (bool)isAuthenticated;
- (struct ccrng_state { int (*x1)(); }*)rng;
- (void)setContext:(struct ccsrp_ctx { struct ccdigest_info {} *x1; struct ccdh_gp {} *x2; struct ccrng_state {} *x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; unsigned int x_4_1_4 : 16; } x4; unsigned char x5[7]; unsigned long long x6[1]; }*)arg1;
- (void)setRng:(struct ccrng_state { int (*x1)(); }*)arg1;
- (void)setUser:(id)arg1;
- (id)user;
- (const char *)userNameString;

@end
