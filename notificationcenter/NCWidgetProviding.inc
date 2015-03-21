{ Parsed from NotificationCenter.framework (iPhoneOS8.2) NCWidgetProviding.h }
{ Created on Fri Mar 20 2:11:11 2015 }


{$ifdef TYPES}
type
  NCWidgetProvidingProtocolPtr = ^NCWidgetProvidingProtocol;
{$endif}

{$ifdef TYPES}
type
  NCUpdateResult = NSUInteger;
  NCUpdateResultPtr = ^NCUpdateResult;

const
  NCUpdateResultNewData = 0;
  NCUpdateResultNoData = 1;
  NCUpdateResultFailed = 2;
{$endif}

{$ifdef PROTOCOLS}

type
  NCWidgetProvidingProtocol = objcprotocol external name 'NCWidgetProviding' (NSObjectProtocol)
  optional
    procedure widgetPerformUpdateWithCompletionHandler (completionHandler: OpaqueCBlock); message 'widgetPerformUpdateWithCompletionHandler:';
    function widgetMarginInsetsForProposedMarginInsets (defaultMarginInsets: UIEdgeInsets): UIEdgeInsets; message 'widgetMarginInsetsForProposedMarginInsets:';
  end;
{$endif}

{$ifdef CLASSES}

type
  NotificationCenter = objccategory external (UIVibrancyEffect)
    class function notificationCenterVibrancyEffect: UIVibrancyEffect; message 'notificationCenterVibrancyEffect';
  end;
{$endif}

