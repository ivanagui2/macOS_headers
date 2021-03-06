//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSScrollView.h>

@class NSArray, NSTrackingArea;
@protocol TSKScrollViewDelegate;

@interface TSKScrollView : NSScrollView
{
    long long _scrollState;
    BOOL _lastScrollEventContainedDeceleration;
    BOOL _scrollerStyleIsLocked;
    unsigned long long _reflectViewReentrantCount;
    BOOL _disableAppKitReflectScrolledClipViewWorkaround;
    NSTrackingArea *_tskTrackingArea;
    BOOL _scrollEnabled;
    BOOL _wantsOnlyOverlayScrollers;
    BOOL _hideLegacyScrollersOnMouseExit;
    id <TSKScrollViewDelegate> _delegate;
}

@property(nonatomic) BOOL hideLegacyScrollersOnMouseExit; // @synthesize hideLegacyScrollersOnMouseExit=_hideLegacyScrollersOnMouseExit;
@property(nonatomic) BOOL wantsOnlyOverlayScrollers; // @synthesize wantsOnlyOverlayScrollers=_wantsOnlyOverlayScrollers;
@property(nonatomic, getter=isScrollEnabled) BOOL scrollEnabled; // @synthesize scrollEnabled=_scrollEnabled;
@property(nonatomic) __weak id <TSKScrollViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct NSEdgeInsets adjustedContentInset;
@property(nonatomic) struct NSEdgeInsets contentInset;
- (BOOL)_canAddUnderTitlebarView;
- (unsigned long long)p_scrollerVisibilityHash;
@property(readonly, nonatomic) NSArray *rectanglesObscuringView;
- (void)unlockScrollerStyle;
- (void)lockScrollerStyleTo:(long long)arg1;
- (void)setScrollerStyle:(long long)arg1;
- (void)setAutohidesScrollers:(BOOL)arg1;
- (void)reflectScrolledClipView:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)scrollWheel:(id)arg1;
- (void)p_configureForLegacyStyle;
- (void)p_scrollWheelStoppedScrolling;
- (void)p_didEndLiveScroll:(id)arg1;
- (void)p_willStartLiveScroll:(id)arg1;
@property(readonly, nonatomic) struct CGRect visibleFrame;
@property(readonly, nonatomic) struct CGRect scrollableAreaBounds;
- (void)flashScrollIndicators;
@property(readonly, nonatomic, getter=isDecelerating) BOOL decelerating;
@property(readonly, nonatomic, getter=isDragging) BOOL dragging;
- (void)scrollRectToVisible:(struct CGRect)arg1 animated:(BOOL)arg2;
@property(nonatomic) struct CGSize contentSize;
- (void)setContentInsets:(struct NSEdgeInsets)arg1;
- (void)setContentOffset:(struct CGPoint)arg1 animated:(BOOL)arg2;
@property(nonatomic) struct CGPoint contentOffset;
- (void)updateTrackingAreas;
- (void)setFrame:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)p_TSKScrollViewCommonInit;

@end

