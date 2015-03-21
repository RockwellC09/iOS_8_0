{ Parsed from UIKit.framework (iPhoneOS8.2) NSLayoutConstraint.h }
{ Created on Fri Mar 20 2:11:41 2015 }


{$ifdef TYPES}
type
  NSLayoutConstraintPtr = ^NSLayoutConstraint;
  UILayoutSupportProtocolPtr = ^UILayoutSupportProtocol;
{$endif}

{$ifdef TYPES}
type
  NSLayoutRelation = NSInteger;
  NSLayoutRelationPtr = ^NSLayoutRelation;

const
  NSLayoutRelationLessThanOrEqual = -1;
  NSLayoutRelationEqual = 0;
  NSLayoutRelationGreaterThanOrEqual = 1;

type
  NSLayoutAttribute = NSInteger;
  NSLayoutAttributePtr = ^NSLayoutAttribute;

const
  NSLayoutAttributeLeft = 1;
  NSLayoutAttributeRight = 2;
  NSLayoutAttributeTop = 3;
  NSLayoutAttributeBottom = 4;
  NSLayoutAttributeLeading = 5;
  NSLayoutAttributeTrailing = 6;
  NSLayoutAttributeWidth = 7;
  NSLayoutAttributeHeight = 8;
  NSLayoutAttributeCenterX = 9;
  NSLayoutAttributeCenterY = 10;
  NSLayoutAttributeBaseline = 11;
  NSLayoutAttributeLastBaseline = NSLayoutAttributeBaseline;
  NSLayoutAttributeFirstBaseline = 12 { available in 8_0 };
  NSLayoutAttributeLeftMargin = 13 { available in 8_0 };
  NSLayoutAttributeRightMargin = 14 { available in 8_0 };
  NSLayoutAttributeTopMargin = 15 { available in 8_0 };
  NSLayoutAttributeBottomMargin = 16 { available in 8_0 };
  NSLayoutAttributeLeadingMargin = 17 { available in 8_0 };
  NSLayoutAttributeTrailingMargin = 18 { available in 8_0 };
  NSLayoutAttributeCenterXWithinMargins = 19 { available in 8_0 };
  NSLayoutAttributeCenterYWithinMargins = 20 { available in 8_0 };
  NSLayoutAttributeNotAnAttribute = 0;

type
  NSLayoutFormatOptions = NSUInteger;
  NSLayoutFormatOptionsPtr = ^NSLayoutFormatOptions;

const
  NSLayoutFormatAlignAllLeft = 1 shl NSLayoutAttributeLeft;
  NSLayoutFormatAlignAllRight = 1 shl NSLayoutAttributeRight;
  NSLayoutFormatAlignAllTop = 1 shl NSLayoutAttributeTop;
  NSLayoutFormatAlignAllBottom = 1 shl NSLayoutAttributeBottom;
  NSLayoutFormatAlignAllLeading = 1 shl NSLayoutAttributeLeading;
  NSLayoutFormatAlignAllTrailing = 1 shl NSLayoutAttributeTrailing;
  NSLayoutFormatAlignAllCenterX = 1 shl NSLayoutAttributeCenterX;
  NSLayoutFormatAlignAllCenterY = 1 shl NSLayoutAttributeCenterY;
  NSLayoutFormatAlignAllBaseline = 1 shl NSLayoutAttributeBaseline;
  NSLayoutFormatAlignAllLastBaseline = NSLayoutFormatAlignAllBaseline;
  NSLayoutFormatAlignAllFirstBaseline = 1 shl NSLayoutAttributeFirstBaseline { available in 8_0 };
  NSLayoutFormatAlignmentMask = $FFFF;
  NSLayoutFormatDirectionLeadingToTrailing = 0 shl 16;
  NSLayoutFormatDirectionLeftToRight = 1 shl 16;
  NSLayoutFormatDirectionRightToLeft = 2 shl 16;
  NSLayoutFormatDirectionMask = $3 shl 16;

type
  UILayoutPriority = single;
  UILayoutPriorityPtr = ^UILayoutPriority;
{$endif}

{$ifdef CLASSES}

type
  NSLayoutConstraint = objcclass external (NSObject)
  private
    _container: id;
    _firstItem: id;
    _secondItem: id;
    _constant: CGFloat;
    _loweredConstant: CGFloat;
    _markerAndPositiveExtraVar: id;
    _negativeExtraVar: id;
    _coefficient: single;
    _priority: UILayoutPriority;
    _layoutConstraintFlags: cuint64;
    _flange: id;
  public
    class function constraintsWithVisualFormat_options_metrics_views (format: NSString; opts: NSLayoutFormatOptions; metrics: NSDictionary; views: NSDictionary): NSArray; message 'constraintsWithVisualFormat:options:metrics:views:';
    class function constraintWithItem_attribute_relatedBy_toItem_attribute_multiplier_constant (view1: id; attr1: NSLayoutAttribute; relation: NSLayoutRelation; view2: id; attr2: NSLayoutAttribute; multiplier: CGFloat; c: CGFloat): instancetype; message 'constraintWithItem:attribute:relatedBy:toItem:attribute:multiplier:constant:';
    procedure setPriority(newValue: UILayoutPriority); message 'setPriority:';
    function priority: UILayoutPriority; message 'priority';
    procedure setShouldBeArchived(newValue: boolean); message 'setShouldBeArchived:';
    function shouldBeArchived: boolean; message 'shouldBeArchived';
    function firstItem: id; message 'firstItem';
    function firstAttribute: NSLayoutAttribute; message 'firstAttribute';
    function relation: NSLayoutRelation; message 'relation';
    function secondItem: id; message 'secondItem';
    function secondAttribute: NSLayoutAttribute; message 'secondAttribute';
    function multiplier: CGFloat; message 'multiplier';
    procedure setConstant(newValue: CGFloat); message 'setConstant:';
    function constant: CGFloat; message 'constant';
    procedure setActive(newValue: boolean); message 'setActive:';
    function isActive: boolean; message 'isActive';
    class procedure activateConstraints (constraints: NSArray); message 'activateConstraints:'; { available in 10_10, 8_0 }
    class procedure deactivateConstraints (constraints: NSArray); message 'deactivateConstraints:'; { available in 10_10, 8_0 }
  end;


type
  NSIdentifier = objccategory external (NSLayoutConstraint)
    procedure setIdentifier(newValue: NSString); message 'setIdentifier:';
    function identifier: NSString; message 'identifier';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  UILayoutSupportProtocol = objcprotocol external name 'UILayoutSupport' (NSObjectProtocol)
    function length: CGFloat; message 'length';
  end;
{$endif}

