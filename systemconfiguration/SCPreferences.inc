{ Parsed from SystemConfiguration.framework (iPhoneOS8.2) SCPreferences.h }
{ Created on Fri Mar 20 2:11:34 2015 }

{$ifndef _SCPREFERENCES_H}

{$ifdef USE_SYSTEMCONFIGURATION_PRIVATE_HEADERS}

{$else}

{$if  not defined(TARGET_OS_IPHONE)}

{$else}
{$ifdef TYPES}
type
  AuthorizationRef = OpaqueType;
{$endif}

{$endif}
{$ifdef TYPES}
type
  SCPreferencesRef = OpaqueType;

const
  kSCPreferencesNotificationCommit = 1 shl 0;
  kSCPreferencesNotificationApply = 1 shl 1;

type
  SCPreferencesNotification = cuint32;
  SCPreferencesNotificationPtr = ^SCPreferencesNotification;

type
  SCPreferencesContext = record
    version: CFIndex;
    info: pointer;
    retain: function (info: pointer): pointer; cdecl;
    release: procedure (info: pointer); cdecl;
    copyDescription: function (info: pointer): CFStringRef; cdecl;
  end;
type
  SCPreferencesContextPtr = ^SCPreferencesContext;

type
  SCPreferencesCallBack = procedure (prefs: SCPreferencesRef; notificationType: SCPreferencesNotification; info: pointer); cdecl;
{$endif}

{$endif}
{$endif}
