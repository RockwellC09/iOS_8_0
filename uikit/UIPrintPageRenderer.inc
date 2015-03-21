{ Parsed from UIKit.framework (iPhoneOS8.2) UIPrintPageRenderer.h }
{ Created on Fri Mar 20 2:11:41 2015 }


{$ifdef TYPES}
type
  UIPrintPageRendererPtr = ^UIPrintPageRenderer;
{$endif}

{$ifdef CLASSES}

type
  UIPrintPageRenderer = objcclass external (NSObject)
  private
    _headerHeight: CGFloat;
    _footerHeight: CGFloat;
    _paperRect: CGRect;
    _printableRect: CGRect;
    _printFormatters: NSMutableArray;
    _printContext: CGContextRef;
  public
    procedure setHeaderHeight(newValue: CGFloat); message 'setHeaderHeight:';
    function headerHeight: CGFloat; message 'headerHeight';
    procedure setFooterHeight(newValue: CGFloat); message 'setFooterHeight:';
    function footerHeight: CGFloat; message 'footerHeight';
    function paperRect: CGRect; message 'paperRect';
    function printableRect: CGRect; message 'printableRect';
    procedure setPrintFormatters(newValue: NSArray); message 'setPrintFormatters:';
    function printFormatters: NSArray; message 'printFormatters';
    function printFormattersForPageAtIndex (pageIndex: NSInteger): NSArray; message 'printFormattersForPageAtIndex:';
    procedure addPrintFormatter_startingAtPageAtIndex (formatter: UIPrintFormatter; pageIndex: NSInteger); message 'addPrintFormatter:startingAtPageAtIndex:';
    function numberOfPages: NSInteger; message 'numberOfPages';
    procedure prepareForDrawingPages (range: NSRange); message 'prepareForDrawingPages:';
    procedure drawPageAtIndex_inRect (pageIndex: NSInteger; printableRect_: CGRect); message 'drawPageAtIndex:inRect:';
    procedure drawPrintFormatter_forPageAtIndex (printFormatter: UIPrintFormatter; pageIndex: NSInteger); message 'drawPrintFormatter:forPageAtIndex:';
    procedure drawHeaderForPageAtIndex_inRect (pageIndex: NSInteger; headerRect: CGRect); message 'drawHeaderForPageAtIndex:inRect:';
    procedure drawContentForPageAtIndex_inRect (pageIndex: NSInteger; contentRect: CGRect); message 'drawContentForPageAtIndex:inRect:';
    procedure drawFooterForPageAtIndex_inRect (pageIndex: NSInteger; footerRect: CGRect); message 'drawFooterForPageAtIndex:inRect:';
  end;
{$endif}

