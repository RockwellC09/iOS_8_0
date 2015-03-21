{ Parsed from EventKit.framework (iPhoneOS8.2) EKParticipant.h }
{ Created on Fri Mar 20 2:10:53 2015 }


{$ifdef TYPES}
type
  EKParticipantPtr = ^EKParticipant;
{$endif}

{$ifdef CLASSES}

type
  EKParticipant = objcclass external (EKObject, NSCopyingProtocol)
  private
  public
    function URL: NSURL; message 'URL';
    function name: NSString; message 'name';
    function participantStatus: EKParticipantStatus; message 'participantStatus';
    function participantRole: EKParticipantRole; message 'participantRole';
    function participantType: EKParticipantType; message 'participantType';
    function isCurrentUser: boolean; message 'isCurrentUser';
    function ABRecordWithAddressBook (addressBook: ABAddressBookRef): ABRecordRef; message 'ABRecordWithAddressBook:'; { available starting in __MAC_NA,__IPHONE_4_0 }

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

