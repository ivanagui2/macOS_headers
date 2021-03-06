//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoLibraryPrivate/NSCopying-Protocol.h>

@class LiFilter, LiRidList, NSArray, NSSet, RDCustomSortOrder, RDDatabase, RDModelCollectionArray, RDVersionQueryOptions;
@protocol RDVersionsFilterDelegate;

@interface RDVersionsQuery : NSObject <NSCopying>
{
    id <RDVersionsFilterDelegate> _contentFilter;
    BOOL _queryResolved;
    BOOL _updateNeeded;
    RDVersionQueryOptions *_options;
    unsigned long long _pageSize;
    NSArray *_sortedVersions;
    NSArray *_sortedVersionIds;
    CDUnknownBlockType _pageLoadHandler;
    RDCustomSortOrder *_customSortOrder;
    LiFilter *_filter;
    LiFilter *_unadornedFilter;
    NSArray *_loadProperties;
    NSSet *_filteredVersions;
    LiRidList *_filteredVersionIds;
    RDModelCollectionArray *_versionArray;
    long long _queryLimit;
    RDDatabase *_database;
    LiRidList *_versionIdsNeedingUpdate;
    NSArray *_sortPropertyPaths;
    NSArray *_sortDirections;
}

+ (id)filterForPersonIds:(id)arg1 database:(id)arg2 options:(id)arg3;
@property(retain, nonatomic) NSArray *sortDirections; // @synthesize sortDirections=_sortDirections;
@property(retain, nonatomic) NSArray *sortPropertyPaths; // @synthesize sortPropertyPaths=_sortPropertyPaths;
@property(nonatomic) BOOL updateNeeded; // @synthesize updateNeeded=_updateNeeded;
@property(retain, nonatomic) LiRidList *versionIdsNeedingUpdate; // @synthesize versionIdsNeedingUpdate=_versionIdsNeedingUpdate;
@property(nonatomic) BOOL queryResolved; // @synthesize queryResolved=_queryResolved;
@property(readonly, nonatomic) RDDatabase *database; // @synthesize database=_database;
@property(nonatomic) long long queryLimit; // @synthesize queryLimit=_queryLimit;
@property(retain, nonatomic) RDModelCollectionArray *versionArray; // @synthesize versionArray=_versionArray;
@property(retain, nonatomic) LiRidList *filteredVersionIds; // @synthesize filteredVersionIds=_filteredVersionIds;
@property(retain, nonatomic) NSSet *filteredVersions; // @synthesize filteredVersions=_filteredVersions;
@property(retain, nonatomic) NSArray *loadProperties; // @synthesize loadProperties=_loadProperties;
@property(retain, nonatomic) LiFilter *unadornedFilter; // @synthesize unadornedFilter=_unadornedFilter;
@property(retain, nonatomic) LiFilter *filter; // @synthesize filter=_filter;
@property(retain, nonatomic) RDCustomSortOrder *customSortOrder; // @synthesize customSortOrder=_customSortOrder;
@property(copy, nonatomic) CDUnknownBlockType pageLoadHandler; // @synthesize pageLoadHandler=_pageLoadHandler;
@property(retain, nonatomic) NSArray *sortedVersionIds; // @synthesize sortedVersionIds=_sortedVersionIds;
@property(retain, nonatomic) NSArray *sortedVersions; // @synthesize sortedVersions=_sortedVersions;
@property(nonatomic) unsigned long long pageSize; // @synthesize pageSize=_pageSize;
@property(retain, nonatomic) RDVersionQueryOptions *options; // @synthesize options=_options;
- (void).cxx_destruct;
- (void)setContentFilterDelegate:(id)arg1;
- (id)keyPathsForPropertyNames:(id)arg1 fromTable:(id)arg2;
- (id)prepareFilter;
- (id)mediaFilterForOptions:(id)arg1;
- (id)sortFilteredVersions;
- (void)resetQueryState;
- (void)resetLoadProperties;
- (void)refreshFilterIfNeeded;
- (void)refreshFilter;
- (id)sortedVersionIdsIfKnown;
- (void)checkQueryResolved;
- (void)prepareFilteredVersionsImmediateLoad;
- (void)prepareFilteredVersions;
- (id)doCustomSort:(id)arg1;
- (BOOL)needsCustomSort;
- (void)addVersionIdsNeedingUpdate:(id)arg1;
- (unsigned long long)queryChangeTypeForModelChangeGroups:(id)arg1;
- (unsigned long long)queryChangeTypeForNotification:(id)arg1 keyPaths:(id)arg2 changeType:(unsigned char)arg3;
- (unsigned long long)changedByModelChangeGroups:(id)arg1;
- (unsigned long long)changedByNotification:(id)arg1 forKeyPaths:(id)arg2 withChangeType:(unsigned char)arg3;
- (id)versionQueryResult;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithGeoBoundingBox:(struct CGRect)arg1 database:(id)arg2 options:(id)arg3;
- (id)initWithFaces:(id)arg1 options:(id)arg2;
- (id)initWithVersions:(id)arg1 options:(id)arg2;
- (id)initWithPersons:(id)arg1 options:(id)arg2;
- (id)initWithPerson:(id)arg1 options:(id)arg2;
- (id)initForAllVersionsInDatabase:(id)arg1 options:(id)arg2;
- (id)initWithFilter:(id)arg1 database:(id)arg2 options:(id)arg3;
- (id)init;

@end

