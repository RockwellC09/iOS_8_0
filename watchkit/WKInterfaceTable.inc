{ Parsed from WatchKit.framework (iPhoneOS8.2) WKInterfaceTable.h }
{ Created on Fri Mar 20 2:11:37 2015 }


{$ifdef TYPES}
type
  WKInterfaceTablePtr = ^WKInterfaceTable;
{$endif}

{$ifdef CLASSES}

type
  WKInterfaceTable = objcclass external (WKInterfaceObject)
  public
    procedure setRowTypes (rowTypes: NSArray); message 'setRowTypes:';
    procedure setNumberOfRows_withRowType (numberOfRows: NSInteger; rowType: NSString); message 'setNumberOfRows:withRowType:';
    function numberOfRows: NSInteger; message 'numberOfRows';
    function rowControllerAtIndex (index: NSInteger): id; message 'rowControllerAtIndex:';
    procedure insertRowsAtIndexes_withRowType (rows: NSIndexSet; rowType: NSString); message 'insertRowsAtIndexes:withRowType:';
    procedure removeRowsAtIndexes (rows: NSIndexSet); message 'removeRowsAtIndexes:';
    procedure scrollToRowAtIndex (index: NSInteger); message 'scrollToRowAtIndex:';
  end;
{$endif}

