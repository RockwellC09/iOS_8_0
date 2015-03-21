{ Parsed from GameController.framework (iPhoneOS8.2) GCControllerElement.h }
{ Created on Fri Mar 20 2:10:53 2015 }


{ Types from GCControllerElement }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  GCControllerElementPtr = ^GCControllerElement;
{$endif}

{$ifdef CLASSES}

type
  GCControllerElement = objcclass external (NSObject)
  public
    {$if  not defined(__has_feature)}
    function collection: GCControllerElement; message 'collection';
    {$else}
    function collection_: GCControllerElement; message 'collection';
    {$endif}
    function isAnalog: boolean; message 'isAnalog';
  end;
{$endif}

