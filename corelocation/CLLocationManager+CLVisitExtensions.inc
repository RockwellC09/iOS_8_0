{ Parsed from CoreLocation.framework (iPhoneOS8.2) CLLocationManager+CLVisitExtensions.h }
{ Created on Fri Mar 20 2:11:06 2015 }

{$ifdef CLASSES}

type
  CLVisitExtensions = objccategory external (CLLocationManager)
    procedure startMonitoringVisits; message 'startMonitoringVisits'; { available in NA, 8_0 }
    procedure stopMonitoringVisits; message 'stopMonitoringVisits'; { available in NA, 8_0 }
  end;
{$endif}

