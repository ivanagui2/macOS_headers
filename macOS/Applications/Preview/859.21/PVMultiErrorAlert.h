//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "PVSheetController.h"

@class NSArray, NSButton, NSImage, NSTableView;

@interface PVMultiErrorAlert : PVSheetController
{
    NSTableView *_tableView;
    NSButton *_confirmButton;
    NSButton *_otherButton;
    NSButton *_cancelButton;
    NSArray *_errorsArray;
    NSImage *_criticalAlertImage;
    NSArray *_recoveryOptions;
}

@property(retain) NSArray *errorsArray; // @synthesize errorsArray=_errorsArray;
- (id)criticalAlertImage;
- (id)itemForRow:(unsigned long long)arg1;
- (id)tableView:(id)arg1 rowViewForRow:(long long)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (id)tableView:(id)arg1 selectionIndexesForProposedSelection:(id)arg2;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)windowDidLoad;
- (void)dealloc;
- (id)initWithErrorsArray:(id)arg1;

@end

