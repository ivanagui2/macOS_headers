//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber;

__attribute__((visibility("hidden")))
@interface VCDefaults : NSObject
{
    int _forceCaptureWidth;
    int _forceCaptureHeight;
    int _forceEncodeWidth;
    int _forceEncodeHeight;
    int _forceEncodeFramerate;
    int _forceFramerate;
    int _forceBitrate;
    int _forceVideoPayload;
    int _forceRecvVideoPayload;
}

+ (double)getDoubleValueForKey:(struct __CFString *)arg1 defaultValue:(double)arg2;
+ (id)sharedInstance;
@property(readonly) BOOL momentsUserPreferenceEnabled;
@property(readonly) BOOL shouldDisplayVideoInfoLayer;
@property(readonly) int localWRMLinkType;
@property(readonly) NSNumber *enableiRATSuggestion;
@property(readonly) BOOL forceIPv6;
@property(readonly) int max2GRate;
@property(readonly) BOOL rateControlLogEnabled;
@property(readonly) BOOL rateControlDumpEnabled;
@property(readonly) BOOL cannedReplayEnabled;
@property(readonly) int videoStreamRateControlAlgorithm;
@property(readonly) BOOL videoStreamRateControlDumpEnabled;
@property(readonly) int forceVideoStreamRxMinBitrate;
@property(readonly) int forceVideoStreamRxMaxBitrate;
@property(readonly) int forceVideoStreamKeyFrameInterval;
@property(readonly) int forceVideoStreamFramerate;
@property(readonly) int forceVideoStreamTxMinBitrate;
@property(readonly) int forceVideoStreamTxMaxBitrate;
@property(readonly) int forceVideoStreamResolution;
@property(readonly) int forceRedMaxDelay;
@property(readonly) int forceRedNumPayloads;
@property(readonly) BOOL disableRed;
@property(readonly) int forceAudioChannelCount;
@property(readonly) BOOL forceUseFloat;
@property(readonly) int forceAudioPowerTimeInterval;
@property(readonly) float forceAudioPowerThreshold;
@property(readonly) int forceAudioPacketsPerBundle;
@property(readonly) int forceAudioBitrate;
@property(readonly) int forceAudioPayload;
@property(readonly) BOOL audioRecordingEnabled;
@property(readonly) int bundleAudio;
@property(readonly) BOOL disableVAD;
@property(readonly) BOOL canDecodeHD;
@property(readonly) int encodingScore;
@property(readonly) int extraPayloads;
@property(readonly) BOOL enableTxBitstreamDump;
@property(readonly) int enableTxSourceYuvDump;
@property(readonly) BOOL enableRecvBitstreamDump;
@property(readonly) BOOL enableVPBLogging;
@property(readonly) int enable2vuyCapture;
@property(readonly) BOOL enableBitstreamCapture;
@property(readonly) int forceRecvVideoPayload;
@property(readonly) int forceVideoPayload;
@property(readonly) int forceBitrate;
@property(readonly) int forceFramerate;
@property(readonly) int forceEncodeFramerate;
@property(readonly) int forceEncodeHeight;
@property(readonly) int forceEncodeWidth;
@property(readonly) int forceCaptureHeight;
@property(readonly) int forceCaptureWidth;
@property(readonly) BOOL forceHWI;
@property(readonly) BOOL forceScreenHWI;
- (id)autorelease;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)retain;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)allocWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

