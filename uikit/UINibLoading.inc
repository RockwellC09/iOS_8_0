{ Parsed from UIKit.framework (iPhoneOS8.2) UINibLoading.h }
{ Created on Fri Mar 20 2:11:41 2015 }

{$ifdef EXTERNAL_SYMBOLS}
var
  UINibExternalObjects: NSString { available in 3_0 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  NSBundle_UINibLoadingAdditions = objccategory external name 'UINibLoadingAdditions' (NSBundle)
    function loadNibNamed_owner_options (name: NSString; owner: id; options: NSDictionary): NSArray; message 'loadNibNamed:owner:options:';
  end;

type
  UINibLoadingAdditions = objccategory external (NSObject)
    procedure awakeFromNib; message 'awakeFromNib';
    procedure prepareForInterfaceBuilder; message 'prepareForInterfaceBuilder'; { available in 8_0 }
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  UINibProxiedObjectsKey: NSString deprecated 'in 2_0, 3_0'; cvar; external;
{$endif}

