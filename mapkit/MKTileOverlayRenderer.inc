{ Parsed from MapKit.framework (iPhoneOS8.2) MKTileOverlayRenderer.h }
{ Created on Fri Mar 20 2:11:37 2015 }


{$ifdef TYPES}
type
  MKTileOverlayRendererPtr = ^MKTileOverlayRenderer;
{$endif}

{$ifdef CLASSES}

type
  MKTileOverlayRenderer = objcclass external (MKOverlayRenderer)
  public
    function initWithTileOverlay (overlay_: MKTileOverlay): instancetype; message 'initWithTileOverlay:';
    procedure reloadData; message 'reloadData';
  end;
{$endif}

