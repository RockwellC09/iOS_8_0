{ Parsed from PassKit.framework (iPhoneOS8.2) PKAddPassesViewController.h }
{ Created on Fri Mar 20 2:11:11 2015 }


{$ifdef TYPES}
type
  PKAddPassesViewControllerPtr = ^PKAddPassesViewController;
  PKAddPassesViewControllerDelegateProtocolPtr = ^PKAddPassesViewControllerDelegateProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  PKAddPassesViewControllerDelegateProtocol = objcprotocol external name 'PKAddPassesViewControllerDelegate' (NSObjectProtocol)
  optional
    procedure addPassesViewControllerDidFinish (controller: PKAddPassesViewController); message 'addPassesViewControllerDidFinish:';
  end;
{$endif}

{$ifdef CLASSES}

type
  PKAddPassesViewController = objcclass external (UIViewController)
  public
    function initWithPass (pass: id): instancetype; message 'initWithPass:';
    function initWithPasses (passes: NSArray): instancetype; message 'initWithPasses:'; { available in 7_0 }
    class function canAddPasses: boolean; message 'canAddPasses'; { available in 8_0 }
    procedure setDelegate(newValue: PKAddPassesViewControllerDelegateProtocol); message 'setDelegate:';
    function delegate: PKAddPassesViewControllerDelegateProtocol; message 'delegate';
  end;
{$endif}

