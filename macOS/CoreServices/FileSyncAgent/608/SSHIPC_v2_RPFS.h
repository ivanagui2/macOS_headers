//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "SSHIPC_v2_ServiceProvider.h"

#import "SSHIPC_RemotePrepareForSync-Protocol.h"

@class NSArray, NSString, SPeer_FS, SSyncSet;

@interface SSHIPC_v2_RPFS : SSHIPC_v2_ServiceProvider <SSHIPC_RemotePrepareForSync>
{
    NSString *_syncSetName;
    SSyncSet *_syncSet;
    SPeer_FS *_localPeer;
    NSArray *_inclusions;
    NSArray *_exclusions;
}

@property(retain, nonatomic) SSyncSet *syncSet; // @synthesize syncSet=_syncSet;
@property(retain, nonatomic) SPeer_FS *localPeer; // @synthesize localPeer=_localPeer;
@property(retain, nonatomic) NSArray *inclusions; // @synthesize inclusions=_inclusions;
@property(retain, nonatomic) NSArray *exclusions; // @synthesize exclusions=_exclusions;
- (id)v2_unchangedPackageItemAndStoreNodeInfoDataAtPathFromRoot:(id)arg1 toPathFromRoot:(id)arg2;
- (void)v2_unchangedPackageItemAtPathFromRoot:(id)arg1 toPathFromRoot:(id)arg2;
- (id)v2_storeNodeInfoDataForPathFromRoot:(id)arg1;
- (void)v2_setSyncSetName:(id)arg1;
- (void)v2_setExclusions:(id)arg1 andInclusions:(id)arg2;
- (id)v2_prepareForSync;
- (oneway void)v2_finishedSync;
- (void)v2_deepDeleteAtPathFromRoot:(id)arg1;
- (id)v2_checksumWithType:(id)arg1 forPathFromRoot:(id)arg2;
- (id)serviceName;
- (void)dealloc;

@end

