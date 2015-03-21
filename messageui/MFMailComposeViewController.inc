{ Parsed from MessageUI.framework (iPhoneOS8.2) MFMailComposeViewController.h }
{ Created on Fri Mar 20 2:11:07 2015 }


{$ifdef TYPES}
type
  MFMailComposeViewControllerPtr = ^MFMailComposeViewController;
  MFMailComposeViewControllerDelegateProtocolPtr = ^MFMailComposeViewControllerDelegateProtocol;
{$endif}

{$ifdef TYPES}
const
  MFMailComposeResultCancelled = 0;
  MFMailComposeResultSaved = 1;
  MFMailComposeResultSent = 2;
  MFMailComposeResultFailed = 3;

type
  MFMailComposeResult = clong;
  MFMailComposeResultPtr = ^MFMailComposeResult;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  MFMailComposeErrorDomain: NSString { available starting in __MAC_NA,__IPHONE_3_0 }; cvar; external;
{$endif}

{$ifdef TYPES}
const
  MFMailComposeErrorCodeSaveFailed = 0;
  MFMailComposeErrorCodeSendFailed = 1;

type
  MFMailComposeErrorCode = clong;
  MFMailComposeErrorCodePtr = ^MFMailComposeErrorCode;
{$endif}

{$ifdef CLASSES}

type
  MFMailComposeViewController = objcclass external (UINavigationController)
  private
    _internal: id;
  public
    class function canSendMail: boolean; message 'canSendMail'; { available starting in __MAC_NA,__IPHONE_3_0 }
    procedure setMailComposeDelegate(newValue: MFMailComposeViewControllerDelegateProtocol); message 'setMailComposeDelegate:';
    function mailComposeDelegate: MFMailComposeViewControllerDelegateProtocol; message 'mailComposeDelegate';
    procedure setSubject (subject: NSString); message 'setSubject:'; { available starting in __MAC_NA,__IPHONE_3_0 }
    procedure setToRecipients (toRecipients: NSArray); message 'setToRecipients:'; { available starting in __MAC_NA,__IPHONE_3_0 }
    procedure setCcRecipients (ccRecipients: NSArray); message 'setCcRecipients:'; { available starting in __MAC_NA,__IPHONE_3_0 }
    procedure setBccRecipients (bccRecipients: NSArray); message 'setBccRecipients:'; { available starting in __MAC_NA,__IPHONE_3_0 }
    procedure setMessageBody_isHTML (body: NSString; isHTML: boolean); message 'setMessageBody:isHTML:'; { available starting in __MAC_NA,__IPHONE_3_0 }
    procedure addAttachmentData_mimeType_fileName (attachment: NSData; mimeType: NSString; filename: NSString); message 'addAttachmentData:mimeType:fileName:'; { available starting in __MAC_NA,__IPHONE_3_0 }
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  MFMailComposeViewControllerDelegateProtocol = objcprotocol external name 'MFMailComposeViewControllerDelegate' (NSObjectProtocol)
  optional
    procedure mailComposeController_didFinishWithResult_error (controller: MFMailComposeViewController; result_: MFMailComposeResult; error: NSError); message 'mailComposeController:didFinishWithResult:error:'; { available starting in __MAC_NA,__IPHONE_3_0 }
  end;
{$endif}

