{ Parsed from AVFoundation.framework (iPhoneOS8.2) AVAssetTrackGroup.h }
{ Created on Fri Mar 20 2:11:14 2015 }


{$ifdef TYPES}
type
  AVAssetTrackGroupPtr = ^AVAssetTrackGroup;
{$endif}

{$ifdef CLASSES}

type
  AVAssetTrackGroup = objcclass external (NSObject, NSCopyingProtocol)
  private
    _assetTrackGroup: AVAssetTrackGroupInternal;
  public
    function trackIDs: NSArray; message 'trackIDs';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

