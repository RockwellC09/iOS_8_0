{ Parsed from AVFoundation.framework (iPhoneOS8.2) AVTextStyleRule.h }
{ Created on Fri Mar 20 2:11:14 2015 }


{$ifdef TYPES}
type
  AVTextStyleRulePtr = ^AVTextStyleRule;
{$endif}

{$ifdef CLASSES}

type
  AVTextStyleRule = objcclass external (NSObject, NSCopyingProtocol)
  private
    _textStyleRule: AVTextStyleRuleInternal;
  public
    class function propertyListForTextStyleRules (textStyleRules: NSArray): id; message 'propertyListForTextStyleRules:';
    class function textStyleRulesFromPropertyList (plist: id): NSArray; message 'textStyleRulesFromPropertyList:';
    class function textStyleRuleWithTextMarkupAttributes (textMarkupAttributes: NSDictionary): AVTextStyleRule; message 'textStyleRuleWithTextMarkupAttributes:';
    class function textStyleRuleWithTextMarkupAttributes_textSelector (textMarkupAttributes: NSDictionary; textSelector: NSString): AVTextStyleRule; message 'textStyleRuleWithTextMarkupAttributes:textSelector:';
    function initWithTextMarkupAttributes (textMarkupAttributes: NSDictionary): instancetype; message 'initWithTextMarkupAttributes:';
    function initWithTextMarkupAttributes_textSelector (textMarkupAttributes: NSDictionary; textSelector: NSString): instancetype; message 'initWithTextMarkupAttributes:textSelector:';
    function textMarkupAttributes: NSDictionary; message 'textMarkupAttributes';
    function textSelector: NSString; message 'textSelector';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

