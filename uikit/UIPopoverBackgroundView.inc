{ Parsed from UIKit.framework (iPhoneOS8.2) UIPopoverBackgroundView.h }
{ Created on Fri Mar 20 2:11:41 2015 }


{$ifdef TYPES}
type
  UIPopoverBackgroundViewPtr = ^UIPopoverBackgroundView;
  UIPopoverBackgroundViewMethodsProtocolPtr = ^UIPopoverBackgroundViewMethodsProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  UIPopoverBackgroundViewMethodsProtocol = objcprotocol external name 'UIPopoverBackgroundViewMethods'
    class function arrowBase: CGFloat; message 'arrowBase';
    class function contentViewInsets: UIEdgeInsets; message 'contentViewInsets';
    class function arrowHeight: CGFloat; message 'arrowHeight';
  end;
{$endif}

{$ifdef CLASSES}

type
  UIPopoverBackgroundView = objcclass external (UIView, UIPopoverBackgroundViewMethodsProtocol)
  public
    procedure setArrowOffset(newValue: CGFloat); message 'setArrowOffset:';
    function arrowOffset: CGFloat; message 'arrowOffset';
    procedure setArrowDirection(newValue: UIPopoverArrowDirection); message 'setArrowDirection:';
    function arrowDirection: UIPopoverArrowDirection; message 'arrowDirection';
    class function wantsDefaultContentAppearance: boolean; message 'wantsDefaultContentAppearance'; { available in 6_0 }

    { Adopted protocols }
    class function arrowBase: CGFloat; message 'arrowBase';
    class function arrowHeight: CGFloat; message 'arrowHeight';
    class function contentViewInsets: UIEdgeInsets; message 'contentViewInsets';
  end;
{$endif}

