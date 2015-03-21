{ Parsed from CoreFoundation.framework (iPhoneOS8.2) CFFileDescriptor.h }
{ Created on Fri Mar 20 2:11:36 2015 }

{$if  not (defined(__COREFOUNDATION_CFFILEDESCRIPTOR__))}
{$ifdef TYPES}
const
  __COREFOUNDATION_CFFILEDESCRIPTOR__ = 1;

type
  CFFileDescriptorNativeDescriptor = cint;
  CFFileDescriptorNativeDescriptorPtr = ^CFFileDescriptorNativeDescriptor;
  CFFileDescriptorRef = OpaqueType;

const
  kCFFileDescriptorReadCallBack = 1 shl 0;
  kCFFileDescriptorWriteCallBack = 1 shl 1;

type
  CFFileDescriptorCallBack = procedure (f: CFFileDescriptorRef; callBackTypes: CFOptionFlags; info: pointer); cdecl;

type
  CFFileDescriptorContext = record
    version: CFIndex;
    info: pointer;
    retain: function (info: pointer): pointer; cdecl;
    release: procedure (info: pointer); cdecl;
    copyDescription: function (info: pointer): CFStringRef; cdecl;
  end;
type
  CFFileDescriptorContextPtr = ^CFFileDescriptorContext;
{$endif}

{$ifdef FUNCTIONS}
function CFFileDescriptorGetTypeID: CFTypeID; cdecl; external; { available in 10_5, 2_0 }
function CFFileDescriptorCreate(allocator: CFAllocatorRef; fd: CFFileDescriptorNativeDescriptor; closeOnInvalidate: Boolean; callout: CFFileDescriptorCallBack; context: CFFileDescriptorContextPtr): CFFileDescriptorRef; cdecl; external; { available in 10_5, 2_0 }
function CFFileDescriptorGetNativeDescriptor(f: CFFileDescriptorRef): CFFileDescriptorNativeDescriptor; cdecl; external; { available in 10_5, 2_0 }
procedure CFFileDescriptorGetContext(f: CFFileDescriptorRef; context: CFFileDescriptorContextPtr); cdecl; external; { available in 10_5, 2_0 }
procedure CFFileDescriptorEnableCallBacks(f: CFFileDescriptorRef; callBackTypes: CFOptionFlags); cdecl; external; { available in 10_5, 2_0 }
procedure CFFileDescriptorDisableCallBacks(f: CFFileDescriptorRef; callBackTypes: CFOptionFlags); cdecl; external; { available in 10_5, 2_0 }
procedure CFFileDescriptorInvalidate(f: CFFileDescriptorRef); cdecl; external; { available in 10_5, 2_0 }
function CFFileDescriptorIsValid(f: CFFileDescriptorRef): Boolean; cdecl; external; { available in 10_5, 2_0 }
function CFFileDescriptorCreateRunLoopSource(allocator: CFAllocatorRef; f: CFFileDescriptorRef; order: CFIndex): CFRunLoopSourceRef; cdecl; external; { available in 10_5, 2_0 }
{$endif}

{$endif}
