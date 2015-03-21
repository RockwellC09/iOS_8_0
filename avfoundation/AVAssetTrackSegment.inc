{ Parsed from AVFoundation.framework (iPhoneOS8.2) AVAssetTrackSegment.h }
{ Created on Fri Mar 20 2:11:14 2015 }


{$ifdef TYPES}
type
  AVAssetTrackSegmentPtr = ^AVAssetTrackSegment;
{$endif}

{$ifdef CLASSES}

type
  AVAssetTrackSegment = objcclass external (NSObject)
  private
    _timeMapping: CMTimeMapping;
  public
    function timeMapping: CMTimeMapping; message 'timeMapping';
    function isEmpty: boolean; message 'isEmpty';
  end;
{$endif}

