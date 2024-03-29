#include "Timestamp.hpp"

String Timestamp::getLocalTimeStamp() {
  time_t now;
  struct tm timeInfo;
  char strftime_buf[64];

  time(&now);
  localtime_r(&now, &timeInfo);
    
  char timeString[30];
  snprintf(timeString, sizeof(timeString), "%04d-%02d-%02dT%02d:%02d:%02d%", 
    timeInfo.tm_year + 1900, timeInfo.tm_mon + 1, timeInfo.tm_mday,
    timeInfo.tm_hour, timeInfo.tm_min, timeInfo.tm_sec);
  
  return timeString;
}

String Timestamp::getDay() {
  return this -> getLocalTimeStamp().substring(8,10);
}

String Timestamp::getHours() {
  return this -> getLocalTimeStamp().substring(11,13);
}

String Timestamp::getMinutes() {
  return this -> getLocalTimeStamp().substring(14,16);
}

String Timestamp::getSeconds() {
  return this -> getLocalTimeStamp().substring(18,19);
}