{ Parsed from UIKit.framework (iPhoneOS8.2) NSStringDrawing.h }
{ Created on Fri Mar 20 2:11:42 2015 }


{$ifdef TYPES}
type
  NSStringDrawingContextPtr = ^NSStringDrawingContext;
{$endif}

{$ifdef CLASSES}

type
  NSStringDrawingContext = objcclass external (NSObject)
  private
  public
    procedure setMinimumScaleFactor(newValue: CGFloat); message 'setMinimumScaleFactor:';
    function minimumScaleFactor: CGFloat; message 'minimumScaleFactor';
    procedure setMinimumTrackingAdjustment(newValue: CGFloat); message 'setMinimumTrackingAdjustment:';
    function minimumTrackingAdjustment: CGFloat; message 'minimumTrackingAdjustment';
    function actualScaleFactor: CGFloat; message 'actualScaleFactor';
    function actualTrackingAdjustment: CGFloat; message 'actualTrackingAdjustment';
    function totalBounds: CGRect; message 'totalBounds';
  end;


type
  NSString_NSStringDrawing = objccategory external name 'NSStringDrawing' (NSString)
    function sizeWithAttributes (attrs: NSDictionary): CGSize; message 'sizeWithAttributes:'; { available in 7_0 }
    procedure drawAtPoint_withAttributes (point: CGPoint; attrs: NSDictionary); message 'drawAtPoint:withAttributes:'; { available in 7_0 }
    procedure drawInRect_withAttributes (rect: CGRect; attrs: NSDictionary); message 'drawInRect:withAttributes:'; { available in 7_0 }
  end;

type
  NSStringDrawing = objccategory external (NSAttributedString)
    function size: CGSize; message 'size'; { available in 6_0 }
    procedure drawAtPoint (point: CGPoint); message 'drawAtPoint:'; { available in 6_0 }
    procedure drawInRect (rect: CGRect); message 'drawInRect:'; { available in 6_0 }
  end;
{$endif}

{$ifdef TYPES}
type
  NSStringDrawingOptions = NSInteger;
  NSStringDrawingOptionsPtr = ^NSStringDrawingOptions;

const
  NSStringDrawingTruncatesLastVisibleLine = 1 shl 5;
  NSStringDrawingUsesLineFragmentOrigin = 1 shl 0;
  NSStringDrawingUsesFontLeading = 1 shl 1;
  NSStringDrawingUsesDeviceMetrics = 1 shl 3;
{$endif}

{$ifdef CLASSES}

type
  NSString_NSExtendedStringDrawing = objccategory external name 'NSExtendedStringDrawing' (NSString)
    procedure drawWithRect_options_attributes_context (rect: CGRect; options: NSStringDrawingOptions; attributes: NSDictionary; context: NSStringDrawingContext); message 'drawWithRect:options:attributes:context:'; { available in 7_0 }
    function boundingRectWithSize_options_attributes_context (size: CGSize; options: NSStringDrawingOptions; attributes: NSDictionary; context: NSStringDrawingContext): CGRect; message 'boundingRectWithSize:options:attributes:context:'; { available in 7_0 }
  end;

type
  NSExtendedStringDrawing = objccategory external (NSAttributedString)
    procedure drawWithRect_options_context (rect: CGRect; options: NSStringDrawingOptions; context: NSStringDrawingContext); message 'drawWithRect:options:context:'; { available in 6_0 }
    function boundingRectWithSize_options_context (size: CGSize; options: NSStringDrawingOptions; context: NSStringDrawingContext): CGRect; message 'boundingRectWithSize:options:context:'; { available in 6_0 }
  end;
{$endif}

