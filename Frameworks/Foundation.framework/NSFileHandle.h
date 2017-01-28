/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSFileHandle : NSObject <NSSecureCoding>

@property (readonly, copy) NSData *availableData;
@property (readonly) unsigned long long offsetInFile;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)fileHandleForReadingAtPath:(id)arg1;
+ (id)fileHandleForReadingFromURL:(id)arg1 error:(id*)arg2;
+ (id)fileHandleForReadingFromURL:(id)arg1 mode:(unsigned short)arg2 error:(id*)arg3;
+ (id)fileHandleForUpdatingAtPath:(id)arg1;
+ (id)fileHandleForUpdatingURL:(id)arg1 error:(id*)arg2;
+ (id)fileHandleForUpdatingURL:(id)arg1 mode:(unsigned short)arg2 error:(id*)arg3;
+ (id)fileHandleForWritingAtPath:(id)arg1;
+ (id)fileHandleForWritingToURL:(id)arg1 error:(id*)arg2;
+ (id)fileHandleForWritingToURL:(id)arg1 mode:(unsigned short)arg2 error:(id*)arg3;
+ (id)fileHandleWithNullDevice;
+ (id)fileHandleWithStandardError;
+ (id)fileHandleWithStandardInput;
+ (id)fileHandleWithStandardOutput;
+ (void)initialize;
+ (bool)supportsSecureCoding;

- (void)_closeOnDealloc;
- (id)availableData;
- (Class)classForCoder;
- (void)closeFile;
- (void)encodeWithCoder:(id)arg1;
- (int)fileDescriptor;
- (id)initWithCoder:(id)arg1;
- (id)initWithFileDescriptor:(int)arg1;
- (id)initWithFileDescriptor:(int)arg1 closeOnDealloc:(bool)arg2;
- (id)initWithPath:(id)arg1 flags:(long long)arg2 createMode:(long long)arg3;
- (id)initWithPath:(id)arg1 flags:(long long)arg2 createMode:(long long)arg3 error:(id*)arg4;
- (id)initWithURL:(id)arg1 flags:(long long)arg2 createMode:(long long)arg3 error:(id*)arg4;
- (unsigned long long)offsetInFile;
- (id)readDataOfLength:(unsigned long long)arg1;
- (id)readDataToEndOfFile;
- (id)readabilityHandler;
- (unsigned long long)seekToEndOfFile;
- (void)seekToFileOffset:(unsigned long long)arg1;
- (void)setReadabilityHandler:(id)arg1;
- (void)setWriteabilityHandler:(id)arg1;
- (void)synchronizeFile;
- (void)truncateFileAtOffset:(unsigned long long)arg1;
- (void)writeData:(id)arg1;
- (id)writeabilityHandler;

// Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals

- (unsigned long long)writeWithCompression:(id)arg1 andUpdateAdler32:(struct adler32_t { unsigned long long x1; }*)arg2;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

- (bool)hk_readValue:(void*)arg1 ofSize:(unsigned long long)arg2 error:(id*)arg3;
- (bool)hk_writeValue:(const void*)arg1 size:(unsigned long long)arg2 error:(id*)arg3;

// Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary

- (void)ml_lock;
- (void)ml_unlock;

// Image: /System/Library/PrivateFrameworks/Parsec.framework/Parsec

- (id)prs_mappedData;

@end
