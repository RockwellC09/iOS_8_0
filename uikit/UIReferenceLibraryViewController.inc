{ Parsed from UIKit.framework (iPhoneOS8.2) UIReferenceLibraryViewController.h }
{ Created on Fri Mar 20 2:11:41 2015 }


{$ifdef TYPES}
type
  UIReferenceLibraryViewControllerPtr = ^UIReferenceLibraryViewController;
{$endif}

{$ifdef CLASSES}

type
  UIReferenceLibraryViewController = objcclass external (UIViewController)
  private
  public
    class function dictionaryHasDefinitionForTerm (term: NSString): boolean; message 'dictionaryHasDefinitionForTerm:';
    function initWithTerm (term: NSString): instancetype; message 'initWithTerm:';
  end;
{$endif}

