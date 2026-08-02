#ifndef _USER_CONFIG_OVERRIDE_H_
#define _USER_CONFIG_OVERRIDE_H_

#warning **** user_config_override.h: Using Settings from This File ****

// -------- Disable unwanted features --------

#ifdef USE_MQTT
#undef USE_MQTT
#endif

#ifdef USE_DOMOTICZ
#undef USE_DOMOTICZ
#endif

#ifdef USE_KNX
#undef USE_KNX
#endif

#ifdef USE_KNX_WEB_MENU
#undef USE_KNX_WEB_MENU
#endif

#ifdef USE_BLE_ESP32
#undef USE_BLE_ESP32
#endif

#ifdef USE_IBEACON_ESP32
#undef USE_IBEACON_ESP32
#endif

#ifdef USE_MI_ESP32
#undef USE_MI_ESP32
#endif

// -------- Keep needed features --------

#define USE_TELNET
#ifndef USE_TCP_BRIDGE
#define USE_TCP_BRIDGE
#endif
#define USE_I2C
#define USE_RTC_CHIPS
#define USE_DS3231
#define RTC_NTP_SERVER

#endif
