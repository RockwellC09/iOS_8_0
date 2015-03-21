{ Parsed from Metal.framework (iPhoneOS8.2) MTLDrawable.h }
{ Created on Fri Mar 20 2:09:54 2015 }


{$ifdef TYPES}
type
  MTLDrawableProtocolPtr = ^MTLDrawableProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  MTLDrawableProtocol = objcprotocol external name 'MTLDrawable' (NSObjectProtocol)
    procedure present; message 'present';
    procedure presentAtTime (presentationTime: CFTimeInterval); message 'presentAtTime:';
  end;
{$endif}

