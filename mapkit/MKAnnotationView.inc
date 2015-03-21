{ Parsed from MapKit.framework (iPhoneOS8.2) MKAnnotationView.h }
{ Created on Fri Mar 20 2:11:37 2015 }


{ Types from MKAnnotationView }
{$ifdef TYPES}





{$endif}


{$ifdef TYPES}
type
  MKAnnotationViewPtr = ^MKAnnotationView;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  MKAnnotationCalloutInfoDidChangeNotification: NSString; cvar; external;
{$endif}

{$ifdef TYPES}
type
  MKAnnotationViewDragState = NSUInteger;
  MKAnnotationViewDragStatePtr = ^MKAnnotationViewDragState;

const
  MKAnnotationViewDragStateNone = 0;
  MKAnnotationViewDragStateStarting = 1;
  MKAnnotationViewDragStateDragging = 2;
  MKAnnotationViewDragStateCanceling = 3;
  MKAnnotationViewDragStateEnding = 4;
{$endif}

{$ifdef CLASSES}

type
  MKAnnotationView = objcclass external (UIView)
  public
    function initWithAnnotation_reuseIdentifier (annotation: MKAnnotationProtocol; reuseIdentifier: NSString): instancetype; message 'initWithAnnotation:reuseIdentifier:';
    function reuseIdentifier: NSString; message 'reuseIdentifier';
    procedure prepareForReuse; message 'prepareForReuse';
    procedure setAnnotation(newValue: MKAnnotationProtocol); message 'setAnnotation:';
    function annotation: MKAnnotationProtocol; message 'annotation';
    {$if defined(TARGET_OS_IPHONE)}
    procedure setImage(newValue: UIImage); message 'setImage:';
    function image: UIImage; message 'image';
    {$else}
    procedure setImage_(newValue: NSImage); message 'setImage:';
    function image_: NSImage; message 'image';
    {$endif}
    procedure setCenterOffset(newValue: CGPoint); message 'setCenterOffset:';
    function centerOffset: CGPoint; message 'centerOffset';
    procedure setCalloutOffset(newValue: CGPoint); message 'setCalloutOffset:';
    function calloutOffset: CGPoint; message 'calloutOffset';
    {$if  not defined(TARGET_OS_IPHONE)}
    procedure setLeftCalloutOffset(newValue: CGPoint); message 'setLeftCalloutOffset:';
    function leftCalloutOffset: CGPoint; message 'leftCalloutOffset';
    procedure setRightCalloutOffset(newValue: CGPoint); message 'setRightCalloutOffset:';
    function rightCalloutOffset: CGPoint; message 'rightCalloutOffset';
    {$endif}
    procedure setEnabled(newValue: boolean); message 'setEnabled:';
    function isEnabled: boolean; message 'isEnabled';
    procedure setHighlighted(newValue: boolean); message 'setHighlighted:';
    function isHighlighted: boolean; message 'isHighlighted';
    procedure setSelected(newValue: boolean); message 'setSelected:';
    function isSelected: boolean; message 'isSelected';
    procedure setSelected_animated (selected: boolean; animated: boolean); message 'setSelected:animated:';
    procedure setCanShowCallout(newValue: boolean); message 'setCanShowCallout:';
    function canShowCallout: boolean; message 'canShowCallout';
    {$if defined(TARGET_OS_IPHONE)}
    procedure setLeftCalloutAccessoryView(newValue: UIView); message 'setLeftCalloutAccessoryView:';
    function leftCalloutAccessoryView: UIView; message 'leftCalloutAccessoryView';
    {$else}
    procedure setLeftCalloutAccessoryView_(newValue: NSViewPtr); message 'setLeftCalloutAccessoryView:';
    function leftCalloutAccessoryView_: NSViewPtr; message 'leftCalloutAccessoryView';
    {$endif}
    {$if defined(TARGET_OS_IPHONE)}
    procedure setRightCalloutAccessoryView(newValue: UIView); message 'setRightCalloutAccessoryView:';
    function rightCalloutAccessoryView: UIView; message 'rightCalloutAccessoryView';
    {$else}
    procedure setRightCalloutAccessoryView_(newValue: NSViewPtr); message 'setRightCalloutAccessoryView:';
    function rightCalloutAccessoryView_: NSViewPtr; message 'rightCalloutAccessoryView';
    {$endif}
    procedure setDraggable(newValue: boolean); message 'setDraggable:';
    function isDraggable: boolean; message 'isDraggable';
    procedure setDragState(newValue: MKAnnotationViewDragState); message 'setDragState:';
    function dragState: MKAnnotationViewDragState; message 'dragState';
    procedure setDragState_animated (newDragState: MKAnnotationViewDragState; animated: boolean); message 'setDragState:animated:'; { available in 10_9, 4_2 }
  end;
{$endif}

