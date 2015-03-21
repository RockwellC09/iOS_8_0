{ Parsed from CoreMedia.framework (iPhoneOS8.2) CMMemoryPool.h }
{ Created on Fri Mar 20 2:11:36 2015 }

{$ifndef CMMEMORYPOOL_H}

{$ifdef TYPES}
type
  CMMemoryPoolRef = OpaqueType;
{$endif}

{$ifdef FUNCTIONS}
function CMMemoryPoolGetTypeID: CFTypeID; cdecl; external; { available starting in __MAC_10_8, __IPHONE_6_0 }
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCMMemoryPoolOption_AgeOutPeriod: CFStringRef; cvar; external;
{$endif}

{$ifdef FUNCTIONS}
function CMMemoryPoolCreate(options: CFDictionaryRef): CMMemoryPoolRef; cdecl; external;
function CMMemoryPoolGetAllocator(pool: CMMemoryPoolRef): CFAllocatorRef; cdecl; external; { available starting in __MAC_10_8, __IPHONE_6_0 }
procedure CMMemoryPoolFlush(pool: CMMemoryPoolRef); cdecl; external; { available starting in __MAC_10_8, __IPHONE_6_0 }
procedure CMMemoryPoolInvalidate(pool: CMMemoryPoolRef); cdecl; external; { available starting in __MAC_10_8, __IPHONE_6_0 }
{$endif}

{$endif}
