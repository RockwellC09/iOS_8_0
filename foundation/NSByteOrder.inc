{ Parsed from Foundation.framework (iPhoneOS8.2) NSByteOrder.h }
{ Created on Fri Mar 20 2:11:39 2015 }

{$ifdef TYPES}
const
  NS_UnknownByteOrder = CFByteOrderUnknown;
  NS_LittleEndian = CFByteOrderLittleEndian;
  NS_BigEndian = CFByteOrderBigEndian;

type
  NSSwappedFloat = record
    v: cuint;
  end;
type
  NSSwappedFloatPtr = ^NSSwappedFloat;
type
  NSSwappedDouble = record
    v: culonglong;
  end;
type
  NSSwappedDoublePtr = ^NSSwappedDouble;
{$endif}

