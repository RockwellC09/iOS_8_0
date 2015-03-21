{ Parsed from UIKit.framework (iPhoneOS8.2) UIAppearance.h }
{ Created on Fri Mar 20 2:11:41 2015 }


{$ifdef TYPES}
type
  UIAppearanceContainerProtocolPtr = ^UIAppearanceContainerProtocol;
  UIAppearanceProtocolPtr = ^UIAppearanceProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  UIAppearanceContainerProtocol = objcprotocol external name 'UIAppearanceContainer' (NSObjectProtocol)
  end;

type
  UIAppearanceProtocol = objcprotocol external name 'UIAppearance' (NSObjectProtocol)
    class function appearance: instancetype; message 'appearance';
    class function appearanceWhenContainedIn (ContainerClass: UIAppearanceContainerProtocol): instancetype; varargs; message 'appearanceWhenContainedIn:';
    class function appearanceForTraitCollection (trait: UITraitCollection): instancetype; message 'appearanceForTraitCollection:'; { available in 8_0 }
    class function appearanceForTraitCollection_whenContainedIn (trait: UITraitCollection; ContainerClass: UIAppearanceContainerProtocol): instancetype; varargs; message 'appearanceForTraitCollection:whenContainedIn:'; { available in 8_0 }
  end;
{$endif}

