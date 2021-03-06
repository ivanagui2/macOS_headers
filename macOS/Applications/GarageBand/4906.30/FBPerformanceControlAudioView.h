//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBPerformanceControlParentView.h"

@class FBItemBackgroundView, FBPerfCntrlAudioSliderView, NSButton, NSImage;

@interface FBPerformanceControlAudioView : FBPerformanceControlParentView
{
    FBItemBackgroundView *gainBackgroundView;
    FBPerfCntrlAudioSliderView *gainSlider;
    FBPerfCntrlAudioSliderView *levelSlider;
    NSButton *audioInputButton;
    NSButton *audioSettingsButton;
    NSButton *recordButton;
    NSButton *monitorButton;
    NSImage *micImage;
    NSImage *instrumentImage;
}

- (void).cxx_destruct;
- (id)instImage;
- (id)micImage;
- (void)updateLevels;
- (void)toggleMonitor:(id)arg1;
- (void)toggleRecord:(id)arg1;
- (void)refreshFaders;
- (void)audioControlsSupportsGain:(BOOL)arg1;
- (BOOL)refreshButtons;
- (void)setSettingsVisible:(BOOL)arg1;
- (void)selectedInstChanged;
- (id)initWithFrame:(struct CGRect)arg1 andDelegate:(id)arg2;

@end

