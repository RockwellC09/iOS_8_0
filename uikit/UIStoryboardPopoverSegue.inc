{ Parsed from UIKit.framework (iPhoneOS8.2) UIStoryboardPopoverSegue.h }
{ Created on Fri Mar 20 2:11:42 2015 }


{$ifdef TYPES}
type
  UIStoryboardPopoverSeguePtr = ^UIStoryboardPopoverSegue;
{$endif}

{$ifdef CLASSES}

type
  UIStoryboardPopoverSegue = objcclass external (UIStoryboardSegue)
  private
  public
    function popoverController: UIPopoverController; message 'popoverController';
  end;
{$endif}

