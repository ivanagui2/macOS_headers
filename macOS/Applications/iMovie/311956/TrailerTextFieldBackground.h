//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@interface TrailerTextFieldBackground : NSView
{
    NSView *m_textField;
    BOOL m_showFocusRing;
    BOOL m_drawBackground;
}

@property(readonly, nonatomic) NSView *textField; // @synthesize textField=m_textField;
@property(nonatomic) BOOL drawBackground; // @synthesize drawBackground=m_drawBackground;
@property(nonatomic) BOOL showFocusRing; // @synthesize showFocusRing=m_showFocusRing;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 textField:(id)arg2;
- (void)viewDidMoveToWindow;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)cacheName;

@end

