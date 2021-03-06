//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapKit/MKAnnotation-Protocol.h>

@class NSColor, NSString, NSView, VKLabelMarker;

@interface MKLabelMarker : NSObject <MKAnnotation>
{
    VKLabelMarker *_vkLabelMarker;
    NSView *leftCalloutAccessoryView;
    NSColor *leftCalloutAccessoryViewBackgroundColor;
    NSView *rightCalloutAccessoryView;
    NSView *detailCalloutAccessoryView;
    id representedObject;
}

@property(retain, nonatomic) id representedObject; // @synthesize representedObject;
@property(retain, nonatomic) NSView *detailCalloutAccessoryView; // @synthesize detailCalloutAccessoryView;
@property(retain, nonatomic) NSView *rightCalloutAccessoryView; // @synthesize rightCalloutAccessoryView;
@property(retain, nonatomic) NSColor *leftCalloutAccessoryViewBackgroundColor; // @synthesize leftCalloutAccessoryViewBackgroundColor;
@property(retain, nonatomic) NSView *leftCalloutAccessoryView; // @synthesize leftCalloutAccessoryView;
- (void).cxx_destruct;
@property(readonly, nonatomic) CDStruct_c3b9c2ee coordinate;
@property(readonly) struct CGRect calloutAnchorRect;
- (id)debugAnchorPointString;
- (struct CGPoint)screenPointToScrollRelativeToWithCanvasSize:(struct CGSize)arg1 canvasScale:(double)arg2;
- (struct CGPoint)calloutAnchorPointWithCanvasSize:(struct CGSize)arg1 canvasScale:(double)arg2 snapToPixels:(BOOL)arg3;
@property(readonly, copy, nonatomic) NSString *title;
- (id)vkLabelMarker;
- (BOOL)isEqual:(id)arg1;
- (id)initWithLabelMarker:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSString *subtitle;
@property(readonly) Class superclass;

@end

