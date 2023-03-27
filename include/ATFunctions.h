#include <Arduino.h> 

// ---------------- Macros for the AT commands ----------------
#define AT_RESET "ATZ"

// Baud rate configuration
#define AT_BAUD_38400_CONFIG_SET "AT+BAUD=38400"
#define AT_BAUD_115200_CONFIG_SET "AT+BAUD=115200"

// P2P configuration
#define AT_P2P_CONFIG_SET "AT+P2P=915000000:7:0:0:10:14"
#define AT_P2P_CONFIG_GET "AT+P2P=?"
#define AT_P2P_CONFIG_TX_SET "AT+PRECV=0" 

/**
 * @brief Read the serial port 2 and return the response
 * 
 */
String readSerial2();

/**
 * @brief Send AT command to the module and return the response
 * 
 * @return String - Response from the module
 */
String sendATCommand(String);