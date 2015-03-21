{ Parsed from UIKit.framework (iPhoneOS8.2) UIControl.h }
{ Created on Fri Mar 20 2:11:41 2015 }


{$ifdef TYPES}
type
  UIControlPtr = ^UIControl;
{$endif}

{$ifdef TYPES}
type
  UIControlEvents = NSUInteger;
  UIControlEventsPtr = ^UIControlEvents;

const
  UIControlEventTouchDown = 1 shl 0;
  UIControlEventTouchDownRepeat = 1 shl 1;
  UIControlEventTouchDragInside = 1 shl 2;
  UIControlEventTouchDragOutside = 1 shl 3;
  UIControlEventTouchDragEnter = 1 shl 4;
  UIControlEventTouchDragExit = 1 shl 5;
  UIControlEventTouchUpInside = 1 shl 6;
  UIControlEventTouchUpOutside = 1 shl 7;
  UIControlEventTouchCancel = 1 shl 8;
  UIControlEventValueChanged = 1 shl 12;
  UIControlEventEditingDidBegin = 1 shl 16;
  UIControlEventEditingChanged = 1 shl 17;
  UIControlEventEditingDidEnd = 1 shl 18;
  UIControlEventEditingDidEndOnExit = 1 shl 19;
  UIControlEventAllTouchEvents = $00000FFF;
  UIControlEventAllEditingEvents = $000F0000;
  UIControlEventApplicationReserved = $0F000000;
  UIControlEventSystemReserved = $F0000000;
  UIControlEventAllEvents = $FFFFFFFF;

type
  UIControlContentVerticalAlignment = NSInteger;
  UIControlContentVerticalAlignmentPtr = ^UIControlContentVerticalAlignment;

const
  UIControlContentVerticalAlignmentCenter = 0;
  UIControlContentVerticalAlignmentTop = 1;
  UIControlContentVerticalAlignmentBottom = 2;
  UIControlContentVerticalAlignmentFill = 3;

type
  UIControlContentHorizontalAlignment = NSInteger;
  UIControlContentHorizontalAlignmentPtr = ^UIControlContentHorizontalAlignment;

const
  UIControlContentHorizontalAlignmentCenter = 0;
  UIControlContentHorizontalAlignmentLeft = 1;
  UIControlContentHorizontalAlignmentRight = 2;
  UIControlContentHorizontalAlignmentFill = 3;

type
  UIControlState = NSUInteger;
  UIControlStatePtr = ^UIControlState;

const
  UIControlStateNormal = 0;
  UIControlStateHighlighted = 1 shl 0;
  UIControlStateDisabled = 1 shl 1;
  UIControlStateSelected = 1 shl 2;
  UIControlStateApplication = $00FF0000;
  UIControlStateReserved = $FF000000;
{$endif}

{$ifdef CLASSES}

type
  UIControl = objcclass external (UIView)
  private
    _targetActions: NSMutableArray;
    _previousPoint: CGPoint;
    _downTime: CFAbsoluteTime;
    _controlFlags: bitpacked record
      case byte of
        0: (_anonBitField__controlFlags0: cuint);
        1: (
          disabled: 0..1;
          tracking: 0..1;
          touchInside: 0..1;
          touchDragged: 0..1;
          requiresDisplayOnTracking: 0..1;
          highlighted: 0..1;
          dontHighlightOnTouchDown: 0..1;
          delayActions: 0..1;
          allowActionsToQueue: 0..1;
          pendingUnhighlight: 0..1;
          selected: 0..1;
          verticalAlignment: 0..((1 shl 2)-1);
          horizontalAlignment: 0..((1 shl 2)-1);
          wasLastHighlightSuccessful: 0..1;
          touchHasHighlighted: 0..1;
        );
      end;
  public
    procedure setEnabled(newValue: boolean); message 'setEnabled:';
    function isEnabled: boolean; message 'isEnabled';
    procedure setSelected(newValue: boolean); message 'setSelected:';
    function isSelected: boolean; message 'isSelected';
    procedure setHighlighted(newValue: boolean); message 'setHighlighted:';
    function isHighlighted: boolean; message 'isHighlighted';
    procedure setContentVerticalAlignment(newValue: UIControlContentVerticalAlignment); message 'setContentVerticalAlignment:';
    function contentVerticalAlignment: UIControlContentVerticalAlignment; message 'contentVerticalAlignment';
    procedure setContentHorizontalAlignment(newValue: UIControlContentHorizontalAlignment); message 'setContentHorizontalAlignment:';
    function contentHorizontalAlignment: UIControlContentHorizontalAlignment; message 'contentHorizontalAlignment';
    function state: UIControlState; message 'state';
    function isTracking: boolean; message 'isTracking';
    function isTouchInside: boolean; message 'isTouchInside';
    function beginTrackingWithTouch_withEvent (touch: UITouch; event: UIEvent): boolean; message 'beginTrackingWithTouch:withEvent:';
    function continueTrackingWithTouch_withEvent (touch: UITouch; event: UIEvent): boolean; message 'continueTrackingWithTouch:withEvent:';
    procedure endTrackingWithTouch_withEvent (touch: UITouch; event: UIEvent); message 'endTrackingWithTouch:withEvent:';
    procedure cancelTrackingWithEvent (event: UIEvent); message 'cancelTrackingWithEvent:';
    procedure addTarget_action_forControlEvents (target: id; action: SEL; controlEvents: UIControlEvents); message 'addTarget:action:forControlEvents:';
    procedure removeTarget_action_forControlEvents (target: id; action: SEL; controlEvents: UIControlEvents); message 'removeTarget:action:forControlEvents:';
    function allTargets: NSSet; message 'allTargets';
    function allControlEvents: UIControlEvents; message 'allControlEvents';
    function actionsForTarget_forControlEvent (target: id; controlEvent: UIControlEvents): NSArray; message 'actionsForTarget:forControlEvent:';
    procedure sendAction_to_forEvent (action: SEL; target: id; event: UIEvent); message 'sendAction:to:forEvent:';
    procedure sendActionsForControlEvents (controlEvents: UIControlEvents); message 'sendActionsForControlEvents:';
  end;
{$endif}

