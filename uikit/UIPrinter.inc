{ Parsed from UIKit.framework (iPhoneOS8.2) UIPrinter.h }
{ Created on Fri Mar 20 2:11:41 2015 }


{$ifdef TYPES}
type
  UIPrinterPtr = ^UIPrinter;
  UIPrinterJobTypes = NSInteger;
{$endif}

{$ifdef CLASSES}

type
  UIPrinter = objcclass external (NSObject)
  private
  public
    class function printerWithURL (url: NSURL): UIPrinter; message 'printerWithURL:';
    function URL: NSURL; message 'URL';
    function displayName: NSString; message 'displayName';
    function displayLocation: NSString; message 'displayLocation';
    function supportedJobTypes: UIPrinterJobTypes; message 'supportedJobTypes';
    function makeAndModel: NSString; message 'makeAndModel';
    function supportsColor: boolean; message 'supportsColor';
    function supportsDuplex: boolean; message 'supportsDuplex';
    procedure contactPrinter (completionHandler: OpaqueCBlock); message 'contactPrinter:';
  end;
{$endif}

