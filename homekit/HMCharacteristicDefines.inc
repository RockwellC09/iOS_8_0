{ Parsed from HomeKit.framework (iPhoneOS8.2) HMCharacteristicDefines.h }
{ Created on Fri Mar 20 2:11:01 2015 }

{$ifdef TYPES}
type
  HMCharacteristicValueDoorState = NSInteger;
  HMCharacteristicValueDoorStatePtr = ^HMCharacteristicValueDoorState;

const
  HMCharacteristicValueDoorStateOpen = 0;
  HMCharacteristicValueDoorStateClosed = 1;
  HMCharacteristicValueDoorStateOpening = 2;
  HMCharacteristicValueDoorStateClosing = 3;
  HMCharacteristicValueDoorStateStopped = 4;

type
  HMCharacteristicValueHeatingCooling = NSInteger;
  HMCharacteristicValueHeatingCoolingPtr = ^HMCharacteristicValueHeatingCooling;

const
  HMCharacteristicValueHeatingCoolingOff = 0;
  HMCharacteristicValueHeatingCoolingHeat = 1;
  HMCharacteristicValueHeatingCoolingCool = 2;
  HMCharacteristicValueHeatingCoolingAuto = 3;

type
  HMCharacteristicValueRotationDirection = NSInteger;
  HMCharacteristicValueRotationDirectionPtr = ^HMCharacteristicValueRotationDirection;

const
  HMCharacteristicValueRotationDirectionClockwise = 0;
  HMCharacteristicValueRotationDirectionCounterClockwise = 1;

type
  HMCharacteristicValueTemperatureUnit = NSInteger;
  HMCharacteristicValueTemperatureUnitPtr = ^HMCharacteristicValueTemperatureUnit;

const
  HMCharacteristicValueTemperatureUnitCelsius = 0;
  HMCharacteristicValueTemperatureUnitFahrenheit = 1;

type
  HMCharacteristicValueLockMechanismState = NSInteger;
  HMCharacteristicValueLockMechanismStatePtr = ^HMCharacteristicValueLockMechanismState;

const
  HMCharacteristicValueLockMechanismStateUnsecured = 0;
  HMCharacteristicValueLockMechanismStateSecured = 1;
  HMCharacteristicValueLockMechanismStateJammed = 2;
  HMCharacteristicValueLockMechanismStateUnknown = 3;

type
  HMCharacteristicValueLockMechanism = NSInteger;
  HMCharacteristicValueLockMechanismPtr = ^HMCharacteristicValueLockMechanism;

const
  HMCharacteristicValueLockMechanismLastKnownActionSecuredUsingPhysicalMovementInterior = 0;
  HMCharacteristicValueLockMechanismLastKnownActionUnsecuredUsingPhysicalMovementInterior = 1;
  HMCharacteristicValueLockMechanismLastKnownActionSecuredUsingPhysicalMovementExterior = 2;
  HMCharacteristicValueLockMechanismLastKnownActionUnsecuredUsingPhysicalMovementExterior = 3;
  HMCharacteristicValueLockMechanismLastKnownActionSecuredWithKeypad = 4;
  HMCharacteristicValueLockMechanismLastKnownActionUnsecuredWithKeypad = 5;
  HMCharacteristicValueLockMechanismLastKnownActionSecuredRemotely = 6;
  HMCharacteristicValueLockMechanismLastKnownActionUnsecuredRemotely = 7;
  HMCharacteristicValueLockMechanismLastKnownActionSecuredWithAutomaticSecureTimeout = 8;
{$endif}

