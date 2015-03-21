{ Parsed from UIKit.framework (iPhoneOS8.2) UIPickerView.h }
{ Created on Fri Mar 20 2:11:41 2015 }


{$ifdef TYPES}
type
  UIPickerViewPtr = ^UIPickerView;
  UIPickerViewDataSourceProtocolPtr = ^UIPickerViewDataSourceProtocol;
  UIPickerViewDelegateProtocolPtr = ^UIPickerViewDelegateProtocol;
{$endif}

{$ifdef CLASSES}

type
  UIPickerView = objcclass external (UIView, NSCodingProtocol, UITableViewDataSourceProtocol)
  public
    procedure setDataSource(newValue: UIPickerViewDataSourceProtocol); message 'setDataSource:';
    function dataSource: UIPickerViewDataSourceProtocol; message 'dataSource';
    procedure setDelegate(newValue: UIPickerViewDelegateProtocol); message 'setDelegate:';
    function delegate: UIPickerViewDelegateProtocol; message 'delegate';
    procedure setShowsSelectionIndicator(newValue: boolean); message 'setShowsSelectionIndicator:';
    function showsSelectionIndicator: boolean; message 'showsSelectionIndicator';
    function numberOfComponents: NSInteger; message 'numberOfComponents';
    function numberOfRowsInComponent (component: NSInteger): NSInteger; message 'numberOfRowsInComponent:';
    function rowSizeForComponent (component: NSInteger): CGSize; message 'rowSizeForComponent:';
    function viewForRow_forComponent (row: NSInteger; component: NSInteger): UIView; message 'viewForRow:forComponent:';
    procedure reloadAllComponents; message 'reloadAllComponents';
    procedure reloadComponent (component: NSInteger); message 'reloadComponent:';
    procedure selectRow_inComponent_animated (row: NSInteger; component: NSInteger; animated: boolean); message 'selectRow:inComponent:animated:';
    function selectedRowInComponent (component: NSInteger): NSInteger; message 'selectedRowInComponent:';

    { Adopted protocols }
    function numberOfSectionsInTableView (tableView: UITableView): NSInteger; message 'numberOfSectionsInTableView:';
    function sectionIndexTitlesForTableView (tableView: UITableView): NSArray; message 'sectionIndexTitlesForTableView:';
    function tableView_canEditRowAtIndexPath (tableView: UITableView; indexPath: NSIndexPath): boolean; message 'tableView:canEditRowAtIndexPath:';
    function tableView_canMoveRowAtIndexPath (tableView: UITableView; indexPath: NSIndexPath): boolean; message 'tableView:canMoveRowAtIndexPath:';
    function tableView_cellForRowAtIndexPath (tableView: UITableView; indexPath: NSIndexPath): UITableViewCell; message 'tableView:cellForRowAtIndexPath:';
    procedure tableView_commitEditingStyle_forRowAtIndexPath (tableView: UITableView; editingStyle: UITableViewCellEditingStyle; indexPath: NSIndexPath); message 'tableView:commitEditingStyle:forRowAtIndexPath:';
    procedure tableView_moveRowAtIndexPath_toIndexPath (tableView: UITableView; sourceIndexPath: NSIndexPath; destinationIndexPath: NSIndexPath); message 'tableView:moveRowAtIndexPath:toIndexPath:';
    function tableView_numberOfRowsInSection (tableView: UITableView; section: NSInteger): NSInteger; message 'tableView:numberOfRowsInSection:';
    function tableView_sectionForSectionIndexTitle_atIndex (tableView: UITableView; title: NSString; index: NSInteger): NSInteger; message 'tableView:sectionForSectionIndexTitle:atIndex:';
    function tableView_titleForFooterInSection (tableView: UITableView; section: NSInteger): NSString; message 'tableView:titleForFooterInSection:';
    function tableView_titleForHeaderInSection (tableView: UITableView; section: NSInteger): NSString; message 'tableView:titleForHeaderInSection:';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  UIPickerViewDataSourceProtocol = objcprotocol external name 'UIPickerViewDataSource' (NSObjectProtocol)
  required
    function numberOfComponentsInPickerView (pickerView: UIPickerView): NSInteger; message 'numberOfComponentsInPickerView:';
    function pickerView_numberOfRowsInComponent (pickerView: UIPickerView; component: NSInteger): NSInteger; message 'pickerView:numberOfRowsInComponent:';
  end;

type
  UIPickerViewDelegateProtocol = objcprotocol external name 'UIPickerViewDelegate' (NSObjectProtocol)
  optional
    function pickerView_widthForComponent (pickerView: UIPickerView; component: NSInteger): CGFloat; message 'pickerView:widthForComponent:';
    function pickerView_rowHeightForComponent (pickerView: UIPickerView; component: NSInteger): CGFloat; message 'pickerView:rowHeightForComponent:';
    function pickerView_titleForRow_forComponent (pickerView: UIPickerView; row: NSInteger; component: NSInteger): NSString; message 'pickerView:titleForRow:forComponent:';
    function pickerView_attributedTitleForRow_forComponent (pickerView: UIPickerView; row: NSInteger; component: NSInteger): NSAttributedString; message 'pickerView:attributedTitleForRow:forComponent:'; { available in 6_0 }
    function pickerView_viewForRow_forComponent_reusingView (pickerView: UIPickerView; row: NSInteger; component: NSInteger; view: UIView): UIView; message 'pickerView:viewForRow:forComponent:reusingView:';
    procedure pickerView_didSelectRow_inComponent (pickerView: UIPickerView; row: NSInteger; component: NSInteger); message 'pickerView:didSelectRow:inComponent:';
  end;
{$endif}

