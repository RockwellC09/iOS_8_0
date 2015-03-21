{ Parsed from UIKit.framework (iPhoneOS8.2) UIAccelerometer.h }
{ Created on Fri Mar 20 2:11:41 2015 }


{$ifdef TYPES}
type
  UIAccelerationPtr = ^UIAcceleration;
  UIAccelerometerPtr = ^UIAccelerometer;
  UIAccelerometerDelegateProtocolPtr = ^UIAccelerometerDelegateProtocol;
{$endif}

{$ifdef TYPES}
type
  UIAccelerationValue = double;
  UIAccelerationValuePtr = ^UIAccelerationValue;
{$endif}

{$ifdef CLASSES}

type
  UIAcceleration = objcclass external (NSObject)
  private
    timestamp  : NSTimeInterval;
    x_, y_, z_ : UIAccelerationValue;
  public
    function timestamp_: NSTimeInterval; message 'timestamp';
    function x : UIAccelerationValue; message 'x';
    function y : UIAccelerationValue; message 'y';
    function z : UIAccelerationValue; message 'z';
  end;

type
  UIAccelerometer = objcclass external (NSObject)
  private
    _updateInterval: NSTimeInterval;
    _delegate: UIAccelerometerDelegateProtocol;
    _accelerometerFlags: bitpacked record
      case byte of
        0: (_anonBitField__accelerometerFlags0: cuint);
        1: (
          delegateDidAccelerate: 0..1;
          reserved: 0..((1 shl 31)-1);
        );
      end;
  public
    class function sharedAccelerometer: UIAccelerometer; message 'sharedAccelerometer';
    procedure setUpdateInterval(newValue: NSTimeInterval); message 'setUpdateInterval:';
    function updateInterval: NSTimeInterval; message 'updateInterval';
    procedure setDelegate(newValue: UIAccelerometerDelegateProtocol); message 'setDelegate:';
    function delegate: UIAccelerometerDelegateProtocol; message 'delegate';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  UIAccelerometerDelegateProtocol = objcprotocol external name 'UIAccelerometerDelegate' (NSObjectProtocol)
  optional
    procedure accelerometer_didAccelerate (accelerometer: UIAccelerometer; acceleration: UIAcceleration); message 'accelerometer:didAccelerate:'; deprecated 'in 2_0, 5_0';
  end;
{$endif}

