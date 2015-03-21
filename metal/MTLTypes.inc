{ Parsed from Metal.framework (iPhoneOS8.2) MTLTypes.h }
{ Created on Fri Mar 20 2:09:54 2015 }

{$ifdef TYPES}
type
  MTLOrigin = record
    x, y, z: NSUInteger;
  end;
type
  MTLOriginPtr = ^MTLOrigin;
type
  MTLSize = record
    width, height, depth: NSUInteger;
  end;
type
  MTLSizePtr = ^MTLSize;
type
  MTLRegion = record
    origin: MTLOrigin;
    size: MTLSize;
  end;
type
  MTLRegionPtr = ^MTLRegion;
{$endif}

