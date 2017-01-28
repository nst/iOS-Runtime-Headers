/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIStatusBarServerThread : NSThread {
    NSMutableArray * _clientPorts;
    struct { 
        bool itemIsEnabled[34]; 
        BOOL timeString[64]; 
        int gsmSignalStrengthRaw; 
        int gsmSignalStrengthBars; 
        BOOL serviceString[100]; 
        BOOL serviceCrossfadeString[100]; 
        BOOL serviceImages[2][100]; 
        BOOL operatorDirectory[1024]; 
        unsigned int serviceContentType; 
        int wifiSignalStrengthRaw; 
        int wifiSignalStrengthBars; 
        unsigned int dataNetworkType; 
        int batteryCapacity; 
        unsigned int batteryState; 
        BOOL batteryDetailString[150]; 
        int bluetoothBatteryCapacity; 
        int thermalColor; 
        unsigned int thermalSunlightMode : 1; 
        unsigned int slowActivity : 1; 
        unsigned int syncActivity : 1; 
        BOOL activityDisplayId[256]; 
        unsigned int bluetoothConnected : 1; 
        unsigned int displayRawGSMSignal : 1; 
        unsigned int displayRawWifiSignal : 1; 
        unsigned int locationIconType : 1; 
        unsigned int quietModeInactive : 1; 
        unsigned int tetheringConnectionCount; 
        unsigned int batterySaverModeActive : 1; 
        unsigned int deviceIsRTL : 1; 
        unsigned int lock : 1; 
        BOOL breadcrumbTitle[256]; 
        BOOL breadcrumbSecondaryTitle[256]; 
        BOOL personName[100]; 
        BOOL returnToAppBundleIdentifier[100]; 
        unsigned int electronicTollCollectionAvailable : 1; 
        unsigned int wifiLinkWarning : 1; 
    }  _composedStatusBarData;
    bool  _composedStatusBarDataValid;
    struct __CFDictionary { } * _doubleHeightStatusStrings;
    NSMutableDictionary * _glowAnimationEndTimes;
    struct __CFDictionary { } * _glowAnimationStates;
    struct { 
        bool overrideItemIsEnabled[34]; 
        unsigned int overrideTimeString : 1; 
        unsigned int overrideGsmSignalStrengthRaw : 1; 
        unsigned int overrideGsmSignalStrengthBars : 1; 
        unsigned int overrideServiceString : 1; 
        unsigned int overrideServiceImages : 2; 
        unsigned int overrideOperatorDirectory : 1; 
        unsigned int overrideServiceContentType : 1; 
        unsigned int overrideWifiSignalStrengthRaw : 1; 
        unsigned int overrideWifiSignalStrengthBars : 1; 
        unsigned int overrideDataNetworkType : 1; 
        unsigned int disallowsCellularDataNetworkTypes : 1; 
        unsigned int overrideBatteryCapacity : 1; 
        unsigned int overrideBatteryState : 1; 
        unsigned int overrideBatteryDetailString : 1; 
        unsigned int overrideBluetoothBatteryCapacity : 1; 
        unsigned int overrideThermalColor : 1; 
        unsigned int overrideSlowActivity : 1; 
        unsigned int overrideActivityDisplayId : 1; 
        unsigned int overrideBluetoothConnected : 1; 
        unsigned int overrideBreadcrumb : 1; 
        unsigned int overrideLock; 
        unsigned int overrideDisplayRawGSMSignal : 1; 
        unsigned int overrideDisplayRawWifiSignal : 1; 
        unsigned int overridePersonName : 1; 
        unsigned int overrideWifiLinkWarning : 1; 
        struct { 
            bool itemIsEnabled[34]; 
            BOOL timeString[64]; 
            int gsmSignalStrengthRaw; 
            int gsmSignalStrengthBars; 
            BOOL serviceString[100]; 
            BOOL serviceCrossfadeString[100]; 
            BOOL serviceImages[2][100]; 
            BOOL operatorDirectory[1024]; 
            unsigned int serviceContentType; 
            int wifiSignalStrengthRaw; 
            int wifiSignalStrengthBars; 
            unsigned int dataNetworkType; 
            int batteryCapacity; 
            unsigned int batteryState; 
            BOOL batteryDetailString[150]; 
            int bluetoothBatteryCapacity; 
            int thermalColor; 
            unsigned int thermalSunlightMode : 1; 
            unsigned int slowActivity : 1; 
            unsigned int syncActivity : 1; 
            BOOL activityDisplayId[256]; 
            unsigned int bluetoothConnected : 1; 
            unsigned int displayRawGSMSignal : 1; 
            unsigned int displayRawWifiSignal : 1; 
            unsigned int locationIconType : 1; 
            unsigned int quietModeInactive : 1; 
            unsigned int tetheringConnectionCount; 
            unsigned int batterySaverModeActive : 1; 
            unsigned int deviceIsRTL : 1; 
            unsigned int lock : 1; 
            BOOL breadcrumbTitle[256]; 
            BOOL breadcrumbSecondaryTitle[256]; 
            BOOL personName[100]; 
            BOOL returnToAppBundleIdentifier[100]; 
            unsigned int electronicTollCollectionAvailable : 1; 
            unsigned int wifiLinkWarning : 1; 
        } values; 
    }  _overrides;
    NSMutableArray * _publishers;
    struct { 
        bool itemIsEnabled[34]; 
        BOOL timeString[64]; 
        int gsmSignalStrengthRaw; 
        int gsmSignalStrengthBars; 
        BOOL serviceString[100]; 
        BOOL serviceCrossfadeString[100]; 
        BOOL serviceImages[2][100]; 
        BOOL operatorDirectory[1024]; 
        unsigned int serviceContentType; 
        int wifiSignalStrengthRaw; 
        int wifiSignalStrengthBars; 
        unsigned int dataNetworkType; 
        int batteryCapacity; 
        unsigned int batteryState; 
        BOOL batteryDetailString[150]; 
        int bluetoothBatteryCapacity; 
        int thermalColor; 
        unsigned int thermalSunlightMode : 1; 
        unsigned int slowActivity : 1; 
        unsigned int syncActivity : 1; 
        BOOL activityDisplayId[256]; 
        unsigned int bluetoothConnected : 1; 
        unsigned int displayRawGSMSignal : 1; 
        unsigned int displayRawWifiSignal : 1; 
        unsigned int locationIconType : 1; 
        unsigned int quietModeInactive : 1; 
        unsigned int tetheringConnectionCount; 
        unsigned int batterySaverModeActive : 1; 
        unsigned int deviceIsRTL : 1; 
        unsigned int lock : 1; 
        BOOL breadcrumbTitle[256]; 
        BOOL breadcrumbSecondaryTitle[256]; 
        BOOL personName[100]; 
        BOOL returnToAppBundleIdentifier[100]; 
        unsigned int electronicTollCollectionAvailable : 1; 
        unsigned int wifiLinkWarning : 1; 
    }  _statusBarData;
}

- (void).cxx_destruct;
- (void)_addClient:(unsigned int)arg1;
- (void)_addStatusBarItem:(int)arg1 forPublisher:(id)arg2;
- (void)_addStyleOverrides:(int)arg1 forPublisher:(id)arg2;
- (void)_broadcastStatusBarDataWithActions:(int)arg1;
- (void)_broadcastStyleOverrides;
- (id)_doubleHeightStatusStringForStyle:(long long)arg1;
- (double)_glowAnimationEndTimeForStyle:(long long)arg1;
- (bool)_glowAnimationStateForStyle:(long long)arg1;
- (bool)_permanentizeStatusBarOverrideData;
- (void)_postDoubleHeightStatus:(char *)arg1 forStyle:(long long)arg2;
- (void)_postGlowAnimationState:(bool)arg1 forStyle:(long long)arg2;
- (void)_postStatusBarData:(struct { bool x1[34]; BOOL x2[64]; int x3; int x4; BOOL x5[100]; BOOL x6[100]; BOOL x7[2][100]; BOOL x8[1024]; unsigned int x9; int x10; int x11; unsigned int x12; int x13; unsigned int x14; BOOL x15[150]; int x16; int x17; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; BOOL x21[256]; unsigned int x22 : 1; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; unsigned int x27; unsigned int x28 : 1; unsigned int x29 : 1; unsigned int x30 : 1; BOOL x31[256]; BOOL x32[256]; BOOL x33[100]; BOOL x34[100]; unsigned int x35 : 1; unsigned int x36 : 1; }*)arg1 actions:(int)arg2;
- (void)_postStatusBarOverrideData:(struct { bool x1[34]; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 1; unsigned int x6 : 2; unsigned int x7 : 1; unsigned int x8 : 1; unsigned int x9 : 1; unsigned int x10 : 1; unsigned int x11 : 1; unsigned int x12 : 1; unsigned int x13 : 1; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; struct { bool x_27_1_1[34]; BOOL x_27_1_2[64]; int x_27_1_3; int x_27_1_4; BOOL x_27_1_5[100]; BOOL x_27_1_6[100]; BOOL x_27_1_7[2][100]; BOOL x_27_1_8[1024]; unsigned int x_27_1_9; int x_27_1_10; int x_27_1_11; unsigned int x_27_1_12; int x_27_1_13; unsigned int x_27_1_14; BOOL x_27_1_15[150]; int x_27_1_16; int x_27_1_17; unsigned int x_27_1_18 : 1; unsigned int x_27_1_19 : 1; unsigned int x_27_1_20 : 1; BOOL x_27_1_21[256]; unsigned int x_27_1_22 : 1; unsigned int x_27_1_23 : 1; unsigned int x_27_1_24 : 1; unsigned int x_27_1_25 : 1; unsigned int x_27_1_26 : 1; unsigned int x_27_1_27; unsigned int x_27_1_28 : 1; unsigned int x_27_1_29 : 1; unsigned int x_27_1_30 : 1; BOOL x_27_1_31[256]; BOOL x_27_1_32[256]; BOOL x_27_1_33[100]; BOOL x_27_1_34[100]; unsigned int x_27_1_35 : 1; unsigned int x_27_1_36 : 1; } x27; }*)arg1;
- (id)_publisherForPort:(unsigned int)arg1;
- (void)_removeAnimationEndTimesForOverrides:(int)arg1;
- (void)_removeClient:(struct __CFMachPort { }*)arg1;
- (void)_removePublisher:(struct __CFMachPort { }*)arg1;
- (void)_removeStatusBarItem:(int)arg1 forPublisher:(id)arg2;
- (void)_removeStyleOverrides:(int)arg1 forPublisher:(id)arg2;
- (void)_setAnimationEndTimesForOverrides:(int)arg1;
- (struct { bool x1[34]; BOOL x2[64]; int x3; int x4; BOOL x5[100]; BOOL x6[100]; BOOL x7[2][100]; BOOL x8[1024]; unsigned int x9; int x10; int x11; unsigned int x12; int x13; unsigned int x14; BOOL x15[150]; int x16; int x17; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; BOOL x21[256]; unsigned int x22 : 1; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; unsigned int x27; unsigned int x28 : 1; unsigned int x29 : 1; unsigned int x30 : 1; BOOL x31[256]; BOOL x32[256]; BOOL x33[100]; BOOL x34[100]; unsigned int x35 : 1; unsigned int x36 : 1; }*)_statusBarData;
- (struct { bool x1[34]; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 1; unsigned int x6 : 2; unsigned int x7 : 1; unsigned int x8 : 1; unsigned int x9 : 1; unsigned int x10 : 1; unsigned int x11 : 1; unsigned int x12 : 1; unsigned int x13 : 1; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; struct { bool x_27_1_1[34]; BOOL x_27_1_2[64]; int x_27_1_3; int x_27_1_4; BOOL x_27_1_5[100]; BOOL x_27_1_6[100]; BOOL x_27_1_7[2][100]; BOOL x_27_1_8[1024]; unsigned int x_27_1_9; int x_27_1_10; int x_27_1_11; unsigned int x_27_1_12; int x_27_1_13; unsigned int x_27_1_14; BOOL x_27_1_15[150]; int x_27_1_16; int x_27_1_17; unsigned int x_27_1_18 : 1; unsigned int x_27_1_19 : 1; unsigned int x_27_1_20 : 1; BOOL x_27_1_21[256]; unsigned int x_27_1_22 : 1; unsigned int x_27_1_23 : 1; unsigned int x_27_1_24 : 1; unsigned int x_27_1_25 : 1; unsigned int x_27_1_26 : 1; unsigned int x_27_1_27; unsigned int x_27_1_28 : 1; unsigned int x_27_1_29 : 1; unsigned int x_27_1_30 : 1; BOOL x_27_1_31[256]; BOOL x_27_1_32[256]; BOOL x_27_1_33[100]; BOOL x_27_1_34[100]; unsigned int x_27_1_35 : 1; unsigned int x_27_1_36 : 1; } x27; }*)_statusBarOverrideData;
- (int)_styleOverrides;
- (void)main;

@end
