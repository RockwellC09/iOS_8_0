{ Parsed from CFNetwork.framework (iPhoneOS8.2) CFFTPStream.h }
{ Created on Fri Mar 20 2:09:44 2015 }

{$ifndef __CFFTPSTREAM__}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCFStreamErrorDomainFTP: SInt32 { available in 10_3, 2_0 }; cvar; external;
  kCFStreamPropertyFTPUserName: CFStringRef { available in 10_3, 2_0 }; cvar; external;
  kCFStreamPropertyFTPPassword: CFStringRef { available in 10_3, 2_0 }; cvar; external;
  kCFStreamPropertyFTPUsePassiveMode: CFStringRef { available in 10_3, 2_0 }; cvar; external;
  kCFStreamPropertyFTPResourceSize: CFStringRef { available in 10_3, 2_0 }; cvar; external;
  kCFStreamPropertyFTPFetchResourceInfo: CFStringRef { available in 10_3, 2_0 }; cvar; external;
  kCFStreamPropertyFTPFileTransferOffset: CFStringRef { available in 10_3, 2_0 }; cvar; external;
  kCFStreamPropertyFTPAttemptPersistentConnection: CFStringRef { available in 10_3, 2_0 }; cvar; external;
  kCFStreamPropertyFTPProxy: CFStringRef { available in 10_3, 2_0 }; cvar; external;
  kCFStreamPropertyFTPProxyHost: CFStringRef { available in 10_3, 2_0 }; cvar; external;
  kCFStreamPropertyFTPProxyPort: CFStringRef { available in 10_3, 2_0 }; cvar; external;
  kCFStreamPropertyFTPProxyUser: CFStringRef { available in 10_3, 2_0 }; cvar; external;
  kCFStreamPropertyFTPProxyPassword: CFStringRef { available in 10_3, 2_0 }; cvar; external;
  kCFFTPResourceMode: CFStringRef { available in 10_3, 2_0 }; cvar; external;
  kCFFTPResourceName: CFStringRef { available in 10_3, 2_0 }; cvar; external;
  kCFFTPResourceOwner: CFStringRef { available in 10_3, 2_0 }; cvar; external;
  kCFFTPResourceGroup: CFStringRef { available in 10_3, 2_0 }; cvar; external;
  kCFFTPResourceLink: CFStringRef { available in 10_3, 2_0 }; cvar; external;
  kCFFTPResourceSize: CFStringRef { available in 10_3, 2_0 }; cvar; external;
  kCFFTPResourceType: CFStringRef { available in 10_3, 2_0 }; cvar; external;
  kCFFTPResourceModDate: CFStringRef { available in 10_3, 2_0 }; cvar; external;
{$endif}

{$ifdef FUNCTIONS}
function CFReadStreamCreateWithFTPURL(alloc: CFAllocatorRef; ftpURL: CFURLRef): CFReadStreamRef; cdecl; external; { available in 10_3, 2_0 }
function CFFTPCreateParsedResourceListing(alloc: CFAllocatorRef; buffer: pointer; bufferLength: CFIndex; var parsed: CFDictionaryRef): CFIndex; cdecl; external; { available in 10_3, 2_0 }
function CFWriteStreamCreateWithFTPURL(alloc: CFAllocatorRef; ftpURL: CFURLRef): CFWriteStreamRef; cdecl; external; { available in 10_3, 2_0 }
{$endif}

{$endif}
