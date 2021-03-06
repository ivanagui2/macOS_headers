//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TSDMediaCompatibilityConverter-Protocol.h"

@class AVAssetExportSession, NSError, NSMutableArray, NSString, QTMovieModernizer, TSDMovieCompatibilityChecker, TSPData, TSPDataBookmarkContext, TSUBasicProgress, TSUProgress, TSUProgressGroup;
@protocol OS_dispatch_source, OS_xpc_object;

@interface TSDMovieCompatibilityConverter : NSObject <TSDMediaCompatibilityConverter>
{
    TSPData *mMovieData;
    TSPData *mAuxiliaryMovieData;
    NSString *mAuxiliaryMovieDataFilename;
    TSPDataBookmarkContext *mMovieDataBookmarkContext;
    long long mInitialCompatibilityLevel;
    long long mDesiredCompatibilityLevel;
    QTMovieModernizer *mModernizer;
    NSObject<OS_xpc_object> *mConnection;
    NSObject<OS_xpc_object> *mProgressConnection;
    AVAssetExportSession *mExportSession;
    TSDMovieCompatibilityChecker *mCompatibilityChecker;
    TSUBasicProgress *mMovieDataBookmarkPreloadProgress;
    TSUBasicProgress *mAuxiliaryMovieDataBookmarkPreloadProgress;
    TSUBasicProgress *mMakePlayableProgress;
    TSUBasicProgress *mAllDevicesProgress;
    NSObject<OS_dispatch_source> *mAllDevicesProgressTimer;
    TSUProgressGroup *mProgress;
    NSMutableArray *mBookmarkPreloadProgressObjects;
    TSPData *mConvertedMovieData;
    NSError *mError;
    // Error parsing type: Ai, name: mIsCancelled
}

+ (id)p_uniquePathForConvertingData:(id)arg1 toType:(id)arg2;
+ (void)initialize;
@property(readonly, nonatomic) NSError *error; // @synthesize error=mError;
@property(readonly, nonatomic) TSPData *convertedMediaData; // @synthesize convertedMediaData=mConvertedMovieData;
@property(readonly, nonatomic) TSUProgress *progress; // @synthesize progress=mProgress;
- (void)p_preloadBookmarkDataForMovieData:(id)arg1 filename:(id)arg2 reportingToProgress:(id)arg3;
- (void)cancel;
- (void)p_finishConvertingWithConvertedMovieData:(id)arg1 error:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)p_errorFromMessageReply:(id)arg1;
- (id)p_convertedMovieDataFromMessageReply:(id)arg1 error:(id *)arg2;
- (void)p_handleProgressEvent:(id)arg1;
- (id)p_newCancelMessage;
- (id)p_newBeginConvertingMessageForData:(id)arg1 returningError:(id *)arg2;
- (void)p_convertMovieData:(id)arg1 usingXPCServiceWithCompletionHandler:(CDUnknownBlockType)arg2;
- (void)p_convertMovieData:(id)arg1 withPreset:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)p_convertMovieData:(id)arg1 fromPlayableByAVFoundationToAllDevicesWithCompletionHandler:(CDUnknownBlockType)arg2;
- (void)p_convertMovieData:(id)arg1 fromPlayableByAVFoundationToThisDeviceWithCompletionHandler:(CDUnknownBlockType)arg2;
- (void)p_convertMovieData:(id)arg1 fromInspectableToPlayableOnThisDeviceWithCompletionHandler:(CDUnknownBlockType)arg2;
- (void)convertMediaWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) long long mediaType;
- (void)dealloc;
- (id)init;
- (id)initWithMovieData:(id)arg1 desiredCompatibilityLevel:(long long)arg2 initialCompatibilityLevel:(long long)arg3;
- (id)initWithMovieData:(id)arg1 auxiliaryMovieData:(id)arg2 auxiliaryMovieDataFilename:(id)arg3 desiredCompatibilityLevel:(long long)arg4 initialCompatibilityLevel:(long long)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

