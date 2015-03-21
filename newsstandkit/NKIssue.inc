{ Parsed from NewsstandKit.framework (iPhoneOS8.2) NKIssue.h }
{ Created on Fri Mar 20 2:11:10 2015 }


{$ifdef TYPES}
type
  NKIssuePtr = ^NKIssue;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NKIssueDownloadCompletedNotification: NSString { available in 5_0 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  NKIssueContentStatus = NSInteger;
  NKIssueContentStatusPtr = ^NKIssueContentStatus;

const
  NKIssueContentStatusNone = 0;
  NKIssueContentStatusDownloading = 1;
  NKIssueContentStatusAvailable = 2;
{$endif}

{$ifdef CLASSES}

type
  NKIssue = objcclass external (NSObject)
  public
    function downloadingAssets: NSArray; message 'downloadingAssets';
    function contentURL: NSURL; message 'contentURL';
    function status: NKIssueContentStatus; message 'status';
    function name: NSString; message 'name';
    function date: NSDate; message 'date';
    function addAssetWithRequest (request: NSURLRequest): NKAssetDownload; message 'addAssetWithRequest:';
  end;
{$endif}

