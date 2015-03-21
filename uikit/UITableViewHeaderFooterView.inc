{ Parsed from UIKit.framework (iPhoneOS8.2) UITableViewHeaderFooterView.h }
{ Created on Fri Mar 20 2:11:42 2015 }


{$ifdef TYPES}
type
  UITableViewHeaderFooterViewPtr = ^UITableViewHeaderFooterView;
{$endif}

{$ifdef CLASSES}

type
  UITableViewHeaderFooterView = objcclass external (UIView)
  public
    procedure setTintColor(newValue: UIColor); message 'setTintColor:';
    function tintColor: UIColor; message 'tintColor';
    function textLabel: UILabel; message 'textLabel';
    function detailTextLabel: UILabel; message 'detailTextLabel';
    function contentView: UIView; message 'contentView';
    procedure setBackgroundView(newValue: UIView); message 'setBackgroundView:';
    function backgroundView: UIView; message 'backgroundView';
    function reuseIdentifier: NSString; message 'reuseIdentifier';
    function initWithReuseIdentifier (reuseIdentifier_: NSString): instancetype; message 'initWithReuseIdentifier:';
    procedure prepareForReuse; message 'prepareForReuse';
  end;
{$endif}

