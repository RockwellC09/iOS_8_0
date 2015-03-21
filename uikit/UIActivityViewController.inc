{ Parsed from UIKit.framework (iPhoneOS8.2) UIActivityViewController.h }
{ Created on Fri Mar 20 2:11:41 2015 }


{$ifdef TYPES}
type
  UIActivityViewControllerPtr = ^UIActivityViewController;
{$endif}

{$ifdef TYPES}
type
  UIActivityViewControllerCompletionHandler = OpaqueCBlock;
  UIActivityViewControllerCompletionWithItemsHandler = OpaqueCBlock { available in 6_0 };
{$endif}

{$ifdef CLASSES}

type
  UIActivityViewController = objcclass external (UIViewController)
  public
    function initWithActivityItems_applicationActivities (activityItems: NSArray; applicationActivities: NSArray): instancetype; message 'initWithActivityItems:applicationActivities:';
    procedure setCompletionHandler(newValue: UIActivityViewControllerCompletionHandler); message 'setCompletionHandler:';
    function completionHandler: UIActivityViewControllerCompletionHandler; message 'completionHandler';
    procedure setCompletionWithItemsHandler(newValue: UIActivityViewControllerCompletionWithItemsHandler); message 'setCompletionWithItemsHandler:';
    function completionWithItemsHandler: UIActivityViewControllerCompletionWithItemsHandler; message 'completionWithItemsHandler';
    procedure setExcludedActivityTypes(newValue: NSArray); message 'setExcludedActivityTypes:';
    function excludedActivityTypes: NSArray; message 'excludedActivityTypes';
  end;
{$endif}

