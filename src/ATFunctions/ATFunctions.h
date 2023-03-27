#include <Arduino.h>
#include <stdio.h>

/**
 * @brief Send AT command to the module and return the response
 * 
 * @return String - Response from the module
 */
String sendATCommand(String);

/**
 * @brief Read the serial port 2 and return the response
 * 
 */
String readSerial2();