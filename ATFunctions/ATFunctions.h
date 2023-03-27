#include <Arduino.h> 

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