/*

Credentials file

*/

#pragma once

// Only one of these settings must be defined
#define USE_ABP
//#define USE_OTAA

#ifdef USE_ABP

    // LoRaWAN NwkSKey, network session key
    static const u1_t PROGMEM NWKSKEY[16] = { 0xdc, 0x3f, 0x3f, 0xd0, 0xea, 0xce, 0xd6, 0x98, 0x10, 0x39, 0x14, 0xd4, 0xac, 0xfb, 0x83, 0xe6 };
    // LoRaWAN AppSKey, application session key
    static const u1_t PROGMEM APPSKEY[16] = { 0x7a, 0x4b, 0xcd, 0xe5, 0x9f, 0x0e, 0xb3, 0x57, 0x7a, 0x61, 0x3a, 0x0b, 0x93, 0xbf, 0x19, 0x88 };

    // ferry tracker
    //static const u4_t DEVADDR = 0x03356dfa;

    // tracker 1
    static const u4_t DEVADDR = 0x0200c567;

#endif

#ifdef USE_OTAA

    // This EUI must be in little-endian format, so least-significant-byte (lsb)
    // first. When copying an EUI from ttnctl output, this means to reverse
    // the bytes. For TTN issued EUIs the last bytes should be 0x00, 0x00,
    // 0x00.
    static const u1_t PROGMEM APPEUI[8]  = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

    // This should also be in little endian format (lsb), see above.
    // Note: You do not need to set this field, if unset it will be generated automatically based on the device macaddr
    static u1_t DEVEUI[8]  = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

    // This key should be in big endian format (msb) (or, since it is not really a
    // number but a block of memory, endianness does not really apply). In
    // practice, a key taken from ttnctl can be copied as-is.
    // The key shown here is the semtech default key.
    static const u1_t PROGMEM APPKEY[16] = { 0xc7, 0x3c, 0x5d, 0x2e, 0x48, 0x63, 0xb2, 0x50, 0x46, 0xae, 0xd5, 0xfd, 0x78, 0xce, 0x4e, 0xf3 };

#endif
