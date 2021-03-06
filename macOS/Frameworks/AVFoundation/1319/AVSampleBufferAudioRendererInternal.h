//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVMediaDataRequester, AVScheduledAudioParameters, AVWeakReference, NSError, NSString;

@interface AVSampleBufferAudioRendererInternal : NSObject
{
    NSString *audioOutputDeviceUniqueID;
    NSString *audioTimePitchAlgorithm;
    struct {
        struct OpaqueFigSimpleMutex *mutex;
        AVMediaDataRequester *requester;
    } mediaDataRequester;
    float rate;
    float volume;
    BOOL muted;
    AVScheduledAudioParameters *scheduledAudioParameters;
    struct OpaqueCMTimebase *readOnlyControlTimebase;
    AVWeakReference *weakReferenceToSynchronizer;
    AVWeakReference *weakReferenceToSelf;
    long long status;
    NSError *error;
    struct OpaqueFigSampleBufferAudioRenderer *figAudioRenderer;
}

@end

