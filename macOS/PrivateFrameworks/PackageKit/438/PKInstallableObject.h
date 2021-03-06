//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSURL, PKArchive, PKPackage, PKProduct;

@interface PKInstallableObject : NSObject
{
    NSURL *_url;
    PKArchive *_archive;
    NSArray *_cachedCertificates;
    PKProduct *_product;
    PKPackage *_package;
    NSArray *_cachedReferences;
    NSArray *_cachedBomDatas;
}

@property(readonly, retain) NSURL *URL; // @synthesize URL=_url;
@property(readonly, retain) NSArray *bomsAsData;
@property(readonly, retain) NSArray *referencedObjects;
- (id)_packageURLsUnderChoice:(id)arg1 internal:(BOOL)arg2;
@property(readonly, retain) NSArray *certificates;
@property(readonly) BOOL isSigned;
- (id)description;
- (void)dealloc;
- (id)initWithURL:(id)arg1;

@end

