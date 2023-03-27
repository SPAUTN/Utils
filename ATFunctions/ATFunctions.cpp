#include <Arduino.h> 
String sendATCommand(String command) {
  String response = "";
  bool configCommand = command.indexOf('?') == -1;
  if(configCommand) {
    delay(1000);
  }
  Serial2.flush();
  Serial2.println();
  Serial2.println(command);
  delay(500);
  Serial2.flush();
  response = readSerial2();
  if( !configCommand ) {
    response = response.substring(0, response.indexOf('\r'));
  }
  response.trim();
  return response;
}

String readSerial2() {
  String readed = "";
  while(Serial2.available()>0) {
    char c = Serial2.read();
    Serial.print(c);
    readed += c;
  }
  return readed;
}
