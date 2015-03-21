{ Parsed from UIKit.framework (iPhoneOS8.2) UIPrintFormatter.h }
{ Created on Fri Mar 20 2:11:41 2015 }


{$ifdef TYPES}
type
  UIPrintFormatterPtr = ^UIPrintFormatter;
  UISimpleTextPrintFormatterPtr = ^UISimpleTextPrintFormatter;
  UIMarkupTextPrintFormatterPtr = ^UIMarkupTextPrintFormatter;
  UIViewPrintFormatterPtr = ^UIViewPrintFormatter;
{$endif}

{$ifdef CLASSES}

type
  UIPrintFormatter = objcclass external (NSObject, NSCopyingProtocol)
  private
    _printPageRenderer: UIPrintPageRenderer;
    _maximumContentHeight: CGFloat;
    _maximumContentWidth: CGFloat;
    _contentInsets: UIEdgeInsets;
    _perPageContentInsets: UIEdgeInsets;
    _startPage: NSInteger;
    _pageCount: NSInteger;
    _needsRecalc: boolean;
  public
    function printPageRenderer: UIPrintPageRenderer; message 'printPageRenderer';
    procedure removeFromPrintPageRenderer; message 'removeFromPrintPageRenderer';
    procedure setMaximumContentHeight(newValue: CGFloat); message 'setMaximumContentHeight:';
    function maximumContentHeight: CGFloat; message 'maximumContentHeight';
    procedure setMaximumContentWidth(newValue: CGFloat); message 'setMaximumContentWidth:';
    function maximumContentWidth: CGFloat; message 'maximumContentWidth';
    procedure setContentInsets(newValue: UIEdgeInsets); message 'setContentInsets:';
    function contentInsets: UIEdgeInsets; message 'contentInsets';
    procedure setPerPageContentInsets(newValue: UIEdgeInsets); message 'setPerPageContentInsets:';
    function perPageContentInsets: UIEdgeInsets; message 'perPageContentInsets';
    procedure setStartPage(newValue: NSInteger); message 'setStartPage:';
    function startPage: NSInteger; message 'startPage';
    function pageCount: NSInteger; message 'pageCount';
    function rectForPageAtIndex (pageIndex: NSInteger): CGRect; message 'rectForPageAtIndex:';
    procedure drawInRect_forPageAtIndex (rect: CGRect; pageIndex: NSInteger); message 'drawInRect:forPageAtIndex:';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;

type
  UISimpleTextPrintFormatter = objcclass external (UIPrintFormatter)
  private
  public
    function initWithText (text: NSString): instancetype; message 'initWithText:';
    function initWithAttributedText (attributedText: NSAttributedString): instancetype; message 'initWithAttributedText:'; { available in 7_0 }
    procedure setText(newValue: NSString); message 'setText:';
    function text: NSString; message 'text';
    procedure setAttributedText(newValue: NSAttributedString); message 'setAttributedText:';
    function attributedText: NSAttributedString; message 'attributedText';
    procedure setFont(newValue: UIFont); message 'setFont:';
    function font: UIFont; message 'font';
    procedure setColor(newValue: UIColor); message 'setColor:';
    function color: UIColor; message 'color';
    procedure setTextAlignment(newValue: NSTextAlignment); message 'setTextAlignment:';
    function textAlignment: NSTextAlignment; message 'textAlignment';
  end;

type
  UIMarkupTextPrintFormatter = objcclass external (UIPrintFormatter)
  private
  public
    function initWithMarkupText (markupText: NSString): instancetype; message 'initWithMarkupText:';
    procedure setMarkupText(newValue: NSString); message 'setMarkupText:';
    function markupText: NSString; message 'markupText';
  end;

type
  UIViewPrintFormatter = objcclass external (UIPrintFormatter)
  private
    _view: UIView;
  public
    function view: UIView; message 'view';
  end;


type
  UIView_UIPrintFormatter = objccategory external name 'UIPrintFormatter' (UIView)
    function viewPrintFormatter: UIViewPrintFormatter; message 'viewPrintFormatter';
    procedure drawRect_forViewPrintFormatter (rect: CGRect; formatter: UIViewPrintFormatter); message 'drawRect:forViewPrintFormatter:';
  end;
{$endif}

