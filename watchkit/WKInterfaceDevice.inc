{ Parsed from WatchKit.framework (iPhoneOS8.2) WKInterfaceDevice.h }
{ Created on Fri Mar 20 2:11:37 2015 }


{$ifdef TYPES}
type
  WKInterfaceDevicePtr = ^WKInterfaceDevice;
{$endif}

{$ifdef CLASSES}

type
  WKInterfaceDevice = objcclass external (NSObject)
  public
    class function currentDevice: WKInterfaceDevice; message 'currentDevice';
    function addCachedImage_name (image: UIImage; name: NSString): boolean; message 'addCachedImage:name:';
    function addCachedImageWithData_name (imageData: NSData; name: NSString): boolean; message 'addCachedImageWithData:name:';
    procedure removeCachedImageWithName (name: NSString); message 'removeCachedImageWithName:';
    procedure removeAllCachedImages; message 'removeAllCachedImages';
    function screenBounds: CGRect; message 'screenBounds';
    function screenScale: CGFloat; message 'screenScale';
    function preferredContentSizeCategory: NSString; message 'preferredContentSizeCategory';
    function cachedImages: NSDictionary; message 'cachedImages';
  end;
{$endif}

