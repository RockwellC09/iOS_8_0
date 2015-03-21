{ Parsed from UIKit.framework (iPhoneOS8.2) UIToolbar.h }
{ Created on Fri Mar 20 2:11:42 2015 }


{$ifdef TYPES}
type
  UIToolbarPtr = ^UIToolbar;
  UIToolbarDelegateProtocolPtr = ^UIToolbarDelegateProtocol;
{$endif}

{$ifdef CLASSES}

type
  UIToolbar = objcclass external (UIView, UIBarPositioningProtocol)
  private
    _delegate: id;
    _items: NSArray;
    _barTintColor: UIColor;
    _toolbarFlags: bitpacked record
      case byte of
        0: (_anonBitField__toolbarFlags0: cuint);
        1: (
          barStyle: 0..((1 shl 3)-1);
          mode: 0..((1 shl 2)-1);
          wasEnabled: 0..1;
          downButtonSentAction: 0..1;
          barTranslucence: 0..((1 shl 3)-1);
          isLocked: 0..1;
          backgroundLayoutNeedsUpdate: 0..1;
          hasCustomBackgroundView: 0..1;
        );
      end;
    _groups: CFMutableDictionaryRef;
    _buttonItems: NSArray;
    _currentButtonGroup: NSInteger;
    _pressedTag: NSInteger;
    _extraEdgeInsets: CGFloat;
    _appearanceStorage: id;
  public
    procedure setBarStyle(newValue: UIBarStyle); message 'setBarStyle:';
    function barStyle: UIBarStyle; message 'barStyle';
    procedure setItems(newValue: NSArray); message 'setItems:';
    function items: NSArray; message 'items';
    procedure setTranslucent(newValue: boolean); message 'setTranslucent:';
    function isTranslucent: boolean; message 'isTranslucent';
    procedure setItems_animated (items_: NSArray; animated: boolean); message 'setItems:animated:';
    procedure setTintColor(newValue: UIColor); message 'setTintColor:';
    function tintColor: UIColor; message 'tintColor';
    procedure setBarTintColor(newValue: UIColor); message 'setBarTintColor:';
    function barTintColor: UIColor; message 'barTintColor';
    procedure setBackgroundImage_forToolbarPosition_barMetrics (backgroundImage: UIImage; topOrBottom: UIBarPosition; barMetrics: UIBarMetrics); message 'setBackgroundImage:forToolbarPosition:barMetrics:'; { available in 5_0 }
    function backgroundImageForToolbarPosition_barMetrics (topOrBottom: UIBarPosition; barMetrics: UIBarMetrics): UIImage; message 'backgroundImageForToolbarPosition:barMetrics:'; { available in 5_0 }
    procedure setShadowImage_forToolbarPosition (shadowImage: UIImage; topOrBottom: UIBarPosition); message 'setShadowImage:forToolbarPosition:'; { available in 6_0 }
    function shadowImageForToolbarPosition (topOrBottom: UIBarPosition): UIImage; message 'shadowImageForToolbarPosition:'; { available in 6_0 }
    procedure setDelegate(newValue: UIToolbarDelegateProtocol); message 'setDelegate:';
    function delegate: UIToolbarDelegateProtocol; message 'delegate';

    { Adopted protocols }
    function barPosition: UIBarPosition; message 'barPosition';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  UIToolbarDelegateProtocol = objcprotocol external name 'UIToolbarDelegate' (UIBarPositioningDelegateProtocol)
  end;
{$endif}

