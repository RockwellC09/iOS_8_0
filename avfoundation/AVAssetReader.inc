{ Parsed from AVFoundation.framework (iPhoneOS8.2) AVAssetReader.h }
{ Created on Fri Mar 20 2:11:14 2015 }


{$ifdef TYPES}
type
  AVAssetReaderPtr = ^AVAssetReader;
{$endif}

{$ifdef TYPES}
type
  AVAssetReaderStatus = NSInteger;
  AVAssetReaderStatusPtr = ^AVAssetReaderStatus;

const
  AVAssetReaderStatusUnknown = 0;
  AVAssetReaderStatusReading = 1;
  AVAssetReaderStatusCompleted = 2;
  AVAssetReaderStatusFailed = 3;
  AVAssetReaderStatusCancelled = 4;
{$endif}

{$ifdef CLASSES}

type
  AVAssetReader = objcclass external (NSObject)
  private
    _priv: AVAssetReaderInternal;
  public
    class function assetReaderWithAsset_error (asset: AVAsset; outError: NSErrorPtr): instancetype; message 'assetReaderWithAsset:error:';
    function initWithAsset_error (asset: AVAsset; outError: NSErrorPtr): instancetype; message 'initWithAsset:error:';
    function asset: AVAsset; message 'asset';
    function status: AVAssetReaderStatus; message 'status';
    function error: NSError; message 'error';
    procedure setTimeRange(newValue: CMTimeRange); message 'setTimeRange:';
    function timeRange: CMTimeRange; message 'timeRange';
    function outputs: NSArray; message 'outputs';
    function canAddOutput (output: AVAssetReaderOutput): boolean; message 'canAddOutput:';
    procedure addOutput (output: AVAssetReaderOutput); message 'addOutput:';
    function startReading: boolean; message 'startReading';
    procedure cancelReading; message 'cancelReading';
  end;
{$endif}

