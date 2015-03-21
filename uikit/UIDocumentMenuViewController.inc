{ Parsed from UIKit.framework (iPhoneOS8.2) UIDocumentMenuViewController.h }
{ Created on Fri Mar 20 2:11:41 2015 }


{$ifdef TYPES}
type
  UIDocumentMenuViewControllerPtr = ^UIDocumentMenuViewController;
  UIDocumentMenuDelegateProtocolPtr = ^UIDocumentMenuDelegateProtocol;
{$endif}

{$ifdef TYPES}
type
  UIDocumentMenuOrder = NSUInteger;
  UIDocumentMenuOrderPtr = ^UIDocumentMenuOrder;

const
  UIDocumentMenuOrderFirst = 0;
  UIDocumentMenuOrderLast = 1;
{$endif}

{$ifdef PROTOCOLS}

type
  UIDocumentMenuDelegateProtocol = objcprotocol external name 'UIDocumentMenuDelegate' (NSObjectProtocol)
    procedure documentMenu_didPickDocumentPicker (documentMenu: UIDocumentMenuViewController; documentPicker: UIDocumentPickerViewController); message 'documentMenu:didPickDocumentPicker:';
  optional
    procedure documentMenuWasCancelled (documentMenu: UIDocumentMenuViewController); message 'documentMenuWasCancelled:';
  end;
{$endif}

{$ifdef CLASSES}

type
  UIDocumentMenuViewController = objcclass external (UIViewController)
  public
    function initWithDocumentTypes_inMode (allowedUTIs: NSArray; mode: UIDocumentPickerMode): instancetype; message 'initWithDocumentTypes:inMode:'; { NS_DESIGNATED_INITIALIZER }
    function initWithURL_inMode (url: NSURL; mode: UIDocumentPickerMode): instancetype; message 'initWithURL:inMode:'; { NS_DESIGNATED_INITIALIZER }
    procedure addOptionWithTitle_image_order_handler (title_: NSString; image: UIImage; order: UIDocumentMenuOrder; handler: OpaqueCBlock); message 'addOptionWithTitle:image:order:handler:';
    procedure setDelegate(newValue: UIDocumentMenuDelegateProtocol); message 'setDelegate:';
    function delegate: UIDocumentMenuDelegateProtocol; message 'delegate';
  end;
{$endif}

