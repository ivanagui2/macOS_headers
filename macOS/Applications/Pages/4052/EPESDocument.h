//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class EPEConnectionLineGroupCollection, EPEFootnote, EPXChapter, EPXDocument, NSArray, NSMutableArray, NSMutableDictionary, TPDocumentRoot, TSPObjectContext, TSUMutableRetainedPointerSet, TSUPointerKeyDictionary, TSURetainedPointerKeyDictionary, TSURetainedPointerSet, TSWPStorage;

@interface EPESDocument : NSObject
{
    TPDocumentRoot *mPagesDocumentRoot;
    EPXDocument *mEPXDocument;
    EPXChapter *mCurrentEPXChapter;
    float mBodyWidth;
    struct stack<float, std::__1::deque<float, std::__1::allocator<float>>> mBlockWidthStack;
    struct stack<float, std::__1::deque<float, std::__1::allocator<float>>> mTargetHorizontalOffsetOriginStack;
    struct stack<EPESHorizontalRange, std::__1::deque<EPESHorizontalRange, std::__1::allocator<EPESHorizontalRange>>> mBlockRangeStack;
    NSMutableDictionary *mStyleCache;
    float mBodyFontSize;
    struct stack<float, std::__1::deque<float, std::__1::allocator<float>>> *mParentFontSizeStack;
    int mFootnoteKind;
    int mFootnoteNumber;
    NSMutableArray *mFootnotes;
    EPEFootnote *mCurrentFootnote;
    TSUMutableRetainedPointerSet *mUsedFootnoteBodyIds;
    TSURetainedPointerKeyDictionary *mTopicNumbersToStorage;
    NSMutableDictionary *mImageBinaries;
    NSMutableDictionary *mMediaBinaries;
    NSMutableDictionary *mBookmarkNameToHrefMap;
    NSMutableDictionary *mBookmarkNameToIdMap;
    BOOL mFirstPageIsCoverImage;
    unsigned long long mContentStartCharIndex;
    TSUMutableRetainedPointerSet *mAttachmentsOnFirstPage;
    BOOL mIsMappingTitlePage;
    BOOL mIsMappingTable;
    BOOL mIsMappingFootnote;
    TSURetainedPointerSet *mTOCStyles;
    TSURetainedPointerSet *mSubheadingStyles;
    TSWPStorage *mMainBodyStorage;
    NSMutableDictionary *mFloatingDrawableMap;
    NSMutableArray *mFloatingDrawableArray;
    NSArray *mChapterDividers;
    BOOL mIsExportCancelled;
    NSMutableArray *_cancelBlocks;
    TSUPointerKeyDictionary *mStorageListStateMap;
    NSArray *mChapterStartParIndices;
    NSMutableDictionary *mParIndexToIdMap;
    NSMutableDictionary *mParIndexToHrefMap;
    TSPObjectContext *mTemporaryObjectContext;
    BOOL _isAllowAnyMedia;
    BOOL _isAllowEmbeddedFonts;
    EPEConnectionLineGroupCollection *_connectionLineGroupCollection;
}

@property(nonatomic) BOOL isAllowEmbeddedFonts; // @synthesize isAllowEmbeddedFonts=_isAllowEmbeddedFonts;
@property(readonly, nonatomic) EPEConnectionLineGroupCollection *connectionLineGroupCollection; // @synthesize connectionLineGroupCollection=_connectionLineGroupCollection;
@property(nonatomic) BOOL isAllowAnyMedia; // @synthesize isAllowAnyMedia=_isAllowAnyMedia;
@property(retain, nonatomic) NSMutableDictionary *parIndexToHrefMap; // @synthesize parIndexToHrefMap=mParIndexToHrefMap;
@property(retain, nonatomic) NSMutableDictionary *parIndexToIdMap; // @synthesize parIndexToIdMap=mParIndexToIdMap;
@property(retain, nonatomic) NSArray *chapterStartParIndices; // @synthesize chapterStartParIndices=mChapterStartParIndices;
@property(nonatomic) BOOL isExportCancelled; // @synthesize isExportCancelled=mIsExportCancelled;
@property(readonly, nonatomic) TPDocumentRoot *pagesDocumentRoot; // @synthesize pagesDocumentRoot=mPagesDocumentRoot;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)temporaryObjectContext;
- (id)currentChapterInlineTextContainer;
- (void)popLastCancelBlock;
- (void)pushCancelBlock:(CDUnknownBlockType)arg1;
- (void)cancel;
- (BOOL)containsHref:(id)arg1;
- (unsigned long long)startParIndexForChapterAtParIndex:(unsigned long long)arg1;
- (void)generateIdAndHrefForParIndex:(unsigned long long)arg1;
- (void)setId:(id)arg1 andHref:(id)arg2 forParIndex:(unsigned long long)arg3;
- (unsigned long long)chapterNumberForChapterContainingParIndex:(unsigned long long)arg1;
- (id)hrefForChapterContainingParIndex:(unsigned long long)arg1;
- (id)idForChapterContainingParIndex:(unsigned long long)arg1;
- (id)hrefForParIndex:(unsigned long long)arg1;
- (id)idForParIndex:(unsigned long long)arg1;
- (void)setChapterDividers:(id)arg1;
- (id)chapterDividers;
- (id)stateForTextStorage:(id)arg1;
- (void)setCurrentFootnote:(id)arg1;
- (id)currentFootnote;
- (id)footnotes;
- (BOOL)globalFootnotes;
- (void)setFootnoteKind:(int)arg1;
- (int)footnoteKind;
- (BOOL)isUsedFootnoteBodyId:(id)arg1;
- (void)addUsedFootnoteBodyId:(id)arg1;
- (int *)footnoteNumber;
- (id)mainBodyStorage;
- (void)setMainBodyStorage:(id)arg1;
- (id)attachmentsOnFirstPage;
- (BOOL)isMappingFootnote;
- (void)setIsMappingFootnote:(BOOL)arg1;
- (BOOL)isMappingTable;
- (void)setIsMappingTable:(BOOL)arg1;
- (BOOL)isMappingTitlePage;
- (void)setIsMappingTitlePage:(BOOL)arg1;
- (unsigned long long)contentStartCharIndex;
- (void)setfirstPageIsCoverImage;
- (BOOL)firstPageIsCoverImage;
- (void)setBaseHref:(id)arg1 forBookmarkName:(id)arg2;
- (id)hrefForBookmarkName:(id)arg1;
- (id)idForBookmarkName:(id)arg1;
- (void)setMediaBinary:(id)arg1 forData:(id)arg2;
- (id)mediaBinaryForData:(id)arg1;
- (void)resetCurrentChapter;
- (void)setImageBinary:(id)arg1 forKey:(id)arg2;
- (id)imageBinaryForKey:(id)arg1;
- (float)currentParentFontSize;
- (void)popParentFontSize;
- (void)pushParentFontSize:(float)arg1;
- (void)setBodyFontSize:(float)arg1;
- (float)bodyFontSize;
- (void)endStorage:(id)arg1;
- (id)floatingDrawableArrayForStorage:(id)arg1;
- (void)addDrawable:(id)arg1 forCharIndex:(unsigned long long)arg2;
- (void)setStyleInfo:(id)arg1 forKey:(id)arg2;
- (id)styleInfoForKey:(id)arg1;
- (BOOL)styleIsSubheadingStyle:(id)arg1;
- (void)setSubheadingStyles:(id)arg1;
- (BOOL)styleIsTOCStyle:(id)arg1;
- (BOOL)isStyleInSet:(id)arg1 style:(id)arg2;
- (void)setTOCStyles:(id)arg1;
- (struct EPESHorizontalRange)currentBlockHorizontalRange;
- (void)popBlockHorizontalRange;
- (void)pushBlockHorizontalRange:(struct EPESHorizontalRange)arg1;
- (float)currentTargetHorizontalOffsetOrigin;
- (void)popTargetHorizontalOffsetOrigin;
- (void)pushTargetHorizontalOffsetOrigin:(float)arg1;
- (float)currentBlockWidth;
- (void)popBlockWidth;
- (void)pushBlockWidth:(float)arg1;
- (float)bodyWidth;
- (id)currentEPXChapter;
- (void)setCurrentEPXChapter:(id)arg1;
- (id)epxStylesheet;
- (id)epxDocument;
- (void)dealloc;
- (id)initWithPagesDocumentRoot:(id)arg1 epxDocument:(id)arg2;

@end

