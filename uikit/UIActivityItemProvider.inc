{ Parsed from UIKit.framework (iPhoneOS8.2) UIActivityItemProvider.h }
{ Created on Fri Mar 20 2:11:41 2015 }


{$ifdef TYPES}
type
  UIActivityItemProviderPtr = ^UIActivityItemProvider;
  UIActivityItemSourceProtocolPtr = ^UIActivityItemSourceProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  UIActivityItemSourceProtocol = objcprotocol external name 'UIActivityItemSource' (NSObjectProtocol)
  required
    function activityViewControllerPlaceholderItem (activityViewController: UIActivityViewController): id; message 'activityViewControllerPlaceholderItem:';
    function activityViewController_itemForActivityType (activityViewController: UIActivityViewController; activityType: NSString): id; message 'activityViewController:itemForActivityType:';
  optional
    function activityViewController_subjectForActivityType (activityViewController: UIActivityViewController; activityType: NSString): NSString; message 'activityViewController:subjectForActivityType:';
    function activityViewController_dataTypeIdentifierForActivityType (activityViewController: UIActivityViewController; activityType: NSString): NSString; message 'activityViewController:dataTypeIdentifierForActivityType:';
    function activityViewController_thumbnailImageForActivityType_suggestedSize (activityViewController: UIActivityViewController; activityType: NSString; size: CGSize): UIImage; message 'activityViewController:thumbnailImageForActivityType:suggestedSize:';
  end;
{$endif}

{$ifdef CLASSES}

type
  UIActivityItemProvider = objcclass external (NSOperation, UIActivityItemSourceProtocol)
  public
    function initWithPlaceholderItem (placeholderItem: id): instancetype; message 'initWithPlaceholderItem:';
    function placeholderItem: id; message 'placeholderItem';
    function activityType: NSString; message 'activityType';
    function item: id; message 'item';

    { Adopted protocols }
    function activityViewController_dataTypeIdentifierForActivityType (activityViewController: UIActivityViewController; activityType: NSString): NSString; message 'activityViewController:dataTypeIdentifierForActivityType:';
    function activityViewController_itemForActivityType (activityViewController: UIActivityViewController; activityType: NSString): id; message 'activityViewController:itemForActivityType:';
    function activityViewController_subjectForActivityType (activityViewController: UIActivityViewController; activityType: NSString): NSString; message 'activityViewController:subjectForActivityType:';
    function activityViewController_thumbnailImageForActivityType_suggestedSize (activityViewController: UIActivityViewController; activityType: NSString; size: CGSize): UIImage; message 'activityViewController:thumbnailImageForActivityType:suggestedSize:';
    function activityViewControllerPlaceholderItem (activityViewController: UIActivityViewController): id; message 'activityViewControllerPlaceholderItem:';
  end;
{$endif}

