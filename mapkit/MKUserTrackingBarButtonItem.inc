{ Parsed from MapKit.framework (iPhoneOS8.2) MKUserTrackingBarButtonItem.h }
{ Created on Fri Mar 20 2:11:37 2015 }


{$ifdef TYPES}
type
  MKUserTrackingBarButtonItemPtr = ^MKUserTrackingBarButtonItem;
{$endif}

{$ifdef CLASSES}

type
  MKUserTrackingBarButtonItem = objcclass external (UIBarButtonItem)
  public
    function initWithMapView (mapView: MKMapView): instancetype; message 'initWithMapView:'; { NS_DESIGNATED_INITIALIZER }
    procedure setMapView(newValue: MKMapView); message 'setMapView:';
    function mapView: MKMapView; message 'mapView';
  end;
{$endif}

