{ Parsed from HealthKit.framework (iPhoneOS8.2) HKDefines.h }
{ Created on Fri Mar 20 2:11:00 2015 }

{$ifdef TYPES}
type
  HKErrorCode = NSInteger;
  HKErrorCodePtr = ^HKErrorCode;

const
  HKNoError = 0;
  HKErrorHealthDataUnavailable = 1;
  HKErrorHealthDataRestricted = 2;
  HKErrorInvalidArgument = 3;
  HKErrorAuthorizationDenied = 4;
  HKErrorAuthorizationNotDetermined = 5;
  HKErrorDatabaseInaccessible = 6;
  HKErrorUserCanceled = 7;

type
  HKUpdateFrequency = NSInteger;
  HKUpdateFrequencyPtr = ^HKUpdateFrequency;

const
  HKUpdateFrequencyImmediate = 1;
  HKUpdateFrequencyHourly = 2;
  HKUpdateFrequencyDaily = 3;
  HKUpdateFrequencyWeekly = 4;

type
  HKAuthorizationStatus = NSInteger;
  HKAuthorizationStatusPtr = ^HKAuthorizationStatus;

const
  HKAuthorizationStatusNotDetermined = 0;
  HKAuthorizationStatusSharingDenied = 1;
  HKAuthorizationStatusSharingAuthorized = 2;

type
  HKBiologicalSex = NSInteger;
  HKBiologicalSexPtr = ^HKBiologicalSex;

const
  HKBiologicalSexNotSet = 0;
  HKBiologicalSexFemale = 1 { available in 8_0 };
  HKBiologicalSexMale = 2 { available in 8_0 };
  HKBiologicalSexOther = 3 { available in 8_2 };

type
  HKBloodType = NSInteger;
  HKBloodTypePtr = ^HKBloodType;

const
  HKBloodTypeNotSet = 0;
  HKBloodTypeAPositive = 1;
  HKBloodTypeANegative = 2;
  HKBloodTypeBPositive = 3;
  HKBloodTypeBNegative = 4;
  HKBloodTypeABPositive = 5;
  HKBloodTypeABNegative = 6;
  HKBloodTypeOPositive = 7;
  HKBloodTypeONegative = 8;

type
  HKCategoryValueSleepAnalysis = NSInteger;
  HKCategoryValueSleepAnalysisPtr = ^HKCategoryValueSleepAnalysis;

const
  HKCategoryValueSleepAnalysisInBed = 0;
  HKCategoryValueSleepAnalysisAsleep = 1;
{$endif}

