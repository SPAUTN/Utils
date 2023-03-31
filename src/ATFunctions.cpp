#include <Arduino.h>
#include <stdio.h>

#include "ATFunctions.h"
#include "HexFunctions.h"

ATFunctions::ATFunctions(Stream &serialAT) {
  this->serialAT = serialAT;
}

ATFunctions::readSerial() {
  String readed = "";
  while(this->serialAT.available()>0) {
    char c = this->serialAT.read();
    this->serialAT.print(c);
    readed += c;
  }
  return readed;
}
ATFunctions::sendATCommand(String command) {
  String response = "";
  bool configCommand = command.indexOf('?') == -1;
  if(configCommand) {
    delay(1000);
  }
  this->serialAT.flush();
  this->serialAT.println();
  this->serialAT.println(command);
  delay(500);
  this->serialAT.flush();
  response = readSerial(this->serialAT);
  if( !configCommand ) {
    response = response.substring(0, response.indexOf('\r'));
  }
  response.trim();
  return response;
}

ATFunctions::sendP2PPacket(String packet) {
  String response = sendATCommand(AT_P2P_PSEND_HEADER + asciiToHex(packet));
  return response == "" ? "OK" : response;
}
