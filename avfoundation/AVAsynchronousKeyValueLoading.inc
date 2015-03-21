{ Parsed from AVFoundation.framework (iPhoneOS8.2) AVAsynchronousKeyValueLoading.h }
{ Created on Fri Mar 20 2:11:14 2015 }


{$ifdef TYPES}
type
  AVAsynchronousKeyValueLoadingProtocolPtr = ^AVAsynchronousKeyValueLoadingProtocol;
{$endif}

{$ifdef TYPES}
type
  AVKeyValueStatus = NSInteger;
  AVKeyValueStatusPtr = ^AVKeyValueStatus;

const
  AVKeyValueStatusUnknown = 0;
  AVKeyValueStatusLoading = 1;
  AVKeyValueStatusLoaded = 2;
  AVKeyValueStatusFailed = 3;
  AVKeyValueStatusCancelled = 4;
{$endif}

{$ifdef PROTOCOLS}

type
  AVAsynchronousKeyValueLoadingProtocol = objcprotocol external name 'AVAsynchronousKeyValueLoading'
  required
    function statusOfValueForKey_error (key: NSString; outError: NSErrorPtr): AVKeyValueStatus; message 'statusOfValueForKey:error:';
    procedure loadValuesAsynchronouslyForKeys_completionHandler (keys: NSArray; handler: OpaqueCBlock); message 'loadValuesAsynchronouslyForKeys:completionHandler:';
  end;
{$endif}

