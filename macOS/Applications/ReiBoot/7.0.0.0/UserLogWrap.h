//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject.h"

@interface UserLogWrap : NSObject
{
}

+ (void)SetLanguageID:(int)arg1;
+ (int)AddReportLog:(id)arg1 Content:(id)arg2 UploadId:(const char *)arg3;
+ (void)SetDeviceStateMode:(int)arg1;
+ (void)AddUserLog:(int)arg1;
+ (int)SyncAddUserLog:(int)arg1;
+ (int)AddUserLog:(int)arg1 wait:(BOOL)arg2;

@end

