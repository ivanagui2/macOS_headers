//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GSSPAutoEncodable-Protocol.h"
#import "NSCopying-Protocol.h"
#import "TSSPropertyCommandSerializing-Protocol.h"
#import "TSTCellDiffing-Protocol.h"

@class NSString, TSDStroke;

@interface TSTCellBorder : NSObject <GSSPAutoEncodable, TSTCellDiffing, TSSPropertyCommandSerializing, NSCopying>
{
    TSDStroke *_topStroke;
    int _topStrokeOrder;
    TSDStroke *_rightStroke;
    int _rightStrokeOrder;
    TSDStroke *_bottomStroke;
    int _bottomStrokeOrder;
    TSDStroke *_leftStroke;
    int _leftStrokeOrder;
    BOOL _definedTopStroke;
    BOOL _definedTopStrokeOrder;
    BOOL _definedRightStroke;
    BOOL _definedRightStrokeOrder;
    BOOL _definedBottomStroke;
    BOOL _definedBottomStrokeOrder;
    BOOL _definedLeftStroke;
    BOOL _definedLeftStrokeOrder;
}

+ (id)cellDiffProperties;
+ (id)cellBorderForResettingAllStrokes;
+ (id)cellBorder;
@property(readonly, nonatomic) int rightStrokeOrder; // @synthesize rightStrokeOrder=_rightStrokeOrder;
@property(readonly, retain, nonatomic) TSDStroke *rightStroke; // @synthesize rightStroke=_rightStroke;
@property(readonly, nonatomic) BOOL definedRightStroke; // @synthesize definedRightStroke=_definedRightStroke;
@property(readonly, nonatomic) int bottomStrokeOrder; // @synthesize bottomStrokeOrder=_bottomStrokeOrder;
@property(readonly, retain, nonatomic) TSDStroke *bottomStroke; // @synthesize bottomStroke=_bottomStroke;
@property(readonly, nonatomic) BOOL definedBottomStroke; // @synthesize definedBottomStroke=_definedBottomStroke;
@property(readonly, nonatomic) int leftStrokeOrder; // @synthesize leftStrokeOrder=_leftStrokeOrder;
@property(readonly, retain, nonatomic) TSDStroke *leftStroke; // @synthesize leftStroke=_leftStroke;
@property(readonly, nonatomic) BOOL definedLeftStroke; // @synthesize definedLeftStroke=_definedLeftStroke;
@property(readonly, nonatomic) int topStrokeOrder; // @synthesize topStrokeOrder=_topStrokeOrder;
@property(readonly, retain, nonatomic) TSDStroke *topStroke; // @synthesize topStroke=_topStroke;
@property(readonly, nonatomic) BOOL definedTopStroke; // @synthesize definedTopStroke=_definedTopStroke;
- (void)didInitFromSOS;
- (id)objectByRemovingPropertiesInMap:(id)arg1 addingPropertiesInMap:(id)arg2 updateInverseResetPropertyMap:(id)arg3 updateInverseSetPropertyMap:(id)arg4;
- (void)saveToPropertyCommandMessage:(struct Message *)arg1 archiver:(id)arg2;
- (id)initFromPropertyCommandMessage:(const struct Message *)arg1 unarchiver:(id)arg2;
- (void)saveToMessage:(struct CellBorderArchive *)arg1 archiver:(id)arg2;
- (id)initFromMessage:(const struct CellBorderArchive *)arg1 unarchiver:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) BOOL isEmpty;
- (void)applyToCell:(id)arg1;
- (void)_clearRightStroke;
- (void)_clearBottomStroke;
- (void)_clearLeftStroke;
- (void)_clearTopStroke;
- (void)setRightStroke:(id)arg1 order:(int)arg2;
- (void)setBottomStroke:(id)arg1 order:(int)arg2;
- (void)setLeftStroke:(id)arg1 order:(int)arg2;
- (void)setTopStroke:(id)arg1 order:(int)arg2;
- (void)dealloc;
- (void)populateGSSPCellBorder:(id)arg1 withEncodeContext:(struct GSSPEncodeConversionContext *)arg2;
- (void)populateGSSPMessageInstance:(id)arg1 withContext:(struct GSSPEncodeConversionContext *)arg2;
- (id)newGsspMessageInstance;
- (id)gsspMessageInstance;
- (int)gsspSharingFlag;
- (id)initWithGSSPMessage:(id)arg1 andContext:(struct GSSPDecodeConversionContext *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

