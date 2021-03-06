{ Parsed from CoreData.framework (iPhoneOS8.2) NSEntityMigrationPolicy.h }
{ Created on Fri Mar 20 2:10:51 2015 }


{$ifdef TYPES}
type
  NSEntityMigrationPolicyPtr = ^NSEntityMigrationPolicy;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSMigrationManagerKey: NSString { available in 10_5,3_0 }; cvar; external;
  NSMigrationSourceObjectKey: NSString { available in 10_5,3_0 }; cvar; external;
  NSMigrationDestinationObjectKey: NSString { available in 10_5,3_0 }; cvar; external;
  NSMigrationEntityMappingKey: NSString { available in 10_5,3_0 }; cvar; external;
  NSMigrationPropertyMappingKey: NSString { available in 10_5,3_0 }; cvar; external;
  NSMigrationEntityPolicyKey: NSString { available in 10_5,3_0 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  NSEntityMigrationPolicy = objcclass external (NSObject)
  public
    function beginEntityMapping_manager_error (mapping: NSEntityMapping; manager: NSMigrationManager; error: NSErrorPtr): boolean; message 'beginEntityMapping:manager:error:';
    function createDestinationInstancesForSourceInstance_entityMapping_manager_error (sInstance: NSManagedObject; mapping: NSEntityMapping; manager: NSMigrationManager; error: NSErrorPtr): boolean; message 'createDestinationInstancesForSourceInstance:entityMapping:manager:error:';
    function endInstanceCreationForEntityMapping_manager_error (mapping: NSEntityMapping; manager: NSMigrationManager; error: NSErrorPtr): boolean; message 'endInstanceCreationForEntityMapping:manager:error:';
    function createRelationshipsForDestinationInstance_entityMapping_manager_error (dInstance: NSManagedObject; mapping: NSEntityMapping; manager: NSMigrationManager; error: NSErrorPtr): boolean; message 'createRelationshipsForDestinationInstance:entityMapping:manager:error:';
    function endRelationshipCreationForEntityMapping_manager_error (mapping: NSEntityMapping; manager: NSMigrationManager; error: NSErrorPtr): boolean; message 'endRelationshipCreationForEntityMapping:manager:error:';
    function performCustomValidationForEntityMapping_manager_error (mapping: NSEntityMapping; manager: NSMigrationManager; error: NSErrorPtr): boolean; message 'performCustomValidationForEntityMapping:manager:error:';
    function endEntityMapping_manager_error (mapping: NSEntityMapping; manager: NSMigrationManager; error: NSErrorPtr): boolean; message 'endEntityMapping:manager:error:';
  end;
{$endif}

