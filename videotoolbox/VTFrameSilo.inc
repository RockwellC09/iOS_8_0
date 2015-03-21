{ Parsed from VideoToolbox.framework (iPhoneOS8.2) VTFrameSilo.h }
{ Created on Fri Mar 20 2:11:36 2015 }

{$ifndef VTFRAMESILO_H}

{$ifdef TYPES}
type
  VTFrameSiloRef = OpaqueType;
{$endif}

{$ifdef FUNCTIONS}
function VTFrameSiloGetTypeID: CFTypeID; cdecl; external; { available starting in __MAC_10_10,__IPHONE_8_0 }
function VTFrameSiloCreate(allocator: CFAllocatorRef; fileURL: CFURLRef; timeRange: CMTimeRange; options: CFDictionaryRef; siloOut: VTFrameSiloRef): OSStatus; cdecl; external; { available starting in __MAC_10_10,__IPHONE_8_0 }
function VTFrameSiloAddSampleBuffer(silo: VTFrameSiloRef; sampleBuffer: CMSampleBufferRef): OSStatus; cdecl; external; { available starting in __MAC_10_10,__IPHONE_8_0 }
function VTFrameSiloSetTimeRangesForNextPass(silo: VTFrameSiloRef; timeRangeCount: CMItemCount; timeRangeArray: CMTimeRangePtr): OSStatus; cdecl; external; { available starting in __MAC_10_10,__IPHONE_8_0 }
function VTFrameSiloGetProgressOfCurrentPass(silo: VTFrameSiloRef; progressOut: Float32Ptr): OSStatus; cdecl; external; { available starting in __MAC_10_10,__IPHONE_8_0 }
{$endif}

{$endif}
