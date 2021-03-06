//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSPObject.h"

#import "TSDDrawableProvidingPasteboardNativeStorage-Protocol.h"

@class NSArray, NSDictionary, NSSet, NSString;

@interface KNPasteboardNativeStorage : TSPObject <TSDDrawableProvidingPasteboardNativeStorage>
{
    NSArray *_drawables;
    NSSet *_builds;
    NSArray *_buildChunks;
    NSDictionary *_themeCurves;
    NSArray *_slideNodes;
    NSArray *_originalSlideNodeUUIDs;
    NSArray *_displayedSlideNodes;
    NSArray *_masterSlideNodes;
    struct CGSize _originalShowSize;
    NSArray *_textStorageTitleRanges;
    NSSet *_collapsedSlideNodes;
    NSSet *_outlineCollapsedSlideNodes;
    NSSet *_outlineHasBodySlideNodes;
    NSArray *_geometriesInRoot;
    NSString *_slideNodeUUID;
    BOOL _slideNodesHaveDatasNeedingDownload;
}

@property(readonly, nonatomic) BOOL slideNodesHaveDatasNeedingDownload; // @synthesize slideNodesHaveDatasNeedingDownload=_slideNodesHaveDatasNeedingDownload;
@property(readonly, nonatomic) NSString *slideNodeUUID; // @synthesize slideNodeUUID=_slideNodeUUID;
@property(readonly, nonatomic) NSArray *geometriesInRoot; // @synthesize geometriesInRoot=_geometriesInRoot;
@property(readonly, nonatomic) NSSet *outlineHasBodySlideNodes; // @synthesize outlineHasBodySlideNodes=_outlineHasBodySlideNodes;
@property(readonly, nonatomic) NSSet *outlineCollapsedSlideNodes; // @synthesize outlineCollapsedSlideNodes=_outlineCollapsedSlideNodes;
@property(readonly, nonatomic) NSSet *collapsedSlideNodes; // @synthesize collapsedSlideNodes=_collapsedSlideNodes;
@property(readonly, nonatomic) NSArray *textStorageTitleRanges; // @synthesize textStorageTitleRanges=_textStorageTitleRanges;
@property(nonatomic) struct CGSize originalShowSize; // @synthesize originalShowSize=_originalShowSize;
@property(readonly, nonatomic) NSArray *displayedSlideNodes; // @synthesize displayedSlideNodes=_displayedSlideNodes;
@property(readonly, nonatomic) NSArray *originalSlideNodeUUIDs; // @synthesize originalSlideNodeUUIDs=_originalSlideNodeUUIDs;
@property(readonly, nonatomic) NSArray *slideNodes; // @synthesize slideNodes=_slideNodes;
@property(readonly, nonatomic) NSDictionary *themeCurves; // @synthesize themeCurves=_themeCurves;
@property(readonly, nonatomic) NSArray *buildChunks; // @synthesize buildChunks=_buildChunks;
@property(readonly, nonatomic) NSSet *builds; // @synthesize builds=_builds;
@property(readonly, nonatomic) NSArray *drawables; // @synthesize drawables=_drawables;
- (void).cxx_destruct;
- (id)slideNodesSubstitutingDepthsBasedOnMinimumDepth:(unsigned long long)arg1;
@property(readonly, nonatomic) NSArray *drawablesSubstitutingRootGeometries;
@property(readonly, nonatomic) NSArray *nonPlaceholderDrawables;
@property(readonly, nonatomic) NSArray *placeholderDrawables;
- (id)initWithContext:(id)arg1 slideNodes:(id)arg2 displayedSlideNodes:(id)arg3 themeCurves:(id)arg4;
- (id)initWithContext:(id)arg1 slideNodes:(id)arg2 displayedSlideNodes:(id)arg3 textStorageTitleRanges:(id)arg4;
- (id)initWithContext:(id)arg1 drawables:(id)arg2 builds:(id)arg3 buildChunks:(id)arg4 themeCurves:(id)arg5;
- (id)initWithContext:(id)arg1 slideNodes:(id)arg2 displayedSlideNodes:(id)arg3 textStorageTitleRanges:(id)arg4 drawables:(id)arg5 builds:(id)arg6 buildChunks:(id)arg7 themeCurves:(id)arg8 drawableGeometriesInRoot:(id)arg9 slideNodeUUID:(id)arg10;
- (void)originalShowSize:(struct CGSize)arg1;
- (void)p_fixBuildUUIDsForBuildChunks:(id)arg1;
- (void)p_fixBuildUUIDsForSlideNodes:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (void)saveToArchive:(struct PasteboardNativeStorageArchive *)arg1 archiver:(id)arg2;
- (void)loadFromArchive:(const struct PasteboardNativeStorageArchive *)arg1 unarchiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;

@end

