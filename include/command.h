#ifndef COMMAND_H
#define COMMAND_H

enum Command{
    CMD_RESET = 0xF000,
    CMD_CONFIG = 0x1000,
    CMD_READ = 0x2000,
    CMD_WRITE = 0x3000
};

enum ConfigCommand{
    CONFIG_PIN = 0x0100,
    CONFIG_SSID = 0x0200,
    CONFIG_PWD = 0x0300,
    CONFIG_HOST = 0x0400,
    CONFIG_PROTOCOL = 0x0500
};

enum PinConfig{
    PIN_INPUT = 0x0010,
    PIN_OUTPUT= 0x0020
};

enum PinCommand{
    PIN_A0 = 0x000A,
    PIN_D1 = 0x0001,
    PIN_D2 = 0x0002,
    PIN_D3 = 0x0003,
    PIN_D4 = 0x0004,
    PIN_D5 = 0x0005,
    PIN_D6 = 0x0006,
    PIN_D7 = 0x0007
};

enum Protocol{
    PROTOCOL_HTTP = 0x00C1,
    PROTOCOL_TCP = 0x00C2,
    PROTOCOL_SERIAL = 0x00C3
};

#endif