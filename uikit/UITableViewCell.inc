{ Parsed from UIKit.framework (iPhoneOS8.2) UITableViewCell.h }
{ Created on Fri Mar 20 2:11:41 2015 }


{$ifdef TYPES}
type
  UITableViewCellPtr = ^UITableViewCell;
{$endif}

{$ifdef TYPES}
type
  UITableViewCellStyle = NSInteger;
  UITableViewCellStylePtr = ^UITableViewCellStyle;

const
  UITableViewCellStyleDefault = 0;
  UITableViewCellStyleValue1 = 1;
  UITableViewCellStyleValue2 = 2;
  UITableViewCellStyleSubtitle = 3;

type
  UITableViewCellSeparatorStyle = NSInteger;
  UITableViewCellSeparatorStylePtr = ^UITableViewCellSeparatorStyle;

const
  UITableViewCellSeparatorStyleNone = 0;
  UITableViewCellSeparatorStyleSingleLine = 1;
  UITableViewCellSeparatorStyleSingleLineEtched = 2;

type
  UITableViewCellSelectionStyle = NSInteger;
  UITableViewCellSelectionStylePtr = ^UITableViewCellSelectionStyle;

const
  UITableViewCellSelectionStyleNone = 0;
  UITableViewCellSelectionStyleBlue = 1;
  UITableViewCellSelectionStyleGray = 2;
  UITableViewCellSelectionStyleDefault = 3 { available in 7_0 };

type
  UITableViewCellEditingStyle = NSInteger;
  UITableViewCellEditingStylePtr = ^UITableViewCellEditingStyle;

const
  UITableViewCellEditingStyleNone = 0;
  UITableViewCellEditingStyleDelete = 1;
  UITableViewCellEditingStyleInsert = 2;

type
  UITableViewCellAccessoryType = NSInteger;
  UITableViewCellAccessoryTypePtr = ^UITableViewCellAccessoryType;

const
  UITableViewCellAccessoryNone = 0;
  UITableViewCellAccessoryDisclosureIndicator = 1;
  UITableViewCellAccessoryDetailDisclosureButton = 2;
  UITableViewCellAccessoryCheckmark = 3;
  UITableViewCellAccessoryDetailButton = 4 { available in 7_0 };

type
  UITableViewCellStateMask = NSUInteger;
  UITableViewCellStateMaskPtr = ^UITableViewCellStateMask;

const
  UITableViewCellStateDefaultMask = 0;
  UITableViewCellStateShowingEditControlMask = 1 shl 0;
  UITableViewCellStateShowingDeleteConfirmationMask = 1 shl 1;
{$endif}

{$ifdef CLASSES}

type
  UITableViewCell = objcclass external (UIView, NSCodingProtocol, UIGestureRecognizerDelegateProtocol)
  public
    function initWithStyle_reuseIdentifier (style: UITableViewCellStyle; reuseIdentifier: NSString): instancetype; message 'initWithStyle:reuseIdentifier:'; { available in 3_0 }
    function imageView: UIImageView; message 'imageView';
    function textLabel: UILabel; message 'textLabel';
    function detailTextLabel: UILabel; message 'detailTextLabel';
    function contentView: UIView; message 'contentView';
    procedure setBackgroundView(newValue: UIView); message 'setBackgroundView:';
    function backgroundView: UIView; message 'backgroundView';
    procedure setSelectedBackgroundView(newValue: UIView); message 'setSelectedBackgroundView:';
    function selectedBackgroundView: UIView; message 'selectedBackgroundView';
    procedure setMultipleSelectionBackgroundView(newValue: UIView); message 'setMultipleSelectionBackgroundView:';
    function multipleSelectionBackgroundView: UIView; message 'multipleSelectionBackgroundView';
    function reuseIdentifier: NSString; message 'reuseIdentifier';
    procedure prepareForReuse; message 'prepareForReuse';
    procedure setSelectionStyle(newValue: UITableViewCellSelectionStyle); message 'setSelectionStyle:';
    function selectionStyle: UITableViewCellSelectionStyle; message 'selectionStyle';
    procedure setSelected(newValue: boolean); message 'setSelected:';
    function isSelected: boolean; message 'isSelected';
    procedure setHighlighted(newValue: boolean); message 'setHighlighted:';
    function isHighlighted: boolean; message 'isHighlighted';
    procedure setSelected_animated (selected: boolean; animated: boolean); message 'setSelected:animated:';
    procedure setHighlighted_animated (highlighted: boolean; animated: boolean); message 'setHighlighted:animated:';
    function editingStyle: UITableViewCellEditingStyle; message 'editingStyle';
    procedure setShowsReorderControl(newValue: boolean); message 'setShowsReorderControl:';
    function showsReorderControl: boolean; message 'showsReorderControl';
    procedure setShouldIndentWhileEditing(newValue: boolean); message 'setShouldIndentWhileEditing:';
    function shouldIndentWhileEditing: boolean; message 'shouldIndentWhileEditing';
    procedure setAccessoryType(newValue: UITableViewCellAccessoryType); message 'setAccessoryType:';
    function accessoryType: UITableViewCellAccessoryType; message 'accessoryType';
    procedure setAccessoryView(newValue: UIView); message 'setAccessoryView:';
    function accessoryView: UIView; message 'accessoryView';
    procedure setEditingAccessoryType(newValue: UITableViewCellAccessoryType); message 'setEditingAccessoryType:';
    function editingAccessoryType: UITableViewCellAccessoryType; message 'editingAccessoryType';
    procedure setEditingAccessoryView(newValue: UIView); message 'setEditingAccessoryView:';
    function editingAccessoryView: UIView; message 'editingAccessoryView';
    procedure setIndentationLevel(newValue: NSInteger); message 'setIndentationLevel:';
    function indentationLevel: NSInteger; message 'indentationLevel';
    procedure setIndentationWidth(newValue: CGFloat); message 'setIndentationWidth:';
    function indentationWidth: CGFloat; message 'indentationWidth';
    procedure setSeparatorInset(newValue: UIEdgeInsets); message 'setSeparatorInset:';
    function separatorInset: UIEdgeInsets; message 'separatorInset';
    procedure setEditing(newValue: boolean); message 'setEditing:';
    function isEditing: boolean; message 'isEditing';
    procedure setEditing_animated (editing: boolean; animated: boolean); message 'setEditing:animated:';
    function showingDeleteConfirmation: boolean; message 'showingDeleteConfirmation';
    procedure willTransitionToState (state: UITableViewCellStateMask); message 'willTransitionToState:'; { available in 3_0 }
    procedure didTransitionToState (state: UITableViewCellStateMask); message 'didTransitionToState:'; { available in 3_0 }

    { Adopted protocols }
    function gestureRecognizer_shouldBeRequiredToFailByGestureRecognizer (gestureRecognizer: UIGestureRecognizer; otherGestureRecognizer: UIGestureRecognizer): boolean; message 'gestureRecognizer:shouldBeRequiredToFailByGestureRecognizer:'; { available in 7_0 }
    function gestureRecognizer_shouldReceiveTouch (gestureRecognizer: UIGestureRecognizer; touch: UITouch): boolean; message 'gestureRecognizer:shouldReceiveTouch:';
    function gestureRecognizer_shouldRecognizeSimultaneouslyWithGestureRecognizer (gestureRecognizer: UIGestureRecognizer; otherGestureRecognizer: UIGestureRecognizer): boolean; message 'gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:';
    function gestureRecognizer_shouldRequireFailureOfGestureRecognizer (gestureRecognizer: UIGestureRecognizer; otherGestureRecognizer: UIGestureRecognizer): boolean; message 'gestureRecognizer:shouldRequireFailureOfGestureRecognizer:'; { available in 7_0 }
    function gestureRecognizerShouldBegin (gestureRecognizer: UIGestureRecognizer): boolean; message 'gestureRecognizerShouldBegin:';
  end;


type
  UIDeprecated = objccategory external (UITableViewCell)
    function initWithFrame_reuseIdentifier (frame: CGRect; reuseIdentifier_: NSString): id; message 'initWithFrame:reuseIdentifier:'; deprecated 'in 2_0, 3_0';
    procedure setText(newValue: NSString); message 'setText:';
    function text: NSString; message 'text';
    procedure setFont(newValue: UIFont); message 'setFont:';
    function font: UIFont; message 'font';
    procedure setTextAlignment(newValue: NSTextAlignment); message 'setTextAlignment:';
    function textAlignment: NSTextAlignment; message 'textAlignment';
    procedure setLineBreakMode(newValue: NSLineBreakMode); message 'setLineBreakMode:';
    function lineBreakMode: NSLineBreakMode; message 'lineBreakMode';
    procedure setTextColor(newValue: UIColor); message 'setTextColor:';
    function textColor: UIColor; message 'textColor';
    procedure setSelectedTextColor(newValue: UIColor); message 'setSelectedTextColor:';
    function selectedTextColor: UIColor; message 'selectedTextColor';
    procedure setImage(newValue: UIImage); message 'setImage:';
    function image: UIImage; message 'image';
    procedure setSelectedImage(newValue: UIImage); message 'setSelectedImage:';
    function selectedImage: UIImage; message 'selectedImage';
    procedure setHidesAccessoryWhenEditing(newValue: boolean); message 'setHidesAccessoryWhenEditing:';
    function hidesAccessoryWhenEditing: boolean; message 'hidesAccessoryWhenEditing';
    procedure setTarget(newValue: id); message 'setTarget:';
    function target: id; message 'target';
    procedure setEditAction(newValue: SEL); message 'setEditAction:';
    function editAction: SEL; message 'editAction';
    procedure setAccessoryAction(newValue: SEL); message 'setAccessoryAction:';
    function accessoryAction: SEL; message 'accessoryAction';
  end;
{$endif}

