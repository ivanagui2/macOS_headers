//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PXSuggestionToken : NSObject
{
    BOOL _canceled;
    unsigned long long _token;
}

@property(readonly, nonatomic) BOOL canceled; // @synthesize canceled=_canceled;
@property(nonatomic) unsigned long long token; // @synthesize token=_token;
- (void)cancel;
- (id)init;

@end

