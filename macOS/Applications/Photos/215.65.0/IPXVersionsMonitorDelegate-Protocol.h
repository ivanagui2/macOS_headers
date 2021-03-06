//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IPXVersionsMonitor, NSSet, PFDispatchQueue;

@protocol IPXVersionsMonitorDelegate <NSObject>

@optional
- (void)versionsMonitor:(IPXVersionsMonitor *)arg1 thumbnailsChangedForVersions:(NSSet *)arg2;
- (void)versionsMonitor:(IPXVersionsMonitor *)arg1 metadataChanged:(NSSet *)arg2 forVersions:(NSSet *)arg3;
- (NSSet *)reportedMetadataChangesForVersionsMonitor:(IPXVersionsMonitor *)arg1;
- (NSSet *)ignoredMetadataChangesForVersionsMonitor:(IPXVersionsMonitor *)arg1;
- (PFDispatchQueue *)changeReportingDispatchQueueForVersionsMonitor:(IPXVersionsMonitor *)arg1;
@end

