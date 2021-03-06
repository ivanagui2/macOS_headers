//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PassKitCore/PKMicaLayer.h>

@class CAGradientLayer, CAShapeLayer, NSColor;

@interface PKCheckGlyphLayer : PKMicaLayer
{
    CAShapeLayer *_shapeLayer;
    CAGradientLayer *_maskLayer;
    BOOL _covered;
    struct CATransform3D _uncoveredTransform;
    struct CATransform3D _coveredTransform;
    BOOL _revealed;
    struct NSColor *_primaryColor;
}

@property(nonatomic) BOOL revealed; // @synthesize revealed=_revealed;
@property(copy, nonatomic) NSColor *primaryColor; // @synthesize primaryColor=_primaryColor;
- (void).cxx_destruct;
- (double)_updateCovered:(BOOL)arg1;
- (double)setCovered:(BOOL)arg1 animated:(BOOL)arg2;
- (double)setRevealed:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setPrimaryColor:(struct NSColor *)arg1 animated:(BOOL)arg2;
- (void)_createMask;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 package:(id)arg2;
- (id)init;

@end

