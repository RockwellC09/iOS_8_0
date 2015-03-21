{ Parsed from UIKit.framework (iPhoneOS8.2) UIPrintInteractionController.h }
{ Created on Fri Mar 20 2:11:41 2015 }


{$ifdef TYPES}
type
  UIPrintInteractionControllerPtr = ^UIPrintInteractionController;
  UIPrintInteractionControllerDelegateProtocolPtr = ^UIPrintInteractionControllerDelegateProtocol;
{$endif}

{$ifdef TYPES}
type
  UIPrintInteractionCompletionHandler = OpaqueCBlock;
{$endif}

{$ifdef CLASSES}

type
  UIPrintInteractionController = objcclass external (NSObject)
  public
    class function isPrintingAvailable: boolean; message 'isPrintingAvailable';
    class function printableUTIs: NSSet; message 'printableUTIs';
    class function canPrintURL (url: NSURL): boolean; message 'canPrintURL:';
    class function canPrintData (data: NSData): boolean; message 'canPrintData:';
    class function sharedPrintController: UIPrintInteractionController; message 'sharedPrintController';
    procedure setPrintInfo(newValue: UIPrintInfo); message 'setPrintInfo:';
    function printInfo: UIPrintInfo; message 'printInfo';
    procedure setDelegate(newValue: UIPrintInteractionControllerDelegateProtocol); message 'setDelegate:';
    function delegate: UIPrintInteractionControllerDelegateProtocol; message 'delegate';
    procedure setShowsPageRange(newValue: boolean); message 'setShowsPageRange:';
    function showsPageRange: boolean; message 'showsPageRange';
    procedure setShowsNumberOfCopies(newValue: boolean); message 'setShowsNumberOfCopies:';
    function showsNumberOfCopies: boolean; message 'showsNumberOfCopies';
    procedure setShowsPaperSelectionForLoadedPapers(newValue: boolean); message 'setShowsPaperSelectionForLoadedPapers:';
    function showsPaperSelectionForLoadedPapers: boolean; message 'showsPaperSelectionForLoadedPapers';
    function printPaper: UIPrintPaper; message 'printPaper';
    procedure setPrintPageRenderer(newValue: UIPrintPageRenderer); message 'setPrintPageRenderer:';
    function printPageRenderer: UIPrintPageRenderer; message 'printPageRenderer';
    procedure setPrintFormatter(newValue: UIPrintFormatter); message 'setPrintFormatter:';
    function printFormatter: UIPrintFormatter; message 'printFormatter';
    procedure setPrintingItem(newValue: id); message 'setPrintingItem:';
    function printingItem: id; message 'printingItem';
    procedure setPrintingItems(newValue: NSArray); message 'setPrintingItems:';
    function printingItems: NSArray; message 'printingItems';
    function presentAnimated_completionHandler (animated: boolean; completion: UIPrintInteractionCompletionHandler): boolean; message 'presentAnimated:completionHandler:';
    function presentFromRect_inView_animated_completionHandler (rect: CGRect; view: UIView; animated: boolean; completion: UIPrintInteractionCompletionHandler): boolean; message 'presentFromRect:inView:animated:completionHandler:';
    function presentFromBarButtonItem_animated_completionHandler (item: UIBarButtonItem; animated: boolean; completion: UIPrintInteractionCompletionHandler): boolean; message 'presentFromBarButtonItem:animated:completionHandler:';
    function printToPrinter_completionHandler (printer: UIPrinter; completion: UIPrintInteractionCompletionHandler): boolean; message 'printToPrinter:completionHandler:';
    procedure dismissAnimated (animated: boolean); message 'dismissAnimated:';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  UIPrintInteractionControllerDelegateProtocol = objcprotocol external name 'UIPrintInteractionControllerDelegate' (NSObjectProtocol)
  optional
    function printInteractionControllerParentViewController (printInteractionController: UIPrintInteractionController): UIViewController; message 'printInteractionControllerParentViewController:';
    function printInteractionController_choosePaper (printInteractionController: UIPrintInteractionController; paperList: NSArray): UIPrintPaper; message 'printInteractionController:choosePaper:';
    procedure printInteractionControllerWillPresentPrinterOptions (printInteractionController: UIPrintInteractionController); message 'printInteractionControllerWillPresentPrinterOptions:';
    procedure printInteractionControllerDidPresentPrinterOptions (printInteractionController: UIPrintInteractionController); message 'printInteractionControllerDidPresentPrinterOptions:';
    procedure printInteractionControllerWillDismissPrinterOptions (printInteractionController: UIPrintInteractionController); message 'printInteractionControllerWillDismissPrinterOptions:';
    procedure printInteractionControllerDidDismissPrinterOptions (printInteractionController: UIPrintInteractionController); message 'printInteractionControllerDidDismissPrinterOptions:';
    procedure printInteractionControllerWillStartJob (printInteractionController: UIPrintInteractionController); message 'printInteractionControllerWillStartJob:';
    procedure printInteractionControllerDidFinishJob (printInteractionController: UIPrintInteractionController); message 'printInteractionControllerDidFinishJob:';
    function printInteractionController_cutLengthForPaper (printInteractionController: UIPrintInteractionController; paper: UIPrintPaper): CGFloat; message 'printInteractionController:cutLengthForPaper:'; { available in 7_0 }
  end;
{$endif}

