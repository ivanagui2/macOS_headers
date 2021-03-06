//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class VKIconManager, VKShieldManager;

@interface MKTransitArtworkManager : NSObject
{
    VKIconManager *_iconManager;
    VKShieldManager *_shieldManager;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) VKShieldManager *shieldManager; // @synthesize shieldManager=_shieldManager;
@property(readonly, nonatomic) VKIconManager *iconManager; // @synthesize iconManager=_iconManager;
- (void).cxx_destruct;
- (id)_createImageWithBlockInAutoreleasePoolIfNeeded:(CDUnknownBlockType)arg1;
- (id)_imageWithDataSource:(id)arg1 size:(long long)arg2 featureType:(unsigned long long)arg3 scale:(double)arg4 withWidthPaddingMultiple:(double)arg5 fullBleedColor:(id *)arg6;
- (id)transitArtworkImageWithDataSource:(id)arg1 size:(long long)arg2 featureType:(unsigned long long)arg3 scale:(double)arg4 withWidthPaddingMultiple:(double)arg5;
- (id)transitArtworkImageWithDataSource:(id)arg1 size:(long long)arg2 featureType:(unsigned long long)arg3 scale:(double)arg4;
- (id)transitArtworkImageWithShieldDataSource:(id)arg1 size:(long long)arg2 featureType:(unsigned long long)arg3 scale:(double)arg4;
- (id)_vkImageWithShieldDataSource:(id)arg1 size:(long long)arg2 featureType:(unsigned long long)arg3 scale:(double)arg4 widthPaddingMultiple:(double)arg5;
- (BOOL)_isMemoryConstrained;
- (void)purge;
- (id)initWithShieldManager:(id)arg1 iconManager:(id)arg2;

@end

