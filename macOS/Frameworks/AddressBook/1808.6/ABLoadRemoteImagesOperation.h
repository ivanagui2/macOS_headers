//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class ABTask, NSString;

__attribute__((visibility("hidden")))
@interface ABLoadRemoteImagesOperation : NSOperation
{
    NSString *_contactIdentifier;
    ABTask *_task;
    CDUnknownBlockType _callbackBlock;
    long long _tag;
    BOOL _debuggingWhereImagesCameFrom;
}

@property(readonly) long long tag; // @synthesize tag=_tag;
- (void)_respondWithPhoto:(id)arg1;
- (void)debugLog:(id)arg1;
- (void)cancel;
- (void)_doMain;
- (void)main;
- (void)dealloc;
- (id)initWithImageLoadRequest:(id)arg1 tag:(long long)arg2 callback:(CDUnknownBlockType)arg3;

@end

