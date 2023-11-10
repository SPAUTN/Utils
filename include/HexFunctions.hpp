#include <Arduino.h>

#ifndef HEX_FUNCTIONS_HPP
#define HEX_FUNCTIONS_HPP

class HexFunctions {
    public:
        /**
         * @brief Convert hex to ASCII
         * 
         * @param hex string with the hex value
         * @return String 
         */
        String hexToASCII(String hex);
        /**
         * @brief Convert ASCII to hex
         * 
         * @param ascii string with the ASCII value
         * @return String 
         */
        String asciiToHex(String ascii);
};

#endif