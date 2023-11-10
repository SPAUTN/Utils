#include <Arduino.h>
#include "HexFunctions.hpp"

// ---------------- Macros for the AT commands ----------------
#define AT_RESET "ATZ"

// Baud rate configuration
#define AT_BAUD_38400_CONFIG_SET "AT+BAUD=38400"
#define AT_BAUD_115200_CONFIG_SET "AT+BAUD=115200"

// P2P commands
#define AT_P2P_CONFIG_SET "AT+P2P=915000000:7:0:0:10:14"
#define AT_P2P_CONFIG_GET "AT+P2P=?"
#define AT_P2P_CONFIG_TX_SET "AT+PRECV=0"
#define AT_P2P_PSEND_HEADER "AT+PSEND="
#define AT_CONTINUOUS_PRECV_CONFIG_SET "AT+PRECV=65534"     // 65534 for continuous receive
#define AT_SEMICONTINUOUS_PRECV_CONFIG_SET "AT+PRECV=65535" // 65535 for continuous receive until one reception.
#define AT_SET_P2P_MODE "AT+NWM=0"

// Instructions
#define POLL_COMMAND "POLL"
#define IRR_COMMAND "IRR"

#ifndef AT_FUNCTIONS_HPP
#define AT_FUNCTIONS_HPP

class ATFunctions {
    public:
        /**
         * @brief Read the serial port 2 and return the response
         * 
        * @param serialAT Stream with the serial port
        */
        String readSerial(Stream &serialAT);

        /**
         * @brief Send AT command to the module and return the response
         * 
         * @param serialAT Stream with the serial port
         * @param command String with the AT command
         * @return String 
         */
        String sendATCommand(Stream &serialAT, String command);

        /**
         * @brief Send P2P packet to the module and return the response
         * receive tha packet data in ascii format
         * 
         * @param serialAT Stream with the serial port
         * @param packet String with the packet data
         * @return String with the response from the module
         */
        String sendP2PPacket(Stream &serialAT, String packet);
    
    private:
        HexFunctions hexFunctions;
};
#endif