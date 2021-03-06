//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import "CNContactPickerDelegate-Protocol.h"
#import "CNPrivateContactPickerDelegate-Protocol.h"
#import "GEOResourceManifestTileGroupObserver-Protocol.h"
#import "MKMapViewDelegate-Protocol.h"
#import "MKQuickRouteManagerDelegate-Protocol.h"
#import "MKURLHandlerDelegate-Protocol.h"
#import "MapTypeSource-Protocol.h"
#import "NSGestureRecognizerDelegate-Protocol.h"
#import "NSMenuDelegate-Protocol.h"
#import "NSPopoverDelegate-Protocol.h"
#import "NSSharingServiceDelegate-Protocol.h"
#import "NSSharingServicePickerDelegate-Protocol.h"
#import "NSTextFieldDelegate-Protocol.h"
#import "NSToolbarDelegate-Protocol.h"
#import "NSWindowDelegate-Protocol.h"
#import "NVBannerViewDelegate-Protocol.h"
#import "NVCalloutButtonViewDelegate-Protocol.h"
#import "NVCoreLocationErrorPresenterDelegate-Protocol.h"
#import "NVDirectionsViewControllerDelegate-Protocol.h"
#import "NVQuickRouteButtonViewDelegate-Protocol.h"
#import "NVSuggesterDelegate-Protocol.h"

@class CNContactPicker, CNContactPickerSection, DefaultTransportTypeFinder, MKMapItem, MKMapView, MSPQuery, MapsActivity, NSArray, NSButton, NSDate, NSError, NSEvent, NSImmediateActionGestureRecognizer, NSLayoutConstraint, NSMenu, NSMenuItem, NSMutableArray, NSMutableSet, NSObject, NSOrderedSet, NSPopover, NSPressGestureRecognizer, NSSegmentedControl, NSSplitViewController, NSStackView, NSString, NSTimer, NVBannerView, NVBannersViewController, NVBookmarksViewController, NVCalloutButtonViewController, NVDetailsStandaloneWindow, NVMainWindowEmptyViewController, NVMapViewGestureRecognizer, NVMessageBezelView, NVModePopupToolbarItem, NVModeSegmentedControlToolbarItem, NVPlace, NVPlaceCardController, NVPopUpButton, NVQuickRouteButtonView, NVRAPNavigationController, NVRoute, NVRouteManager, NVSearchController, NVSearchField, NVSearchManager, NVSearchQuery, NVSideViewController, NVSuggester, NVToolbarItem, NVTopShadowView, NVTouchBarController, WeatherLocationDataProvider, WeatherMapPanningCoordinator, WeatherStackViewController, _MKQuickRouteManager;
@protocol OS_dispatch_group;

__attribute__((visibility("hidden")))
@interface NVMainWindowController : NSWindowController <CNContactPickerDelegate, CNPrivateContactPickerDelegate, MapTypeSource, MKMapViewDelegate, NSSharingServicePickerDelegate, NSSharingServiceDelegate, NSWindowDelegate, NSTextFieldDelegate, NSPopoverDelegate, NVCoreLocationErrorPresenterDelegate, GEOResourceManifestTileGroupObserver, NVQuickRouteButtonViewDelegate, NVCalloutButtonViewDelegate, NVBannerViewDelegate, MKQuickRouteManagerDelegate, NVDirectionsViewControllerDelegate, NVSuggesterDelegate, NSMenuDelegate, NSGestureRecognizerDelegate, NSToolbarDelegate, MKURLHandlerDelegate>
{
    MKMapView *mapView;
    NVSearchField *locationField;
    NSButton *shareButton;
    NSButton *bookmarksButton;
    NSButton *userLocationButton;
    NVMessageBezelView *messageBezelView;
    NVSearchController *searchController;
    NVToolbarItem *directionsToolItem;
    NVToolbarItem *_mapViewStyle;
    NSArray *_advisoryViewConstraints;
    NSLayoutConstraint *_advisoryLeadingConstraint;
    BOOL _advisoryViewIsVisible;
    NVBannerView *_bannerView;
    NSArray *_defaultBannerViewConstraints;
    NSLayoutConstraint *_bannerViewTopConstraint;
    NSLayoutConstraint *_bannerViewBottomConstraint;
    BOOL _showLabels;
    NVBookmarksViewController *bookmarksViewController;
    NVBookmarksViewController *recentsViewController;
    NVSearchManager *_searchManager;
    NVRouteManager *_routeManager;
    NVTopShadowView *_topShadowView;
    NSPopover *_currentPopover;
    NSMutableArray *_searchSuggestionResults;
    BOOL _needsToCenterOnUserLocationUpdate;
    BOOL _showLocationErrors;
    NSMenu *_contextualMenu;
    CNContactPickerSection *_recentsSection;
    CNContactPickerSection *_bookmarksSection;
    BOOL _bookmarksInUse;
    NSMutableArray *_postTileLoadingBlocks;
    BOOL _isRenderingMap;
    NVPlaceCardController *_infoCardController;
    NSString *_bezelMessage;
    NSError *_bezelError;
    BOOL _mapLoadedWithoutError;
    BOOL _searchFieldIsFirstReponder;
    double _detailCardClosedTimeIntervalSinceReferenceDate;
    NSDate *_dateSinceLastMapViewportChange;
    NSDate *_dateSinceMapWindowBecameKey;
    unsigned long long _previousNonTransitMapType;
    BOOL _urlHandlerHasAlreadySetRegion;
    BOOL _hidesAllUIOnMap;
    BOOL _showingTransitAvailability;
    BOOL _showingHybridAvailability;
    NVSearchQuery *_lastQuery;
    BOOL _displayingLocationErrorMessage;
    int _currentPickerMode;
    NVCalloutButtonViewController *_flyoverTourButtonViewController;
    BOOL _flyoverTourRunning;
    NSString *_flyoverTourLabel;
    unsigned long long _flyoverTourStartMode;
    NSEvent *_flyoverAnnouncementEventMonitor;
    NVPlace *_currentLocation;
    struct CLLocationCoordinate2D _geocodedCoordinate;
    double _geocodedCoordinateTime;
    NSObject<OS_dispatch_group> *_menuLabelMarkerResolveGroup;
    NVMapViewGestureRecognizer *_longPressGesture;
    NSImmediateActionGestureRecognizer *_immediateActionGesture;
    NSPressGestureRecognizer *_longClickGestureRecognizer;
    _MKQuickRouteManager *_quickRouteManager;
    unsigned long long _preferredDirectionsTypeInStandardMapMode;
    unsigned int _screenDimAssertionID;
    NSTimer *_screenDimTimer;
    BOOL _flyoverTourMoving;
    NSString *_contentProvider;
    BOOL _isToolbarShowingSegmentedControl;
    NVModeSegmentedControlToolbarItem *_toolbarModeSegmentedControlItem;
    NVModePopupToolbarItem *_toolbarModePopUpItem;
    NSSegmentedControl *_mapTypeSegmentedControl;
    NVPopUpButton *_mapTypePopUpButton;
    NSMenuItem *_mapTypeMenu;
    NSMenuItem *_mapTypeMenuForSegmentedControl;
    NSMutableArray *_flyoverTourCompletionBlocks;
    CDUnknownBlockType _onBannerItemDidChange;
    BOOL _retainStateOnNextNonSelectingClick;
    double _previousTitleAreaHeight;
    NVTouchBarController *_touchBarController;
    NVQuickRouteButtonView *_quickRouteButtonForTouchBar;
    _MKQuickRouteManager *_quickRouteManagerForTouchBar;
    MSPQuery *_favorites;
    MSPQuery *_history;
    NVSuggester *_locationFieldSuggester;
    BOOL _showsCloseButtonInBezel;
    BOOL _dropsPinOnSearch;
    BOOL _sharing;
    BOOL _trafficEnabled;
    NVPlace *_selectedPinPlace;
    NSOrderedSet *displayedPinPlaces;
    CNContactPicker *bookmarksPopoverController;
    NVSideViewController *sideViewController;
    NVPlace *_droppedPinPlace;
    NSSplitViewController *_splitViewController;
    NVRAPNavigationController *_currentReportAProblemController;
    NVDetailsStandaloneWindow *_detachedInfoCardKeyWindow;
    NSOrderedSet *_pinPlacesToPrint;
    long long _mapDisplayStyle;
    NVPlace *_selectedSearchPlaceToAnimate;
    NSMutableSet *_activeTrackingAreas;
    NVRoute *_bezelMessageRoute;
    unsigned long long _availabilityMessageUpdateCount;
    NSButton *_directionsToggleButton;
    MKMapItem *_windowTitleMapItem;
    DefaultTransportTypeFinder *_defaultTransportTypeFinder;
    NSMutableArray *_annotationProviders;
    WeatherLocationDataProvider *_weatherLocationDataProvider;
    WeatherMapPanningCoordinator *_weatherMapPanningCoordinator;
    WeatherStackViewController *_weatherStackViewController;
    NVMainWindowEmptyViewController *_mainAreaEmptyViewController;
    NSStackView *_bannersStackView;
    NVBannersViewController *_bannersViewController;
}

+ (id)keyPathsForValuesAffectingDisplayedPinsVisible;
+ (id)keyPathsForValuesAffectingSelectedPinVisible;
+ (id)keyPathsForValuesAffectingDroppedPinVisible;
+ (void)updateSearchQuerySubtitle:(id)arg1 historySearchEntryTemplate:(id)arg2 inRect:(CDStruct_02837cd9)arg3 center:(struct CLLocationCoordinate2D)arg4;
+ (id)_windowTitleFromMapItem:(id)arg1 visibleMapRect:(CDStruct_02837cd9)arg2;
+ (id)keyPathsForValuesAffectingIsMapViewCenteredOnUserLocation;
+ (id)keyPathsForValuesAffectingCanRemoveFromBookmarks;
+ (id)keyPathsForValuesAffectingCanAddToBookmarks;
+ (BOOL)isLocationServicesPossiblyAvailable;
+ (id)keyPathsForValuesAffectingDirectionsViewVisible;
+ (id)keyPathsForValuesAffectingCanToggleTraffic;
+ (id)keyPathsForValuesAffectingCanResizeLabels;
+ (id)keyPathsForValuesAffectingCanLocalizeLabels;
+ (id)keyPathsForValuesAffectingUseLargeTextSize;
+ (id)keyPathsForValuesAffectingHideLabelsMenuItemVisible;
+ (id)keyPathsForValuesAffectingSelectedMapModeIndex;
@property(retain, nonatomic) NVBannersViewController *bannersViewController; // @synthesize bannersViewController=_bannersViewController;
@property(retain, nonatomic) NSStackView *bannersStackView; // @synthesize bannersStackView=_bannersStackView;
@property(retain, nonatomic) NVMainWindowEmptyViewController *mainAreaEmptyViewController; // @synthesize mainAreaEmptyViewController=_mainAreaEmptyViewController;
@property(retain, nonatomic) WeatherStackViewController *weatherStackViewController; // @synthesize weatherStackViewController=_weatherStackViewController;
@property(retain, nonatomic) WeatherMapPanningCoordinator *weatherMapPanningCoordinator; // @synthesize weatherMapPanningCoordinator=_weatherMapPanningCoordinator;
@property(retain, nonatomic) WeatherLocationDataProvider *weatherLocationDataProvider; // @synthesize weatherLocationDataProvider=_weatherLocationDataProvider;
@property(readonly, nonatomic) NSMutableArray *annotationProviders; // @synthesize annotationProviders=_annotationProviders;
@property(retain, nonatomic) DefaultTransportTypeFinder *defaultTransportTypeFinder; // @synthesize defaultTransportTypeFinder=_defaultTransportTypeFinder;
@property(nonatomic) BOOL trafficEnabled; // @synthesize trafficEnabled=_trafficEnabled;
@property(retain, nonatomic) MKMapItem *windowTitleMapItem; // @synthesize windowTitleMapItem=_windowTitleMapItem;
@property(nonatomic) __weak NSButton *directionsToggleButton; // @synthesize directionsToggleButton=_directionsToggleButton;
@property(nonatomic) unsigned long long availabilityMessageUpdateCount; // @synthesize availabilityMessageUpdateCount=_availabilityMessageUpdateCount;
@property(nonatomic) __weak NVRoute *bezelMessageRoute; // @synthesize bezelMessageRoute=_bezelMessageRoute;
@property(retain) NSMutableSet *activeTrackingAreas; // @synthesize activeTrackingAreas=_activeTrackingAreas;
@property(retain) NVPlace *selectedSearchPlaceToAnimate; // @synthesize selectedSearchPlaceToAnimate=_selectedSearchPlaceToAnimate;
@property __weak NVToolbarItem *mapViewStyle; // @synthesize mapViewStyle=_mapViewStyle;
@property(readonly, nonatomic) long long mapDisplayStyle; // @synthesize mapDisplayStyle=_mapDisplayStyle;
@property(retain, nonatomic) NSOrderedSet *pinPlacesToPrint; // @synthesize pinPlacesToPrint=_pinPlacesToPrint;
@property(nonatomic) __weak NVDetailsStandaloneWindow *detachedInfoCardKeyWindow; // @synthesize detachedInfoCardKeyWindow=_detachedInfoCardKeyWindow;
@property(retain, nonatomic) NVRAPNavigationController *currentReportAProblemController; // @synthesize currentReportAProblemController=_currentReportAProblemController;
@property(getter=isSharing) BOOL sharing; // @synthesize sharing=_sharing;
@property BOOL dropsPinOnSearch; // @synthesize dropsPinOnSearch=_dropsPinOnSearch;
@property __weak NSSplitViewController *splitViewController; // @synthesize splitViewController=_splitViewController;
@property(retain) NSDate *dateSinceMapWindowBecameKey; // @synthesize dateSinceMapWindowBecameKey=_dateSinceMapWindowBecameKey;
@property(retain) NSDate *dateSinceLastMapViewportChange; // @synthesize dateSinceLastMapViewportChange=_dateSinceLastMapViewportChange;
@property(retain) NVPlace *droppedPinPlace; // @synthesize droppedPinPlace=_droppedPinPlace;
@property(nonatomic) BOOL showsCloseButtonInBezel; // @synthesize showsCloseButtonInBezel=_showsCloseButtonInBezel;
@property(nonatomic) BOOL hidesAllUIOnMap; // @synthesize hidesAllUIOnMap=_hidesAllUIOnMap;
@property(readonly, nonatomic) NVSearchField *locationField; // @synthesize locationField;
@property(retain, nonatomic) NSError *bezelError; // @synthesize bezelError=_bezelError;
@property(copy, nonatomic) NSString *bezelMessage; // @synthesize bezelMessage=_bezelMessage;
@property __weak NVSideViewController *sideViewController; // @synthesize sideViewController;
@property(readonly) NSButton *bookmarksButton; // @synthesize bookmarksButton;
@property(retain) CNContactPicker *bookmarksPopoverController; // @synthesize bookmarksPopoverController;
@property(copy) NSOrderedSet *displayedPinPlaces; // @synthesize displayedPinPlaces;
@property(readonly) NVSearchController *searchController; // @synthesize searchController;
@property(readonly) MKMapView *mapView; // @synthesize mapView;
- (void).cxx_destruct;
- (void)_updateTouchBar;
- (void)_configureTouchBarItems;
- (id)touchBarController:(id)arg1 sharingControllerForPlace:(id)arg2;
- (void)touchBarController:(id)arg1 didSelectCategory:(id)arg2;
- (void)touchBarController:(id)arg1 exitSelectionMode:(id)arg2;
- (void)touchBarController:(id)arg1 exitDirectionsMode:(id)arg2;
- (BOOL)touchBarController:(id)arg1 isPlaceInFavorites:(id)arg2;
- (void)touchBarController:(id)arg1 didSelectItemAtIndex:(long long)arg2 fromSearchCompletions:(id)arg3;
- (void)touchBarController:(id)arg1 togglePlaceCardForSelectedPlace:(id)arg2;
- (BOOL)touchBarController:(id)arg1 isPlaceCardShownForSelectedPlace:(id)arg2;
- (void)touchBarController:(id)arg1 openHomepageForSelectedPlace:(id)arg2;
- (void)touchBarController:(id)arg1 removeSelectedPlaceFromFavorites:(id)arg2;
- (void)touchBarController:(id)arg1 addSelectedPlaceToFavorites:(id)arg2;
- (void)touchBarController:(id)arg1 callSelectedPlace:(id)arg2;
- (void)touchBarController:(id)arg1 directionsToPlace:(id)arg2;
- (void)touchBarController:(id)arg1 toggleFocusSearchField:(id)arg2;
- (void)touchBarController:(id)arg1 centerOnUserLocation:(id)arg2;
- (void)touchBarController:(id)arg1 didSelectDirectionsTransportTypeAtIndex:(long long)arg2;
- (id)makeTouchBar;
- (id)_showCurrentLocatonButtonLabel;
- (void)addAnnotationProvider:(id)arg1;
- (void)updatePreferredDirectionsTransportType:(unsigned long long)arg1;
- (BOOL)quickRouteShouldIncludeTransitWhenNotPreferredTransportType;
- (BOOL)quickRouteShouldOnlyUseAutomobile;
- (void)immediateActionRecognizerDidCompleteAnimation:(id)arg1;
- (void)immediateActionRecognizerDidCancelAnimation:(id)arg1;
- (void)immediateActionRecognizerWillBeginAnimation:(id)arg1;
- (void)immediateActionRecognizerWillPrepare:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldAttemptToRecognizeWithEvent:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (BOOL)canDropPinOnLabelMarker:(id)arg1;
- (BOOL)canSelectLabelMarkerWithImmediateAction:(id)arg1;
- (void)_cancelImmediateActionGesture;
- (id)_menuItemsForLabelMarker:(id)arg1;
- (BOOL)shouldAcceptGestureAtPoint:(struct CGPoint)arg1;
- (void)openWebsiteForPlace:(id)arg1;
- (void)callPlace:(id)arg1;
- (void)markerCallPlace:(id)arg1;
- (void)markerShowPlaceCard:(id)arg1;
- (void)removePlaceFromFavorites:(id)arg1;
- (BOOL)isPlaceInFavorites:(id)arg1;
- (void)markerRemoveFromFavorites:(id)arg1;
- (void)addPlaceToFavorites:(id)arg1;
- (void)markerAddToFavorites:(id)arg1;
- (void)markerDirections:(id)arg1;
- (void)immediateActionDropPin:(id)arg1;
- (id)_popoverForIncidents:(id)arg1;
- (void)_showIncidents:(id)arg1 inPopoverRelativeToRect:(struct CGRect)arg2 ofView:(id)arg3;
- (void)showTransitIncidents:(id)arg1 forPlace:(id)arg2;
- (void)_updateAvailabilityAdvisory;
- (void)_setShowingHybridAvailabilityAdvisory:(BOOL)arg1;
- (void)_setShowingTransitAvailabilityAdvisory:(BOOL)arg1;
- (void)resetMapApplicationState;
@property(nonatomic) int mapApplicationState;
- (void)updateFlyoverTourControlView;
- (void)endFlyoverTour:(id)arg1;
- (void)_stopFlyoverTourAnimationCompletion:(CDUnknownBlockType)arg1;
- (void)_stopFlyoverTourAnimation;
- (void)mapView:(id)arg1 flyoverTourLabelDidChange:(id)arg2;
- (void)mapView:(id)arg1 didStopFlyoverTourCompleted:(BOOL)arg2;
- (void)mapViewWillStartFlyoverTour:(id)arg1;
- (void)mapViewCompass3DButtonTapped:(id)arg1;
- (BOOL)mapViewCompass3DButtonEnabled:(id)arg1;
- (void)mapView:(id)arg1 didBecomePitched:(BOOL)arg2;
- (void)stopScreenDimTimer;
- (void)tourScreenDimTimerFired:(id)arg1;
- (BOOL)ignoreRecentsSearchesForSuggester:(id)arg1;
- (id)additionalPlacesForSuggester:(id)arg1;
- (void)toggleScale:(id)arg1;
- (BOOL)showsScale;
- (void)_locationManagerApprovalDidChange:(id)arg1;
- (void)snapMapToNorth:(id)arg1;
- (void)centerMapToUserLocation;
- (BOOL)isCurrentLocationVisible;
- (BOOL)enableShowsUserLocationIfPossible;
@property(readonly, getter=areDisplayedPinsVisible) BOOL displayedPinsVisible;
@property(readonly, getter=isSelectedPinVisible) BOOL selectedPinVisible;
@property(readonly, getter=isDroppedPinVisible) BOOL droppedPinVisible;
- (BOOL)_isAnnotationVisible:(id)arg1;
- (void)toggleDropPin:(id)arg1;
- (void)deleteDroppedPin:(id)arg1;
- (void)bannerView:(id)arg1 didChangeSelectedBannerItem:(long long)arg2;
- (void)bannerViewButtonWasClicked:(id)arg1;
- (void)_hideBannerViewAnimated:(BOOL)arg1;
- (void)_presentBannerViewAnimated:(BOOL)arg1 onBottom:(BOOL)arg2;
- (void)_presentBannerViewAnimated:(BOOL)arg1 loading:(BOOL)arg2 withItems:(id)arg3 button:(id)arg4 userInfo:(id)arg5;
- (void)presentAnnouncementForFlyover:(id)arg1;
- (id)_defaultBannerViewConstraints;
- (void)_updateBannerViewTopConstraintForFullScreen:(BOOL)arg1;
- (id)_bannerViewConstraintsForBottom:(BOOL)arg1;
- (id)_bannerView;
- (void)showRPFixDetailsForPlace:(id)arg1;
- (void)presentRPProblemResolution:(id)arg1;
- (void)presentNotificationWindowForDetails:(id)arg1;
- (void)printMap:(id)arg1;
- (void)printOrExport:(BOOL)arg1 optionalPath:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) unsigned long long printTypeForCurrentState;
- (void)updatePinPlacesToPrint;
- (void)_newWindowAtCursorLocation:(BOOL)arg1;
- (void)newWindowAtCursorLocation;
- (void)newWindowTabAtCursorLocation;
- (void)getDirectionsToDroppedPin;
- (void)getDirectionsToCursorLocation;
- (void)dropPinAtCursorLocation;
- (id)_dropPinAtCursorLocationAnimated:(BOOL)arg1;
- (void)firePostTileLoadingBlocks;
- (void)schedulePostTileLoadingBlock:(CDUnknownBlockType)arg1;
- (struct CGRect)visibleBoundsForMapView:(id)arg1;
- (void)mapView:(id)arg1 annotationView:(id)arg2 didChangeDragState:(unsigned long long)arg3 fromOldState:(unsigned long long)arg4;
- (id)mapView:(id)arg1 menuForEvent:(id)arg2;
- (unsigned long long)_contextualMenuTypeForMapView:(id)arg1 atPoint:(struct CGPoint)arg2;
- (void)dropPinAtCoordinate:(struct CLLocationCoordinate2D)arg1;
- (void)coreLocationErrorPresenter:(id)arg1 failedRecoveringFromError:(id)arg2;
- (void)mapView:(id)arg1 didFailToLocateUserWithError:(id)arg2;
- (void)mapView:(id)arg1 didUpdateUserLocation:(id)arg2;
- (void)mapViewDidStopLocatingUser:(id)arg1;
- (void)mapViewWillStartLocatingUser:(id)arg1;
- (id)mapView:(id)arg1 rendererForOverlay:(id)arg2;
- (void)mapView:(id)arg1 didDeselectLabelMarker:(id)arg2;
- (void)mapView:(id)arg1 willSelectLabelMarker:(id)arg2;
- (id)_ratingViewWithPlace:(id)arg1;
- (id)_transitViewWithPlace:(id)arg1;
- (id)_transitAccessViewWithLabelMarker:(id)arg1;
- (id)_accessoryViewForPlace:(id)arg1;
- (id)_accessoryViewForLabelMarker:(id)arg1;
- (BOOL)mapView:(id)arg1 shouldSelectAnnotation:(id)arg2;
- (BOOL)mapView:(id)arg1 shouldSelectLabelMarker:(id)arg2;
- (BOOL)detailInfoCardWasJustClosed;
- (void)mapView:(id)arg1 didDeselectAnnotationView:(id)arg2;
@property(retain) NVPlace *selectedPinPlace; // @synthesize selectedPinPlace=_selectedPinPlace;
- (void)mapView:(id)arg1 didSelectAnnotationView:(id)arg2;
- (void)addQuickRouteManagerForAnnotationView:(id)arg1;
- (void)updateLeftCalloutAccessoryView;
- (void)mapView:(id)arg1 didAddAnnotationViews:(id)arg2;
- (void)_notePlaceChanged:(id)arg1;
- (void)calloutButtonViewClicked:(id)arg1;
- (void)quickRouteButtonViewClicked:(id)arg1;
- (id)makeInfoButton;
- (id)_calloutButtonViewWithType:(long long)arg1;
- (id)transitSelectionButton;
- (id)flyoverTourButton;
- (void)updateQuickRouteManagerTransitOptions;
- (void)updateQuickRouteManagerOrigin;
- (id)makeQuickRouteButton;
- (void)_geocodeIfNecessary:(id)arg1;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (void)mapViewDidChangeVisibleRegion:(id)arg1;
- (void)_handleLongClick:(id)arg1;
- (void)_handleNonselectingClickOnMap:(id)arg1;
- (void)_updateGeometryInfo;
- (void)mapView:(id)arg1 didChangeMapType:(unsigned long long)arg2;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(BOOL)arg2;
- (void)requestDiscreteGraphicsTimeExtension;
- (void)mapView:(id)arg1 regionWillChangeAnimated:(BOOL)arg2;
- (void)mapViewDidFailLoadingMap:(id)arg1 withError:(id)arg2;
- (void)mapViewDidFinishRenderingMap:(id)arg1 fullyRendered:(BOOL)arg2;
- (void)mapViewWillStartRenderingMap:(id)arg1;
- (BOOL)mapView:(id)arg1 gesturesShouldAttemptToRecognizeWithEvent:(id)arg2;
- (void)refreshWindowTitleAfterShortDelay;
- (id)bezelMessageForError:(id)arg1;
- (id)checkForInternetError:(id)arg1;
- (void)updateWindowTitle;
@property(readonly, nonatomic) NSString *fallbackWindowTitle;
- (void)sharingService:(id)arg1 didFailToShareItems:(id)arg2 error:(id)arg3;
- (void)sharingService:(id)arg1 didShareItems:(id)arg2;
- (void)sharingService:(id)arg1 willShareItems:(id)arg2;
- (id)sharingService:(id)arg1 sourceWindowForShareItems:(id)arg2 sharingContentScope:(long long *)arg3;
- (id)appSnapshotForPushToPhone;
- (id)directionsSnapshotImageForSharing;
- (id)mapViewSnapshotImageForSharing;
- (id)sharingService:(id)arg1 transitionImageForShareItem:(id)arg2 contentRect:(struct CGRect *)arg3;
- (struct CGRect)sharingService:(id)arg1 sourceFrameOnScreenForShareItem:(id)arg2;
- (id)sharingService:(id)arg1 sharedItemsFromProposedItems:(id)arg2;
- (BOOL)isFullscreen;
- (void)windowDidExitFullScreen:(id)arg1;
- (void)windowDidResize:(id)arg1;
- (struct CGSize)windowWillResize:(id)arg1 toSize:(struct CGSize)arg2;
- (void)windowWillExitFullScreen:(id)arg1;
- (void)windowDidEnterFullScreen:(id)arg1;
- (void)windowWillEnterFullScreen:(id)arg1;
- (unsigned long long)window:(id)arg1 willUseFullScreenPresentationOptions:(unsigned long long)arg2;
- (void)copyAirDropLink:(id)arg1;
- (void)copyLink:(id)arg1;
- (void)copy:(id)arg1;
- (void)_copyMapSnapshot:(BOOL)arg1 link:(BOOL)arg2;
- (BOOL)reportAProblemWithPlace:(id)arg1;
- (void)createReportAProblemContextWithPlace:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)reportAProblemEmailPreferences:(id)arg1;
- (void)reportAProblem:(id)arg1;
- (void)centerOnUserLocation:(id)arg1;
- (BOOL)isMapViewCenteredOnUserLocation;
- (void)focusSearchField:(id)arg1;
- (void)performFindPanelAction:(id)arg1;
- (id)infoCardController;
- (void)infoCardControllerDidClose:(id)arg1;
- (void)popoverDidClose:(id)arg1;
- (void)popoverWillClose:(id)arg1;
- (void)popoverDidShow:(id)arg1;
- (void)showTrafficIncident:(id)arg1;
- (void)showInfoCardForPlace:(id)arg1 transitLineItem:(id)arg2 marker:(id)arg3 annotationView:(id)arg4;
- (void)showInfoCard:(id)arg1;
- (void)showLocations:(id)arg1;
- (void)contactPickerDidClose:(id)arg1;
- (void)contactPicker:(id)arg1 didShowSectionWithIdentifier:(id)arg2;
- (void)contactPicker:(id)arg1 didSearchForString:(id)arg2;
- (void)contactPicker:(id)arg1 didSelectContactProperty:(id)arg2;
- (void)dropPin:(id)arg1;
- (void)share:(id)arg1;
- (id)configuredSharingController;
- (BOOL)testBookmarkingForAddition:(BOOL)arg1;
- (void)currentSharingObject:(id *)arg1 orTrip:(id *)arg2 orRegion:(CDStruct_02837cd9 *)arg3;
- (void)_updateRoutePickingBanners;
- (void)selectedRouteChanged;
- (void)toggleTraffic:(id)arg1;
- (void)setTrafficEnabled:(BOOL)arg1 allowMapModeChange:(BOOL)arg2;
- (void)toggleDirections:(id)arg1;
- (void)updateToggleDirectionsStateIfNecessary;
- (void)directionsViewController:(id)arg1 userChangedDirectionsTransportType:(unsigned long long)arg2;
- (void)mapModeChanged:(id)arg1;
- (void)closeBezelMessage:(id)arg1;
- (void)flashBezelMessage:(id)arg1 duration:(double)arg2;
- (void)updateBezelViewConstraints;
- (void)setBezelMessage:(id)arg1 error:(id)arg2 showsCloseButton:(BOOL)arg3 textAlignment:(unsigned long long)arg4;
- (void)setBezelMessage:(id)arg1 error:(id)arg2 showsCloseButton:(BOOL)arg3;
- (void)updateRouteBezelIfNecessary;
- (void)setBezelMessageForCurrentRoute:(id)arg1 error:(id)arg2 showsCloseButton:(BOOL)arg3;
- (void)removeFromBookmarks:(id)arg1;
- (void)addToBookmarks:(id)arg1;
- (BOOL)canRemoveFromBookmarks;
- (BOOL)canAddToBookmarks;
- (id)_history;
- (id)_favorites;
- (BOOL)_isInTransitLineSelection;
- (void)_showBannerForTransitLineWithNames:(id)arg1;
- (void)_showBannerForLoadingTransitLines;
- (id)_transitLineSelectionBannerButtonText;
- (void)showTransitLine:(id)arg1 forPlace:(id)arg2;
- (void)showPlaceCardForConnection:(id)arg1;
- (void)showFlyoverTourForSearchResult:(id)arg1;
- (void)showContact:(id)arg1 address:(id)arg2;
- (void)showPlaceOrTrip:(id)arg1;
- (void)showCategory:(id)arg1;
- (void)showPlaces:(id)arg1 animated:(BOOL)arg2 allowToChangeRegion:(BOOL)arg3 removeOtherPlaceAnnotations:(BOOL)arg4 placeToSelect:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)showPlaces:(id)arg1 animated:(BOOL)arg2 allowToChangeRegion:(BOOL)arg3 defaultMapRect:(CDStruct_02837cd9)arg4 removeOtherPlaceAnnotations:(BOOL)arg5 placeToSelect:(id)arg6 ignoreSearchField:(BOOL)arg7 completion:(CDUnknownBlockType)arg8;
- (void)showPlaces:(id)arg1 animated:(BOOL)arg2 allowToChangeRegion:(BOOL)arg3 removeOtherPlaceAnnotations:(BOOL)arg4 placeToSelect:(id)arg5 ignoreSearchField:(BOOL)arg6 completion:(CDUnknownBlockType)arg7;
- (void)showPlace:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)changeRegionToDisplayResultsInMapRect:(CDStruct_02837cd9)arg1 adjustRegion:(BOOL)arg2 avoidChangingRegion:(BOOL)arg3 animated:(BOOL)arg4 completion:(CDUnknownBlockType)arg5;
- (BOOL)visibleMapRectIsSuitableForMapRect:(CDStruct_02837cd9)arg1;
- (void)displaySearchPlaces:(id)arg1 searchQuery:(id)arg2 warnIfNone:(BOOL)arg3;
- (void)removeDroppedPinPlace;
- (void)clearDroppedPinPlace;
- (void)addDroppedPinPlace:(id)arg1 animated:(BOOL)arg2 selectAnnotation:(BOOL)arg3;
- (void)_searchString:(id)arg1 category:(id)arg2 completion:(id)arg3 query:(id)arg4 animated:(BOOL)arg5 source:(int)arg6 externalQuery:(BOOL)arg7;
- (void)_searchString:(id)arg1 completion:(id)arg2 query:(id)arg3 animated:(BOOL)arg4 source:(int)arg5 externalQuery:(BOOL)arg6;
- (void)_searchString:(id)arg1 completion:(id)arg2 query:(id)arg3 animated:(BOOL)arg4 source:(int)arg5;
- (void)startSearchForQuery:(id)arg1 animated:(BOOL)arg2 source:(int)arg3 externalQuery:(BOOL)arg4;
- (void)startSearchForQuery:(id)arg1 animated:(BOOL)arg2 source:(int)arg3;
- (void)startSearchForString:(id)arg1 animated:(BOOL)arg2 source:(int)arg3;
- (void)clearSearchResultsAndDirections;
- (void)updateForTransportTypePreferenceDidChange;
- (void)clearRoutes;
- (void)clearSearchResultsKeepingSearchField:(BOOL)arg1;
- (void)clearSearchResultsAndDirectionsKeepingSearchField:(BOOL)arg1;
- (CDStruct_02837cd9)searchMapRect;
- (void)_updateEdgeInsets;
@property(readonly) NVRouteManager *routeManager;
- (id)searchManager;
- (BOOL)dropTargetSearchField:(id)arg1 performDragOperation:(id)arg2;
- (id)acceptedDraggedElementUTIsForDropTargetSearchField:(id)arg1;
- (BOOL)performSearchWithSuggestion:(id)arg1;
- (void)locationChanged:(id)arg1 withSuggestion:(id)arg2;
- (void)locationChanged:(id)arg1;
- (BOOL)isRidesharingEnabled;
@property(readonly, nonatomic) int displayedMapType;
- (BOOL)location:(id)arg1 isNearDestination:(id)arg2;
- (void)showDirectionsFromString:(id)arg1 toString:(id)arg2 directionMode:(unsigned long long)arg3 fromURL:(BOOL)arg4;
- (void)showDirectionsFrom:(id)arg1 to:(id)arg2 directionMode:(unsigned long long)arg3 timePoint:(id)arg4 cleanupSearchResults:(BOOL)arg5;
- (void)showDirectionsTo:(id)arg1 directionMode:(unsigned long long)arg2 cleanupSearchResults:(BOOL)arg3;
- (void)showDirectionsFrom:(id)arg1 directionMode:(unsigned long long)arg2 cleanupSearchResults:(BOOL)arg3;
- (void)showDirectionsFrom:(id)arg1 to:(id)arg2 cleanupSearchResults:(BOOL)arg3;
- (void)showDirectionsTo:(id)arg1 cleanupSearchResults:(BOOL)arg2;
- (void)showDirectionsFrom:(id)arg1 cleanupSearchResults:(BOOL)arg2;
- (id)_defaultDestinationForOrigin:(id)arg1;
- (id)_defaultOriginForDestination:(id)arg1;
- (id)relevantPlaceToRouteWithPlace:(id)arg1;
@property(readonly, getter=isDirectionsViewVisible) BOOL directionsViewVisible;
- (BOOL)URLHandler:(id)arg1 showFavoritesType:(long long)arg2;
- (BOOL)URLHandler:(id)arg1 showLineWithID:(unsigned long long)arg2 name:(id)arg3;
- (BOOL)URLHandler:(id)arg1 setContentProvider:(id)arg2;
- (BOOL)URLHandler:(id)arg1 setShowTraffic:(BOOL)arg2;
- (BOOL)URLHandler:(id)arg1 showMapWithoutPinAt:(struct CLLocationCoordinate2D)arg2;
- (BOOL)URLHandler:(id)arg1 search:(id)arg2 at:(struct CLLocationCoordinate2D)arg3;
- (BOOL)URLHandler:(id)arg1 showMapItem:(id)arg2 label:(id)arg3 at:(struct CLLocationCoordinate2D)arg4;
- (BOOL)URLHandler:(id)arg1 showExternalBusinessID:(id)arg2 ofContentProvider:(id)arg3;
- (BOOL)URLHandler:(id)arg1 showMUID:(unsigned long long)arg2 resultProviderID:(int)arg3 coordinate:(struct CLLocationCoordinate2D)arg4 query:(id)arg5;
- (BOOL)URLHandler:(id)arg1 showDirectionsFrom:(id)arg2 to:(id)arg3 using:(unsigned long long)arg4 muid:(unsigned long long)arg5 providerId:(int)arg6 showLabel:(id)arg7;
- (BOOL)URLHandler:(id)arg1 showDirectionsFrom:(id)arg2 to:(id)arg3 using:(unsigned long long)arg4;
- (BOOL)URLHandler:(id)arg1 showAddress:(id)arg2 label:(id)arg3;
- (BOOL)URLHandler:(id)arg1 setRegionWithCenter:(struct CLLocationCoordinate2D)arg2;
- (BOOL)URLHandler:(id)arg1 setRegionWithCenter:(struct CLLocationCoordinate2D)arg2 zoomLevel:(double)arg3;
- (BOOL)URLHandler:(id)arg1 setRegion:(CDStruct_b7cb895d)arg2;
- (BOOL)URLHandler:(id)arg1 setMapType:(unsigned long long)arg2;
- (BOOL)URLHandler:(id)arg1 setSchemeForCapture:(id)arg2 sourceApplication:(id)arg3 isLaunchedFromTTL:(BOOL)arg4 ttlEventTime:(id)arg5;
- (BOOL)URLHandler:(id)arg1 launchWithOptions:(id)arg2;
- (BOOL)URLHandler:(id)arg1 launchIntoSearchWithMapItems:(id)arg2 options:(id)arg3 originIsActiveWatch:(BOOL)arg4;
- (BOOL)URLHandler:(id)arg1 launchIntoShowMapItems:(id)arg2 options:(id)arg3 originIsActiveWatch:(BOOL)arg4;
- (BOOL)URLHandler:(id)arg1 launchIntoDirectionsWithMapItems:(id)arg2 options:(id)arg3 originIsActiveWatch:(BOOL)arg4;
- (BOOL)URLHandler:(id)arg1 launchIntoRAPForMapItem:(id)arg2 options:(id)arg3 originIsActiveWatch:(BOOL)arg4;
- (CDStruct_02837cd9)mapRectForLaunchOptions:(id)arg1 places:(id)arg2;
- (void)changeViewPortWithLaunchOptions:(id)arg1 places:(id)arg2;
- (CDStruct_b7cb895d)regionForCoordinate:(struct CLLocationCoordinate2D)arg1;
- (id)makeSearchContextForSource:(int)arg1 field:(id)arg2;
- (id)makeSearchContextForMapRect:(CDStruct_02837cd9)arg1 source:(int)arg2 field:(id)arg3;
- (id)_traits;
- (id)_escapedString:(id)arg1;
- (BOOL)openURL:(id)arg1 sourceApplication:(id)arg2;
@property(readonly) BOOL canToggleTraffic;
@property(readonly) BOOL canResizeLabels;
@property(readonly) BOOL canLocalizeLabels;
- (BOOL)localizeLabels;
- (void)setLocalizeLabels:(BOOL)arg1;
@property BOOL useLargeTextSize;
@property long long labelTextSize;
- (BOOL)isPitched;
@property BOOL mode3D;
- (void)toggle3DMode:(id)arg1;
- (BOOL)canHideLabels;
@property(readonly) BOOL canEnter3DMode;
@property(readonly) BOOL canSnapToNorth;
- (void)toggleLabels:(id)arg1;
- (struct CGRect)confinementRectForMenu:(id)arg1 onScreen:(id)arg2;
- (void)updateSettingsView;
- (id)settingsMenu;
@property BOOL showLabels;
@property(readonly, nonatomic) BOOL hideLabelsMenuItemVisible;
- (void)updateMapModePopUpButton;
@property long long selectedMapModeIndex;
- (long long)selectedMapModeIndexForMapType:(unsigned long long)arg1;
@property unsigned long long mapType;
- (void)setMapType:(unsigned long long)arg1 animated:(BOOL)arg2;
- (unsigned long long)_preferredDirectionsType;
- (unsigned long long)_directionsTransportTypeForMode:(unsigned long long)arg1;
- (void)invalidateRestorableStateAndActivityState;
- (void)setMapsActivity:(id)arg1 assumedSourceFidelity:(unsigned long long)arg2;
@property(retain, nonatomic) MapsActivity *mapsActivity;
- (id)mapsActivityWithFidelity:(unsigned long long)arg1;
- (void)restoreUserActivityState:(id)arg1;
- (void)updateUserActivityState:(id)arg1;
- (void)unsafeRestoreStateWithCoder:(id)arg1;
- (void)restoreStateWithCoder:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (id)toolbar:(id)arg1 itemForItemIdentifier:(id)arg2 willBeInsertedIntoToolbar:(BOOL)arg3;
- (void)dealloc;
- (void)selectSelectedSearchPlaceNow;
- (void)cancelSelectSelectedSearchPlace;
- (void)updateRouteIfNecessary:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)directionsFieldResponder;
- (BOOL)searchFieldIsFirstResponder;
- (void)restoreLastViewOptionsIncludingDirectionsType:(BOOL)arg1;
- (void)restoreLastViewOptions;
- (void)saveLastViewOptions;
- (void)restoreLastViewport;
- (void)saveLastViewport;
- (void)windowWillClose:(id)arg1;
- (BOOL)_replaceToolbarItemWithIdentifier:(id)arg1 byItemWithIdentifier:(id)arg2;
- (void)updateToolbarItemsIfNeededForWindowWidth:(double)arg1;
- (void)updateToolbarItemsIfNeeded;
- (void)updateToolbarVisibility;
- (void)updateLocationButtonState;
- (void)windowDidResignKey:(id)arg1;
- (void)windowDidBecomeKey:(id)arg1;
- (double)toolbarHeight;
- (void)_updateCurrentEnvironmentName;
- (void)resourceManifestManager:(id)arg1 didChangeActiveTileGroup:(id)arg2 fromOldTileGroup:(id)arg3;
- (void)networkReachabilityChanged;
- (void)updatePlaceholder;
- (void)_setPlaceholder;
- (id)_weatherStackViewConstraints;
- (void)awakeFromNib;
- (void)windowDidLoad;
- (id)initWithWindow:(id)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

