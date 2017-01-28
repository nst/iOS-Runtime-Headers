/* Generated by RuntimeBrowser
   Image: /usr/lib/libprequelite.dylib
 */

@interface PQLFormatInjection : PQLNameInjectionBase <PQLInjecting> {
    NSMutableArray * _binds;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *sql;
@property (readonly) Class superclass;

+ (id)formatInjection:(id)arg1;

- (void).cxx_destruct;
- (id)bindValuesToKeepAlive;
- (int)bindWithStatement:(struct sqlite3_stmt { }*)arg1 startingAtIndex:(int)arg2;
- (id)description;
- (id)initWithFormat:(id)arg1 arguments:(char *)arg2;

@end
