{ Parsed from CoreData.framework (iPhoneOS8.2) NSRelationshipDescription.h }
{ Created on Fri Mar 20 2:10:51 2015 }


{$ifdef TYPES}
type
  NSRelationshipDescriptionPtr = ^NSRelationshipDescription;
{$endif}

{$ifdef TYPES}
type
  NSDeleteRule = NSUInteger;
  NSDeleteRulePtr = ^NSDeleteRule;

const
  NSNoActionDeleteRule = 0;
  NSNullifyDeleteRule = 1;
  NSCascadeDeleteRule = 2;
  NSDenyDeleteRule = 3;
{$endif}

{$ifdef CLASSES}

type
  NSRelationshipDescription = objcclass external (NSPropertyDescription)
  private
    _reserved5: pointer;
    _reserved6: pointer;
    _destinationEntity: NSEntityDescription;
    _lazyDestinationEntityName: NSString;
    _inverseRelationship: NSRelationshipDescription;
    _lazyInverseRelationshipName: NSString;
    _maxCount: culong;
    _minCount: culong;
    _deleteRule: NSDeleteRule;
  public
    procedure setDestinationEntity(newValue: NSEntityDescription); message 'setDestinationEntity:';
    function destinationEntity: NSEntityDescription; message 'destinationEntity';
    procedure setInverseRelationship(newValue: NSRelationshipDescription); message 'setInverseRelationship:';
    function inverseRelationship: NSRelationshipDescription; message 'inverseRelationship';
    procedure setMaxCount(newValue: NSUInteger); message 'setMaxCount:';
    function maxCount: NSUInteger; message 'maxCount';
    procedure setMinCount(newValue: NSUInteger); message 'setMinCount:';
    function minCount: NSUInteger; message 'minCount';
    procedure setDeleteRule(newValue: NSDeleteRule); message 'setDeleteRule:';
    function deleteRule: NSDeleteRule; message 'deleteRule';
    function isToMany: boolean; message 'isToMany';
    function versionHash: NSData; message 'versionHash';
    procedure setOrdered(newValue: boolean); message 'setOrdered:';
    function isOrdered: boolean; message 'isOrdered';
  end;
{$endif}

