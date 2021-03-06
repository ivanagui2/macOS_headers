//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSFileHandle, NSString;

@interface FileReference : NSObject
{
    NSString *mPathAndName;
    NSString *mName;
    NSString *mPreArchiveName;
    NSString *mTempDirPathAndName;
    NSFileHandle *mHandle;
    unsigned long long mSize;
    unsigned long long mSizeReceived;
    BOOL mIsArchived;
    unsigned long long mArchiveSize;
    BOOL mIsPreProcessed;
    BOOL mIsPostProcessed;
    BOOL mAllDataIsReceived;
    BOOL mIsOutputFile;
    BOOL mDLToTempDir;
    BOOL mTargetIsAMac;
    BOOL mDeleteOnRelease;
    BOOL mWasFolder;
    BOOL mFlag1;
    BOOL mFlag2;
    BOOL mFlag3;
}

+ (unsigned int)archiveOptionsForOBEXSession:(id)arg1;
+ (id)referenceOutputPathAndFile:(id)arg1 downloadToTempDir:(BOOL)arg2 allowRenaming:(BOOL)arg3;
+ (id)referenceInputPathAndFile:(id)arg1 targetIsAMac:(BOOL)arg2 enableArchiving:(BOOL)arg3 archiveOptions:(unsigned int)arg4;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (BOOL)getFlag3;
- (void)setFlag3:(BOOL)arg1;
- (BOOL)getFlag2;
- (void)setFlag2:(BOOL)arg1;
- (BOOL)getFlag1;
- (void)setFlag1:(BOOL)arg1;
- (void)setIsPostProcessed;
- (BOOL)isPostProcessed;
- (void)setIsPreProcessed;
- (BOOL)isPreProcessed;
- (int)doUnArchivingWithOptions:(unsigned int)arg1;
- (void)setNeedsUnarchiving;
- (int)doArchivingWithOptions:(unsigned int)arg1;
- (BOOL)isArchived;
- (BOOL)isFolder;
- (BOOL)canCreateFile:(id)arg1;
- (void)setTargetIsAMac:(BOOL)arg1;
- (void)setDeleteFileOnRelease:(BOOL)arg1;
- (void)reOpenHandle;
- (void)saveHandle;
- (id)handle;
- (BOOL)allDataIsReceived;
- (void)setAllDataReceived;
- (BOOL)writeDataToHandle:(id)arg1;
- (unsigned long long)sizeReceived;
- (id)sizeAsString;
- (void)setExpectedSize:(unsigned long long)arg1;
- (unsigned long long)size;
- (BOOL)fileManager:(id)arg1 shouldProceedAfterError:(id)arg2;
- (BOOL)remove;
- (void)moveToFinalPathAndName;
- (BOOL)moveToPathAndName:(id)arg1;
- (BOOL)setFinalOutputPathAndName:(id)arg1;
- (BOOL)setOutputPathAndName:(id)arg1;
- (id)type;
- (id)path;
- (id)preArchiveName;
- (id)name;
- (id)preArchivePathAndName;
- (id)pathAndName;
- (void)finalize;
- (void)dealloc;
- (id)init;

@end

