//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTitlebarAccessoryViewController.h>

@class NSLayoutConstraint, NSView, NewTabButton;

__attribute__((visibility("hidden")))
@interface BrowserTitlebarAccessoryViewController : NSTitlebarAccessoryViewController
{
    NSView *_containerView;
    NSLayoutConstraint *_containerViewTrailingLayoutConstraint;
    NewTabButton *_createTabButton;
    NSView *_contentView;
}

@property(retain, nonatomic) NSView *contentView; // @synthesize contentView=_contentView;
@property(readonly, nonatomic) NewTabButton *createTabButton; // @synthesize createTabButton=_createTabButton;
- (void).cxx_destruct;
- (BOOL)_isCreateTabButtonVisible;
- (void)hideNewTabButton;
- (void)showNewTabButton;
- (void)_updateKeyViewLoop;
- (void)_setUpContentView;
- (void)viewDidLoad;
- (void)loadView;

@end

