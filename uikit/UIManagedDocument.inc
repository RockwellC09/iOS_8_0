{ Parsed from UIKit.framework (iPhoneOS8.2) UIManagedDocument.h }
{ Created on Fri Mar 20 2:11:41 2015 }


{$ifdef TYPES}
type
  UIManagedDocumentPtr = ^UIManagedDocument;
{$endif}

{$ifdef CLASSES}

type
  UIManagedDocument = objcclass external (UIDocument)
  private
    _managedObjectContext: NSManagedObjectContext;
    _persistentStoreCoordinator: NSPersistentStoreCoordinator;
    _managedObjectModel: NSManagedObjectModel;
    _documentMetadata: NSDictionary;
    __mdocFlags: bitpacked record
      case byte of
        0: (_anonBitField___mdocFlags0: cuint);
        1: (
          shouldWriteAdditionalContent: 0..1;
          _reserved: 0..((1 shl 31)-1);
        );
      end;
  public
    class function persistentStoreName: NSString; message 'persistentStoreName';
    function managedObjectContext: NSManagedObjectContext; message 'managedObjectContext';
    function managedObjectModel: NSManagedObjectModel; message 'managedObjectModel';
    procedure setPersistentStoreOptions(newValue: NSDictionary); message 'setPersistentStoreOptions:';
    function persistentStoreOptions: NSDictionary; message 'persistentStoreOptions';
    procedure setModelConfiguration(newValue: NSString); message 'setModelConfiguration:';
    function modelConfiguration: NSString; message 'modelConfiguration';
    function configurePersistentStoreCoordinatorForURL_ofType_modelConfiguration_storeOptions_error (storeURL: NSURL; fileType_: NSString; configuration: NSString; storeOptions: NSDictionary; error: NSErrorPtr): boolean; message 'configurePersistentStoreCoordinatorForURL:ofType:modelConfiguration:storeOptions:error:';
    function persistentStoreTypeForFileType (fileType_: NSString): NSString; message 'persistentStoreTypeForFileType:';
    function readAdditionalContentFromURL_error (absoluteURL: NSURL; error: NSErrorPtr): boolean; message 'readAdditionalContentFromURL:error:';
    function additionalContentForURL_error (absoluteURL: NSURL; error: NSErrorPtr): id; message 'additionalContentForURL:error:';
    function writeAdditionalContent_toURL_originalContentsURL_error (content: id; absoluteURL: NSURL; absoluteOriginalContentsURL: NSURL; error: NSErrorPtr): boolean; message 'writeAdditionalContent:toURL:originalContentsURL:error:';
  end;
{$endif}

