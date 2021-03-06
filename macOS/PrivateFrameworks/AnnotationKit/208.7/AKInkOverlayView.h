//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import <AnnotationKit/PKCanvasViewDelegate-Protocol.h>

@class AKPageController, NSHashTable, NSString, PKCanvasView, PKInk;
@protocol AKInkOverlayViewDelegate;

@interface AKInkOverlayView : NSView <PKCanvasViewDelegate>
{
    PKInk *_ink;
    NSHashTable *_reportedStrokes;
    AKPageController *_pageController;
    id _drawingUndoTarget;
    PKCanvasView *_canvasView;
    id <AKInkOverlayViewDelegate> _delegate;
    struct CGSize _canvasSizeInPKDrawingSpace;
}

+ (id)newDrawingUndoTargetWithPageController:(id)arg1;
+ (id)newAKInkOverlayViewForCurrentPlatformWithPageController:(id)arg1 drawingUndoTarget:(id)arg2;
+ (void)initialize;
@property struct CGSize canvasSizeInPKDrawingSpace; // @synthesize canvasSizeInPKDrawingSpace=_canvasSizeInPKDrawingSpace;
@property __weak id <AKInkOverlayViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) PKCanvasView *canvasView; // @synthesize canvasView=_canvasView;
@property __weak id drawingUndoTarget; // @synthesize drawingUndoTarget=_drawingUndoTarget;
@property __weak AKPageController *pageController; // @synthesize pageController=_pageController;
- (void).cxx_destruct;
- (void)canvasView:(id)arg1 drawingDidChange:(id)arg2;
- (void)canvasViewDidEndStroke:(id)arg1;
- (void)canvasViewDidBeginNewStroke:(id)arg1;
- (void)_calculateFixedPixelSize:(struct CGSize *)arg1 drawingScale:(double *)arg2;
- (void)setupInkView;
- (void)viewDidMoveToSuperview;
- (void)viewWillMoveToSuperview:(id)arg1;
- (void)removeStrokesFromDrawing:(id)arg1;
- (void)_updateCanvasViewInk;
@property(copy) PKInk *ink;
- (void)teardown;
- (void)commonPostInit;
- (void)commonInit;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithPageController:(id)arg1 drawingUndoTarget:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

