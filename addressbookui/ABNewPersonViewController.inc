{ Parsed from AddressBookUI.framework (iPhoneOS8.2) ABNewPersonViewController.h }
{ Created on Fri Mar 20 2:10:09 2015 }


{$ifdef TYPES}
type
  ABNewPersonViewControllerPtr = ^ABNewPersonViewController;
  ABNewPersonViewControllerDelegateProtocolPtr = ^ABNewPersonViewControllerDelegateProtocol;
{$endif}

{$ifdef CLASSES}

type
  ABNewPersonViewController = objcclass external (UIViewController)
  public
    procedure setNewPersonViewDelegate(newValue: ABNewPersonViewControllerDelegateProtocol); message 'setNewPersonViewDelegate:';
    function newPersonViewDelegate: ABNewPersonViewControllerDelegateProtocol; message 'newPersonViewDelegate';
    procedure setAddressBook(newValue: ABAddressBookRef); message 'setAddressBook:';
    function addressBook: ABAddressBookRef; message 'addressBook';
    procedure setDisplayedPerson(newValue: ABRecordRef); message 'setDisplayedPerson:';
    function displayedPerson: ABRecordRef; message 'displayedPerson';
    procedure setParentGroup(newValue: ABRecordRef); message 'setParentGroup:';
    function parentGroup: ABRecordRef; message 'parentGroup';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  ABNewPersonViewControllerDelegateProtocol = objcprotocol external name 'ABNewPersonViewControllerDelegate' (NSObjectProtocol)
    procedure newPersonViewController_didCompleteWithNewPerson (newPersonView: ABNewPersonViewController; person: ABRecordRef); message 'newPersonViewController:didCompleteWithNewPerson:';
  end;
{$endif}

