//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class ICTableAttachmentSelection, ICTableUndoTarget, NSMapTable, NSUndoManager;

@protocol ICTableUndoHelping
@property(readonly, nonatomic) NSMapTable *coalescingUndoGroupForStringDelegate;
@property(retain, nonatomic) ICTableAttachmentSelection *tableSelection;
@property(readonly, nonatomic) NSUndoManager *undoManager;
@property(readonly, nonatomic) ICTableUndoTarget *undoTarget;
@end

