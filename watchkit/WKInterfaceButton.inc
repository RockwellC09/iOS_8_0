{ Parsed from WatchKit.framework (iPhoneOS8.2) WKInterfaceButton.h }
{ Created on Fri Mar 20 2:11:37 2015 }


{$ifdef TYPES}
type
  WKInterfaceButtonPtr = ^WKInterfaceButton;
{$endif}

{$ifdef CLASSES}

type
  WKInterfaceButton = objcclass external (WKInterfaceObject)
  public
    procedure setTitle (title: NSString); message 'setTitle:';
    procedure setAttributedTitle (attributedTitle: NSAttributedString); message 'setAttributedTitle:';
    procedure setBackgroundColor (color: UIColor); message 'setBackgroundColor:';
    procedure setBackgroundImage (image: UIImage); message 'setBackgroundImage:';
    procedure setBackgroundImageData (imageData: NSData); message 'setBackgroundImageData:';
    procedure setBackgroundImageNamed (imageName: NSString); message 'setBackgroundImageNamed:';
    procedure setEnabled (enabled: boolean); message 'setEnabled:';
  end;
{$endif}

