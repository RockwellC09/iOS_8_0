{ Parsed from AVFoundation.framework (iPhoneOS8.2) AVPlayerMediaSelectionCriteria.h }
{ Created on Fri Mar 20 2:11:14 2015 }


{$ifdef TYPES}
type
  AVPlayerMediaSelectionCriteriaPtr = ^AVPlayerMediaSelectionCriteria;
{$endif}

{$ifdef CLASSES}

type
  AVPlayerMediaSelectionCriteria = objcclass external (NSObject)
  private
    _criteria: AVPlayerMediaSelectionCriteriaInternal;
  public
    function preferredLanguages: NSArray; message 'preferredLanguages';
    function preferredMediaCharacteristics: NSArray; message 'preferredMediaCharacteristics';
    function initWithPreferredLanguages_preferredMediaCharacteristics (preferredLanguages_: NSArray; preferredMediaCharacteristics_: NSArray): instancetype; message 'initWithPreferredLanguages:preferredMediaCharacteristics:';
  end;
{$endif}

