{ Parsed from UIKit.framework (iPhoneOS8.2) UIScreenEdgePanGestureRecognizer.h }
{ Created on Fri Mar 20 2:11:41 2015 }


{$ifdef TYPES}
type
  UIScreenEdgePanGestureRecognizerPtr = ^UIScreenEdgePanGestureRecognizer;
{$endif}

{$ifdef CLASSES}

type
  UIScreenEdgePanGestureRecognizer = objcclass external (UIPanGestureRecognizer)
  public
    procedure setEdges(newValue: UIRectEdge); message 'setEdges:';
    function edges: UIRectEdge; message 'edges';
  end;
{$endif}

