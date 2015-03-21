{ Parsed from UIKit.framework (iPhoneOS8.2) UIPageControl.h }
{ Created on Fri Mar 20 2:11:41 2015 }


{$ifdef TYPES}
type
  UIPageControlPtr = ^UIPageControl;
{$endif}

{$ifdef CLASSES}

type
  UIPageControl = objcclass external (UIControl)
  private
    _indicators: NSMutableArray;
    _currentPage: NSInteger;
    _displayedPage: NSInteger;
    _pageControlFlags: bitpacked record
      case byte of
        0: (_anonBitField__pageControlFlags0: cuint);
        1: (
          hideForSinglePage: 0..1;
          defersCurrentPageDisplay: 0..1;
        );
      end;
    _currentPageImage: UIImage;
    _pageImage: UIImage;
  public
    procedure setNumberOfPages(newValue: NSInteger); message 'setNumberOfPages:';
    function numberOfPages: NSInteger; message 'numberOfPages';
    procedure setCurrentPage(newValue: NSInteger); message 'setCurrentPage:';
    function currentPage: NSInteger; message 'currentPage';
    procedure setHidesForSinglePage(newValue: boolean); message 'setHidesForSinglePage:';
    function hidesForSinglePage: boolean; message 'hidesForSinglePage';
    procedure setDefersCurrentPageDisplay(newValue: boolean); message 'setDefersCurrentPageDisplay:';
    function defersCurrentPageDisplay: boolean; message 'defersCurrentPageDisplay';
    procedure updateCurrentPageDisplay; message 'updateCurrentPageDisplay';
    function sizeForNumberOfPages (pageCount: NSInteger): CGSize; message 'sizeForNumberOfPages:';
    procedure setPageIndicatorTintColor(newValue: UIColor); message 'setPageIndicatorTintColor:';
    function pageIndicatorTintColor: UIColor; message 'pageIndicatorTintColor';
    procedure setCurrentPageIndicatorTintColor(newValue: UIColor); message 'setCurrentPageIndicatorTintColor:';
    function currentPageIndicatorTintColor: UIColor; message 'currentPageIndicatorTintColor';
  end;
{$endif}

