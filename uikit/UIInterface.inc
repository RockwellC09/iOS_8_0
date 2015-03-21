{ Parsed from UIKit.framework (iPhoneOS8.2) UIInterface.h }
{ Created on Fri Mar 20 2:11:41 2015 }

{$ifdef TYPES}
type
  UIBarStyle = NSInteger;
  UIBarStylePtr = ^UIBarStyle;

const
  UIBarStyleDefault = 0;
  UIBarStyleBlack = 1;
  UIBarStyleBlackOpaque = 1;
  UIBarStyleBlackTranslucent = 2;

type
  UIUserInterfaceSizeClass = NSInteger;
  UIUserInterfaceSizeClassPtr = ^UIUserInterfaceSizeClass;

const
  UIUserInterfaceSizeClassUnspecified = 0;
  UIUserInterfaceSizeClassCompact = 1;
  UIUserInterfaceSizeClassRegular = 2;
{$endif}

{$ifdef CLASSES}

type
  UIColorSystemColors = objccategory external (UIColor)
    class function lightTextColor: UIColor; message 'lightTextColor';
    class function darkTextColor: UIColor; message 'darkTextColor';
    class function groupTableViewBackgroundColor: UIColor; message 'groupTableViewBackgroundColor';
    class function viewFlipsideBackgroundColor: UIColor; message 'viewFlipsideBackgroundColor'; deprecated 'in 2_0, 7_0';
    class function scrollViewTexturedBackgroundColor: UIColor; message 'scrollViewTexturedBackgroundColor'; deprecated 'in 3_2, 7_0';
    class function underPageBackgroundColor: UIColor; message 'underPageBackgroundColor'; deprecated 'in 5_0, 7_0';
  end;

type
  UIFontSystemFonts = objccategory external (UIFont)
    class function labelFontSize: CGFloat; message 'labelFontSize';
    class function buttonFontSize: CGFloat; message 'buttonFontSize';
    class function smallSystemFontSize: CGFloat; message 'smallSystemFontSize';
    class function systemFontSize: CGFloat; message 'systemFontSize';
  end;
{$endif}

