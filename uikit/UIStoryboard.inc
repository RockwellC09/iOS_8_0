{ Parsed from UIKit.framework (iPhoneOS8.2) UIStoryboard.h }
{ Created on Fri Mar 20 2:11:42 2015 }


{$ifdef TYPES}
type
  UIStoryboardPtr = ^UIStoryboard;
{$endif}

{$ifdef CLASSES}

type
  UIStoryboard = objcclass external (NSObject)
  private
  public
    class function storyboardWithName_bundle (name: NSString; storyboardBundleOrNil: NSBundle): UIStoryboard; message 'storyboardWithName:bundle:';
    function instantiateInitialViewController: id; message 'instantiateInitialViewController';
    function instantiateViewControllerWithIdentifier (identifier: NSString): id; message 'instantiateViewControllerWithIdentifier:';
  end;
{$endif}

