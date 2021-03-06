//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class ECProgressLayer, ECStatusLabelLayer, NSString;

@interface ECBezelIconListItemLayer : CALayer
{
    unsigned long long _axIdentifier;
    float _progress;
    ECProgressLayer *_progressLayer;
    ECStatusLabelLayer *_statusLabelLayer;
}

@property(nonatomic) float progress; // @synthesize progress=_progress;
@property(readonly, nonatomic) unsigned long long axIdentifier; // @synthesize axIdentifier=_axIdentifier;
- (void).cxx_destruct;
- (void)_layoutProgressLayer;
@property(readonly, nonatomic) NSString *axStatusLabel;
- (void)setStatusLabelLayer:(id)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (id)init;

@end

