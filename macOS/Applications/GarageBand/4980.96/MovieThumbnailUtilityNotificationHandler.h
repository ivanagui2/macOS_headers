//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface MovieThumbnailUtilityNotificationHandler : NSObject
{
    struct CMovieTNUtility *_movieTNUtil;
}

@property(nonatomic) struct CMovieTNUtility *movieTNUtil; // @synthesize movieTNUtil=_movieTNUtil;
- (void)handleAssetHasChanged:(id)arg1;
- (id)init;
- (id)initWithMovieTNUtility:(struct CMovieTNUtility *)arg1;

@end

