{ Parsed from UIKit.framework (iPhoneOS8.2) UIAccessibilityAdditions.h }
{ Created on Fri Mar 20 2:11:41 2015 }


{$ifdef TYPES}
type
  UIPickerViewAccessibilityDelegateProtocolPtr = ^UIPickerViewAccessibilityDelegateProtocol;
  UIScrollViewAccessibilityDelegateProtocolPtr = ^UIScrollViewAccessibilityDelegateProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  UIPickerViewAccessibilityDelegateProtocol = objcprotocol external name 'UIPickerViewAccessibilityDelegate' (UIPickerViewDelegateProtocol)
  optional
    function pickerView_accessibilityLabelForComponent (pickerView: UIPickerView; component: NSInteger): NSString; message 'pickerView:accessibilityLabelForComponent:';
    function pickerView_accessibilityHintForComponent (pickerView: UIPickerView; component: NSInteger): NSString; message 'pickerView:accessibilityHintForComponent:';
  end;

type
  UIScrollViewAccessibilityDelegateProtocol = objcprotocol external name 'UIScrollViewAccessibilityDelegate' (UIScrollViewDelegateProtocol)
  optional
    function accessibilityScrollStatusForScrollView (scrollView: UIScrollView): NSString; message 'accessibilityScrollStatusForScrollView:';
  end;
{$endif}

