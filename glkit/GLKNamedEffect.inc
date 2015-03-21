{ Parsed from GLKit.framework (iPhoneOS8.2) GLKNamedEffect.h }
{ Created on Fri Mar 20 2:11:19 2015 }


{$ifdef TYPES}
type
  GLKNamedEffectProtocolPtr = ^GLKNamedEffectProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  GLKNamedEffectProtocol = objcprotocol external name 'GLKNamedEffect'
  required
    procedure prepareToDraw; message 'prepareToDraw';
  end;
{$endif}

