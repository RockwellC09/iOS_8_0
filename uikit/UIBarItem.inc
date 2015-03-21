{ Parsed from UIKit.framework (iPhoneOS8.2) UIBarItem.h }
{ Created on Fri Mar 20 2:11:41 2015 }


{$ifdef TYPES}
type
  UIBarItemPtr = ^UIBarItem;
{$endif}

{$ifdef CLASSES}

type
  UIBarItem = objcclass external (NSObject, UIAppearanceProtocol)
  private
  public
    procedure setEnabled(newValue: boolean); message 'setEnabled:';
    function isEnabled: boolean; message 'isEnabled';
    procedure setTitle(newValue: NSString); message 'setTitle:';
    function title: NSString; message 'title';
    procedure setImage(newValue: UIImage); message 'setImage:';
    function image: UIImage; message 'image';
    procedure setLandscapeImagePhone(newValue: UIImage); message 'setLandscapeImagePhone:';
    function landscapeImagePhone: UIImage; message 'landscapeImagePhone';
    procedure setImageInsets(newValue: UIEdgeInsets); message 'setImageInsets:';
    function imageInsets: UIEdgeInsets; message 'imageInsets';
    procedure setLandscapeImagePhoneInsets(newValue: UIEdgeInsets); message 'setLandscapeImagePhoneInsets:';
    function landscapeImagePhoneInsets: UIEdgeInsets; message 'landscapeImagePhoneInsets';
    procedure setTag(newValue: NSInteger); message 'setTag:';
    function tag: NSInteger; message 'tag';
    procedure setTitleTextAttributes_forState (attributes: NSDictionary; state: UIControlState); message 'setTitleTextAttributes:forState:'; { available in 5_0 }
    function titleTextAttributesForState (state: UIControlState): NSDictionary; message 'titleTextAttributesForState:'; { available in 5_0 }

    { Adopted protocols }
    class function appearance: instancetype; message 'appearance';
    class function appearanceForTraitCollection (trait: UITraitCollection): instancetype; message 'appearanceForTraitCollection:'; { available in 8_0 }
    class function appearanceForTraitCollection_whenContainedIn (trait: UITraitCollection; ContainerClass: UIAppearanceContainerProtocol): instancetype; varargs; message 'appearanceForTraitCollection:whenContainedIn:'; { available in 8_0 }
    class function appearanceWhenContainedIn (ContainerClass: UIAppearanceContainerProtocol): instancetype; varargs; message 'appearanceWhenContainedIn:';
  end;
{$endif}

