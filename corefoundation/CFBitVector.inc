{ Parsed from CoreFoundation.framework (iPhoneOS8.2) CFBitVector.h }
{ Created on Fri Mar 20 2:11:35 2015 }

{$if  not (defined(__COREFOUNDATION_CFBITVECTOR__))}
{$ifdef TYPES}
const
  __COREFOUNDATION_CFBITVECTOR__ = 1;

type
  CFBit = UInt32;
  CFBitPtr = ^CFBit;
  CFBitVectorRef = OpaqueType;
  CFMutableBitVectorRef = OpaqueType;
{$endif}

{$ifdef FUNCTIONS}
function CFBitVectorGetTypeID: CFTypeID; cdecl; external;
function CFBitVectorCreate(allocator: CFAllocatorRef; bytes: pointer; numBits: CFIndex): CFBitVectorRef; cdecl; external;
function CFBitVectorCreateCopy(allocator: CFAllocatorRef; bv: CFBitVectorRef): CFBitVectorRef; cdecl; external;
function CFBitVectorCreateMutable(allocator: CFAllocatorRef; capacity: CFIndex): CFMutableBitVectorRef; cdecl; external;
function CFBitVectorCreateMutableCopy(allocator: CFAllocatorRef; capacity: CFIndex; bv: CFBitVectorRef): CFMutableBitVectorRef; cdecl; external;
function CFBitVectorGetCount(bv: CFBitVectorRef): CFIndex; cdecl; external;
function CFBitVectorGetCountOfBit(bv: CFBitVectorRef; range: CFRange; value: CFBit): CFIndex; cdecl; external;
function CFBitVectorContainsBit(bv: CFBitVectorRef; range: CFRange; value: CFBit): Boolean; cdecl; external;
function CFBitVectorGetBitAtIndex(bv: CFBitVectorRef; idx: CFIndex): CFBit; cdecl; external;
procedure CFBitVectorGetBits(bv: CFBitVectorRef; range: CFRange; bytes: pointer); cdecl; external;
function CFBitVectorGetFirstIndexOfBit(bv: CFBitVectorRef; range: CFRange; value: CFBit): CFIndex; cdecl; external;
function CFBitVectorGetLastIndexOfBit(bv: CFBitVectorRef; range: CFRange; value: CFBit): CFIndex; cdecl; external;
procedure CFBitVectorSetCount(bv: CFMutableBitVectorRef; count: CFIndex); cdecl; external;
procedure CFBitVectorFlipBitAtIndex(bv: CFMutableBitVectorRef; idx: CFIndex); cdecl; external;
procedure CFBitVectorFlipBits(bv: CFMutableBitVectorRef; range: CFRange); cdecl; external;
procedure CFBitVectorSetBitAtIndex(bv: CFMutableBitVectorRef; idx: CFIndex; value: CFBit); cdecl; external;
procedure CFBitVectorSetBits(bv: CFMutableBitVectorRef; range: CFRange; value: CFBit); cdecl; external;
procedure CFBitVectorSetAllBits(bv: CFMutableBitVectorRef; value: CFBit); cdecl; external;
{$endif}

{$endif}
