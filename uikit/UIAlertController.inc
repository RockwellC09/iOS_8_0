{ Parsed from UIKit.framework (iPhoneOS8.2) UIAlertController.h }
{ Created on Fri Mar 20 2:11:41 2015 }


{$ifdef TYPES}
type
  UIAlertActionPtr = ^UIAlertAction;
  UIAlertControllerPtr = ^UIAlertController;
{$endif}

{$ifdef TYPES}
type
  UIAlertActionStyle = NSInteger;
  UIAlertActionStylePtr = ^UIAlertActionStyle;

const
  UIAlertActionStyleDefault = 0;
  UIAlertActionStyleCancel = 1;
  UIAlertActionStyleDestructive = 2;

type
  UIAlertControllerStyle = NSInteger;
  UIAlertControllerStylePtr = ^UIAlertControllerStyle;

const
  UIAlertControllerStyleActionSheet = 0;
  UIAlertControllerStyleAlert = 1;
{$endif}

{$ifdef CLASSES}

type
  UIAlertAction = objcclass external (NSObject, NSCopyingProtocol)
  public
    class function actionWithTitle_style_handler (title: NSString; style: UIAlertActionStyle; handler: OpaqueCBlock): instancetype; message 'actionWithTitle:style:handler:';
    function title: NSString; message 'title';
    function style: UIAlertActionStyle; message 'style';
    procedure setEnabled(newValue: boolean); message 'setEnabled:';
    function isEnabled: boolean; message 'isEnabled';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;

type
  UIAlertController = objcclass external (UIViewController)
  public
    class function alertControllerWithTitle_message_preferredStyle (title_: NSString; message_: NSString; preferredStyle: UIAlertControllerStyle): instancetype; message 'alertControllerWithTitle:message:preferredStyle:';
    procedure addAction (action: UIAlertAction); message 'addAction:';
    function actions: NSArray; message 'actions';
    procedure addTextFieldWithConfigurationHandler (configurationHandler: OpaqueCBlock); message 'addTextFieldWithConfigurationHandler:';
    function textFields: NSArray; message 'textFields';
    procedure setTitle(newValue: NSString); message 'setTitle:';
    function title: NSString; message 'title';
    procedure setMessage(newValue: NSString); message 'setMessage:';
    function message_: NSString; message 'message';
    function preferredStyle: UIAlertControllerStyle; message 'preferredStyle';
  end;
{$endif}

