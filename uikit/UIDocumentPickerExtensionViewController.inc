{ Parsed from UIKit.framework (iPhoneOS8.2) UIDocumentPickerExtensionViewController.h }
{ Created on Fri Mar 20 2:11:41 2015 }


{$ifdef TYPES}
type
  UIDocumentPickerExtensionViewControllerPtr = ^UIDocumentPickerExtensionViewController;
{$endif}

{$ifdef CLASSES}

type
  UIDocumentPickerExtensionViewController = objcclass external (UIViewController)
  public
    procedure dismissGrantingAccessToURL (url: NSURL); message 'dismissGrantingAccessToURL:';
    procedure prepareForPresentationInMode (mode: UIDocumentPickerMode); message 'prepareForPresentationInMode:';
    function documentPickerMode: UIDocumentPickerMode; message 'documentPickerMode';
    function originalURL: NSURL; message 'originalURL';
    function validTypes: NSArray; message 'validTypes';
    function providerIdentifier: NSString; message 'providerIdentifier';
    function documentStorageURL: NSURL; message 'documentStorageURL';
  end;
{$endif}

