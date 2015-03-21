{ Parsed from CoreFoundation.framework (iPhoneOS8.2) CFRunLoop.h }
{ Created on Fri Mar 20 2:11:36 2015 }

{$if  not (defined(__COREFOUNDATION_CFRUNLOOP__))}
{$ifdef TYPES}
const
  __COREFOUNDATION_CFRUNLOOP__ = 1;
{$endif}

{$ifdef TYPES}
type
  CFRunLoopRef = OpaqueType;
  CFRunLoopSourceRef = OpaqueType;
  CFRunLoopObserverRef = OpaqueType;
  CFRunLoopActivity = OpaqueType;
  CFRunLoopTimerRef = OpaqueType;
{$endif}

{$ifdef FUNCTIONS}
function CFRunLoopGetCurrent: CFRunLoopRef; cdecl; external;
function CFRunLoopGetMain: CFRunLoopRef; cdecl; external;
function CFRunLoopCopyCurrentMode(rl: CFRunLoopRef): CFStringRef; cdecl; external;
function CFRunLoopCopyAllModes(rl: CFRunLoopRef): CFArrayRef; cdecl; external;
procedure CFRunLoopAddCommonMode(rl: CFRunLoopRef; mode: CFStringRef); cdecl; external;
function CFRunLoopGetNextTimerFireDate(rl: CFRunLoopRef; mode: CFStringRef): CFAbsoluteTime; cdecl; external;
procedure CFRunLoopRun; cdecl; external;
function CFRunLoopRunInMode(mode: CFStringRef; seconds: CFTimeInterval; returnAfterSourceHandled: Boolean): SInt32; cdecl; external;
function CFRunLoopIsWaiting(rl: CFRunLoopRef): Boolean; cdecl; external;
procedure CFRunLoopWakeUp(rl: CFRunLoopRef); cdecl; external;
procedure CFRunLoopStop(rl: CFRunLoopRef); cdecl; external;
{$endif}

{$ifdef FUNCTIONS}
function CFRunLoopContainsSource(rl: CFRunLoopRef; source: CFRunLoopSourceRef; mode: CFStringRef): Boolean; cdecl; external;
procedure CFRunLoopAddSource(rl: CFRunLoopRef; source: CFRunLoopSourceRef; mode: CFStringRef); cdecl; external;
procedure CFRunLoopRemoveSource(rl: CFRunLoopRef; source: CFRunLoopSourceRef; mode: CFStringRef); cdecl; external;
function CFRunLoopContainsObserver(rl: CFRunLoopRef; observer: CFRunLoopObserverRef; mode: CFStringRef): Boolean; cdecl; external;
procedure CFRunLoopAddObserver(rl: CFRunLoopRef; observer: CFRunLoopObserverRef; mode: CFStringRef); cdecl; external;
procedure CFRunLoopRemoveObserver(rl: CFRunLoopRef; observer: CFRunLoopObserverRef; mode: CFStringRef); cdecl; external;
function CFRunLoopContainsTimer(rl: CFRunLoopRef; timer: CFRunLoopTimerRef; mode: CFStringRef): Boolean; cdecl; external;
procedure CFRunLoopAddTimer(rl: CFRunLoopRef; timer: CFRunLoopTimerRef; mode: CFStringRef); cdecl; external;
procedure CFRunLoopRemoveTimer(rl: CFRunLoopRef; timer: CFRunLoopTimerRef; mode: CFStringRef); cdecl; external;
{$endif}

{$ifdef TYPES}
type
  CFRunLoopSourceContext = record
    version: CFIndex;
    info: pointer;
    retain: function (info: pointer): pointer; cdecl;
    release: procedure (info: pointer); cdecl;
    copyDescription: function (info: pointer): CFStringRef; cdecl;
    equal: function (info1: pointer; info2: pointer): Boolean; cdecl;
    hash: function (info: pointer): CFHashCode; cdecl;
    schedule: procedure (info: pointer; rl: CFRunLoopRef; mode: CFStringRef); cdecl;
    cancel: procedure (info: pointer; rl: CFRunLoopRef; mode: CFStringRef); cdecl;
    perform: procedure (info: pointer); cdecl;
  end;
type
  CFRunLoopSourceContextPtr = ^CFRunLoopSourceContext;
type
  CFRunLoopSourceContext1 = record
    version: CFIndex;
    info: pointer;
    retain: function (info: pointer): pointer; cdecl;
    release: procedure (info: pointer); cdecl;
    copyDescription: function (info: pointer): CFStringRef; cdecl;
    equal: function (info1: pointer; info2: pointer): Boolean; cdecl;
    hash: function (info: pointer): CFHashCode; cdecl;
    {$if (defined(TARGET_OS_MAC) and not (defined(TARGET_OS_EMBEDDED) or defined(TARGET_OS_IPHONE))) or (defined(TARGET_OS_EMBEDDED) or defined(TARGET_OS_IPHONE))}
    getPort: function (info: pointer): mach_port_t; cdecl;
    perform: function (msg: pointer; size: CFIndex; allocator: CFAllocatorRef; info: pointer): pointer; cdecl;
    {$else}
    getPort: function (info: pointer): pointer; cdecl;
    perform: procedure (info: pointer); cdecl;
    {$endif}
  end;
type
  CFRunLoopSourceContext1Ptr = ^CFRunLoopSourceContext1;
{$endif}

{$ifdef FUNCTIONS}
function CFRunLoopSourceGetTypeID: CFTypeID; cdecl; external;
function CFRunLoopSourceCreate(allocator: CFAllocatorRef; order: CFIndex; var context: CFRunLoopSourceContext): CFRunLoopSourceRef; cdecl; external;
function CFRunLoopSourceGetOrder(source: CFRunLoopSourceRef): CFIndex; cdecl; external;
procedure CFRunLoopSourceInvalidate(source: CFRunLoopSourceRef); cdecl; external;
function CFRunLoopSourceIsValid(source: CFRunLoopSourceRef): Boolean; cdecl; external;
procedure CFRunLoopSourceGetContext(source: CFRunLoopSourceRef; var context: CFRunLoopSourceContext); cdecl; external;
procedure CFRunLoopSourceSignal(source: CFRunLoopSourceRef); cdecl; external;
{$endif}

{$ifdef TYPES}
type
  CFRunLoopObserverContext = record
    version: CFIndex;
    info: pointer;
    retain: function (info: pointer): pointer; cdecl;
    release: procedure (info: pointer); cdecl;
    copyDescription: function (info: pointer): CFStringRef; cdecl;
  end;
type
  CFRunLoopObserverContextPtr = ^CFRunLoopObserverContext;

type
  CFRunLoopObserverCallBack = procedure (observer: CFRunLoopObserverRef; activity: CFRunLoopActivity; info: pointer); cdecl;
{$endif}

{$ifdef FUNCTIONS}
function CFRunLoopObserverGetTypeID: CFTypeID; cdecl; external;
function CFRunLoopObserverCreate(allocator: CFAllocatorRef; activities: CFOptionFlags; repeats: Boolean; order: CFIndex; callout: CFRunLoopObserverCallBack; var context: CFRunLoopObserverContext): CFRunLoopObserverRef; cdecl; external;
{$endif}

{$ifdef FUNCTIONS}
function CFRunLoopObserverGetActivities(observer: CFRunLoopObserverRef): CFOptionFlags; cdecl; external;
function CFRunLoopObserverDoesRepeat(observer: CFRunLoopObserverRef): Boolean; cdecl; external;
function CFRunLoopObserverGetOrder(observer: CFRunLoopObserverRef): CFIndex; cdecl; external;
procedure CFRunLoopObserverInvalidate(observer: CFRunLoopObserverRef); cdecl; external;
function CFRunLoopObserverIsValid(observer: CFRunLoopObserverRef): Boolean; cdecl; external;
procedure CFRunLoopObserverGetContext(observer: CFRunLoopObserverRef; var context: CFRunLoopObserverContext); cdecl; external;
{$endif}

{$ifdef TYPES}
type
  CFRunLoopTimerContext = record
    version: CFIndex;
    info: pointer;
    retain: function (info: pointer): pointer; cdecl;
    release: procedure (info: pointer); cdecl;
    copyDescription: function (info: pointer): CFStringRef; cdecl;
  end;
type
  CFRunLoopTimerContextPtr = ^CFRunLoopTimerContext;

type
  CFRunLoopTimerCallBack = procedure (timer: CFRunLoopTimerRef; info: pointer); cdecl;
{$endif}

{$ifdef FUNCTIONS}
function CFRunLoopTimerGetTypeID: CFTypeID; cdecl; external;
function CFRunLoopTimerCreate(allocator: CFAllocatorRef; fireDate: CFAbsoluteTime; interval: CFTimeInterval; flags: CFOptionFlags; order: CFIndex; callout: CFRunLoopTimerCallBack; var context: CFRunLoopTimerContext): CFRunLoopTimerRef; cdecl; external;
{$endif}

{$ifdef FUNCTIONS}
function CFRunLoopTimerGetNextFireDate(timer: CFRunLoopTimerRef): CFAbsoluteTime; cdecl; external;
procedure CFRunLoopTimerSetNextFireDate(timer: CFRunLoopTimerRef; fireDate: CFAbsoluteTime); cdecl; external;
function CFRunLoopTimerGetInterval(timer: CFRunLoopTimerRef): CFTimeInterval; cdecl; external;
function CFRunLoopTimerDoesRepeat(timer: CFRunLoopTimerRef): Boolean; cdecl; external;
function CFRunLoopTimerGetOrder(timer: CFRunLoopTimerRef): CFIndex; cdecl; external;
procedure CFRunLoopTimerInvalidate(timer: CFRunLoopTimerRef); cdecl; external;
function CFRunLoopTimerIsValid(timer: CFRunLoopTimerRef): Boolean; cdecl; external;
procedure CFRunLoopTimerGetContext(timer: CFRunLoopTimerRef; var context: CFRunLoopTimerContext); cdecl; external;
function CFRunLoopTimerGetTolerance(timer: CFRunLoopTimerRef): CFTimeInterval; cdecl; external; { available in 10_9, 7_0 }
procedure CFRunLoopTimerSetTolerance(timer: CFRunLoopTimerRef; tolerance: CFTimeInterval); cdecl; external; { available in 10_9, 7_0 }
{$endif}

{$endif}
