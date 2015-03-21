{ Parsed from QuickLook.framework (iPhoneOS8.2) QLPreviewController.h }
{ Created on Fri Mar 20 2:11:15 2015 }


{$ifdef TYPES}
type
  QLPreviewControllerPtr = ^QLPreviewController;
  QLPreviewControllerDataSourceProtocolPtr = ^QLPreviewControllerDataSourceProtocol;
  QLPreviewControllerDelegateProtocolPtr = ^QLPreviewControllerDelegateProtocol;
{$endif}

{$ifdef CLASSES}

type
  QLPreviewController = objcclass external (UIViewController)
  private
    _reserved: QLPreviewControllerReserved;
  public
    class function canPreviewItem (item: QLPreviewItemProtocol): boolean; message 'canPreviewItem:';
    procedure setDataSource(newValue: QLPreviewControllerDataSourceProtocol); message 'setDataSource:';
    function dataSource: QLPreviewControllerDataSourceProtocol; message 'dataSource';
    procedure reloadData; message 'reloadData';
    procedure refreshCurrentPreviewItem; message 'refreshCurrentPreviewItem';
    procedure setCurrentPreviewItemIndex(newValue: NSInteger); message 'setCurrentPreviewItemIndex:';
    function currentPreviewItemIndex: NSInteger; message 'currentPreviewItemIndex';
    function currentPreviewItem: QLPreviewItemProtocol; message 'currentPreviewItem';
    procedure setDelegate(newValue: QLPreviewControllerDelegateProtocol); message 'setDelegate:';
    function delegate: QLPreviewControllerDelegateProtocol; message 'delegate';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  QLPreviewControllerDataSourceProtocol = objcprotocol external name 'QLPreviewControllerDataSource'
  required
    function numberOfPreviewItemsInPreviewController (controller: QLPreviewController): NSInteger; message 'numberOfPreviewItemsInPreviewController:';
    function previewController_previewItemAtIndex (controller: QLPreviewController; index: NSInteger): QLPreviewItemProtocol; message 'previewController:previewItemAtIndex:';
  end;

type
  QLPreviewControllerDelegateProtocol = objcprotocol external name 'QLPreviewControllerDelegate' (NSObjectProtocol)
  optional
    procedure previewControllerWillDismiss (controller: QLPreviewController); message 'previewControllerWillDismiss:';
    procedure previewControllerDidDismiss (controller: QLPreviewController); message 'previewControllerDidDismiss:';
    function previewController_shouldOpenURL_forPreviewItem (controller: QLPreviewController; url: NSURL; item: QLPreviewItemProtocol): boolean; message 'previewController:shouldOpenURL:forPreviewItem:';
    function previewController_frameForPreviewItem_inSourceView (controller: QLPreviewController; item: QLPreviewItemProtocol; view: UIViewPtr): CGRect; message 'previewController:frameForPreviewItem:inSourceView:';
    function previewController_transitionImageForPreviewItem_contentRect (controller: QLPreviewController; item: QLPreviewItemProtocol; contentRect: CGRectPtr): UIImage; message 'previewController:transitionImageForPreviewItem:contentRect:';
  end;
{$endif}

