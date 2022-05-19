/**
 *  Useful stuff 
 *  Xavier Grosjean 2017
 *  Creative Commons Attribution-NonCommercial-ShareAlike 4.0 International Public License
 */
#pragma once
#include <Arduino.h>

class XUtils {
public: 
  static bool isElapsedDelay(unsigned long now, unsigned long* lastTime, unsigned long delay);
  static void safeStringCopy(char* to, const char* from, unsigned int length);
  static void stringToCharP(String in, char** out);
  static char* mallocAndCopy(const char* buf);
};

