{ Parsed from UIKit.framework (iPhoneOS8.2) UIPopoverSupport.h }
{ Created on Fri Mar 20 2:11:41 2015 }

{$ifdef TYPES}
type
  UIPopoverArrowDirection = NSUInteger;
  UIPopoverArrowDirectionPtr = ^UIPopoverArrowDirection;

const
  UIPopoverArrowDirectionUp = 1 shl 0;
  UIPopoverArrowDirectionDown = 1 shl 1;
  UIPopoverArrowDirectionLeft = 1 shl 2;
  UIPopoverArrowDirectionRight = 1 shl 3;
  UIPopoverArrowDirectionAny = UIPopoverArrowDirectionUp + UIPopoverArrowDirectionDown + UIPopoverArrowDirectionLeft + UIPopoverArrowDirectionRight;
  UIPopoverArrowDirectionUnknown = NSUIntegerMax;
{$endif}

{$ifdef CLASSES}

type
  UIViewController_UIPopoverController = objccategory external name 'UIPopoverController' (UIViewController)
    procedure setModalInPopover(newValue: boolean); message 'setModalInPopover:';
    function isModalInPopover: boolean; message 'isModalInPopover';
    procedure setContentSizeForViewInPopover(newValue: CGSize); message 'setContentSizeForViewInPopover:';
    function contentSizeForViewInPopover: CGSize; message 'contentSizeForViewInPopover';
  end;
{$endif}

