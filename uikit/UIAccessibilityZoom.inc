{ Parsed from UIKit.framework (iPhoneOS8.2) UIAccessibilityZoom.h }
{ Created on Fri Mar 20 2:11:41 2015 }

{$ifdef TYPES}
type
  UIAccessibilityZoomType = NSInteger;
  UIAccessibilityZoomTypePtr = ^UIAccessibilityZoomType;

const
  UIAccessibilityZoomTypeInsertionPoint = 0;
{$endif}

{$ifdef FUNCTIONS}
procedure UIAccessibilityZoomFocusChanged(type_: UIAccessibilityZoomType; frame: CGRect; view: UIView); cdecl; external; { available in 5_0 }
{$endif}

