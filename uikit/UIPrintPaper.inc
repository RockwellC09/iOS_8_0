{ Parsed from UIKit.framework (iPhoneOS8.2) UIPrintPaper.h }
{ Created on Fri Mar 20 2:11:41 2015 }


{$ifdef TYPES}
type
  UIPrintPaperPtr = ^UIPrintPaper;
{$endif}

{$ifdef CLASSES}

type
  UIPrintPaper = objcclass external (NSObject)
  private
    _paperOrientation: cint;
    _internal: id;
  public
    class function bestPaperForPageSize_withPapersFromArray (contentSize: CGSize; paperList: NSArray): UIPrintPaper; message 'bestPaperForPageSize:withPapersFromArray:';
    function paperSize: CGSize; message 'paperSize';
    function printableRect: CGRect; message 'printableRect';
  end;


type
  Deprecated_Nonfunctional = objccategory external (UIPrintPaper)
    function printRect: CGRect; message 'printRect';
  end;
{$endif}

