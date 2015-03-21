{ Parsed from NetworkExtension.framework (iPhoneOS8.2) NEOnDemandRule.h }
{ Created on Fri Mar 20 2:11:10 2015 }


{$ifdef TYPES}
type
  NEOnDemandRulePtr = ^NEOnDemandRule;
  NEOnDemandRuleConnectPtr = ^NEOnDemandRuleConnect;
  NEOnDemandRuleDisconnectPtr = ^NEOnDemandRuleDisconnect;
  NEOnDemandRuleIgnorePtr = ^NEOnDemandRuleIgnore;
  NEOnDemandRuleEvaluateConnectionPtr = ^NEOnDemandRuleEvaluateConnection;
  NEEvaluateConnectionRulePtr = ^NEEvaluateConnectionRule;
{$endif}

{$ifdef TYPES}
type
  NEOnDemandRuleAction = NSInteger;
  NEOnDemandRuleActionPtr = ^NEOnDemandRuleAction;

const
  NEOnDemandRuleActionConnect = 1;
  NEOnDemandRuleActionDisconnect = 2;
  NEOnDemandRuleActionEvaluateConnection = 3;
  NEOnDemandRuleActionIgnore = 4;

type
  NEOnDemandRuleInterfaceType = NSInteger;
  NEOnDemandRuleInterfaceTypePtr = ^NEOnDemandRuleInterfaceType;

const
  NEOnDemandRuleInterfaceTypeEthernet = 1 { available in 10_10, NA };
  NEOnDemandRuleInterfaceTypeWiFi = 2 { available in 10_10, 8_0 };
  NEOnDemandRuleInterfaceTypeCellular = 3 { available in NA, 8_0 };
{$endif}

{$ifdef CLASSES}

type
  NEOnDemandRule = objcclass external (NSObject, NSSecureCodingProtocol, NSCopyingProtocol)
  public
    function action: NEOnDemandRuleAction; message 'action';
    procedure setDNSSearchDomainMatch(newValue: NSArray); message 'setDNSSearchDomainMatch:';
    function DNSSearchDomainMatch: NSArray; message 'DNSSearchDomainMatch';
    procedure setDNSServerAddressMatch(newValue: NSArray); message 'setDNSServerAddressMatch:';
    function DNSServerAddressMatch: NSArray; message 'DNSServerAddressMatch';
    procedure setInterfaceTypeMatch(newValue: NEOnDemandRuleInterfaceType); message 'setInterfaceTypeMatch:';
    function interfaceTypeMatch: NEOnDemandRuleInterfaceType; message 'interfaceTypeMatch';
    procedure setSSIDMatch(newValue: NSArray); message 'setSSIDMatch:';
    function SSIDMatch: NSArray; message 'SSIDMatch';
    procedure setProbeURL(newValue: NSURL); message 'setProbeURL:';
    function probeURL: NSURL; message 'probeURL';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;

type
  NEOnDemandRuleConnect = objcclass external (NEOnDemandRule)
  end;

type
  NEOnDemandRuleDisconnect = objcclass external (NEOnDemandRule)
  end;

type
  NEOnDemandRuleIgnore = objcclass external (NEOnDemandRule)
  end;

type
  NEOnDemandRuleEvaluateConnection = objcclass external (NEOnDemandRule)
  public
    procedure setConnectionRules(newValue: NSArray); message 'setConnectionRules:';
    function connectionRules: NSArray; message 'connectionRules';
  end;
{$endif}

{$ifdef TYPES}
type
  NEEvaluateConnectionRuleAction = NSInteger;
  NEEvaluateConnectionRuleActionPtr = ^NEEvaluateConnectionRuleAction;

const
  NEEvaluateConnectionRuleActionConnectIfNeeded = 1;
  NEEvaluateConnectionRuleActionNeverConnect = 2;
{$endif}

{$ifdef CLASSES}

type
  NEEvaluateConnectionRule = objcclass external (NSObject, NSSecureCodingProtocol, NSCopyingProtocol)
  public
    function initWithMatchDomains_andAction (domains: NSArray; action: NEEvaluateConnectionRuleAction): id; message 'initWithMatchDomains:andAction:'; { available in 10_10, 8_0 }
    function action: NEEvaluateConnectionRuleAction; message 'action';
    function matchDomains: NSArray; message 'matchDomains';
    procedure setUseDNSServers(newValue: NSArray); message 'setUseDNSServers:';
    function useDNSServers: NSArray; message 'useDNSServers';
    procedure setProbeURL(newValue: NSURL); message 'setProbeURL:';
    function probeURL: NSURL; message 'probeURL';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

