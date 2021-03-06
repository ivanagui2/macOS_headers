//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSResponder.h>

@class IMKCandidatesPrivate;

@interface IMKCandidates : NSResponder
{
    IMKCandidatesPrivate *_private;
}

- (BOOL)singleClickCommitsCandidate;
- (void)setSingleClickCommitsCandidate:(BOOL)arg1;
- (id)fittingCandidatesForCandidates:(id)arg1;
- (id)candidatesSelectableByKeyboard;
- (id)viewController;
- (void)selectFirstCandidate;
- (void)selectCurrentlyFocusedItem;
- (void)selectPreviousSortingMethod;
- (void)selectNextSortingMethod;
- (unsigned long long)windowLevel;
- (void)setWindowLevel:(unsigned long long)arg1;
- (void)setTopVisibleLine:(unsigned long long)arg1;
- (unsigned long long)topVisibleLine;
- (void)setSortingModes:(id)arg1;
- (id)sortingModes;
- (void)setShowsChevron:(BOOL)arg1;
- (BOOL)showsChevron;
- (void)setSelectedSortingMode:(id)arg1;
- (id)selectedSortingMode;
- (BOOL)presentsAutomatically;
- (void)setPresentsAutomatically:(BOOL)arg1;
- (void)setNumberOfFixedSizeCandidates:(unsigned long long)arg1;
- (unsigned long long)numberOfFixedSizeCandidates;
- (void)setNoCandidatesMessage:(id)arg1;
- (id)noCandidatesMessage;
- (void)setInlineText:(id)arg1;
- (id)inlineText;
- (void)setInformationView:(id)arg1;
- (id)informationView;
- (void)setIncrementalSearchInputContext:(BOOL)arg1;
- (BOOL)forceNoIncrementalSearchPositioning;
- (void)setForceNoIncrementalSearchPositioning:(BOOL)arg1;
- (double)fontSize;
- (void)setFontSize:(double)arg1;
- (void)setFocusedCandidate:(id)arg1;
- (id)focusedCandidate;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)setAppearance:(id)arg1;
- (id)appearance;
- (void)setAlignment:(long long)arg1;
- (long long)alignment;
- (void)setSimulatorDelegate:(id)arg1;
- (id)simulatorDelegate;
- (BOOL)isExpanded;
- (BOOL)handleKeyboardEvent:(id)arg1;
- (BOOL)selectionKeyPressed:(id)arg1;
- (BOOL)numberKeyPressed:(unsigned long long)arg1;
- (id)convertKeyCodeNumberToString:(id)arg1;
- (id)candidateView;
- (BOOL)showingSelectors;
- (void)insertNewline:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)pageUp:(id)arg1;
- (void)scrollPageUp:(id)arg1;
- (void)pageDown:(id)arg1;
- (void)scrollPageDown:(id)arg1;
- (void)moveDown:(id)arg1;
- (void)moveUp:(id)arg1;
- (void)moveLeft:(id)arg1;
- (void)moveBackward:(id)arg1;
- (void)moveRight:(id)arg1;
- (void)moveForward:(id)arg1;
- (void)movePage:(long long)arg1;
- (id)attributes;
- (void)setAttributes:(id)arg1;
- (struct __TISInputSource *)selectionKeysKeylayout;
- (void)setSelectionKeysKeylayout:(struct __TISInputSource *)arg1;
- (id)selectionKeys;
- (void)setSelectionKeys:(id)arg1;
- (BOOL)dismissesAutomatically;
- (void)setDismissesAutomatically:(BOOL)arg1;
- (void)clearSelection;
- (long long)lineNumberForCandidateWithIdentifier:(long long)arg1;
- (long long)candidateIdentifierAtLineNumber:(long long)arg1;
- (id)selectedCandidateString;
- (long long)selectedCandidate;
- (void)selectCandidate:(long long)arg1;
- (BOOL)selectCandidateWithIdentifier:(long long)arg1;
- (long long)candidateStringIdentifier:(id)arg1;
- (void)setCandidateFrameTopLeft:(struct CGPoint)arg1;
- (struct CGRect)candidateFrame;
- (void)candidateSelected:(id)arg1;
- (void)candidateSelectionChanged:(id)arg1;
- (void)annotationSelected:(id)arg1 number:(long long)arg2 sender:(id)arg3;
- (void)showSublist:(id)arg1 subListDelegate:(id)arg2;
- (void)hideChild;
- (void)showChild;
- (void)attachChild:(id)arg1 toCandidate:(long long)arg2 type:(unsigned long long)arg3;
- (void)detachChild:(long long)arg1;
- (void)showAnnotation:(id)arg1;
- (void)showSublist:(id)arg1;
- (void)showCandidates;
- (id)candidateListDictionary;
- (void)setCandidateListDictionary:(id)arg1;
- (void)setCandidates:(id)arg1;
- (void)setCandidateData:(id)arg1;
- (void)updateCandidates;
- (BOOL)isVisible;
- (void)hide;
- (void)show:(unsigned long long)arg1;
- (void)setPanelType:(unsigned long long)arg1;
- (unsigned long long)panelType;
- (void)dealloc;
- (id)initWithServer:(id)arg1 panelType:(unsigned long long)arg2;
- (id)initWithServer:(id)arg1 panelType:(unsigned long long)arg2 styleType:(unsigned long long)arg3;

@end

