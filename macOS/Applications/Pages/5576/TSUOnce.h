//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@protocol OS_dispatch_queue;

@interface TSUOnce : NSObject <NSCopying>
{
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _didPerformOnce;
}

- (void).cxx_destruct;
- (void)performBlockOnce:(CDUnknownBlockType)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

