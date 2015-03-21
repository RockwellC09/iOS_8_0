{ Parsed from NewsstandKit.framework (iPhoneOS8.2) NKLibrary.h }
{ Created on Fri Mar 20 2:11:10 2015 }


{$ifdef TYPES}
type
  NKLibraryPtr = ^NKLibrary;
{$endif}

{$ifdef CLASSES}

type
  NKLibrary = objcclass external (NSObject)
  public
    function issues: NSArray; message 'issues';
    function downloadingAssets: NSArray; message 'downloadingAssets';
    procedure setCurrentlyReadingIssue(newValue: NKIssue); message 'setCurrentlyReadingIssue:';
    function currentlyReadingIssue: NKIssue; message 'currentlyReadingIssue';
    class function sharedLibrary: NKLibrary; message 'sharedLibrary';
    function issueWithName (name: NSString): NKIssue; message 'issueWithName:';
    function addIssueWithName_date (name: NSString; date: NSDate): NKIssue; message 'addIssueWithName:date:';
    procedure removeIssue (issue: NKIssue); message 'removeIssue:';
  end;
{$endif}

