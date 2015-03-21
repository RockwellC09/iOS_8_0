{ Parsed from NetworkExtension.framework (iPhoneOS8.2) NEVPNProtocolIKEv2.h }
{ Created on Fri Mar 20 2:11:10 2015 }


{$ifdef TYPES}
type
  NEVPNIKEv2SecurityAssociationParametersPtr = ^NEVPNIKEv2SecurityAssociationParameters;
  NEVPNProtocolIKEv2Ptr = ^NEVPNProtocolIKEv2;
{$endif}

{$ifdef TYPES}
type
  NEVPNIKEv2EncryptionAlgorithm = NSInteger;
  NEVPNIKEv2EncryptionAlgorithmPtr = ^NEVPNIKEv2EncryptionAlgorithm;

const
  NEVPNIKEv2EncryptionAlgorithmDES = 1;
  NEVPNIKEv2EncryptionAlgorithm3DES = 2;
  NEVPNIKEv2EncryptionAlgorithmAES128 = 3;
  NEVPNIKEv2EncryptionAlgorithmAES256 = 4;

type
  NEVPNIKEv2IntegrityAlgorithm = NSInteger;
  NEVPNIKEv2IntegrityAlgorithmPtr = ^NEVPNIKEv2IntegrityAlgorithm;

const
  NEVPNIKEv2IntegrityAlgorithmSHA96 = 1;
  NEVPNIKEv2IntegrityAlgorithmSHA160 = 2;
  NEVPNIKEv2IntegrityAlgorithmSHA256 = 3;
  NEVPNIKEv2IntegrityAlgorithmSHA384 = 4;
  NEVPNIKEv2IntegrityAlgorithmSHA512 = 5;

type
  NEVPNIKEv2DeadPeerDetectionRate = NSInteger;
  NEVPNIKEv2DeadPeerDetectionRatePtr = ^NEVPNIKEv2DeadPeerDetectionRate;

const
  NEVPNIKEv2DeadPeerDetectionRateNone = 0;
  NEVPNIKEv2DeadPeerDetectionRateLow = 1;
  NEVPNIKEv2DeadPeerDetectionRateMedium = 2;
  NEVPNIKEv2DeadPeerDetectionRateHigh = 3;

type
  NEVPNIKEv2DiffieHellmanGroup = NSInteger;
  NEVPNIKEv2DiffieHellmanGroupPtr = ^NEVPNIKEv2DiffieHellmanGroup;

const
  NEVPNIKEv2DiffieHellmanGroup0 = 0;
  NEVPNIKEv2DiffieHellmanGroup1 = 1;
  NEVPNIKEv2DiffieHellmanGroup2 = 2;
  NEVPNIKEv2DiffieHellmanGroup5 = 5;
  NEVPNIKEv2DiffieHellmanGroup14 = 14;
  NEVPNIKEv2DiffieHellmanGroup15 = 15;
  NEVPNIKEv2DiffieHellmanGroup16 = 16;
  NEVPNIKEv2DiffieHellmanGroup17 = 17;
  NEVPNIKEv2DiffieHellmanGroup18 = 18;
{$endif}

{$ifdef CLASSES}

type
  NEVPNIKEv2SecurityAssociationParameters = objcclass external (NSObject, NSSecureCodingProtocol, NSCopyingProtocol)
  public
    procedure setEncryptionAlgorithm(newValue: NEVPNIKEv2EncryptionAlgorithm); message 'setEncryptionAlgorithm:';
    function encryptionAlgorithm: NEVPNIKEv2EncryptionAlgorithm; message 'encryptionAlgorithm';
    procedure setIntegrityAlgorithm(newValue: NEVPNIKEv2IntegrityAlgorithm); message 'setIntegrityAlgorithm:';
    function integrityAlgorithm: NEVPNIKEv2IntegrityAlgorithm; message 'integrityAlgorithm';
    procedure setDiffieHellmanGroup(newValue: NEVPNIKEv2DiffieHellmanGroup); message 'setDiffieHellmanGroup:';
    function diffieHellmanGroup: NEVPNIKEv2DiffieHellmanGroup; message 'diffieHellmanGroup';
    procedure setLifetimeMinutes(newValue: cint32); message 'setLifetimeMinutes:';
    function lifetimeMinutes: cint32; message 'lifetimeMinutes';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;

type
  NEVPNProtocolIKEv2 = objcclass external (NEVPNProtocolIPSec)
  public
    procedure setDeadPeerDetectionRate(newValue: NEVPNIKEv2DeadPeerDetectionRate); message 'setDeadPeerDetectionRate:';
    function deadPeerDetectionRate: NEVPNIKEv2DeadPeerDetectionRate; message 'deadPeerDetectionRate';
    procedure setServerCertificateIssuerCommonName(newValue: NSString); message 'setServerCertificateIssuerCommonName:';
    function serverCertificateIssuerCommonName: NSString; message 'serverCertificateIssuerCommonName';
    procedure setServerCertificateCommonName(newValue: NSString); message 'setServerCertificateCommonName:';
    function serverCertificateCommonName: NSString; message 'serverCertificateCommonName';
    function IKESecurityAssociationParameters: NEVPNIKEv2SecurityAssociationParameters; message 'IKESecurityAssociationParameters';
    function childSecurityAssociationParameters: NEVPNIKEv2SecurityAssociationParameters; message 'childSecurityAssociationParameters';
  end;
{$endif}

