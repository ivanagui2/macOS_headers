//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSHRequestDataOperation.h"

@class NSObject;

@interface TSHJsonOperation : TSHRequestDataOperation
{
    unsigned long long mResponseStringEncoding;
    NSObject *mJSONResultObject;
}

- (void)dealloc;
- (id)jsonResult;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)start:(id)arg1 notifyWhenFinished:(id)arg2;

@end

