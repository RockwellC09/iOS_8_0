{ Parsed from WatchKit.framework (iPhoneOS8.2) WKInterfaceGroup.h }
{ Created on Fri Mar 20 2:11:37 2015 }


{$ifdef TYPES}
type
  WKInterfaceGroupPtr = ^WKInterfaceGroup;
{$endif}

{$ifdef CLASSES}

type
  WKInterfaceGroup = objcclass external (WKInterfaceObject)
  public
    procedure setCornerRadius (cornerRadius: CGFloat); message 'setCornerRadius:';
    procedure setBackgroundColor (color: UIColor); message 'setBackgroundColor:';
    procedure setBackgroundImage (image: UIImage); message 'setBackgroundImage:';
    procedure setBackgroundImageData (imageData: NSData); message 'setBackgroundImageData:';
    procedure setBackgroundImageNamed (imageName: NSString); message 'setBackgroundImageNamed:';
    procedure startAnimating; message 'startAnimating';
    procedure startAnimatingWithImagesInRange_duration_repeatCount (imageRange: NSRange; duration: NSTimeInterval; repeatCount: NSInteger); message 'startAnimatingWithImagesInRange:duration:repeatCount:';
    procedure stopAnimating; message 'stopAnimating';
  end;
{$endif}

