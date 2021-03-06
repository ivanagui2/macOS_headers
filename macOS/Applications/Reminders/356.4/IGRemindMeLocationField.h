//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IGRemindMeField.h"

#import "NSComboBoxDataSource-Protocol.h"
#import "NSComboBoxDelegate-Protocol.h"

@class NSProgressIndicator, NSString, RemindMeLocationDelegate;

@interface IGRemindMeLocationField : IGRemindMeField <NSComboBoxDelegate, NSComboBoxDataSource>
{
    BOOL _expanded;
    NSProgressIndicator *_progressIndicator;
    RemindMeLocationDelegate *_delegate;
}

@property(retain) RemindMeLocationDelegate *delegate; // @synthesize delegate=_delegate;
@property BOOL expanded; // @synthesize expanded=_expanded;
@property(retain) NSProgressIndicator *progressIndicator; // @synthesize progressIndicator=_progressIndicator;
- (void).cxx_destruct;
- (void)checkboxToggled;
- (void)sizeToFit;
- (double)controlHorizontalInset;
- (double)controlVerticalOverlap;
- (id)relatedViews;
- (id)relatedGadgets;
- (void)updateFromReminder;
- (void)inspectorDidClose;
- (BOOL)respectWidth;
- (id)comboBox;
- (id)initWithLocationDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

