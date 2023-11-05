#include "../include/HexFunctions.hpp"

String HexFunctions::hexToASCII(String hex) {
  String ascii = "";
  for(int i=0; i<hex.length(); i+=2) {
    String ch = hex.substring(i, i+2);
    char c = (char) (int)strtol(ch.c_str(), NULL, HEX);
    ascii += (char) c;
  }
  return ascii;
}

String HexFunctions::asciiToHex(String ascii) {
  String hex = "";
  for(int i=0; i<ascii.length(); i++) {
    char c = ascii.charAt(i);
    int code = c;
    String h = String(code, HEX);
    hex += h;
  }
  return hex;
}