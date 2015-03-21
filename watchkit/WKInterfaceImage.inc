{ Parsed from WatchKit.framework (iPhoneOS8.2) WKInterfaceImage.h }
{ Created on Fri Mar 20 2:11:37 2015 }


{$ifdef TYPES}
type
  WKInterfaceImagePtr = ^WKInterfaceImage;
{$endif}

{$ifdef CLASSES}

type
  WKInterfaceImage = objcclass external (WKInterfaceObject)
  public
    procedure setImage (image: UIImage); message 'setImage:';
    procedure setImageData (imageData: NSData); message 'setImageData:';
    procedure setImageNamed (imageName: NSString); message 'setImageNamed:';
    procedure setTintColor (tintColor: UIColor); message 'setTintColor:';
    procedure startAnimating; message 'startAnimating';
    procedure startAnimatingWithImagesInRange_duration_repeatCount (imageRange: NSRange; duration: NSTimeInterval; repeatCount: NSInteger); message 'startAnimatingWithImagesInRange:duration:repeatCount:';
    procedure stopAnimating; message 'stopAnimating';
  end;
{$endif}

