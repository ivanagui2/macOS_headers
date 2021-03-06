//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class _UIWindowToolbarController, _UIWindowToolbarSearchFieldItem, _UIWindowToolbarSegmentedControlItem, _UIWindowToolbarShareItem;
@protocol FRIOSMacToolbarControllerDelegate;

@interface FRIOSMacToolbarController : NSObject
{
    id <FRIOSMacToolbarControllerDelegate> _delegate;
    _UIWindowToolbarController *_windowToolbarController;
    _UIWindowToolbarSearchFieldItem *_searchFieldItem;
    _UIWindowToolbarSegmentedControlItem *_likeDislikeItem;
    _UIWindowToolbarShareItem *_shareItem;
}

+ (id)shared;
@property(retain, nonatomic) _UIWindowToolbarShareItem *shareItem; // @synthesize shareItem=_shareItem;
@property(retain, nonatomic) _UIWindowToolbarSegmentedControlItem *likeDislikeItem; // @synthesize likeDislikeItem=_likeDislikeItem;
@property(retain, nonatomic) _UIWindowToolbarSearchFieldItem *searchFieldItem; // @synthesize searchFieldItem=_searchFieldItem;
@property(retain, nonatomic) _UIWindowToolbarController *windowToolbarController; // @synthesize windowToolbarController=_windowToolbarController;
@property(nonatomic) __weak id <FRIOSMacToolbarControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)imagesDislikedLight;
- (id)imagesLikedLight;
- (id)imagesNeutralLight;
- (void)updateActivityForSharing:(id)arg1;
- (void)setSharingEnabled:(BOOL)arg1;
- (void)setLikeDislikeEnabled:(BOOL)arg1;
- (void)updateBarButtonImagesForLikingStatus:(unsigned long long)arg1;
- (void)didPressButton:(id)arg1;
- (id)sidePanelButton;
- (id)labelItem;
- (void)didTapLikeDislikeItem:(id)arg1;
- (id)itemIdentifers;
- (id)items;
- (void)registerInWindow:(id)arg1;

@end

