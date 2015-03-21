{ Parsed from UIKit.framework (iPhoneOS8.2) UIStoryboardSegue.h }
{ Created on Fri Mar 20 2:11:42 2015 }


{$ifdef TYPES}
type
  UIStoryboardSeguePtr = ^UIStoryboardSegue;
{$endif}

{$ifdef CLASSES}

type
  UIStoryboardSegue = objcclass external (NSObject)
  public
    class function segueWithIdentifier_source_destination_performHandler (identifier: NSString; source: UIViewController; destination: UIViewController; performHandler: OpaqueCBlock): instancetype; message 'segueWithIdentifier:source:destination:performHandler:'; { available in 6_0 }
    function initWithIdentifier_source_destination (identifier: NSString; source: UIViewController; destination: UIViewController): instancetype; message 'initWithIdentifier:source:destination:';
    function identifier: NSString; message 'identifier';
    function sourceViewController: id; message 'sourceViewController';
    function destinationViewController: id; message 'destinationViewController';
    procedure perform; message 'perform';
  end;
{$endif}

