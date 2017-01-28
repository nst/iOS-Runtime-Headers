/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreRecents.framework/CoreRecents
 */

@interface CRSQLRow : NSObject {
    struct sqlite3_stmt { } * _stmt;
}

+ (id)dataAtIndex:(int)arg1 copyBytes:(bool)arg2 statement:(struct sqlite3_stmt { }*)arg3;
+ (int)enumerateRowsInStatement:(struct sqlite3_stmt { }*)arg1 usingBlock:(id)arg2;
+ (id)numberWithDoubleAtIndex:(int)arg1 statement:(struct sqlite3_stmt { }*)arg2;
+ (id)numberWithIntegerAtIndex:(int)arg1 statement:(struct sqlite3_stmt { }*)arg2;
+ (id)objectAtIndex:(int)arg1 statement:(struct sqlite3_stmt { }*)arg2;
+ (id)rowWithStatement:(struct sqlite3_stmt { }*)arg1;
+ (int)step:(struct sqlite3_stmt { }*)arg1;
+ (id)stringAtIndex:(int)arg1 statement:(struct sqlite3_stmt { }*)arg2;

- (id)dataAtIndex:(int)arg1 copyBytes:(bool)arg2;
- (id)initWithStatement:(struct sqlite3_stmt { }*)arg1;
- (id)numberWithDoubleAtIndex:(int)arg1;
- (id)numberWithIntegerAtIndex:(int)arg1;
- (id)objectAtIndex:(int)arg1;
- (id)stringAtIndex:(int)arg1;

@end
