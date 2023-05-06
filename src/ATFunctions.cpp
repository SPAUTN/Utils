#include <Arduino.h>
#include <stdio.h>

#include "ATFunctions.h"
#include "HexFunctions.h"

String readSerial(Stream &serialAT) {
  String readed = "";
  while(serialAT.available()>0) {
    char c = serialAT.read();
    readed += c;
    delay(5);
  }
  return readed;
}
String sendATCommand(Stream &serialAT, String command) {
  String response = "";
  bool configCommand = command.indexOf('?') == -1;
  if(configCommand) {
    delay(1000);
  }
  serialAT.flush();
  serialAT.println();
  serialAT.println(command);
  delay(500);
  serialAT.flush();
  response = readSerial(serialAT);
  if( !configCommand ) {
    response = response.substring(0, response.indexOf('\r'));
  }
  response.trim();
  return response;
}

String sendP2PPacket(Stream &serialAT, String packet) {
  String response = sendATCommand(serialAT, AT_P2P_PSEND_HEADER + asciiToHex(packet));
  return response == "" ? "OK" : response;
}
