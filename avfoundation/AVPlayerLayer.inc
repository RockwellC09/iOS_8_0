{ Parsed from AVFoundation.framework (iPhoneOS8.2) AVPlayerLayer.h }
{ Created on Fri Mar 20 2:11:14 2015 }


{$ifdef TYPES}
type
  AVPlayerLayerPtr = ^AVPlayerLayer;
{$endif}

{$ifdef CLASSES}

type
  AVPlayerLayer = objcclass external (CALayer)
  private
    _playerLayer: AVPlayerLayerInternal;
  public
    class function playerLayerWithPlayer (player: AVPlayer): AVPlayerLayer; message 'playerLayerWithPlayer:';
    procedure setPlayer(newValue: AVPlayer); message 'setPlayer:';
    function player: AVPlayer; message 'player';
    procedure setVideoGravity(newValue: NSString); message 'setVideoGravity:';
    function videoGravity: NSString; message 'videoGravity';
    function isReadyForDisplay: boolean; message 'isReadyForDisplay';
    function videoRect: CGRect; message 'videoRect';
  end;
{$endif}

