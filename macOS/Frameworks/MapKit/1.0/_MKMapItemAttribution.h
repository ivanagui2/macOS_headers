//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOMapItemAttribution, NSArray, NSString;

@interface _MKMapItemAttribution : NSObject
{
    GEOMapItemAttribution *_geoAttribution;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL requiresAttributionInCallout;
- (id)providerSnippetLogoImageForScale:(double)arg1;
- (id)providerLogoImageForScale:(double)arg1;
- (id)providerImageAtPath:(id)arg1 scale:(double)arg2 isTemplate:(BOOL)arg3;
@property(readonly, nonatomic) BOOL shouldOpenInAppStore;
@property(readonly, nonatomic) NSArray *attributionApps;
@property(readonly, nonatomic) NSArray *attributionURLs;
@property(readonly, nonatomic) NSString *providerName;
@property(readonly, nonatomic) NSString *providerID;
- (id)initWithGEOMapItemAttribution:(id)arg1;

@end

