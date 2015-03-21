{ Parsed from UIKit.framework (iPhoneOS8.2) UIPrintInfo.h }
{ Created on Fri Mar 20 2:11:41 2015 }


{$ifdef TYPES}
type
  UIPrintInfoPtr = ^UIPrintInfo;
{$endif}

{$ifdef TYPES}
type
  UIPrintInfoOutputType = NSInteger;
  UIPrintInfoOutputTypePtr = ^UIPrintInfoOutputType;

const
  UIPrintInfoOutputGeneral = 0;
  UIPrintInfoOutputPhoto = 1;
  UIPrintInfoOutputGrayscale = 2;
  UIPrintInfoOutputPhotoGrayscale = 3;

type
  UIPrintInfoOrientation = NSInteger;
  UIPrintInfoOrientationPtr = ^UIPrintInfoOrientation;

const
  UIPrintInfoOrientationPortrait = 0;
  UIPrintInfoOrientationLandscape = 1;

type
  UIPrintInfoDuplex = NSInteger;
  UIPrintInfoDuplexPtr = ^UIPrintInfoDuplex;

const
  UIPrintInfoDuplexNone = 0;
  UIPrintInfoDuplexLongEdge = 1;
  UIPrintInfoDuplexShortEdge = 2;
{$endif}

{$ifdef CLASSES}

type
  UIPrintInfo = objcclass external (NSObject, NSCopyingProtocol, NSCodingProtocol)
  private
    _printerID: NSString;
    _jobName: NSString;
    _outputType: UIPrintInfoOutputType;
    _orientation: UIPrintInfoOrientation;
    _duplex: UIPrintInfoDuplex;
    _copies: NSInteger;
    _scaleUp: boolean;
  public
    class function printInfo: UIPrintInfo; message 'printInfo';
    class function printInfoWithDictionary (dictionary: NSDictionary): UIPrintInfo; message 'printInfoWithDictionary:';
    function dictionaryRepresentation: NSDictionary; message 'dictionaryRepresentation';
    procedure setPrinterID(newValue: NSString); message 'setPrinterID:';
    function printerID: NSString; message 'printerID';
    procedure setJobName(newValue: NSString); message 'setJobName:';
    function jobName: NSString; message 'jobName';
    procedure setOutputType(newValue: UIPrintInfoOutputType); message 'setOutputType:';
    function outputType: UIPrintInfoOutputType; message 'outputType';
    procedure setOrientation(newValue: UIPrintInfoOrientation); message 'setOrientation:';
    function orientation: UIPrintInfoOrientation; message 'orientation';
    procedure setDuplex(newValue: UIPrintInfoDuplex); message 'setDuplex:';
    function duplex: UIPrintInfoDuplex; message 'duplex';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): id; message 'initWithCoder:';
  end;
{$endif}

