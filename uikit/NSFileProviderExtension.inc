{ Parsed from UIKit.framework (iPhoneOS8.2) NSFileProviderExtension.h }
{ Created on Fri Mar 20 2:11:41 2015 }


{$ifdef TYPES}
type
  NSFileProviderExtensionPtr = ^NSFileProviderExtension;
{$endif}

{$ifdef CLASSES}

type
  NSFileProviderExtension = objcclass external (NSObject)
  public
    class function writePlaceholderAtURL_withMetadata_error (placeholderURL: NSURL; metadata: NSDictionary; error: NSErrorPtr): boolean; message 'writePlaceholderAtURL:withMetadata:error:';
    class function placeholderURLForURL (url: NSURL): NSURL; message 'placeholderURLForURL:';
    function providerIdentifier: NSString; message 'providerIdentifier';
    function documentStorageURL: NSURL; message 'documentStorageURL';
    function URLForItemWithPersistentIdentifier (identifier: NSString): NSURL; message 'URLForItemWithPersistentIdentifier:';
    function persistentIdentifierForItemAtURL (url: NSURL): NSString; message 'persistentIdentifierForItemAtURL:';
    procedure providePlaceholderAtURL_completionHandler (url: NSURL; completionHandler: OpaqueCBlock); message 'providePlaceholderAtURL:completionHandler:';
    procedure startProvidingItemAtURL_completionHandler (url: NSURL; completionHandler: OpaqueCBlock); message 'startProvidingItemAtURL:completionHandler:';
    procedure itemChangedAtURL (url: NSURL); message 'itemChangedAtURL:';
    procedure stopProvidingItemAtURL (url: NSURL); message 'stopProvidingItemAtURL:';
  end;
{$endif}

