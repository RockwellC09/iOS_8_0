{ Parsed from UIKit.framework (iPhoneOS8.2) UISegmentedControl.h }
{ Created on Fri Mar 20 2:11:41 2015 }


{$ifdef TYPES}
type
  UISegmentedControlPtr = ^UISegmentedControl;
{$endif}

{$ifdef TYPES}
type
  UISegmentedControlStyle = NSInteger;
  UISegmentedControlStylePtr = ^UISegmentedControlStyle;

const
  UISegmentedControlStylePlain = 0;
  UISegmentedControlStyleBordered = 1;
  UISegmentedControlStyleBar = 2;
  UISegmentedControlStyleBezeled = 3;
const
  UISegmentedControlNoSegment = -1;

type
  UISegmentedControlSegment = NSInteger;
  UISegmentedControlSegmentPtr = ^UISegmentedControlSegment;

const
  UISegmentedControlSegmentAny = 0;
  UISegmentedControlSegmentLeft = 1;
  UISegmentedControlSegmentCenter = 2;
  UISegmentedControlSegmentRight = 3;
  UISegmentedControlSegmentAlone = 4;
{$endif}

{$ifdef CLASSES}

type
  UISegmentedControl = objcclass external (UIControl, NSCodingProtocol)
  private
    _segments: NSMutableArray;
    _selectedSegment: NSInteger;
    _highlightedSegment: NSInteger;
    _removedSegment: UIView;
    _barStyle: UIBarStyle;
    _appearanceStorage: id;
    _backgroundBarView: UIView;
    _enabledAlpha: CGFloat;
    _segmentedControlFlags: bitpacked record
      case byte of
        0: (_anonBitField__segmentedControlFlags0: cuint);
        1: (
          style: 0..((1 shl 3)-1);
          size: 0..((1 shl 2)-1);
          delegateAlwaysNotifiesDelegateOfSegmentClicks: 0..1;
          momentaryClick: 0..1;
          tracking: 0..1;
          autosizeToFitSegments: 0..1;
          isSizingToFit: 0..1;
          autosizeText: 0..1;
          transparentBackground: 0..1;
          useProportionalWidthSegments: 0..1;
          translucentBackground: 0..1;
          appearanceNeedsUpdate: 0..1;
        );
      end;
  public
    function initWithItems (items: NSArray): instancetype; message 'initWithItems:';
    procedure setSegmentedControlStyle(newValue: UISegmentedControlStyle); message 'setSegmentedControlStyle:';
    function segmentedControlStyle: UISegmentedControlStyle; message 'segmentedControlStyle';
    procedure setMomentary(newValue: boolean); message 'setMomentary:';
    function isMomentary: boolean; message 'isMomentary';
    function numberOfSegments: NSUInteger; message 'numberOfSegments';
    procedure setApportionsSegmentWidthsByContent(newValue: boolean); message 'setApportionsSegmentWidthsByContent:';
    function apportionsSegmentWidthsByContent: boolean; message 'apportionsSegmentWidthsByContent';
    procedure insertSegmentWithTitle_atIndex_animated (title: NSString; segment: NSUInteger; animated: boolean); message 'insertSegmentWithTitle:atIndex:animated:';
    procedure insertSegmentWithImage_atIndex_animated (image: UIImage; segment: NSUInteger; animated: boolean); message 'insertSegmentWithImage:atIndex:animated:';
    procedure removeSegmentAtIndex_animated (segment: NSUInteger; animated: boolean); message 'removeSegmentAtIndex:animated:';
    procedure removeAllSegments; message 'removeAllSegments';
    procedure setTitle_forSegmentAtIndex (title: NSString; segment: NSUInteger); message 'setTitle:forSegmentAtIndex:';
    function titleForSegmentAtIndex (segment: NSUInteger): NSString; message 'titleForSegmentAtIndex:';
    procedure setImage_forSegmentAtIndex (image: UIImage; segment: NSUInteger); message 'setImage:forSegmentAtIndex:';
    function imageForSegmentAtIndex (segment: NSUInteger): UIImage; message 'imageForSegmentAtIndex:';
    procedure setWidth_forSegmentAtIndex (width: CGFloat; segment: NSUInteger); message 'setWidth:forSegmentAtIndex:';
    function widthForSegmentAtIndex (segment: NSUInteger): CGFloat; message 'widthForSegmentAtIndex:';
    procedure setContentOffset_forSegmentAtIndex (offset: CGSize; segment: NSUInteger); message 'setContentOffset:forSegmentAtIndex:';
    function contentOffsetForSegmentAtIndex (segment: NSUInteger): CGSize; message 'contentOffsetForSegmentAtIndex:';
    procedure setEnabled_forSegmentAtIndex (enabled: boolean; segment: NSUInteger); message 'setEnabled:forSegmentAtIndex:';
    function isEnabledForSegmentAtIndex (segment: NSUInteger): boolean; message 'isEnabledForSegmentAtIndex:';
    procedure setSelectedSegmentIndex(newValue: NSInteger); message 'setSelectedSegmentIndex:';
    function selectedSegmentIndex: NSInteger; message 'selectedSegmentIndex';
    procedure setTintColor(newValue: UIColor); message 'setTintColor:';
    function tintColor: UIColor; message 'tintColor';
    procedure setBackgroundImage_forState_barMetrics (backgroundImage: UIImage; state_: UIControlState; barMetrics: UIBarMetrics); message 'setBackgroundImage:forState:barMetrics:'; { available in 5_0 }
    function backgroundImageForState_barMetrics (state_: UIControlState; barMetrics: UIBarMetrics): UIImage; message 'backgroundImageForState:barMetrics:'; { available in 5_0 }
    procedure setDividerImage_forLeftSegmentState_rightSegmentState_barMetrics (dividerImage: UIImage; leftState: UIControlState; rightState: UIControlState; barMetrics: UIBarMetrics); message 'setDividerImage:forLeftSegmentState:rightSegmentState:barMetrics:'; { available in 5_0 }
    function dividerImageForLeftSegmentState_rightSegmentState_barMetrics (leftState: UIControlState; rightState: UIControlState; barMetrics: UIBarMetrics): UIImage; message 'dividerImageForLeftSegmentState:rightSegmentState:barMetrics:'; { available in 5_0 }
    procedure setTitleTextAttributes_forState (attributes: NSDictionary; state_: UIControlState); message 'setTitleTextAttributes:forState:'; { available in 5_0 }
    function titleTextAttributesForState (state_: UIControlState): NSDictionary; message 'titleTextAttributesForState:'; { available in 5_0 }
    procedure setContentPositionAdjustment_forSegmentType_barMetrics (adjustment: UIOffset; leftCenterRightOrAlone: UISegmentedControlSegment; barMetrics: UIBarMetrics); message 'setContentPositionAdjustment:forSegmentType:barMetrics:'; { available in 5_0 }
    function contentPositionAdjustmentForSegmentType_barMetrics (leftCenterRightOrAlone: UISegmentedControlSegment; barMetrics: UIBarMetrics): UIOffset; message 'contentPositionAdjustmentForSegmentType:barMetrics:'; { available in 5_0 }
  end;
{$endif}

