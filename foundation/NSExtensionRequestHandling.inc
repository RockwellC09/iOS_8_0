{ Parsed from Foundation.framework (iPhoneOS8.2) NSExtensionRequestHandling.h }
{ Created on Fri Mar 20 2:11:40 2015 }


{$ifdef TYPES}
type
  NSExtensionRequestHandlingProtocolPtr = ^NSExtensionRequestHandlingProtocol;
{$endif}

{$if defined(__OBJC2__)}
{$ifdef PROTOCOLS}

type
  NSExtensionRequestHandlingProtocol = objcprotocol external name 'NSExtensionRequestHandling' (NSObjectProtocol)
  required
    procedure beginRequestWithExtensionContext (context: NSExtensionContext); message 'beginRequestWithExtensionContext:';
  end;
{$endif}

{$endif}
