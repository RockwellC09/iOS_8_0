{ Parsed from WebKit.framework (iPhoneOS8.2) WKBackForwardList.h }
{ Created on Fri Mar 20 2:11:42 2015 }


{$ifdef TYPES}
type
  WKBackForwardListPtr = ^WKBackForwardList;
{$endif}

{$if defined(WK_API_ENABLED)}
{$ifdef CLASSES}

type
  WKBackForwardList = objcclass external (NSObject)
  public
    function currentItem: WKBackForwardListItem; message 'currentItem';
    function backItem: WKBackForwardListItem; message 'backItem';
    function forwardItem: WKBackForwardListItem; message 'forwardItem';
    function itemAtIndex (index: NSInteger): WKBackForwardListItem; message 'itemAtIndex:';
    function backList: NSArray; message 'backList';
    function forwardList: NSArray; message 'forwardList';
  end;
{$endif}

{$endif}
