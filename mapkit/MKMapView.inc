{ Parsed from MapKit.framework (iPhoneOS8.2) MKMapView.h }
{ Created on Fri Mar 20 2:11:37 2015 }


{ Types from MKMapView }
{$ifdef TYPES}





{$endif}


{ Types from OverlaysAPI }
{$ifdef TYPES}

{$endif}


{ Types from MKMapViewDelegateProtocol }
{$ifdef TYPES}



{$endif}


{$ifdef TYPES}
type
  MKMapViewPtr = ^MKMapView;
  MKMapViewDelegateProtocolPtr = ^MKMapViewDelegateProtocol;
{$endif}

{$ifdef TYPES}
type
  MKUserTrackingMode = NSInteger;
  MKUserTrackingModePtr = ^MKUserTrackingMode;

const
  MKUserTrackingModeNone = 0;
  MKUserTrackingModeFollow = 1;
  MKUserTrackingModeFollowWithHeading = 2;
{$endif}

{$ifdef CLASSES}

type
  MKMapView = objcclass external (UIView, NSCodingProtocol)
  public
    procedure setDelegate(newValue: MKMapViewDelegateProtocol); message 'setDelegate:';
    function delegate: MKMapViewDelegateProtocol; message 'delegate';
    procedure setMapType(newValue: MKMapType); message 'setMapType:';
    function mapType: MKMapType; message 'mapType';
    procedure setRegion(newValue: MKCoordinateRegion); message 'setRegion:';
    function region: MKCoordinateRegion; message 'region';
    procedure setRegion_animated (region_: MKCoordinateRegion; animated: boolean); message 'setRegion:animated:';
    procedure setCenterCoordinate(newValue: CLLocationCoordinate2D); message 'setCenterCoordinate:';
    function centerCoordinate: CLLocationCoordinate2D; message 'centerCoordinate';
    procedure setCenterCoordinate_animated (coordinate: CLLocationCoordinate2D; animated: boolean); message 'setCenterCoordinate:animated:';
    function regionThatFits (region_: MKCoordinateRegion): MKCoordinateRegion; message 'regionThatFits:';
    procedure setVisibleMapRect(newValue: MKMapRect); message 'setVisibleMapRect:';
    function visibleMapRect: MKMapRect; message 'visibleMapRect';
    procedure setVisibleMapRect_animated (mapRect: MKMapRect; animate: boolean); message 'setVisibleMapRect:animated:';
    function mapRectThatFits (mapRect: MKMapRect): MKMapRect; message 'mapRectThatFits:';
    {$if defined(TARGET_OS_IPHONE)}
    procedure setVisibleMapRect_edgePadding_animated (mapRect: MKMapRect; insets: UIEdgeInsets; animate: boolean); message 'setVisibleMapRect:edgePadding:animated:';
    function mapRectThatFits_edgePadding (mapRect: MKMapRect; insets: UIEdgeInsets): MKMapRect; message 'mapRectThatFits:edgePadding:';
    {$else}
    procedure setVisibleMapRect_edgePadding_animated (mapRect: MKMapRect; insets: NSEdgeInsets; animate: boolean); message 'setVisibleMapRect:edgePadding:animated:';
    function mapRectThatFits_edgePadding (mapRect: MKMapRect; insets: NSEdgeInsets): MKMapRect; message 'mapRectThatFits:edgePadding:';
    {$endif}
    procedure setCamera(newValue: MKMapCamera); message 'setCamera:';
    function camera: MKMapCamera; message 'camera';
    procedure setCamera_animated (camera_: MKMapCamera; animated: boolean); message 'setCamera:animated:'; { available in 10_9, 7_0 }
    {$if defined(TARGET_OS_IPHONE)}
    function convertCoordinate_toPointToView (coordinate: CLLocationCoordinate2D; view: UIView): CGPoint; message 'convertCoordinate:toPointToView:';
    function convertPoint_toCoordinateFromView (point: CGPoint; view: UIView): CLLocationCoordinate2D; message 'convertPoint:toCoordinateFromView:';
    function convertRegion_toRectToView (region_: MKCoordinateRegion; view: UIView): CGRect; message 'convertRegion:toRectToView:';
    function convertRect_toRegionFromView (rect: CGRect; view: UIView): MKCoordinateRegion; message 'convertRect:toRegionFromView:';
    {$else}
    function convertCoordinate_toPointToView (coordinate: CLLocationCoordinate2D; view: NSViewPtr): CGPoint; message 'convertCoordinate:toPointToView:';
    function convertPoint_toCoordinateFromView (point: CGPoint; view: NSViewPtr): CLLocationCoordinate2D; message 'convertPoint:toCoordinateFromView:';
    function convertRegion_toRectToView (region_: MKCoordinateRegion; view: NSViewPtr): CGRect; message 'convertRegion:toRectToView:';
    function convertRect_toRegionFromView (rect: CGRect; view: NSViewPtr): MKCoordinateRegion; message 'convertRect:toRegionFromView:';
    {$endif}
    procedure setZoomEnabled(newValue: boolean); message 'setZoomEnabled:';
    function isZoomEnabled: boolean; message 'isZoomEnabled';
    procedure setScrollEnabled(newValue: boolean); message 'setScrollEnabled:';
    function isScrollEnabled: boolean; message 'isScrollEnabled';
    procedure setRotateEnabled(newValue: boolean); message 'setRotateEnabled:';
    function isRotateEnabled: boolean; message 'isRotateEnabled';
    procedure setPitchEnabled(newValue: boolean); message 'setPitchEnabled:';
    function isPitchEnabled: boolean; message 'isPitchEnabled';
    {$if  not defined(TARGET_OS_IPHONE)}
    procedure setShowsCompass(newValue: boolean); message 'setShowsCompass:';
    function showsCompass: boolean; message 'showsCompass';
    procedure setShowsZoomControls(newValue: boolean); message 'setShowsZoomControls:';
    function showsZoomControls: boolean; message 'showsZoomControls';
    procedure setShowsScale(newValue: boolean); message 'setShowsScale:';
    function showsScale: boolean; message 'showsScale';
    {$endif}
    procedure setShowsPointsOfInterest(newValue: boolean); message 'setShowsPointsOfInterest:';
    function showsPointsOfInterest: boolean; message 'showsPointsOfInterest';
    procedure setShowsBuildings(newValue: boolean); message 'setShowsBuildings:';
    function showsBuildings: boolean; message 'showsBuildings';
    procedure setShowsUserLocation(newValue: boolean); message 'setShowsUserLocation:';
    function showsUserLocation: boolean; message 'showsUserLocation';
    function userLocation: MKUserLocation; message 'userLocation';
    {$if defined(TARGET_OS_IPHONE)}
    procedure setUserTrackingMode(newValue: MKUserTrackingMode); message 'setUserTrackingMode:';
    function userTrackingMode: MKUserTrackingMode; message 'userTrackingMode';
    procedure setUserTrackingMode_animated (mode: MKUserTrackingMode; animated: boolean); message 'setUserTrackingMode:animated:'; { available in NA, 5_0 }
    {$endif}
    function isUserLocationVisible: boolean; message 'isUserLocationVisible';
    procedure addAnnotation (annotation: MKAnnotationProtocol); message 'addAnnotation:';
    procedure addAnnotations (annotations: NSArray); message 'addAnnotations:';
    procedure removeAnnotation (annotation: MKAnnotationProtocol); message 'removeAnnotation:';
    procedure removeAnnotations (annotations: NSArray); message 'removeAnnotations:';
    function annotations: NSArray; message 'annotations';
    function annotationsInMapRect (mapRect: MKMapRect): NSSet; message 'annotationsInMapRect:'; { available in 10_9, 4_2 }
    function viewForAnnotation (annotation: MKAnnotationProtocol): MKAnnotationView; message 'viewForAnnotation:';
    function dequeueReusableAnnotationViewWithIdentifier (identifier: NSString): MKAnnotationView; message 'dequeueReusableAnnotationViewWithIdentifier:';
    procedure selectAnnotation_animated (annotation: MKAnnotationProtocol; animated: boolean); message 'selectAnnotation:animated:';
    procedure deselectAnnotation_animated (annotation: MKAnnotationProtocol; animated: boolean); message 'deselectAnnotation:animated:';
    procedure setSelectedAnnotations(newValue: NSArray); message 'setSelectedAnnotations:';
    function selectedAnnotations: NSArray; message 'selectedAnnotations';
    function annotationVisibleRect: CGRect; message 'annotationVisibleRect';
    procedure showAnnotations_animated (annotations_: NSArray; animated: boolean); message 'showAnnotations:animated:'; { available in 10_9, 7_0 }

    { Adopted protocols }
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): id; message 'initWithCoder:';
  end;
{$endif}

{$ifdef TYPES}
type
  MKOverlayLevel = NSInteger;
  MKOverlayLevelPtr = ^MKOverlayLevel;

const
  MKOverlayLevelAboveRoads = 0;
  MKOverlayLevelAboveLabels = 1;
{$endif}

{$ifdef CLASSES}

type
  OverlaysAPI = objccategory external (MKMapView)
    procedure addOverlay_level (overlay: MKOverlayProtocol; level: MKOverlayLevel); message 'addOverlay:level:'; { available in 10_9, 7_0 }
    procedure addOverlays_level (overlays: NSArray; level: MKOverlayLevel); message 'addOverlays:level:'; { available in 10_9, 7_0 }
    procedure removeOverlay (overlay: MKOverlayProtocol); message 'removeOverlay:'; { available in 10_9, 4_0 }
    procedure removeOverlays (overlays: NSArray); message 'removeOverlays:'; { available in 10_9, 4_0 }
    procedure insertOverlay_atIndex_level (overlay: MKOverlayProtocol; index: NSUInteger; level: MKOverlayLevel); message 'insertOverlay:atIndex:level:'; { available in 10_9, 7_0 }
    procedure insertOverlay_aboveOverlay (overlay: MKOverlayProtocol; sibling: MKOverlayProtocol); message 'insertOverlay:aboveOverlay:'; { available in 10_9, 4_0 }
    procedure insertOverlay_belowOverlay (overlay: MKOverlayProtocol; sibling: MKOverlayProtocol); message 'insertOverlay:belowOverlay:'; { available in 10_9, 4_0 }
    procedure exchangeOverlay_withOverlay (overlay1: MKOverlayProtocol; overlay2: MKOverlayProtocol); message 'exchangeOverlay:withOverlay:'; { available in 10_9, 7_0 }
    function overlays: NSArray; message 'overlays';
    function overlaysInLevel (level: MKOverlayLevel): NSArray; message 'overlaysInLevel:'; { available in 10_9, 7_0 }
    function rendererForOverlay (overlay: MKOverlayProtocol): MKOverlayRenderer; message 'rendererForOverlay:'; { available in 10_9, 7_0 }
    {$if defined(TARGET_OS_IPHONE)}
    function viewForOverlay (overlay: MKOverlayProtocol): MKOverlayView; message 'viewForOverlay:'; deprecated 'in 4_0, 7_0';
    {$endif}
    procedure addOverlay (overlay: MKOverlayProtocol); message 'addOverlay:'; { available in 10_9, 4_0 }
    procedure addOverlays (overlays_: NSArray); message 'addOverlays:'; { available in 10_9, 4_0 }
    procedure insertOverlay_atIndex (overlay: MKOverlayProtocol; index: NSUInteger); message 'insertOverlay:atIndex:'; { available in 10_9, 4_0 }
    procedure exchangeOverlayAtIndex_withOverlayAtIndex (index1: NSUInteger; index2: NSUInteger); message 'exchangeOverlayAtIndex:withOverlayAtIndex:'; { available in 10_9, 4_0 }
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  MKMapViewDelegateProtocol = objcprotocol external name 'MKMapViewDelegate' (NSObjectProtocol)
  optional
    procedure mapView_regionWillChangeAnimated (mapView: MKMapView; animated: boolean); message 'mapView:regionWillChangeAnimated:';
    procedure mapView_regionDidChangeAnimated (mapView: MKMapView; animated: boolean); message 'mapView:regionDidChangeAnimated:';
    procedure mapViewWillStartLoadingMap (mapView: MKMapView); message 'mapViewWillStartLoadingMap:';
    procedure mapViewDidFinishLoadingMap (mapView: MKMapView); message 'mapViewDidFinishLoadingMap:';
    procedure mapViewDidFailLoadingMap_withError (mapView: MKMapView; error: NSError); message 'mapViewDidFailLoadingMap:withError:';
    procedure mapViewWillStartRenderingMap (mapView: MKMapView); message 'mapViewWillStartRenderingMap:'; { available in 10_9, 7_0 }
    procedure mapViewDidFinishRenderingMap_fullyRendered (mapView: MKMapView; fullyRendered: boolean); message 'mapViewDidFinishRenderingMap:fullyRendered:'; { available in 10_9, 7_0 }
    function mapView_viewForAnnotation (mapView: MKMapView; annotation: MKAnnotationProtocol): MKAnnotationView; message 'mapView:viewForAnnotation:';
    procedure mapView_didAddAnnotationViews (mapView: MKMapView; views: NSArray); message 'mapView:didAddAnnotationViews:';
    {$if defined(TARGET_OS_IPHONE)}
    procedure mapView_annotationView_calloutAccessoryControlTapped (mapView: MKMapView; view: MKAnnotationView; control: UIControl); message 'mapView:annotationView:calloutAccessoryControlTapped:';
    {$endif}
    procedure mapView_didSelectAnnotationView (mapView: MKMapView; view: MKAnnotationView); message 'mapView:didSelectAnnotationView:'; { available in 10_9, 4_0 }
    procedure mapView_didDeselectAnnotationView (mapView: MKMapView; view: MKAnnotationView); message 'mapView:didDeselectAnnotationView:'; { available in 10_9, 4_0 }
    procedure mapViewWillStartLocatingUser (mapView: MKMapView); message 'mapViewWillStartLocatingUser:'; { available in 10_9, 4_0 }
    procedure mapViewDidStopLocatingUser (mapView: MKMapView); message 'mapViewDidStopLocatingUser:'; { available in 10_9, 4_0 }
    procedure mapView_didUpdateUserLocation (mapView: MKMapView; userLocation: MKUserLocation); message 'mapView:didUpdateUserLocation:'; { available in 10_9, 4_0 }
    procedure mapView_didFailToLocateUserWithError (mapView: MKMapView; error: NSError); message 'mapView:didFailToLocateUserWithError:'; { available in 10_9, 4_0 }
    procedure mapView_annotationView_didChangeDragState_fromOldState (mapView: MKMapView; view: MKAnnotationView; newState: MKAnnotationViewDragState; oldState: MKAnnotationViewDragState); message 'mapView:annotationView:didChangeDragState:fromOldState:'; { available in 10_9, 4_0 }
    {$if defined(TARGET_OS_IPHONE)}
    procedure mapView_didChangeUserTrackingMode_animated (mapView: MKMapView; mode: MKUserTrackingMode; animated: boolean); message 'mapView:didChangeUserTrackingMode:animated:'; { available in NA, 5_0 }
    {$endif}
    function mapView_rendererForOverlay (mapView: MKMapView; overlay: MKOverlayProtocol): MKOverlayRenderer; message 'mapView:rendererForOverlay:'; { available in 10_9, 7_0 }
    procedure mapView_didAddOverlayRenderers (mapView: MKMapView; renderers: NSArray); message 'mapView:didAddOverlayRenderers:'; { available in 10_9, 7_0 }
    {$if defined(TARGET_OS_IPHONE)}
    function mapView_viewForOverlay (mapView: MKMapView; overlay: MKOverlayProtocol): MKOverlayView; message 'mapView:viewForOverlay:'; deprecated 'in 4_0, 7_0';
    procedure mapView_didAddOverlayViews (mapView: MKMapView; overlayViews: NSArray); message 'mapView:didAddOverlayViews:'; deprecated 'in 4_0, 7_0';
    {$endif}
  end;
{$endif}

