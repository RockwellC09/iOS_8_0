{ Parsed from UIKit.framework (iPhoneOS8.2) UIAttachmentBehavior.h }
{ Created on Fri Mar 20 2:11:42 2015 }


{$ifdef TYPES}
type
  UIAttachmentBehaviorPtr = ^UIAttachmentBehavior;
{$endif}

{$ifdef TYPES}
type
  UIAttachmentBehaviorType = NSInteger;
  UIAttachmentBehaviorTypePtr = ^UIAttachmentBehaviorType;

const
  UIAttachmentBehaviorTypeItems = 0;
  UIAttachmentBehaviorTypeAnchor = 1;
{$endif}

{$ifdef CLASSES}

type
  UIAttachmentBehavior = objcclass external (UIDynamicBehavior)
  public
    function initWithItem_attachedToAnchor (item: UIDynamicItemProtocol; point: CGPoint): instancetype; message 'initWithItem:attachedToAnchor:';
    function initWithItem_offsetFromCenter_attachedToAnchor (item: UIDynamicItemProtocol; offset: UIOffset; point: CGPoint): instancetype; message 'initWithItem:offsetFromCenter:attachedToAnchor:';
    function initWithItem_attachedToItem (item1: UIDynamicItemProtocol; item2: UIDynamicItemProtocol): instancetype; message 'initWithItem:attachedToItem:';
    function initWithItem_offsetFromCenter_attachedToItem_offsetFromCenter (item1: UIDynamicItemProtocol; offset1: UIOffset; item2: UIDynamicItemProtocol; offset2: UIOffset): instancetype; message 'initWithItem:offsetFromCenter:attachedToItem:offsetFromCenter:';
    function items: NSArray; message 'items';
    function attachedBehaviorType: UIAttachmentBehaviorType; message 'attachedBehaviorType';
    procedure setAnchorPoint(newValue: CGPoint); message 'setAnchorPoint:';
    function anchorPoint: CGPoint; message 'anchorPoint';
    procedure setLength(newValue: CGFloat); message 'setLength:';
    function length: CGFloat; message 'length';
    procedure setDamping(newValue: CGFloat); message 'setDamping:';
    function damping: CGFloat; message 'damping';
    procedure setFrequency(newValue: CGFloat); message 'setFrequency:';
    function frequency: CGFloat; message 'frequency';
  end;
{$endif}

