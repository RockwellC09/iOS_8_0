{ Parsed from NotificationCenter.framework (iPhoneOS8.2) NCWidgetController.h }
{ Created on Fri Mar 20 2:11:11 2015 }


{$ifdef TYPES}
type
  NCWidgetControllerPtr = ^NCWidgetController;
{$endif}

{$ifdef CLASSES}

type
  NCWidgetController = objcclass external (NSObject)
  public
    class function widgetController: instancetype; message 'widgetController';
    procedure setHasContent_forWidgetWithBundleIdentifier (flag: boolean; bundleID: NSString); message 'setHasContent:forWidgetWithBundleIdentifier:';
  end;
{$endif}

