#ifndef _USER_CONFIG_OVERRIDE_H_
#define _USER_CONFIG_OVERRIDE_H_

/*
 *  Minimal Tasmota32 for ESP32-U (farm use)
 *  - Remove: MQTT, BLE, Domoticz, KNX
 *  - Keep: Telnet, DS3231, NTP
 *  - Everything else as default for now
 */

// ---------- Disable unwanted features ----------

// Disable MQTT
#ifdef USE_MQTT
#undef USE_MQTT
#endif

// Disable Domoticz
#ifdef USE_DOMOTICZ
#undef USE_DOMOTICZ
#endif

// Disable KNX
#ifdef USE_KNX
#undef USE_KNX
#endif
#ifdef USE_KNX_WEB_MENU
#undef USE_KNX_WEB_MENU
#endif

// Disable BLE / Bluetooth (ESP32 internal)
#ifdef USE_BLE_ESP32
#undef USE_BLE_ESP32
#endif
#ifdef USE_IBEACON_ESP32
#undef USE_IBEACON_ESP32
#endif
#ifdef USE_MI_ESP32
#undef USE_MI_ESP32
#endif

// ---------- Keep / ensure needed features ----------

// Telnet server (usually enabled by default in ESP32 builds)
// If your base config has it disabled, uncomment the next line:
#define USE_TELNET

// DS3231 RTC support (I2C based)
// I2C is usually enabled by default in ESP32 builds
// If needed, you can enable explicitly:
#define USE_I2C
#define USE_DS3231

// NTP time support (usually enabled by default)
 #define USE_NTP

#ifndef USE_I2C
#define USE_I2C
#endif

#ifndef USE_RTC_CHIPS
#define USE_RTC_CHIPS
#endif

#ifndef USE_DS3231
#define USE_DS3231
#endif

// Optional
#define RTC_NTP_SERVER


/*
 *  Later, if you want to go even more minimal:
 *  - Disable web UI: #undef USE_WEBSERVER
 *  - Disable unused sensors/drivers
 */

#endif  // _USER_CONFIG_OVERRIDE_H_
